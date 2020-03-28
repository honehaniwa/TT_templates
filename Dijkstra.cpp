#define M 1000000000000000000LL
// <最短距離, 頂点の番号>
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

//-------for vector 辺のコストが1の時使える--------
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
//使用例
int main() {
	int V;//頂点数 
    cin >> V;
    int E;//入力数(V*(V-1)/2>=E)
    cin >> E;
	vector<vector<edge>> G;//グラフ
    for (int i=0; i<E; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        G[a].push_back(edge{b,c});
    }
    for(auto d: dijkstra(0,G) {
        if(d[i] != INF)
            cout << "0から" << i << "までのコスト: " << d[i] << endl;
    }
}
*/