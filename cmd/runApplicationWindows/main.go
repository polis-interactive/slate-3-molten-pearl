package main

import (
	"github.com/polis-interactive/slate-meltdown-3/data"
	"github.com/polis-interactive/slate-meltdown-3/internal/application"
	"github.com/polis-interactive/slate-meltdown-3/internal/domain"
	"log"
	"os"
	"os/signal"
	"syscall"
	"time"
)



func main() {
	conf := &application.Config{
		LightingConfig: &application.LightingConfig{
			BoardConfiguration:  data.DefaultBoardConfiguration,
			DisallowedPositions: data.DefaultDisallowedPositions,
		},
		RenderConfig: &application.RenderConfig{
			RenderType:      domain.RenderTypes.TERMINAL,
			RenderFrequency: 1 * time.Hour,
		},
		GraphicsConfig: &application.GraphicsConfig{
			ShaderName: "slate-3",
			ReloadOnUpdate: false,
			DisplayOutput: false,
			PixelSize: 33,
			Frequency: 33 * time.Millisecond,
		},
	}

	app, err := application.NewApplication(conf)
	if err != nil {
		panic(err)
	}

	err = app.Startup()
	if err != nil {
		log.Println("Main: failed to startup, shutting down")
		err2 := app.Shutdown()
		if err2 != nil {
			log.Println("Main: issue shutting down; ", err2)
		}
		panic(err)
	}

	c := make(chan os.Signal)
	signal.Notify(c, os.Interrupt, syscall.SIGTERM)
	<-c

	err = app.Shutdown()
	if err != nil {
		log.Println("Main: issue shutting down; ", err)
	}
}

