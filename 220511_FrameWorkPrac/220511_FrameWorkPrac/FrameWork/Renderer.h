#pragma once

#include "../Type.h"

// 렌더러 초기화
bool Renderer_Init();

// 렌더러 버퍼 초기화(핸들러 반환)
void Renderer_CleanUp();

// 렌더러 버퍼 교환
void Renderer_Flip();

// 렌더러에 맞춘 입력
void Renderer_DrawText(char* text, int32 textLength);