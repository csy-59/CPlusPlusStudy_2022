#include "../Common.h"
#include "Timer.h"

clock_t s_preTick;
float s_deltaTime;

//Ÿ�̸� �ʱ�ȭ
bool Timer_Init(void) {
	s_preTick = clock();

	return true;
}

//Ÿ�̸� ������Ʈ
bool Timer_Update(void) {
	clock_t currentTime = clock();

	s_deltaTime = (float)(currentTime - s_preTick) / CLOCKS_PER_SEC;

	s_preTick = currentTime;
}

//��ŸŸ�� ���ϱ�
float Time_DeltaTime(void) {

}

#define DELTA_TIME Time_DeltaTime()