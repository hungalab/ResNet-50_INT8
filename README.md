# ResNet-50 Int8

## このレポジトリについて
4枚のM-KUBOSボードを用いてResNet-50というCNNをVivado HLSで実装したソースコードが含まれている。
以下ファイル名やディレクトリ名に `resnet50_0` となっているときには1枚目の実装に関係するもの、
 `resnet50_1` となっているときには2枚目の実装に関係するもの、という対応になっている。

## 開発環境
- GCC (ものすごく古くなければ、特にバージョン指定はない)
- Vivado HLS 2019 (テストベンチの実行に必要)
## ディレクトリ構成

├── hls/ HLSソースコード、テストベンチ、Vivado HLSで合成したIPのディレクトリを含む. \
├── host/ M-KUBOSのpynqを利用して、PS部からPL部を実行するPythonスクリプト \
├── overlays/ Vivadoを用いて配置配線をしたbitstreamとHardware Handoffファイル \
├── params/ 各M-KUBOSボードのDRAMにホストコードから転送するCNNのパラメータを保持するファイル \
├── prepare/ paramsディレクトリにある重みデータをPyTorchから取得するためのJupyter Notebook \
├── tbl ResNet-50をマルチボードで実行するための各M-KUBOSボードのSTDMスイッチの設定ファイル \
└── README.md 説明

## テストベンチの実行

各ボードの検証用データと出力データは以下のファイルになる。
検証用の正解データ `<repo_path>/hls/golden_data/50_Xout.txt` \
テストベンチ実行結果 `<repo_path>/hls/50_Xout.txt` \
Xにはボード番号(0~3)が入る。
テストベンチの実行はGCCを用いて行うが、Vivado HLSのデータタイプを使うため、Vivado HLSのヘッダファイルを参照する必要がある。
Makefile内の`VIVADO_HLS_LIB=/home/cad/xilinx/Vivado-2019.1/Vivado/2019.1/include` と指定している変数を、実行環境下のVivadoのパスに変更する必要がある。

実行は以下の通り。
```
$ cd <repo_path>/hls
$ make testX
g++ -std=c++2a -I /home/cad/xilinx/Vivado-2019.1/Vivado/2019.1/include -D DEBUG -o test resnet50_X.cpp tb_resnet50_X.cpp
```
Xにはボード番号(0~3)が入る。
例えば `make test0` と打つと最初のボードのテストを実行できる。
単に `make` と打つと4ボードそれぞれの単体テストを実行する。
