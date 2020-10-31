#include "MotorDriver.h"
#include "main.h"



/* void motorSet(uint32_t speed,uint8_t direction, uint8_t enable){

    HAL_GPIO_WritePin(EN_M1_GPIO_Port,EN_M1_Pin,GPIO_PIN_SET);

    if (speed == 0 || direction == 0 & enable == 1 ) // Ist es 0 und Enable
    {
        HAL_GPIO_WritePin(EN_M1_GPIO_Port,EN_M1_Pin,GPIO_PIN_SET);
        HAL_GPIO_WritePin(INA_M1_GPIO_Port,INA_M1_Pin,GPIO_PIN_SET);
        HAL_GPIO_WritePin(INB_M1_GPIO_Port,INB_M1_Pin,GPIO_PIN_SET);
        __HAL_TIM_SET_COMPARE(htim3,TIM_CHANNEL_1,0);
        
    } else if (speed > 0 & direction == 1 & enable == 1) // Vorwärts und EN
    {
        HAL_GPIO_WritePin(EN_M1_GPIO_Port,EN_M1_Pin,GPIO_PIN_SET);
        HAL_GPIO_WritePin(INA_M1_GPIO_Port,INA_M1_Pin,GPIO_PIN_SET);
        HAL_GPIO_WritePin(INB_M1_GPIO_Port,INB_M1_Pin,GPIO_PIN_RESET);
        __HAL_TIM_SET_COMPARE(htim3,TIM_CHANNEL_1,speed);
    }
    else if (speed > 0 & direction == 2 & enable == 1) // Rückwerts und ENable
    {
        HAL_GPIO_WritePin(EN_M1_GPIO_Port,EN_M1_Pin,GPIO_PIN_SET);
        HAL_GPIO_WritePin(INA_M1_GPIO_Port,INA_M1_Pin,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(INB_M1_GPIO_Port,INB_M1_Pin,GPIO_PIN_SET);
        __HAL_TIM_SET_COMPARE(htim3,TIM_CHANNEL_1,speed);
    }
    else
    {
        HAL_GPIO_WritePin(EN_M1_GPIO_Port,EN_M1_Pin,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(INA_M1_GPIO_Port,INA_M1_Pin,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(INB_M1_GPIO_Port,INB_M1_Pin,GPIO_PIN_RESET);
        __HAL_TIM_SET_COMPARE(htim3,TIM_CHANNEL_1,0);
    } */
    
    



