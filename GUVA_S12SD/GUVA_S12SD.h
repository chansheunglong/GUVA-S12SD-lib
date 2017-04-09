/*
GUVA_S12SD UV Sensor
Created by Chan Sheung Long
*/

class GUVA_S12SD {
  public:
    int s12sd_dataPin;

    void initialize(int pin) {
      s12sd_dataPin = pin;
    }

    int value() {
      return (analogRead(s12sd_dataPin));
    }

    int voltage() {
      return (analogRead(s12sd_dataPin) / 1024 * 3.3);
    }

    int UVIndex() {
      int s12sd_sensorVoltage = analogRead(s12sd_dataPin) / 1024 * 3.3;
      if (s12sd_sensorVoltage * 1000 < 50) {
        return 0;
      } else if (s12sd_sensorVoltage * 1000 < 227) {
        return 1;
      } else if (s12sd_sensorVoltage * 1000 < 318) {
        return 2;
      } else if (s12sd_sensorVoltage * 1000 < 408) {
        return 3;
      } else if (s12sd_sensorVoltage * 1000 < 503) {
        return 4;
      } else if (s12sd_sensorVoltage * 1000 < 606) {
        return 5;
      } else if (s12sd_sensorVoltage * 1000 < 696) {
        return 6;
      } else if (s12sd_sensorVoltage * 1000 < 795) {
        return 7;
      } else if (s12sd_sensorVoltage * 1000 < 881) {
        return 8;
      } else if (s12sd_sensorVoltage * 1000 < 976) {
        return 9;
      } else if (s12sd_sensorVoltage * 1000 < 1079) {
        return 10;
      } else {
        return 11;
      }
    }
};
