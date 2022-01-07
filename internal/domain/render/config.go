package render

import (
	"github.com/polis-interactive/slate-meltdown-3/internal/domain"
	"github.com/polis-interactive/slate-meltdown-3/internal/types"
	"time"
)

type ws2812RenderConfig interface {
	GetGpioPin() types.GpioPinType
	GetStripType() types.StripType
	GetGamma() float32
}

type renderConfig interface {
	GetRenderType() domain.RenderType
	GetRenderFrequency() time.Duration
	ws2812RenderConfig
}

type Config interface {
	renderConfig
}
