# 55Shogi-AI

![image](https://github.com/fu-suke/55Shogi-AI/assets/96232134/f42437a2-ccfd-4ef2-a097-744304fbbc6d)

<img src="https://github.com/fu-suke/55Shogi-AI/assets/96232134/f42437a2-ccfd-4ef2-a097-744304fbbc6d" width="200">


## これは何ですか



## AIの種類

### ab

片手間で作成したMini-Max法を用いたAI。片手間に作ったのに一番強い。評価関数は駒の価値を簡単に計算しているだけ。

### hybrid

Mini-Maxの終端ノードをさらにMCTSを用いて評価するAI。
評価の方法は、実際にプレイアウトを行うものと、プレイアウトの深層学習モデルを用いる2パターンを利用できる。
前者はプレイアウトの評価値を正確に計算できるが、後者の方が計算が圧倒的に速い。

### uct

UCTアルゴリズムを用いたAI。探索の回数を増やせばある程度の強さにはなるが、そうするとかなり遅くなるちょっと惜しいAI。

## その他のファイル

### common

どの種類のAIでも共通して利用する部分（探索部以外）のソースコードが入っている。

### battle

USIプロトコルに従うAI同士を対戦させ、対戦記録をcsvファイルとして出力する。

### engines

実装したAIのバイナリが入っている。hybridは深層学習モデルの読み込みpathが環境によって違うせいでそのままでは動かないが、
ab、uctはそのまま実行しても動くはずである。
