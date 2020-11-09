(function (win, und) {

	"use strict";

	const
		aliases = {
			'2-SAT' : ['2-SAT问题', '2-满足性问题', '2-可满足性问题'],
			'[Submit Answer]' : ['SUBMIT ANSWER', '提交答案', '提交答案题', '提交答案型', '提答', '提答题'],
			'[Interactive]' : ['INTERACTIVE', '交互', '交互式', '交互题', '交互型'],
			'(Encrypted)' : ['ENCRYPTED', '加密', '加密题解', '加密文档', '加密BLOG', '加密博客'],
			'Abelian 群' : ['ABEL群', '阿贝尔群', '交换群'],
			'Aho-Corasick 自动机' : ['AC自动机'],
			'Anti Sprague-Grundy 定理(SJ 定理)' : ['SJ定理'],
			'BEST 定理' : [],
			'Bernoulli 数' : ['伯努利数'],
			'Borůvka 算法' : ['BORUVKA算法', 'SOLLIN算法', '布卢瓦卡算法'],
			'Burnside 引理' : ['伯恩赛德引理'],
			'Cartesian 树' : ['笛卡尔树'],
			'Cayley-Hamilton 定理' : ['HAMILTON-CAYLEY定理', '凯莱-哈密顿定理', '哈密顿-凯莱定理'],
			'Chirp Z-transform' : ['CZT', 'CZT变换', 'BLUESTEIN\'S ALGORITHM', 'BLUESTEIN算法'],
			'Delaunay 三角剖分' : ['DELAUNAY三角网', 'DELONE三角剖分', 'DELONE三角网', '德劳内三角剖分', '德劳内三角网'],
			'Euler 回路' : ['欧拉回路'],
			'Euler 定理' : ['欧拉定理', 'EULER降幂定理', '欧拉降幂定理'],
			'FFT/FNTT' : ['FFT', 'NTT', 'FNTT', 'FFT/NTT', '快速FOURIER变换', '快速傅氏变换', '快速傅里叶变换', '快速傅立叶变换', '快速数论变换'],
			'Fermat 小定理' : ['FERMAT定理', '费马小定理', '费马定理'],
			'Fibonacci 数' : ['斐波那契数'],
			'Floyd 传递闭包' : ['弗洛伊德传递闭包'],
			'Floyd 判圈' : ['FLOYD判圈算法', '弗洛伊德判圈', '弗洛伊德判圈算法', '龟兔赛跑算法'],
			'Floyd 最小环' : ['弗洛伊德最小环'],
			'Floyd 最短路' : ['弗洛伊德最短路'],
			'Gale-Shapley 算法' : [],
			'Gauss 消元' : ['高斯消元'],
			'Green 公式' : ['格林公式'],
			'Hamilton 圈' : ['HAMILTON回路', '哈密顿圈', '哈密顿回路'],
			'Hash 算法' : ['HASH', '哈希算法', '哈希', '散列算法', '散列'],
			'Hash 表' : ['哈希表', '散列表'],
			'Hopcroft-Karp 算法' : [],
			'Huffman 编码' : ['哈夫曼编码', '霍夫曼编码'],
			'KMP' : ['KMP模式匹配'],
			'Kirchhoff\'s Matrix-Tree 定理' : ['MATRIX-TREE定理', '矩阵树定理', '基尔霍夫矩阵树定理', '基尔霍夫定理'],
			'Kruskal 算法' : ['克鲁斯卡尔算法'],
			'Kruskal 重构树' : ['克鲁斯卡尔重构树'],
			'Kummer 定理' : ['库默定理', '库默尔定理'],
			'Lucas 定理' : ['卢卡斯定理'],
			'Lucas 数列' : ['卢卡斯数列'],
			'Manhattan 距离' : ['曼哈顿距离', '出租车距离'],
			'Meet-in-the-middle' : ['MEET IN THE MIDDLE', '折半搜索', '折半枚举'],
			'Minkowski 和' : ['闵可夫斯基和', '闵科夫斯基和'],
			'Möbius 函数' : ['MOBIUS函数', '莫比乌斯函数'],
			'Möbius 反转变换' : ['MÖBIUS反演', 'MOBIUS反转变换', 'MOBIUS反演', '莫比乌斯反转变换', '莫比乌斯反演'],
			'Möbius 变换' : ['MOBIUS变换', '莫比乌斯变换'],
			'Prüfer 序列' : ['PRUFER序列', 'PRÜFER编码', 'PRUFER编码', 'PRÜFER SEQUENCE', 'PRUFER SEQUENCE', 'PRÜFER CODE', 'PRUFER CODE'],
			'Pólya 计数定理' : ['PÓLYA定理', 'POLYA计数定理', 'POLYA定理', '波利亚计数定理', '波利亚定理'],
			'SPFA 判负圈' : ['SPFA判负环', 'SPFA负圈', 'SPFA负环'],
			'ST 表' : ['SPARSE TABLE', '稀疏表', 'ST算法'],
			'Simpson 积分' : ['辛普森积分'],
			'Sprague-Grundy 定理' : ['SG定理'],
			'Stern-Brocot 树' : ['SB树'],
			'Stirling 数' : ['斯特林数', '斯特灵数'],
			'Tarjan 割点' : [],
			'Tarjan 桥边' : [],
			'Taylor 级数' : ['泰勒级数'],
			'Treap' : [],
			'Young 表' : ['YOUNG TABLEAU', '杨表', '杨氏矩阵'],
			'Z-Algorithm' : ['Z算法', 'EXKMP', 'EX-KMP', '扩展KMP', '扩展KMP算法'],
			'bfs 序' : [],
			'bitset' : ['STD::BITSET', 'BITSET优化'],
			'dfs 序' : [],
			'不平等博弈与 surreal numbers' : ['不平等博弈', 'SURREAL NUMBER', 'SURREAL NUMBERS', '超实数', '超现实数'],
			'二分图及其性质' : ['二分图', '二分图性质', '二分图的性质', '二分图判定', '二分图的判定', '二部图及其性质', '二部图', '二部图性质', '二部图的性质', '二部图判定', '二部图的判定'],
			'优先队列(堆)' : ['优先队列', '堆'],
			'凸优化' : ['带权二分', 'WQS二分', '凸包优化', '王钦石二分'],
			'分治多项式技巧' : ['分治多项式', '分治FFT', '分治NTT'],
			'前缀和优化' : ['前缀和', '部分和优化', '部分和'],
			'动态树' : ['LCT', 'LINK-CUT TREE', 'LINK CUT TREE'],
			'动态规划' : ['DP', '动规'],
			'区间 DP' : ['区间动态规划', '区间动规'],
			'单位根' : ['单位根反演'],
			'双指针' : ['尺取法', '双指针法'],
			'双行 DP' : ['双行动态规划', '双行动规'],
			'可持久化字典树' : ['可持久化TRIE', '可持久化TRIE树'],
			'可持久化线段树' : ['主席树', '函数式线段树'],
			'后缀数组' : ['SA', 'SUFFIX ARRAY'],
			'后缀自动机' : ['SAM', 'SUFFIX AUTOMATON'],
			'回文自动机' : ['PAM', 'PALINDROME AUTOMATON', '回文树', 'PALINDROME TREE', 'PALINDROMIC TREE'],
			'基环树' : ['环套树'],
			'字典树' : ['TRIE', 'TRIE树', '字母树'],
			'字符串 Hash' : ['字符串哈希', '字符串散列'],
			'孙子定理' : ['CRT', '中国剩余定理'],
			'容斥原理' : ['容斥', 'IE-PRINCIPLE'],
			'宽度优先搜索' : ['BFS', '宽搜', '广度优先搜索', '广搜'],
			'对角化' : ['矩阵对角化'],
			'带撤销数据结构' : ['可撤销数据结构', '带撤销并查集', '可撤销并查集', '带撤销栈', '可撤销栈'],
			'平面凸包' : ['二维凸包'],
			'平面图的 Euler 定理' : ['平面图的欧拉定理'],
			'底层优化' : ['卡常数', '卡常', 'WYS优化', '松松松'],
			'强连通分量' : ['SCC'],
			'快速 Möbius 变换(FMT)' : ['FMT', '快速MÖBIUS变换', '快速MOBIUS变换', '快速莫比乌斯变换'],
			'快速 Walsh 变换(FWT)' : ['FWT', '快速WALSH变换', '快速沃尔什变换'],
			'抽屉原理' : ['鸽笼原理', '鸽巢原理'],
			'换根 DP' : ['换根动态规划', '换根动规'],
			'搜索' : ['DFS', '深搜', '深度优先搜索'],
			'数位 DP' : ['数位动态规划', '数位动规'],
			'斜率优化 DP' : ['斜率优化'],
			'时间戳线段树' : ['线段树分治'],
			'最大流最小割定理' : ['最小割', '最大流-最小割定理', '最大流最小鸽定理', '最小鸽', '最大流-最小鸽定理'],
			'最小生成树' : ['MST', 'MINIMUM SPANNING TREE', '最小支撑树'],
			'最小表示' : ['最小表示法'],
			'最小费用最大流' : ['费用流', '最小费用流', '最大费用最大流'],
			'最短路' : ['SP', 'SHORTEST PATH'],
			'最近公共祖先' : ['LCA', 'LOWEST COMMON ANCESTOR'],
			'最长公共前缀' : ['LCP', 'LONGEST COMMON PREFIX'],
			'最长公共子序列' : ['LCS', 'LONGEST COMMON SUBSEQUENCE'],
			'最长单调子序列' : ['LIS', 'LDS', 'LONGEST INCREASING SUBSEQUENCE', 'LONGEST DECREASING SUBSEQUENCE', '最长上升子序列', '最长下降子序列', '最长不上升子序列', '最长不下降子序列', '最长不升子序列', '最长不降子序列', 'LONGEST INCREASING SUBSEQUENCE', 'LONGEST DECREASING SUBSEQUENCE'],
			'有根动态树' : ['有根LCT'],
			'有限状态自动机' : ['DFA'],
			'朱-刘-Edmonds 算法' : ['朱刘算法', '朱-刘算法'],
			'李超线段树' : ['李超树'],
			'杜教筛' : ['杜氏求和法'],
			'树分治' : ['点分治', '边分治', '点分', '边分'],
			'树形 DP' : ['树形动态规划', '树形动规', '树型DP', '树型动态规划', '树型动规'],
			'树状数组' : ['BIT', 'BINARY INDEXED TREE', 'FENWICK TREE', 'FENWICK树'],
			'树链剖分' : ['树剖', '轻重链剖分', '长链剖分'],
			'概率/期望 DP' : ['概率DP', '概率动态规划', '概率动规', '期望DP', '期望动态规划', '期望动规'],
			'洲阁筛' : ['洲鸽筛', 'MIN25筛', 'MIN-25筛', 'MIN_25筛', '扩展埃氏筛', '扩展ERATOSTHENES筛', '扩展ERATOSTHENES法'],
			'点双连通分量' : ['点双'],
			'状态压缩 DP' : ['状态压缩动态规划', '状态压缩动规', '状压DP', '状压动态规划', '状压动规'],
			'生成函数' : ['GF', 'G.F.', '母函数', 'GENERATING FUNCTION'],
			'离线' : ['离线算法'],
			'类 Euclid 算法' : ['类欧几里得算法', '类欧几里德算法'],
			'线性筛' : ['线性筛法', '线筛', 'EULER筛', 'EULER筛法', '欧拉筛', '欧拉筛法'],
			'线性齐次递推式' : ['线性递推', '线性递推式', '线性齐次递推'],
			'线段树' : ['ST', 'SEGMENT TREE'],
			'线段树 Beats' : ['SEGMENT TREE BEATS', 'STB', 'ST BEATS', '击败型线段树', '吉氏线段树', '吉司机线段树', '吉老师线段树'],
			'绿色博弈问题' : ['绿色博弈', 'GREEN HACKENBUSH'],
			'置换及置换群' : ['置换', '置换群'],
			'背包 DP' : ['背包动态规划', '背包动规'],
			'轮廓线' : ['插头DP', '插头动态规划', '插头动规'],
			'辗转相除的 Gauss 消元' : ['辗转相除的高斯消元'],
			'边双连通分量' : ['边双'],
			'阈值(按大小分类)' : ['阈值', '阈值算法', '按大小分类'],
			'陈丹琦分治' : ['CDQ分治'],
			'随机化' : ['随机算法'],
			'高精度' : ['高精']
		}

	function normalize(s) {
		return s.trim().toUpperCase().replace(/\s{2,}/g, ' ').replace(/\s([\u4e00-\u9fa5])/g, '$1').replace(/([\u4e00-\u9fa5])\s/g, '$1');
	}

	win.redirectTag = function(tag) {
		if (!tag) return '';
		let n_tag = normalize(tag), t;
		for (t in aliases)
			if (t === tag) return '';
			else if (normalize(t) === n_tag || ~aliases[t].indexOf(n_tag)) return t;
		return '';
	}

})(window ? window : this);
