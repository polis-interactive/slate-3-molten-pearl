#include "globals.h"


namespace globals {

	/* prog config */

	const int output_width = 1200;
	const int output_height = 1500;
	const int frame_rate = 20;


	
	/* strip config */

	const float gamma = 1.2;
	const uint8_t brightness = 255;



	/* board config */
	// left is with respect to the tiles looking at them from the front

	std::vector<BoardConfiguration> board_configs = {
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(16, 2)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(9, 2)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(2, 2)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(2, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(9, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(16, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(23, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(23, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(16, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(9, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(2, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(2, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(9, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(16, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(23, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(23, 30)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(16, 30)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(9, 30)),
	};

	std::vector<ofPoint> disallowed_positions = {

	};

	std::vector<ofPoint> permaoff_positions = {

	};

	/* input config */
#ifndef __arm__
	const int segment_size = 30;
#else
	const int segment_size = 1;
#endif
	const LedInputType input_type = LedInputType::SEQUENCED;

	/* shader config */

	const float shader_gamma = 3.75;
	const float shader_speed = 0.2;

	const float shader_scale = 1.5;
	const float shader_brightness = 0.6;
	const float shader_contrast = 0.4;

}