#define MAX_N 200005
ll factorial[MAX_N];
void make_factorial_table() {
	factorial[0] = 1;
	for (int i = 1; i < MAX_N; i++) {
		factorial[i] = factorial[i - 1] * i%mod;
	}
}

ll bisection_power(ll x, ll y) {
	if (y == 0) { return 1; }
	ll t = bisection_power(x*x%mod, y / 2);
	if (y % 2 == 1) { t = t * x%mod; }
	return t;
}

ll nCr(int n, int r) {
	if (n<r || n <= 0 || r<0) { return 0; }
	ll a = factorial[n];
	ll b = a * bisection_power(factorial[r], (mod - 2)) % mod;
	ll c = b * bisection_power(factorial[n - r], mod - 2) % mod;
	return c % mod;
}

/*

-------------How to use(copy it!)-------------

//init
make_factorial_table();

//where you want to use nCr (a and b must be a integer(or long long))
ans = nCr(a,b);


*/