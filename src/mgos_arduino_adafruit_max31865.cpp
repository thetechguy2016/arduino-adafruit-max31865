#include "mgos_arduino_adafruit_max31865.h"



Adafruit_MAX31865 *mgos_init_max31865(int spi_cs, int spi_mosi, int spi_miso, int spi_clk){
    return new Adafruit_MAX31865(spi_cs, spi_mosi, spi_miso, spi_clk);
}

Adafruit_MAX31865 *mgos_init_max31865(int spi_cs){
    return new Adafruit_MAX31865(spi_cs);
}

bool mgos_max31865_begin(Adafruit_MAX31865 *max, int x = 0){
    if (ssd == nullptr) return;
    return max->begin(x);
}

int mgos_max31865_readFault(Adafruit_MAX31865 *max) {
    return max->readFault();
}
void mgos_max31865_clearFault(Adafruit_MAX31865 *max){
    max->clearFault();
}
int mgos_max31865_readRTD(Adafruit_MAX31865 *max){
    return max->readRTD();
}

void mgos_max31865_setWires(Adafruit_MAX31865 *max, int wires){
    max->setWires(wires);
}
void mgos_max31865_autoConvert(Adafruit_MAX31865 *max, boolean b){
    max->autoConvert(b);
}
void mgos_max31865_enableBias(Adafruit_MAX31865 *max, boolean b){
    max->enableBias(b);
}

double mgos_max31865_temperature(Adafruit_MAX31865 *max, double RTDnominal, double refResistor){
    return max->temperature(RTDnominal, refResistor);
}


int mgos_max31865_readRegisterN(Adafruit_MAX31865 *max, int addr, void *buffer, int n){
    max->readRegisterN(addr, buffer, n);
}

int mgos_max31865_readRegister8(Adafruit_MAX31865 *max, int addr){
    return max->readRegister8(addr);
}
int mgos_max31865_readRegister16(Adafruit_MAX31865 *max, int addr){
    return max->readRegister16(addr);
}

void mgos_max31865_writeRegister8(Adafruit_MAX31865 *max, int addr, int data){
    max->writeRegister8(addr, data);
}
int mgos_max31865_spixfer(Adafruit_MAX31865 *max, int addr){
    max->spixfer(addr);
}