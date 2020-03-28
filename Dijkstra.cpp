#define M 1000000000000000000LL
// <�ŒZ����, ���_�̔ԍ�>
using P = pair<long long, long long>;

//----------for me-------------

struct edge {
	long long to;
	long long cost;
};

vector<long long> dijkstra(int x, vector<vector<edge>> G) {
	priority_queue<P, vector<P>, greater<P> > que;
	vector<long long> dist(G.size(), M);
	dist[x] = 0;
	que.push(P(0, x));

	while (!que.empty()) {
		P p = que.top();
		que.pop();
		int v = p.second;
		if (dist[v] < p.first) continue;

		for (edge e : G[v]) {
			if (dist[e.to] > dist[v] + e.cost) {
				dist[e.to] = dist[v] + e.cost;
				que.push(P(dist[e.to], e.to));
			}
		}
	}
	return dist;
}

//-------for vector �ӂ̃R�X�g��1�̎��g����--------
vector<long long> dijkstra(int x, vector<vector<long long>> G) {
	priority_queue<long long, vector<long long>, greater<long long>> que;
	vector<long long> dist(G.size(), M);
	dist[x] = 0;
	que.push(x);

	while (!que.empty()) {
		ll p = que.top();
		que.pop();

		for (auto e : G[p]) {
			if (e == p)continue;
			if (dist[e] > dist[p] + 1) {
				dist[e] = dist[p] + 1;
				que.push(e);
			}
		}
	}
	return dist;
}
/*
//�g�p��
int main() {
	int V;//���_�� 
    cin >> V;
    int E;//���͐�(V*(V-1)/2>=E)
    cin >> E;
	vector<vector<edge>> G;//�O���t
    for (int i=0; i<E; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        G[a].push_back(edge{b,c});
    }
    for(auto d: dijkstra(0,G) {
        if(d[i] != INF)
            cout << "0����" << i << "�܂ł̃R�X�g: " << d[i] << endl;
    }
}
*/