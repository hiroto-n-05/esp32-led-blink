/*
 * sos_blink.ino
 * 外付けLEDでモールス信号の SOS (・・・ ーーー ・・・) を繰り返し表示する。
 *
 * ボード : Freenove ESP32-WROOM (ESP32 Dev Module)
 * 配線   : GPIO 18 -> 330Ω -> LED -> GND
 * 仕様   : docs/sos_blink.md
 */

const int LED_PIN = 18;                     // LEDを接続するGPIO番号

const unsigned long SHORT_ON_MS   = 200;    // 短点の点灯時間 [ms]
const unsigned long SHORT_OFF_MS  = 200;    // 短点の消灯時間 [ms]
const unsigned long LONG_ON_MS    = 600;    // 長点の点灯時間 [ms]
const unsigned long LONG_OFF_MS   = 600;    // 長点の消灯時間 [ms]
const unsigned long LETTER_GAP_MS = 300;    // 文字間の追加待機時間 [ms]
const unsigned long REPEAT_GAP_MS = 2000;   // SOS終了後の待機時間 [ms]

const int SIGNALS_PER_LETTER = 3;           // 1文字あたりの点滅回数

// 短い点滅を1回行う
void blinkShort() {
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_ON_MS);
  digitalWrite(LED_PIN, LOW);
  delay(SHORT_OFF_MS);
}

// 長い点滅を1回行う
void blinkLong() {
  digitalWrite(LED_PIN, HIGH);
  delay(LONG_ON_MS);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_OFF_MS);
}

// S (短点 x3) を表示する
void sendS() {
  for (int i = 0; i < SIGNALS_PER_LETTER; i++) {
    blinkShort();
  }
}

// O (長点 x3) を表示する
void sendO() {
  for (int i = 0; i < SIGNALS_PER_LETTER; i++) {
    blinkLong();
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  sendS();
  delay(LETTER_GAP_MS);
  sendO();
  delay(LETTER_GAP_MS);
  sendS();

  delay(REPEAT_GAP_MS);
}
