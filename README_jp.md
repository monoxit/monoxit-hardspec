# プロジェクト
Attiny1634対応のarduino-tinyコアを基にしています。  
Arduino IDE 1.5.7用にデザインされ、サードパーティー定義とAttiny1634対応のarduino-tinyコア(https://github.com/rambo/arduino-tiny/tree/attiny1634)を含みます。  
現在のmonoxitの学習用ハードウェアモジュールは、Attiny1634を利用しています。Attiny1634用のコードを作成するには、Arduino IDE 1.5.7に含まれているAVRツールチェインが必要です。

## 手動配置
1. monoxit ホルダーをArduinoのスケッチブックのhardware ホルダーの下に配置します。スケッチブックホルダーは、Arduino IDEの環境設定で確認することができます。hardwareフォルダーが存在しない場合は新規に作成します。
2. Bluetooth接続用に変更したTinySafeBootソフトウェア (https://github.com/monoxit/tsb1634) を monoxit\tiny\tools\tsb に配置します。
3. (必要に応じて) Attiny1634用に変更したTinySafeBoot (https://github.com/monoxit/tsb1634) を monoxit\tiny\bootloader\tsb に配置します。

## 賛辞
https://code.google.com/p/arduino-tiny/  
https://github.com/rambo/arduino-tiny/tree/attiny1634

## ライセンス
arduino-tiny コア ライセンス: license.txt
