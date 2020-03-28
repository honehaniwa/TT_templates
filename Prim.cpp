#define M LLONG_MAX


long prim(int V, vector<vector<long long>> cost) {
	vector<long long> mincost(V, M);
	vector<bool> used(V, false);
	mincost[0] = 0;
	int res = 0;

	while (true) {
		int v = -1;
		for (int u = 0; u<V; ++u) {
			if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
		}

		if (v == -1) break;
		used[v] = true;
		res += mincost[v];

		for (int u = 0; u<V; ++u) {
			mincost[u] = min(mincost[u], cost[v][u]);
		}
	}

	return res;
}