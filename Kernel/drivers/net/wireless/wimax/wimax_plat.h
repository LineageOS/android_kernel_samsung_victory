#ifndef __WIMAX_PLAT_H__
#define __WIMAX_PLAT_H__

#if defined (CONFIG_MACH_S5PC110_ARIES)
#define CONFIG_MACH_ARIES
#endif
/* tsh.park 20100916
#if defined (CONFIG_MACH_QUATTRO)	//cky 20100224

#define WIMAX_EN	GPIO_WIMAX_PWREN
#define WIMAX_RESET	GPIO_WIMAX_RESET_N
#define WIMAX_USB_EN	GPIO_WIMAX_USBEN

#define DEVICE_HSMMC	s3c_device_hsmmc2

#define WIMAX_WAKEUP	GPIO_WIMAX_WAKEUP
#define WIMAX_IF_MODE0	GPIO_WIMAX_IF_MODE0
#define WIMAX_IF_MODE1	GPIO_WIMAX_IF_MODE0
#define WIMAX_CON0		GPIO_WIMAX_CON0
#define WIMAX_CON1		GPIO_WIMAX_CON1
#define WIMAX_CON2		GPIO_WIMAX_CON2
#define WIMAX_INT		GPIO_WIMAX_INT

#define I2C_SEL			GPIO_WIMAX_I2C_CON
//#define EEPROM_SCL		0
//#define EEPROM_SDA		0

#elif defined (CONFIG_MACH_ARIES)
*/
#define WIMAX_EN		GPIO_WIMAX_EN
#define WIMAX_RESET		GPIO_WIMAX_RESET_N
#define WIMAX_USB_EN	GPIO_WIMAX_USB_EN

#define DEVICE_HSMMC	s3c_device_hsmmc0

#define WIMAX_WAKEUP	GPIO_WIMAX_WAKEUP
#define WIMAX_IF_MODE0	GPIO_WIMAX_IF_MODE0
#define WIMAX_IF_MODE1	GPIO_WIMAX_IF_MODE1
#define WIMAX_CON0		GPIO_WIMAX_CON0
#define WIMAX_CON1		GPIO_WIMAX_CON1
#define WIMAX_CON2		GPIO_WIMAX_CON2
#define WIMAX_INT		GPIO_WIMAX_INT

#define I2C_SEL			GPIO_WIMAX_I2C_CON
//#define EEPROM_SCL		GPIO_AP_SCL_18V
//#define EEPROM_SDA		GPIO_AP_SDA_18V

//#endif




#endif // __WIMAX_PLAT_H__
