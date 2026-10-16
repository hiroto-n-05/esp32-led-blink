/*
 * led_blink.ino
 * 外付けLEDを1秒点灯・1秒消灯で繰り返し点滅させる。
 *
 * ボード : Freenove ESP32-WROOM (ESP32 Dev Module)
 * 配線   : GPIO 18 -> 330Ω -> LED -> GND
 * 仕様   : docs/led_blink.md
 */

const int LED_PIN = 18;            // LEDを接続するGPIO番号

const unsigned long ON_TIME_MS  = 1000;  // 点灯時間 [ms]
const unsigned long OFF_TIME_MS = 1000;  // 消灯時間 [ms]

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(ON_TIME_MS);

  digitalWrite(LED_PIN, LOW);
  delay(OFF_TIME_MS);
}
