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
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(7, 28)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(14, 28)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(21, 28)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(21, 21)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(14, 21)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(7, 21)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(0, 21)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(0, 14)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(7, 14)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(14, 14)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(21, 14)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(21, 7)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(14, 7)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(7, 7)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(0, 7)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(0, 0)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(7, 0)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(14, 0)),
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