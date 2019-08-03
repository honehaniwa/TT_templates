struct segtree {
	int N;
	vector<int> dat, sum;
	segtree(int n) {
		N = 1;
		while (N < n) N <<= 1;
		dat.assign(2 * N - 1, 0);
		sum.assign(2 * N - 1, 0);
	}
	void add(int a, int b, int x) { add(a, b, x, 0, 0, N); }
	int add(int a, int b, int x, int k, int l, int r) {
		if (b <= l || r <= a) return dat[k];
		if (a <= l && r <= b) {
			sum[k] += x;
			return dat[k] += x;
		}
		int m = (l + r) / 2;
		return dat[k] = min(add(a, b, x, 2 * k + 1, l, m), add(a, b, x, 2 * k + 2, m, r)) + sum[k];
	}
	int minimum(int a, int b) { return minimum(a, b, 0, 0, N); }
	int minimum(int a, int b, int k, int l, int r) {
		if (b <= l || r <= a) return 1e9;
		if (a <= l && r <= b) return dat[k];
		int m = (l + r) / 2;
		return min(minimum(a, b, 2 * k + 1, l, m), minimum(a, b, 2 * k + 2, m, r)) + sum[k];
	}
};

/*
	�g����
	segtree tree(N); �ŏ�����
	tree.add(a,b,x):
	tree.minimum(a,b);
*/
