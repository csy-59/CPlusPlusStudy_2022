#pragma once

#include "../Type.h"

//Ÿ�̸� �ʱ�ȭ
bool Timer_Init(void);

//Ÿ�̸� ������Ʈ
bool Timer_Update(void);

//��ŸŸ�� ���ϱ�
float Time_DeltaTime(void);

#define DELTA_TIME Time_DeltaTime()