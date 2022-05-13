#include "FrameWork/App.h"

int32 main(void) {
	if (App_Init() == false) {
		return -1;
	}

	return App_Start();
}