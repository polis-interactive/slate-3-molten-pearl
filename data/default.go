package data

import "github.com/polis-interactive/slate-meltdown-3/internal/types"

var TerminalBoardConfiguration = []types.BoardConfiguration{
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.CreatePoint(0, 0)),
}

var TerminalDisallowedPositions = []types.Point{
	types.CreatePoint(2, 0),
	types.CreatePoint(3, 0),
}

var PiBoardConfiguration = []types.BoardConfiguration{
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.CreatePoint(0, 0)),
	types.NewBoardConfiguration(types.Board1x7, types.Orient270, types.CreatePoint(0, 1)),
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.CreatePoint(0, 2)),
}

var PiDisallowedPositions = []types.Point{
	types.CreatePoint(2, 0),
	types.CreatePoint(3, 0),
	types.CreatePoint(2, 1),
	types.CreatePoint(3, 1),
	types.CreatePoint(2, 2),
	types.CreatePoint(3, 2),
	types.CreatePoint(6, 2),
}

var DefaultBoardConfiguration = []types.BoardConfiguration{
	// thickens
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 16, Y: 2}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 9, Y: 2}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 2, Y: 2}),

	types.NewBoardConfiguration(types.Board7x7, types.Orient180, types.Point{X: 2, Y: 9}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 9, Y: 9}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 16, Y: 9}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 23, Y: 9}),

	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 23, Y: 16}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 16, Y: 16}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 9, Y: 16}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient180, types.Point{X: 2, Y: 16}),

	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 2, Y: 23}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 9, Y: 23}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 16, Y: 23}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient270, types.Point{X: 23, Y: 23}),

	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 23, Y: 30}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 16, Y: 30}),
	types.NewBoardConfiguration(types.Board7x7, types.Orient90, types.Point{X: 9, Y: 30}),

	/* silver singles */
	/* top face */
	types.NewBoardConfiguration(types.Board1x7, types.Orient270, types.Point{X: 11, Y: 38}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.Point{X: 11, Y: 37}),

	types.NewBoardConfiguration(types.Board1x7, types.Orient270, types.Point{X: 23, Y: 38}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.Point{X: 23, Y: 37}),

	/* right face */
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 30, Y: 30}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 31, Y: 30}),

	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 31, Y: 13}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 31, Y: 20}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 30, Y: 19}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 30, Y: 12}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 30, Y: 5}),

	/* bottom face */
	types.NewBoardConfiguration(types.Board1x7, types.Orient270, types.Point{X: 11, Y: 1}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient270, types.Point{X: 4, Y: 1}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.Point{X: 4, Y: 0}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient90, types.Point{X: 11, Y: 0}),

	/* left face */
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 0, Y: 12}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient0, types.Point{X: 0, Y: 5}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 1, Y: 5}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 1, Y: 12}),
	types.NewBoardConfiguration(types.Board1x7, types.Orient180, types.Point{X: 1, Y: 19}),

}

var DefaultDisallowedPositions = []types.Point{
	types.CreatePoint(2, 2), types.CreatePoint(3, 2), types.CreatePoint(4, 2),
	types.CreatePoint(9, 2), types.CreatePoint(10, 2), types.CreatePoint(11, 2),
	types.CreatePoint(19, 2), types.CreatePoint(20, 2), types.CreatePoint(21, 2), types.CreatePoint(22, 2),
	types.CreatePoint(2, 3), types.CreatePoint(3, 3), types.CreatePoint(4, 3), types.CreatePoint(5, 3),
	types.CreatePoint(9, 3), types.CreatePoint(10, 3), types.CreatePoint(11, 3), types.CreatePoint(12, 3),
	types.CreatePoint(20, 3), types.CreatePoint(21, 3), types.CreatePoint(22, 3),
	types.CreatePoint(2, 4), types.CreatePoint(3, 4), types.CreatePoint(4, 4),
		types.CreatePoint(5, 4), types.CreatePoint(6, 4),
	types.CreatePoint(10, 4), types.CreatePoint(11, 4), types.CreatePoint(12, 4),
	types.CreatePoint(20, 4), types.CreatePoint(21, 4), types.CreatePoint(22, 4),
}
