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
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_180, ofPoint(2, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(9, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(16, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(23, 9)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(23, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(16, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(9, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_180, ofPoint(2, 16)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(2, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(9, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(16, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_270, ofPoint(23, 23)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(23, 30)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(16, 30)),
		BoardConfiguration(BoardType::BOARD_7X7, BoardOrientation::ORIENT_90, ofPoint(9, 30)),
		/* silver singles */
		/* top face */
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_270, ofPoint(11, 38)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_90, ofPoint(11, 37)),

		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_270, ofPoint(23, 38)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_90, ofPoint(23, 37)),
		
		/* right face */
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(30, 30)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(31, 30)),

		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(31, 13)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(31, 20)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(30, 19)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(30, 12)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(30, 5)),

		/* bottom face */
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_270, ofPoint(11, 1)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_270, ofPoint(4, 1)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_90, ofPoint(4, 0)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_90, ofPoint(11, 0)),

		/* left face */
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(0, 12)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_0, ofPoint(0, 5)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(1, 5)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(1, 12)),
		BoardConfiguration(BoardType::BOARD_1X7, BoardOrientation::ORIENT_180, ofPoint(1, 19)),

	};

	std::vector<ofPoint> disallowed_positions = {
		/* middle, by y*/
		ofPoint(2, 2), ofPoint(3, 2), ofPoint(4, 2), 
			ofPoint(9, 2), ofPoint(10, 2), ofPoint(11, 2),
			ofPoint(19, 2), ofPoint(20, 2), ofPoint(21, 2), ofPoint(22, 2),
		ofPoint(2, 3), ofPoint(3, 3), ofPoint(4, 3), ofPoint(5, 3),
			ofPoint(9, 3), ofPoint(10, 3), ofPoint(11, 3), ofPoint(12, 3),
			ofPoint(20, 3), ofPoint(21, 3), ofPoint(22, 3),
		ofPoint(2, 4), ofPoint(3, 4), ofPoint(4, 4), ofPoint(5, 4), ofPoint(6, 4),
			ofPoint(10, 4), ofPoint(11, 4), ofPoint(12, 4),
			ofPoint(20, 4), ofPoint(21, 4), ofPoint(22, 4),
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