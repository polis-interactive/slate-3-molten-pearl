package lighting

import "github.com/polis-interactive/slate-meltdown-3/internal/types"

type Config interface {
	GetBoardConfiguration() []types.BoardConfiguration
	GetDisallowedPositions() []types.Point
}
