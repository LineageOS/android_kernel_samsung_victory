/*
 * arch/arm/mach-s5pv210/herring.h
 */

#ifndef __HERRING_H__
#define __HERRING_H__

struct uart_port;

void herring_bt_uart_wake_peer(struct uart_port *port);
extern void s3c_setup_uart_cfg_gpio(unsigned char port);

#define is_cdma_wimax_dev() (!!((system_rev & 0xFFF0) == 0x20))
#define is_cdma_wimax_rev0() (!!((system_rev & 0xFFFF) == 0x20))

extern struct s5p_panel_data herring_panel_data;

#endif
