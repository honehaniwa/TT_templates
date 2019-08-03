#include "bits/stdc++.h"

using namespace std;
#define ok1 printf("ok1\n");
#define ok2 printf("ok2\n");
#define M 1000000000000000000LL
#define rep(i,n) for(int i=0;i<n;++i)
#define REP(i,s,n) for(int i=(s);i<(n);++i)
#define repr(i,n) for(int i=n-1;i>=0;--i)
#define REPR(i,s,n) for(int i=(s);i>=(n);--(i))
#define all(a) (a).begin(),(a).end()
#define reall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define pf push_front
#define MIN(a,b) a=min((a),(b))
#define MAX(a,b) a=max((a),(b))
#define SIZE(v) (int)v.size()
#define DOUBLE fixed << setprecision(10)
#define fi first
#define se second
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
ll dx[4] = { 1,0,-1,0 };
ll dy[4] = { 0,1,0,-1 };
template <typename T>
bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
};
template <typename T>
bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
};
void Pvll(vll v) {
	cout << "------------------------------------------------\n";
	rep(i, v.size()) cout << v[i] << " ";
	cout << endl;
	cout << "------------------------------------------------\n";
}
void Pvvll(vvll v) {
	cout << "------------------------------------------------\n";
	rep(i, v.size()) {
		rep(j, v[i].size()) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------\n";
}

void Ps(string s) {
	cout << "------------------------------------------------\n";
	rep(i, s.size()) cout << s[i] << " ";
	cout << endl;
	cout << "------------------------------------------------\n";
}

void Pvs(vs s) {
	cout << "------------------------------------------------\n";
	rep(i, s.size()) {
		rep(j, s[i].size()) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------\n";
}

void Yes(bool x) {
	if (x) cout << "Yes\n";
	else cout << "No\n";
}

void YES(bool x) {
	if (x) cout << "YES\n";
	else cout << "NO\n";
}

void yes(bool x) {
	if (x) cout << "yes\n";
	else cout << "no\n";
}

void Yay(bool x) {
	if (x) cout << "Yay!\n";
	else cout << ":(\n";
}


ll  n, m, r, l, k, h, ans = 0, ret = M;
bool flag = false, flag2 = false, flag3 = false;
string s,t;

void INIT() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << DOUBLE;
}

vector<bool> IsPrime;

void sieve(ll max) {
	if (max + 1 > IsPrime.size()) {     // resize‚Å—v‘f”‚ªŒ¸‚ç‚È‚¢‚æ‚¤‚É
		IsPrime.resize(max + 1, true); // IsPrime‚É•K—v‚È—v‘f”‚ğŠm•Û
	}
	IsPrime[0] = false; // 0‚Í‘f”‚Å‚Í‚È‚¢
	IsPrime[1] = false; // 1‚Í‘f”‚Å‚Í‚È‚¢

	for (ll i = 2; i*i <= max; ++i) // 0‚©‚çsqrt(max)‚Ü‚Å’²‚×‚é
		if (IsPrime[i]) // i‚ª‘f”‚È‚ç‚Î
			for (ll j = 2; i*j <= max; ++j) // (maxˆÈ‰º‚Ì)i‚Ì”{”‚Í
				IsPrime[i*j] = false;      // ‘f”‚Å‚Í‚È‚¢
}


int main() {
	INIT();
	sieve(2000000);
	ll sum = 0;
	rep(i, 2000000) if (IsPrime[i]) sum += i;
	cout << sum << endl;
}