#include "../constants.h"
int draw_comma() {
	pen_up();
	move_to_relative(114, 112);
	pen_down();
	move_to_relative(114, 0);
	move_to_relative(85, -116);
	move_to_relative(0, -159);
	return 114;
}