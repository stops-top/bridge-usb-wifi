#ifndef _PMOD_IO_H_
#define _PMOD_IO_H_
/* 
| MOD1 | 38 | 39 | 40 | 41 | GND | 3V3 |
| MOD1 | 42 | 21 | 19 | 20 | GND | 3V3 |
| MOD2 | 9  | 43 | 44 | 14 | GND | 3V3 |
| MOD2 | 10 | 11 | 13 | 12 | GND | 3V3 |
*/

/* SD */
#define PMOD_CLK        CONFIG_BRIDGE_SDMMC_CLK
#define PMOD_CMD        CONFIG_BRIDGE_SDMMC_CMD
#define PMOD_SD0        CONFIG_BRIDGE_SDMMC_SD0
#define PMOD_SD1        CONFIG_BRIDGE_SDMMC_SD1

/* jtag */
#define PMOD_TDI        CONFIG_BRIDGE_MOD_TDI
#define PMOD_TDO        CONFIG_BRIDGE_MOD_TDO
#define PMOD_TCK        CONFIG_BRIDGE_MOD_TCK
#define PMOD_TMS        CONFIG_BRIDGE_MOD_TMS

/* serial */
#define MOD_RST1        CONFIG_BRIDGE_MOD_RST1
#define MOD_BOOT1       CONFIG_BRIDGE_MOD_BOOT1
#define MOD_RX1         CONFIG_BRIDGE_MOD_RX1
#define MOD_TX1         CONFIG_BRIDGE_MOD_TX1

#define MOD_RST2        CONFIG_BRIDGE_MOD_RST2
#define MOD_BOOT2       CONFIG_BRIDGE_MOD_BOOT2
#define MOD_RX2         CONFIG_BRIDGE_MOD_RX2
#define MOD_TX2         CONFIG_BRIDGE_MOD_TX2

#endif
