//最大公約数
ll gcd(ll m, ll n) {
	if ((0 == m) || (0 == n))
		return 0;

	// ユークリッドの方法
	while (m != n)
	{
		if (m > n) m = m - n;
		else         n = n - m;
	}
	return m;
}
//最小公倍数
ll lcm(ll m, ll n) {
	if ((0 == m) || (0 == n))
		return 0;

	return (m * n / gcd(m, n));
}