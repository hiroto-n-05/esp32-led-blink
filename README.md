# ESP32 LED Blink Practice

ESP32を使ったLED点滅の練習プロジェクトです。

## 概要
GPIOを使ってLEDを一定間隔で点滅させます。

## 目的
ESP32のGPIOによるデジタル出力の基本を学習する。

## 使用機材
- ESP32 開発ボード
- USBケーブル
- PC

## 開発環境
- Arduino IDE
- ESP32 Dev Module
- Visual Studio Code
- GitHub Desktop

## 実装内容
- GPIO 2を出力端子として使用
- `pinMode()` でGPIOを出力に設定
- `digitalWrite()` でLEDのON/OFFを制御
- `delay()` で点灯時間・消灯時間を制御

## 動作確認
ESP32へプログラムを書き込み、LEDが1秒点灯・1秒消灯を繰り返すことを確認しました。

## 学んだこと
- GPIOの基本
- `setup()` と `loop()` の役割
- `OUTPUT`、`HIGH`、`LOW` の意味
- ミリ秒と秒の関係
- Gitによる変更履歴の管理

## 詳細仕様
詳細は `docs/specification.md` を参照してください。