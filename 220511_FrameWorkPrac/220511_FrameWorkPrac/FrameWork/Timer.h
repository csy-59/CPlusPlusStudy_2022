#pragma once

#include "../Type.h"

//타이머 초기화
bool Timer_Init(void);

//타이머 업데이트
bool Timer_Update(void);

//델타타임 구하기
float Time_DeltaTime(void);

#define DELTA_TIME Time_DeltaTime()