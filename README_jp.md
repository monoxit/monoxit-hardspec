# プロジェクト
Attiny1634対応のarduino-tinyコアを基にしています。  
Arduino IDE 1.5.7用にデザインされ、monoxitの学習用ハードウェアモジュールのサードパーティー定義とAttiny1634対応のarduino-tinyコア(https://github.com/rambo/arduino-tiny/tree/attiny1634) を含みます。

## 手動配置
1. monoxit ホルダーをArduinoのスケッチブックのhardware ホルダーの下に配置します。スケッチブックホルダーは、Arduino IDEの環境設定で確認することができます。hardwareフォルダーが存在しない場合は新規に作成します。
2. Bluetooth接続用に変更したTinySafeBootソフトウェア (https://github.com/monoxit/tsb1634) を monoxit\tiny\tools\tsb に配置します。
3. (必要に応じて) Attiny1634用に変更したTinySafeBoot (https://github.com/monoxit/tsb1634) を monoxit\tiny\bootloader\tsb に配置します。

## To Do
1. TSBブートローダー書き込み後、TSBタイムアウト値を3秒から6秒にセットする。
2. Bluetooth SPP接続時に自動リセットするようにする。（ハードウェア拡張: CON-NOT-0.1uF-(10Kプルアップ)RST)
3. linux環境での検証
4. OSX環境での検証

## 賛辞
https://code.google.com/p/arduino-tiny/  
https://github.com/rambo/arduino-tiny/tree/attiny1634

## ライセンス
arduino-tiny コア ライセンス: license.txt
