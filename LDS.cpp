ll LDS(vll a) {
	n = a.size();
	vector<ll> dp(n+1, M);
	for (ll i = 0; i<n; i++) {
		ll tmp = upper_bound(all(dp), a[i]) - dp.begin();
		dp[tmp] = a[i];
	}
	for (int i = n; i >= 0;i--) {
		if (dp[i] != M) {
			return i + 1;
		}
	}
}

/*
LIS‚ÌeÊ‚Ý‚½‚¢‚È‚à‚Ì
(Å’·Œ¸­•”•ª—ñ)
—á)
10
1 7 5 9 4 3 1 2 5 1

-> 7 5 4 3 2 1
*/