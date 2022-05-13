#include "../Common.h"
#include "Timer.h"

clock_t s_preTick;
float s_deltaTime;

//타이머 초기화
bool Timer_Init(void) {
	s_preTick = clock();

	return true;
}

//타이머 업데이트
bool Timer_Update(void) {
	clock_t currentTime = clock();

	s_deltaTime = (float)(currentTime - s_preTick) / CLOCKS_PER_SEC;

	s_preTick = currentTime;
}

//델타타임 구하기
float Time_DeltaTime(void) {

}

#define DELTA_TIME Time_DeltaTime()