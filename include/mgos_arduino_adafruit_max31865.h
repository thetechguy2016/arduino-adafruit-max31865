#ifndef MGOS_ADAFRUIT_MAX31865_H
#define MGOS_ADAFRUIT_MAX31865_H

#include "Adafruit_MAX31865.h"

Adafruit_MAX31865 *mgos_init_max31865(int spi_cs, int spi_mosi, int spi_miso, int spi_clk);
Adafruit_MAX31865 *mgos_init_max31865(int spi_cs);

bool mgos_max31865_begin(Adafruit_MAX31865 *max, int x);

int mgos_max31865_readFault(Adafruit_MAX31865 *max);
void mgos_max31865_clearFault(Adafruit_MAX31865 *max);
int mgos_max31865_readRTD(Adafruit_MAX31865 *max);

void mgos_max31865_setWires(Adafruit_MAX31865 *max, int wires);
void mgos_max31865_autoConvert(Adafruit_MAX31865 *max, boolean b);
void mgos_max31865_enableBias(Adafruit_MAX31865 *max, boolean b);

float mgos_max31865_temperature(Adafruit_MAX31865 *max, float RTDnominal, float refResistor);

int _sclk, _miso, _mosi, _cs;

//int mgos_max31865_readRegisterN(Adafruit_MAX31865 *max, int addr, int buffer[], int n);

//int mgos_max31865_readRegister8(Adafruit_MAX31865 *max, int addr);
//int mgos_max31865_readRegister16(Adafruit_MAX31865 *max, int addr);

void mgos_max31865_writeRegister8(Adafruit_MAX31865 *max, int addr, int data);
int mgos_max31865_spixfer(Adafruit_MAX31865 *max, int addr);

#endif