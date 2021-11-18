
#ifdef GL_ES

precision highp float;
#define IN varying
#define OUT out
#define TEXTURE texture2D

#else

#define IN in
#define OUT out
#define TEXTURE texture

#endif

#define PI 3.1415926538

#define StepSize .5
#define LineCount 30

uniform float time;
uniform vec2 resolution;

float rand(float n){return fract(sin(n) * 43758.5453123);}

float noise(float p){
    float fl = floor(p);
  float fc = fract(p);
    return mix(rand(fl), rand(fl + 1.0), fc);
}

vec3 rgb2hsb( in vec3 c ){
    vec4 K = vec4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
    vec4 p = mix(vec4(c.bg, K.wz),
                 vec4(c.gb, K.xy),
                 step(c.b, c.g));
    vec4 q = mix(vec4(p.xyw, c.r),
                 vec4(c.r, p.yzx),
                 step(p.x, c.r));
    float d = q.x - min(q.w, q.y);
    float e = 1.0e-10;
    return vec3(abs(q.z + (q.w - q.y) / (6.0 * d + e)),
                d / (q.x + e),
                q.x);
}


vec3 hsb2rgb( in vec3 c ){
    vec3 rgb = clamp(abs(mod(c.x*6.0+vec3(0.0,4.0,2.0),
                             6.0)-3.0)-1.0,
                     0.0,
                     1.0 );
    rgb = rgb*rgb*(3.0-2.0*rgb);
    return c.z * mix(vec3(1.0), rgb, c.y);
}

vec2 dir = vec2(4, 5);



float randomv (vec2 st) {
    return fract(sin(dot(st.xy,
                         vec2(12.9898,78.233)))*
        43758.5453123);
}

float noisev(vec2 n) {
  const vec2 d = vec2(0.0, 1.0);
  vec2 b = floor(n), f = smoothstep(vec2(0.0), vec2(1.0), fract(n));
  return mix(mix(randomv(b), randomv(b + d.yx), f.x), mix(randomv(b + d.xy), randomv(b + d.yy), f.x), f.y);
}

#define GABOR_BLOBS_NB 10       // number or gabor blobs
#define GABOR_BLOBS_SIZE 0.25 

float rnd(int i, int j)
{
  return noisev(vec2(i, j));
}


float DuneStripes (vec2 uv, float d, float freq, float time)
{
  float hv = 0.;
  for (int i=0; i<GABOR_BLOBS_NB; i++) 
  {
    vec2 pos = vec2(rnd(i,0), rnd(i,1));
    vec2 dir = (.15+d)*vec2(rnd(i,2),rnd(i,3)) - d;
    hv += GABOR_BLOBS_SIZE * sin(dot(uv-pos, freq*dir) * 6. + time);
  }
  return hv;
}




void main(){

    vec2 uv = gl_FragCoord.xy / resolution.xy;

    vec3 color = vec3(0.0);

    vec2 unitDir = dir / dot(dir, dir);

    float backgroundPos = dot(uv, unitDir);
    backgroundPos = 0.1 + backgroundPos * 4.0 + noise(time)*0.3;
    vec3 background = hsb2rgb(vec3(backgroundPos * 1.0,1.0,0.6));

    color = background;

    gl_FragColor = vec4(color, 1.0);

}
