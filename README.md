# ESP-Box-Bridge

[![Build Status](https://github.com/stops-top/usb-bridge-esp/workflows/ci/badge.svg)](https://github.com/stops-top/usb-bridge-esp/actions/workflows/ci.yml)


基于BOX开发的烧录和测试工具

| SDMMC | 1 | 2 | 3 | 4 | 5 | 6 | 
| ---- | -- | -- | -- | -- |  -- | -- | 
| MOD1 | 38 | 39 | 40 | 41 | GND | 3V3 |
| TYPE | BOOT1 | RST1 | RX1 | TX1 | GND | 3V3 |
| MOD1 | 42 | 21 | 19 | 20 | GND | 3V3 |
| TYPE | CMD | CLK | USB- | USB+ | GND | 3V3 |
| MOD2 | 9  | 43 | 44 | 14 | GND | 3V3 |
| TYPE | D1 | TX0 | RX0 | D0 | GND | 3V3 |
| MOD2 | 10  | 11 | 13 | 12 | GND | 3V3 |
| TYPE | BOOT2 | RST2 | RX2 | TX2 | GND | 3V3 |


| JTAG | 1 | 2 | 3 | 4 | 5 | 6 | 
| ---- | -- | -- | -- | -- |  -- | -- | 
| MOD1 | 38 | 39 | 40 | 41 | GND | 3V3 |
| TYPE | BOOT1 | RST1 | RX1 | TX1 | GND | 3V3 |
| MOD1 | 42 | 21 | 19 | 20 | GND | 3V3 |
| TYPE | TCK | TMS | USB- | USB+ | GND | 3V3 |
| MOD2 | 9  | 43 | 44 | 14 | GND | 3V3 |
| TYPE | TDI | TX0 | RX0 | TDO | GND | 3V3 |
| MOD2 | 10  | 11 | 13 | 12 | GND | 3V3 |
| TYPE | BOOT2 | RST2 | RX2 | TX2 | GND | 3V3 |