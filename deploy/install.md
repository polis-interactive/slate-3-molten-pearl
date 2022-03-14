
## Pi Install

- install git
    - remember to bring over the dummy pi key to get pull with
- Install libraries
  - libx11-dev xvfb libgl1-mesa-dev cmake xorg-dev
- Install Go
    - https://www.jeremymorgan.com/tutorials/raspberry-pi/install-go-raspberry-pi/
    - Install armv6l
- Add go path to sudo
  - visudo, add secure_path="...:/usr/local/go/bin"
- Install github.com/jgarff/rpi_ws281x
- Install github.com/go-gl/gl
    - sudo go get -u github.com/go-gl/gl/v3.1/gles2
- Install github.com/go-gl/glfw
    - sudo go get -u -tags=gles2 github.com/go-gl/glfw/v3.3/glfw
- Build
    - sudo go build ./cmd/runApplication/main.go
- Make Service
  - https://superuser.com/questions/544399/how-do-you-make-a-systemd-service-as-the-last-service-on-boot
  - Remove nymea from target graphical to target slate, resymlink