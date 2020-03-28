struct UnionFind {
private:
	vector<long long> data;
public:
	UnionFind(long long size) : data(size, -1) { }
	bool unite(long long x, long long y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool same(long long x, long long y) {
		return root(x) == root(y);
	}
	int root(long long x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(long long x) {
		return -data[root(x)];
	}
};

/*
	使い方
	UnionFind tree(N);	で初期化
	tree.find(x);
	tree.unite(a,b);
	みたいにして使います！！！！！
*/