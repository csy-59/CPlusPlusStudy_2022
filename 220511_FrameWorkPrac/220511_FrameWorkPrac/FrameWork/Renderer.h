#pragma once

#include "../Type.h"

// ������ �ʱ�ȭ
bool Renderer_Init();

// ������ ���� �ʱ�ȭ(�ڵ鷯 ��ȯ)
void Renderer_CleanUp();

// ������ ���� ��ȯ
void Renderer_Flip();

// �������� ���� �Է�
void Renderer_DrawText(char* text, int32 textLength);