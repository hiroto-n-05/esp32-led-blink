# ESP32 LED Blink Practice

ESP32 の GPIO デジタル出力を使った LED 点滅（Lチカ）の練習プロジェクトです。
組み込みソフトウェア開発の基礎として、「仕様 → 実装 → 動作確認 → 記録」の流れで進めています。

## スケッチ一覧
| スケッチ | 内容 | 学習ポイント | 仕様書 |
|---|---|---|---|
| [led_blink](src/led_blink/led_blink.ino) | 1秒点灯・1秒消灯を繰り返す | `pinMode()` / `digitalWrite()` / `delay()` | [docs/led_blink.md](docs/led_blink.md) |
| [sos_blink](src/sos_blink/sos_blink.ino) | モールス信号の SOS を表示 | 関数化、`for` 文、定数による時間管理 | [docs/sos_blink.md](docs/sos_blink.md) |

## ハードウェア
- Freenove ESP32-WROOM（ESP32-WROOM-32E）
- 外付けLED + 330Ω 抵抗（GPIO 18 に接続）

配線図・部品表・抵抗値の計算は [docs/hardware.md](docs/hardware.md) を参照してください。

## 開発環境
| ツール | バージョン |
|---|---|
| Arduino IDE | （記入） |
| esp32 ボードパッケージ（Espressif Systems） | （記入） |
| ボード設定 | ESP32 Dev Module |
| エディタ / Git | Visual Studio Code / GitHub Desktop |

## 書き込み手順
1. Arduino IDE で `src/<スケッチ名>/<スケッチ名>.ino` を開く
2. ボードに「ESP32 Dev Module」、ポートに接続先の COM ポートを選択する
3. 「書き込み」を押す（書き込みが始まらない場合は BOOT ボタンを押しながら書き込む）

## ディレクトリ構成
```
esp32-led-blink/
├── README.md
├── docs/
│   ├── hardware.md      配線図・部品表・抵抗値の計算
│   ├── led_blink.md     led_blink の仕様・テスト記録
│   ├── sos_blink.md     sos_blink の仕様・テスト記録
│   └── images/          配線写真など
└── src/
    ├── led_blink/led_blink.ino
    └── sos_blink/sos_blink.ino
```

## 学んだこと
- GPIO の基本と `setup()` / `loop()` の役割
- `OUTPUT`、`HIGH`、`LOW` の意味（アクティブHigh の LED 駆動）
- 電流制限抵抗の計算（オームの法則）
- 処理の関数化と `for` 文による繰り返し
- マジックナンバーを名前付き定数にして、仕様書と対応させること
- Arduino IDE のスケッチはフォルダ名とファイル名を一致させる必要があること
- Git による変更履歴の管理（仕様・実装・ドキュメントでコミットを分ける）

## 今後の課題
- `delay()` を使わない `millis()` によるノンブロッキング化
- ボタン入力（割り込み・チャタリング対策）との組み合わせ
