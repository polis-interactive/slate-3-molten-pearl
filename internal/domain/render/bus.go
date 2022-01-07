package render

import "github.com/polis-interactive/slate-meltdown-3/internal/types"

type Bus interface {
	GetLightCount() int
	CopyLightsToColorBuffer(buff []types.Color) error
	CopyLightsToUint32Buffer(buff []uint32) error
}