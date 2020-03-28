int mod = 1e9 + 7;

#define MAX_N 20000500
long long factorial[20000500];
void init_table() {
	factorial[0] = 1;
	for (int i = 1; i < MAX_N; i++) {
		factorial[i] = factorial[i - 1] * i%mod;
	}
}

long long bisection_power(long long x, long long y) {
	if (y == 0) { return 1; }
	long long t = bisection_power(x*x%mod, y / 2);
	if (y % 2 == 1) { t = t * x%mod; }
	return t;
}

long long nCr(int n, int r) {
	if (n<r || n <= 0 || r<0) { return 0; }
	long long a = factorial[n];
	long long b = a * bisection_power(factorial[r], (mod - 2)) % mod;
	long long c = b * bisection_power(factorial[n - r], mod - 2) % mod;
	return c % mod;
}

/*

-------------How to use(copy it!)-------------

//init
init_table();

//where you want to use nCr (a and b must be a integer(or long long))
ans = nCr(a,b);


*/