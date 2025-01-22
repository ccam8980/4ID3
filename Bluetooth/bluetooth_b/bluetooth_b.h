//Libraries
#include <Arduino.h>
#include <Wire.h>
#include <AsyncAPDS9306.h>

//Additional Library for "b"
#include "BluetoothSerial.h"

//Instantiating bluetooth serial object
BluetoothSerial bluetooth_serial;

//I2C Addresses for Temperature Sensor
#define ADDR (byte)(0x40)
#define TMP_CMD (byte)(0xF3)

//Sample frequency
#define DELAY_BETWEEN_SAMPLES_MS 5000

String group_name = "Group1";
String device_name = "Device1"

//Instantiating sensor object and configuration
AsyncAPDS9306 light_sensor;
const APDS9306_ALS_GAIN_t apds_gain = APDS9306_ALS_GAIN_1;
const APDS9306_ALS_MEAS_RES_t apds_time = APDS9306_ALS_MEAS_RES_16BIT_25MS;
