#ifndef __MAIN_H
#define __MAIN_H

#include "stdint.h"


typedef enum {
    Led2    =0,
    Led3    =1,
    Led4    =2,
    Led5    =3,
    AllLeds =4
}led_type;


typedef enum            //MM Redefining enum to skip evaluation board dependency(Names have been changed)
{
    WAKEUP = 0,
    TAMPER = 1,
    USER   = 2,
    AllBut = 3          
} key_type;

typedef enum            //MM Redefining enum to skip evaluation board dependency (Names have been changed)
{
    MODE_GPIO = 0,
    MODE_EXTI = 1
} key_mode;





/*FUNCTION PROTOTYPES*/


void led_init(void);
void LED_ON(led_type led);
void LED_OFF(led_type led);
void com_port_init(uint32_t com);
void button_init(key_type keynum, key_mode keymode);
uint8_t button_state_get(key_type key);
void led_toggle(led_type led);
static void toggle_leds(void);




#endif  /* __MAIN_H*/

