//
// Created by Vadim on 19.06.2024.
//

#ifndef DFP_ENCODER_H
#define DFP_ENCODER_H

#include "main.h"
#include "tim.h"

#define ENCODER_TIMER           htim1
#define ENCODER_START_POS       1000
enum{
    Left,
    Right,
    Null
};
void encoder_init(void);
uint8_t encoder_read(void);

#endif //DFP_ENCODER_H
/*            пример использования
 *
 *
 *      encoder_init();
 *
 *      while(1){
 *
 *       switch (encoder_read()) {
          case Right:
              print_UART("\n      RIGHT");
              break;
          case Left:
              print_UART("\nLEFT");
              break;
      }
      HAL_Delay(10);
      }
 */