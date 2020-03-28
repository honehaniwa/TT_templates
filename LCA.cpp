struct LCA {
private:
	int root;
	const int n;
	const int log2_n;
	vector<vector<int>> parent;
	vector<int> depth;
public:
	// n : ’¸“_”
	LCA(const vector<vector<int>>& graph, int root, int n)
		: root(root), n(n), log2_n(log2(n) + 1), parent(log2_n, vector<int>(n)), depth(n) {
		dfs(graph, root, root, 1);
		for (int k = 0; k + 1 < log2_n; ++k) {
			parent.push_back(vector<int>(n, root)); // —v‘f”n, ’lroot‚Å‰Šú‰»
			for (int v = n - 1; v >= 0; --v) {
				int par = parent[k][v];
				parent[k + 1][v] = parent[k][par];
			}
		}
	}

	/**
	* par : e‚Ìid
	* d : –Ø‚Ì[‚³ (1‚©‚çn‚ß‚é)
	*/
	void dfs(const vector<vector<int>>& graph, int from, int par, int d) {
		parent[0][from] = par;
		depth[from] = d;
		for (int to : graph[from]) {
			if (depth[to] > 0) continue;
			dfs(graph, to, from, d + 1);
		}
	}


	int get(int v1, int v2) {
		// [‚³‚ª“¯‚¶‚É‚È‚é‚Ü‚Å•Ğ•û‚ğ“o‚ç‚¹‚é
		if (depth[v1] < depth[v2]) swap(v1, v2);
		for (int k = 0; k < log2_n; ++k) {
			if ((depth[v1] - depth[v2]) >> k & 1) {
				v1 = parent[k][v1];
			}
		}
		if (v1 == v2) return v1;

		// e‚ª“¯‚¶‚É‚È‚é’¼‘O‚Ü‚Å“o‚ç‚¹‚é
		for (int k = log2_n - 1; k >= 0; --k) {
			int p_v1 = parent[k][v1];
			int p_v2 = parent[k][v2];
			if (p_v1 == p_v2) continue;
			v1 = p_v1;
			v2 = p_v2;
		}
		assert(parent[0][v1] == parent[0][v2]);
		return parent[0][v1];
	}
};

/*
Å¬‹¤’Ê‘cæ(LCA) from (https://sash.netlify.com/post/cpp-lca/)

g‚¢•û
vector<vector<ll>> g;
cin >> n;
for(int i=0;i<n;i++){
	int a,b;
	cin >> a >> b;
	g[a].emplace_back(b);
}

int root=0;//e‚ğŒˆ‚ß‚é
LCA lca = LCA(g, root, n);
cout << "lca of a and b is -> " << lca.get(a,b) << endl; 
*/