package bus

import (
	"github.com/polis-interactive/slate-meltdown-3/internal/domain"
)

type bus struct {
	lightingService domain.LightingService
	renderService domain.RenderService
	graphicsService domain.GraphicsService
}

func NewBus() *bus {
	return &bus{}
}

func (b *bus) BindRenderService(r domain.RenderService) {
	b.renderService = r
}

func (b *bus) BindGraphicsService(g domain.GraphicsService) {
	b.graphicsService = g
}

func (b *bus) BindLightingService(l domain.LightingService) {
	b.lightingService = l
}

func (b *bus) Startup() {
	// maybe signal we are starting up
	b.graphicsService.Startup()
	b.renderService.Startup()
}

func (b *bus) Shutdown() {
	// maybe signal we are shutting down
	b.graphicsService.Shutdown()
	b.renderService.Shutdown()
}

