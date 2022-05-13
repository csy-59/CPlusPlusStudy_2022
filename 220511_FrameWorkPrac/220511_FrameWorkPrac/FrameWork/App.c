#include "../Common.h"
#include "App.h"
#include "Renderer.h"

bool App_Init() {

	if (!Renderer_Init()) {
		return false;
	}

	return true;
}

void processInput() {

}

char str[128];
void update() {
	sprintf_s(str, sizeof(str), "æ»≥Á");
}

void renderer() {
	Renderer_DrawText(str, strlen(str));
	Renderer_Flip();
}

int32 App_Start() {
	//æ€¿Ã ≥°≥Ø∂ß Renderer ¥›±‚
	atexit(Renderer_CleanUp);

	while (1) {
		processInput();
		update();
		renderer();
	}
}