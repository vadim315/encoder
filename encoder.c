//
// Created by Vadim on 19.06.2024.
//

#include "encoder.h"

void encoder_init(void){
    HAL_TIM_Encoder_Start(&ENCODER_TIMER, TIM_CHANNEL_ALL);
    ENCODER_TIMER.Instance->CNT = ENCODER_START_POS;
}

uint8_t encoder_read(void){
    if(ENCODER_TIMER.Instance->CNT < ENCODER_START_POS) {
        ENCODER_TIMER.Instance->CNT = ENCODER_START_POS;
        return Right;
    }
    if(ENCODER_TIMER.Instance->CNT > ENCODER_START_POS) {
        ENCODER_TIMER.Instance->CNT = ENCODER_START_POS;
        return Left;
    }
    return Null;
}