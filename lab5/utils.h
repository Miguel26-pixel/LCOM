#pragma once
#include <lcom/lcf.h>

uint16_t min(uint16_t x, uint16_t y);

int(util_get_LSB)(uint16_t val, uint8_t *lsb);

int(util_get_MSB)(uint16_t val, uint8_t *msb);

int(util_sys_inb)(int port, uint8_t *value);

