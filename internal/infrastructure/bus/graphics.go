package bus

import "github.com/polis-interactive/slate-meltdown-3/internal/types"

func (b *bus) GetLightGrid() types.Grid {
	return b.lightingService.GetGrid()
}


