|  title  |  documentation of  |
| --- | -------------- |
|Strongry Connected Components | ../../graph/SCC.cpp|

# Description

dfsを２回することで強連結成分分解を実行する．  
強連結成分を１つの頂点に縮約すると，DAGが得られる．
強連結成分のラベルはトポロジカル順序になっている．

<br />
<br />

# 主な機能  

コンストラクタ：
```
SCC(ll n); 
```

vector<int> cmp : 各頂点がトポロジカル順でどの連結成分に属するか？

SCC()  :強連結成分の取得
