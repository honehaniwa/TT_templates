//from beet_aizu's libraly
struct TopologicalSort {
	vector< set<ll> > G;
	vector<ll> used, indeg, ps;

	TopologicalSort() {}
	TopologicalSort(int n) :G(n), used(n, 0), indeg(n, 0) {}

	void add_edge(ll s, ll t) {
		G[s].emplace(t);
		indeg[t]++;
	}

	void bfs(ll s) {
		queue<int> que;
		que.push(s);
		used[s] = 1;
		while (!que.empty()) {
			int v = que.front(); que.pop();
			ps.emplace_back(v);
			for (int u : G[v]) {
				indeg[u]--;
				if (indeg[u] == 0 && !used[u]) {
					used[u] = 1;
					que.emplace(u);
				}
			}
		}
	}

	vector<ll> build() {
		ll n = G.size();
		for (int i = 0; i<n; i++)
			if (indeg[i] == 0 && !used[i]) bfs(i);
		return ps;
	}
};