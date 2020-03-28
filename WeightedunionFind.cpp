//Thanks to catupper!!!
class WeightedUnionFind {
public:
	int n;
	vector<int> u;
	vector<long long> weight;
	WeightedUnionFind(int n = 0) :n(n) {
		u = vector<int>(n);
		weight = vector<long long>(n, 0);
		for (int i = 0; i < n; i++)u[i] = i;
	}
	int r(int x) {
		if (u[x] == x)return x;
		r(u[x]);
		weight[x] += weight[u[x]];
		return u[x] = r(u[x]);
	}

	long long dif(long long x, long long y) {
		if (r(x) != r(y))return LLONG_MAX;
		return weight[x] - weight[y];
	}

	//x - y == w
	bool isOK(int x, int y, long long w) {
		if (r(x) != r(y))return false;
		return dif(x, y) == 0;
	}

	int unite(int x, int y, long long w) {
		r(x);
		r(y);
		w += weight[y];
		w -= weight[x];
		x = r(x);
		y = r(y);
		u[x] = y;
		weight[x] = w;
	}
};

/* usage

WeightUnionFind tree(N);

tree.unite(a,b,c)
...

*/