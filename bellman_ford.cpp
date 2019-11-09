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
int V,E,r;//V is Vertex(���_),E is Edge(�ӂ̐�),r is start(�n�_)

Edges<ll> e;

//�ӂ̒ǉ����@
e.pb(from,to,cost);

auto dist=bellman_ford(e,V,r);

//���̕H�����݂���(�����ɍŏ��ɂȂ��)���Ɏ��ʂ悤�ɂȂ��Ă�
if(dist.empty()) puts("NEGATIVE CYCLE");

//dist�ɂ͎n�_����e���_�ւ̃R�X�g��vector�ɂȂ��ċA���Ă���
for(auto d:dist){
	if(d==M) cout << "INF" << endl;//���̎n�_����͍s���Ȃ�(������puts���g���ƃ_��)
	else cout << d << endl;//�s����
}
*/