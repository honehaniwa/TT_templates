/*
vrrtll==???>;::::~~~~~~......`.`````````````````````...-?777!_.._?7u,~~~::::;>>??=lllttrrzu
rtll==??>>;::::~~~~......`.`````````````````` ..J77!`````````...`..._T,~~~~:::;;>??==lttrrv
tll=??>>;:::~~~~......``````````````````..J7^ ` ``  ` `` .,```````...._4,.~~~::;;>>?===lttr
l=???>;;::~~~......`````HTSu,.``  `..J7!    `      `` .J"~N```````````..?&.~~~~::;;>>?==llt
=??>;;::~~~~.....``````.@????7SJ.?=     `     ` `` .J=....J;  ``````````..h..~~~~::;;>??=ll
?>>;::~~~~.....````````.D?>>?>?>?8+.``         `.J"_......_b`     ````````.S_.~~~~::;;>??=l
>;;::~~~~....``````````.C>??>>>?>>>?8J.`  ```..Y~..........J;  `  ` ``````` G...~~~~::;>??=
;;::~~~....```````` `..W1>>?>>>>?>>>>>?S,.`.7^.............-N``  `   ``````` 6...~~~~::;>??
;:~~~~....``````` ..7` d??>>?>?>>?>>?>>1udMgggNNNNggJ.......([          `````.L...~~~~::;>?
:~~~.....`````` .7`   `K>?>?>>>>>>+ugNMMMB""7<!~~<?7TWMNNa,..w.`  ` `  ` `````,)....~~:::;>
~~~....``````.J^     ` #>>?>>>?jgMMM9=_................-?TMMa,b` `   `  `  ````(,...~~~~:;;
~~~....``` .7``   `    @?>>?1uMM#=.........................(TMNa......  ` ``````4....~~~::;
~~~...`` .=`` `     ` .b>>jgNH".................`.............?HNmx??17TYY9SA+(..L....~~~::
~....` ,^``     `   ` .b+dN#^............6..-(,-...`............(HMm+>>>>>?>>????zOM_.~~~::
.... .=```  `` `   ...JNMM^..........`..._n.(MMN,....`..`.........?MNe<>>?>??>????d^...~~~:
~...v```` ` ..-Z""!_..(M@_........`........?7MMMMp.................-TNN+?>>>????1d4-..-(Jk9
..(^`...zY"!_........(MD..............`......JMMMMp....`..`..`......./MNx>??>>?1d!.h7=~(??=
(v_`,R_.............(NF..(/..(&,...`..........?MMMM;..................(MMs>>?1&T"!``....(1=
t..`` 4,...........(N@....?,(NMNR_.....`..`....(WMM$..`....`..`..`....._HMe7=```````....~_1
...````.4,........-dM:.....(7MMMNR-.....................`............(.?^ ``  ``````....~~~
...``````,4,....`.(NF........(MMMMb..`....--................`....(.7!        `  ````....~~:
..````` ` `.5J_...JMt.........?NMMM[...`.HH5._(J7[...`...`...--?^`          ` `````....~~~:
...````` `  ` 7a,.dM{....`...../MMMN......(J=`  .>......._(/=             `  ` `````...~~~:
....```` ``     (4MN{..........._7"^...(/^    `.C....-(J=`                  ` ` ```....~~~:
....````` `      JdM[...`...`........`_3..  ..?!..(-7!                  ` ` ``````....~~~::
r...``````  ` ``(CJMb..............`......__..-(?^                     `  `  `````....~~::;
J/...````` `  `,3>+MN-.`..`...`..........._(J=``                     `  ` ```````....~~~::;
_j,..`.```` ``.5>>?dNb...`......`......_-?'`                            `  `````....~~~::;;
~~j,..```````.D??>>>MM/....`........(-=`                          `  ` ` ```````...~~~:::;>
~~~j,...````.E??>??>?MN-.........(J=                            `   ` ` ``````....~~~~::;??
:~~~?,...``.@>?>?>>??dMN_....-(?^                        `  `    ` `  ````````...~~~~:;;>??
::~~~?/....K??????>>?>dMN-_(7!                               `  ` ` ````````....~~~:::>>??l
;:::~~/e.(K==?????????<dM"!                          `    `   ` ` `` ``````...~~~~:::;>??=l
*/
#include "bits/stdc++.h"
using namespace std;
#define ok1 printf("ok1\n")
#define ok2 printf("ok2\n")
#define M 1000000000000000000LL
#define rep(i,n) for(int i=0;i<n;++i)
#define REP(i,s,n) for(int i=(s);i<(n);++i)
#define repr(i,n) for(int i=n-1;i>=0;--i)
#define REPR(i,s,n) for(int i=(s);i>=(n);--(i))
#define all(a) (a).begin(),(a).end()
#define reall(a) (a).rbegin(),(a).rend()
#define pb emplace_back //emplace_backの方が速いが使い慣れてないため
#define DOUBLE fixed << setprecision(15)
#define fi first
#define se second
#define mp make_pair
#define mt make_tuple
#define BIT(n,m)(((n)>>(m))&1)
const double pi = acos(-1.0);
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef deque<ll> dll;
typedef pair<ll, ll> P;
typedef vector<P> vP;
const ll mod = 1e9 + 7;
//const ll mod = 998244353;
ll dy[4] = { 1,0,-1,0 };
ll dx[4] = { 0,1,0,-1 };
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
bool out_check(ll a, ll b) { return (0 <= a && a < b); }
void addmod(ll &a, ll &b) { a = (a + b) % mod; }
void Pvi(vi v) {
	puts("vll------------------------------------------------");
	rep(i, v.size()) cout << v[i] << " "; puts("");
	puts("------------------------------------------------");
}
void Pvll(vll v) {
	puts("vll------------------------------------------------");
	rep(i, v.size()) cout << v[i] << " "; puts("");
	puts("------------------------------------------------");
}
void Pvvll(vvll v) {
	puts("vvll------------------------------------------------");
	rep(i, v.size()) { rep(j, v[i].size()) cout << v[i][j] << " "; cout << endl; }
	puts("------------------------------------------------");
}
void Pvs(vs s) {
	puts("vs------------------------------------------------");
	rep(i, s.size()) { rep(j, s[i].size()) cout << s[i][j] << " "; cout << endl; }
	puts("------------------------------------------------");
}

