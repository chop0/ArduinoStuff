/*
  * "Ikea_Clock_Control" sketch written entirely by Alec Petridis
  * This was written on May, 20 2015
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    case (Serial.read() -'0') {
      case('on'):
        Serial.println('you said on');
        break;
      }
    }
  }
}
