//�ő����
ll gcd(ll m, ll n) {
	if ((0 == m) || (0 == n))
		return 0;

	// ���[�N���b�h�̕��@
	while (m != n)
	{
		if (m > n) m = m - n;
		else         n = n - m;
	}
	return m;
}
//�ŏ����{��
ll lcm(ll m, ll n) {
	if ((0 == m) || (0 == n))
		return 0;

	return (m * n / gcd(m, n));
}