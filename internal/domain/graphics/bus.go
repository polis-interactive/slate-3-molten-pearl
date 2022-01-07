package graphics

import "github.com/polis-interactive/slate-meltdown-3/internal/types"

type Bus interface {
	GetLightGrid() types.Grid
}