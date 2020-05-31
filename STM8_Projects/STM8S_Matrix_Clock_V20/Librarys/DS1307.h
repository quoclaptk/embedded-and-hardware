/*******************************************************************************
                             Revision History
********************************************************************************
15.0: Initial version 
*******************************************************************************/
#ifndef _DS1307_H_
#define _DS1307_H_
/******************************************************************************/
#include "stm8s.h"
/******************************************************************************/
/*******************************************************************************
                                 Struct/Enums used
*******************************************************************************/
typedef struct
{
    uint8_t sec;
    uint8_t min;
    uint8_t hour;
    uint8_t weekDay;
    uint8_t date;
    uint8_t month;
    uint8_t year;  
}rtc_t;
/*******************************************************************************
                      Commonly used Ds1307 macros/Constants
*******************************************************************************/
#define DS1307_READ_MODE        0xD1
#define DS1307_WRITE_MODE       0xD0

#define DS1307_SECOND_REG       0x00
#define DS1307_DATE_REG         0x04
#define DS1307_CONTROL_REG      0x07

#define DS1307_SEC_REG          0x00
#define DS1307_MIN_REG          0x01
#define DS1307_HOUR_REG         0x02
#define DS1307_WEEKDAY_REG      0x03
#define DS1307_DATE_REG         0x04
#define DS1307_MONTH_REG        0x05
#define DS1307_YEAR_REG         0x06
/*******************************************************************************
                          Function Prototypes
*******************************************************************************/
void RTC_Init(void);
void RTC_SetDateTime(rtc_t *rtc);
void RTC_GetDateTime(rtc_t *rtc);
uint32_t RTC_Lunar_Calculate(rtc_t *rtc);
/******************************************************************************/
#endif
/******************************************************************************/