#include "Renderer.h"
#include <Windows.h>

HANDLE s_consoleHandle;
HANDLE s_screens[2];
int32 s_backBuffer; //����� ����Ŵ

// ������ �ʱ�ȭ
bool Renderer_Init() {
	s_consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (s_consoleHandle == INVALID_HANDLE_VALUE) {
		return false;
	}

	s_screens[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	if (s_screens[0] == INVALID_HANDLE_VALUE) {
		return false;
	}

	s_screens[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	if (s_screens[1] == INVALID_HANDLE_VALUE) {

		CloseHandle(s_screens[0]);
		return false;
	}
}

// ������ ���� �ʱ�ȭ
void Renderer_CleanUp() {
	CloseHandle(s_consoleHandle);
	CloseHandle(s_screens[0]);
	CloseHandle(s_screens[1]);
}

// ���� ȭ�� Ŭ����
void clear(HANDLE consoleHandle) {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(consoleHandle, &csbi);

	SMALL_RECT scrollRect;
	scrollRect.Left = 0;
	scrollRect.Top = 0;
	scrollRect.Right = csbi.dwSize.X;
	scrollRect.Bottom = csbi.dwSize.Y;

	COORD scrollTarget;
	scrollTarget.X = 0;
	scrollTarget.Y = (SHORT)(0 - csbi.dwSize.Y);

	CHAR_INFO fill;
	fill.Char.UnicodeChar = TEXT(' ');
	fill.Attributes = csbi.wAttributes;

	ScrollConsoleScreenBuffer(consoleHandle, &scrollRect, NULL, scrollTarget, &fill);

	csbi.dwCursorPosition.X = 0;
	csbi.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(consoleHandle, csbi.dwCursorPosition);
}

// ������ ���� ��ȯ
void Renderer_Flip() {
	SetConsoleActiveScreenBuffer(s_screens[s_backBuffer]);
	s_backBuffer = !s_backBuffer;

	clear(s_screens[s_backBuffer]);

}

// �������� ���� �Է�(����ۿ�)
void Renderer_DrawText(char* text, int32 textLength) {

	HANDLE backBuffer = s_screens[s_backBuffer];
	WriteConsoleA(backBuffer, text, textLength, NULL, NULL);
}