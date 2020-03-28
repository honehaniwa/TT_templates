// �񕔃O���t����
// �O���t�̃}�b�`���O��Ԃ�
// �Q�l:�a�{pp.94
struct Bipartite_graph {
private:
	vector<vector<long long>> Graph;
	vector<long long> color;

public:
	Bipartite_graph(long long n) : Graph(n), color(n, -1) {}

	void push(long long u, long long v) {
		Graph[u].emplace_back(v);
	}

	bool dfs(int v, bool c) {
		color[v] = c;
		// �אڂ��Ă钸�_�����F���ۂ����ׂ�
		for (auto x : Graph[v]) {
			if (color[x] == c) return false;
			if (color[x] == -1 && !dfs(x, c ^ 1)) return false;
		}
		return true;
	}

	bool build() {
		for (int i = 0; i < color.size(); i++) {
			if (color[i] == -1) {
				if (!dfs(i, true)) {
					return false;
				}
			}
		}
		return true;
	}

	vector<vector<long long>> get_graph() { return Graph; }

	vector<long long> get_color() { return color; }

	void debug() {
		cerr << "-----------Graph-----------\n";
		for (auto G : Graph) {
			for (auto g : G) {
				cerr << g + 1 << " ";
			}
			cerr << endl;
		}
		cerr << "----------------color----------------\n\n";
		cout << " {";
		for (auto c : color) {
			if (c) cerr << " red,";
			else cerr << " blue,";
		}
		cerr << "} \n";
		cerr << "\n-------------------------------------\n";
	}
};