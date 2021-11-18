
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

float rnd(int i, int j)
{
  return noisev(vec2(i, j));
}

float drawLine(vec2 uv, vec2 p1, vec2 p2, float thickness) {

  float a = abs(distance(p1, uv));
  float b = abs(distance(p2, uv));
  float c = abs(distance(p1, p2));

  if ( a >= c || b >=  c ) return 0.0;

  float p = (a + b + c) * 0.5;

  // median to (p1, p2) vector
  float h = 2.0 / c * sqrt( p * ( p - a) * ( p - b) * ( p - c));

  return mix(1.0, 0.0, smoothstep(0.5 * thickness, 1.5 * thickness, h));
}


vec2 rot(vec2 uv, float a) {
    float s = sin(a), c = cos(a);
    return vec2(c*uv.x-s*uv.y, s*uv.x + c * uv.y);
}

vec2 translate(vec2 uv, vec2 t) {
    return uv - t;
}

float snow(vec2 uv) {
    float d = length(uv);
    float m = 0.05 / d;
    
    m *= smoothstep(0.1, .0, d);
    return m;
}

float plot(vec2 st, float pct, float thickness){
  return  smoothstep( pct-thickness,  pct, st.y) -

          smoothstep( pct, pct+thickness, st.y);
}

void main(){

    vec2 uv = gl_FragCoord.xy / resolution.xy;
    vec2 uv_grid = floor(vec2(uv.x * 28.0, uv.y * 35.0)) / vec2(28.0, 35.0);

    vec3 color = vec3(0.0);

    vec2 unitDir = dir / dot(dir, dir);

    float p = dot(uv, unitDir);

    float band = floor(uv.y * 6.0);
    float backgroundPos;
    if(band == 0.0) {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.3;
    } else if (band == 1.0) {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.4;
    } else if (band == 2.0) {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.5;
    } else if (band == 3.0) {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.6;
    } else if (band == 4.0) {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.7;
    } else {
     backgroundPos = pow(sin(time / 2.0 + uv.x), 2.0) * 0.4 + 0.8;
    
    }
    vec3 background = hsb2rgb(vec3(backgroundPos,1.0,0.6));

    float twinkle = randomv(uv_grid);
    twinkle = noise(twinkle * 5.0 + time / 2.0);
    float pct = sin(twinkle * 2.0 * PI) * 0.8 + 1.0 + 0.2 * noise(time / 2.0);

    vec3 c;
    if (pct > 1.0) {
        c = background;
    } else if (pct > 0.0) {
        c = mix(vec3(0.0, 0.0, 0.0), background, pct);
    } else {
        c = vec3(0, 0, 0);
    }

    color = c;


    gl_FragColor = vec4(color, 1.0);

}
