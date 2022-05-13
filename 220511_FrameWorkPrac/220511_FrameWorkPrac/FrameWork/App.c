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
	sprintf_s(str, sizeof(str), "�ȳ�");
}

void renderer() {
	Renderer_DrawText(str, strlen(str));
	Renderer_Flip();
}

int32 App_Start() {
	//���� ������ Renderer �ݱ�
	atexit(Renderer_CleanUp);

	while (1) {
		processInput();
		update();
		renderer();
	}
}