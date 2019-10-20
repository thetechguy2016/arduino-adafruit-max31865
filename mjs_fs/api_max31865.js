let MAX31865 = {
    _imax: ffi('void *mgos_init_max31865(int, int, int, int)'),
    _imaxd: ffi('void *mgos_init_max31865_default(int)'),
    _begin: ffi('int mgos_max31865_begin(void *, int)'),
    _rf: ffi('int mgos_max31865_readFault(void *)'),
    _cf: ffi('void mgos_max31865_clearFault(void *)'),
    _rrtd: ffi('int mgos_max31865_readRTD(void *)'),
    _setW: ffi('void mgos_max31865_setWires(void *, int wires)'),
    _autoC: ffi('void mgos_max31865_autoConvert(void *, int b)'),
    _enableB: ffi('void mgos_max31865_enableBias(void *, int b)'),
    _temprature: ffi('double mgos_max31865_temperature(void *, double, double)'),
    
    init: function(cs, mosi, miso, clk) {
        let obj = Object.create(MAX31865._proto);
        obj.max = MAX31865._imax(cs, mosi, miso, clk);
        return obj;
    },
    MAX31865_2WIRE : 0,
    MAX31865_3WIRE : 1,
    MAX31865_4WIRE : 0,
    _proto: {
        begin: function(wire){
            return MAX31865._begin(this.max, wire);
        },
        readRTD: function() {
            return MAX31865._rrtd(this.max);
        },
        temprature: function(RTDnominal, refResistor) {
            return MAX31865._temprature(this.max, RTDnominal, refResistor);
        }
    }
}