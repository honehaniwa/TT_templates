#define M 1000000000000000000LL

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< Edges< T > >;
using UnWeightedGraph = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;

template< typename T >
vector< T > bellman_ford(Edges< T > &edges, int V, int s) {
	const auto INF = M;
	vector< T > dist(V, INF);
	dist[s] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (auto &e : edges) {
			if (dist[e.src] == INF) continue;
			dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
		}
	}
	for (auto &e : edges) {
		if (dist[e.src] == INF) continue;
		if (dist[e.src] + e.cost < dist[e.to]) return vector< T >();
	}
	return dist;
}
/*
authorised by ei1333
O(N*M)
------usage------
int V,E,r;//V is Vertex(頂点),E is Edge(辺の数),r is start(始点)

Edges<ll> e;

//辺の追加方法
e.pb(from,to,cost);

auto dist=bellman_ford(e,V,r);

//負の閉路が存在する(無限に最小になれる)時に死ぬようになってる
if(dist.empty()) puts("NEGATIVE CYCLE");

//distには始点から各頂点へのコストがvectorになって帰ってくる
for(auto d:dist){
	if(d==M) cout << "INF" << endl;//その始点からは行けない(ここでputsを使うとダメ)
	else cout << d << endl;//行ける
}
*/