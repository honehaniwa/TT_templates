struct edge {
	long long u;
	long long v;
	long long cost;
};

// Union Find
struct UnionFind {
	vector<int> data;
	UnionFind(int size) : data(size, -1) { }
	bool unite(int x, int y) {
		x = root(x);
		y = root(y);

		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y];
			data[y] = x;
		}
		return x != y;
	}
	bool same(int x, int y) { return root(x) == root(y); }
	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
	int size(int x) { return -data[root(x)]; }
};

bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}



int kruskal(int N, vector<edge> es) {
	sort(es.begin(), es.end(), comp);
	UnionFind uf = UnionFind(N);
	int res = 0;

	for (auto e:es) {
		if (!uf.same(e.u, e.v)) {
			uf.unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}