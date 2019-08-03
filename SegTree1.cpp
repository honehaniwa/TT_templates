struct segtree {
	int N;
	vector<long long> dat;
	const long long INF = 2147483647;
	segtree() {}
	segtree(int n) {
		N = 1;
		while (N < n) N *= 2;
		dat.resize(2 * N - 1, INF);
	}
	// update k th element
	void update(int k, int a) {
		k += N - 1; // leaf
		dat[k] = a;
		while (k > 0) {
			k = (k - 1) / 2;
			dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
		}
	}
	// min [a, b)
	int query(int a, int b) { /*printvll(dat); */return query(a, b+1, 0, 0, N); }
	int query(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return INF;
		if (a <= l && r <= b) return dat[k];
		int m = (l + r) / 2;
		return min(query(a, b, k * 2 + 1, l, m), query(a, b, k * 2 + 2, m, r));
	}
};

/*
	お気持ち[https://www.slideshare.net/iwiwi/ss-3578491](iwiwiさん神)


	使い方
	segtree tree(n);　宣言
	tree.update(a,b)　aの値をbに更新　→　aの親の部分を更新。O(log(N))
	tree.query(a,b)　[a,b+1)の区間(半開区間)の最小値を検出。(b+1なことを忘れずに!一応上の方で実装済)


	問題ソース
	https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A
*/
