#include "PWM.h"

uint8_t direction = 0;											//���״̬��־λ   1 ��ת    0 ��ת
uint8_t STAO = 0;   											//��ͣ��־λ      1 ����    0 ֹͣ
uint16_t velocity = 299;										//�ٶȱ���

void Pwm_Duty_Set(float Duty,uint8_t channel)		
//timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
{
	uint32_t CompareValue = 4000 - Duty * 4000;
	switch(channel){
		case 0:
			DL_TimerG_setCaptureCompareValue(PWM_MotorA_INST,CompareValue,GPIO_PWM_MotorA_C0_IDX);			
			break;
		case 1:
			DL_TimerG_setCaptureCompareValue(PWM_MotorB_INST,CompareValue,GPIO_PWM_MotorB_C0_IDX);
			break;
	}
}


//gukuktukt

// jhfh