void Yes(bool x) { cout << ((x) ? "Yes\n" : "No\n"); }
void YES(bool x) { cout << ((x) ? "YES\n" : "NO\n"); }
void yes(bool x) { cout << ((x) ? "yes\n" : "no\n"); }
void Yay(bool x) { cout << ((x) ? "Yay!\n" : ":(\n"); }

ll  n, m, d, e, r, l, k, h, ans, ret = M;
bool flag = false, flag2 = false, flag3 = false;
string s, t, u;

template< typename T >
struct edge {
	int src, to;
	T cost;
	edge(int to, T cost) : src(-1), to(to), cost(cost) {}
	edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}
	edge &operator=(const int &x) {
		to = x;
		return *this;
	}
	operator int() const { return to; }
};

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

int main() {
	cin.tie(0); ios::sync_with_stdio(false);//not intractive
	int V, E, r;//V is Vertex(頂点),E is Edge(辺の数),r is start(始点)
	cin >> V >> E >> r;
	Edges<ll> e;
	rep(i, E) {
		ll from, to, cost;
		cin >> from >> to >> cost;
		e.pb(from, to, cost);
	}
	auto dist = bellman_ford(e, V, r);
	//負の閉路が存在する(無限に最小になれる)時に死ぬようになってる
	if (dist.empty()) puts("NEGATIVE CYCLE");
	//distには始点から各頂点へのコストがvectorになって帰ってくる
	for (auto d : dist) {
		if (d == M) cout << "INF" << endl;//その始点からは行けない(ここでputsを使うとダメ)
		else cout << d << endl;//行ける
	}
	return 0;
}