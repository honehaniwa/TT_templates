// 最長増加部分列問題(LIS: Longest Increasing Subsequence)
/*
長さnの数列a0,a1,…,an-1がある。
この数列の増加部分列うち、最長のものの長さを求めよ。
ただし、増加部分列とは、全てのi<jでai<ajを満たす部分列のことを言う。

(例)
(入力)
6
1 3 5 2 4 6
(最長部分文字列)
---------
1 2 4 6
---------
(出力)
4

*/



long long LIS(vector<long long> a) {
	long long n = a.size();
	vector<long long> dp(n, LLONG_MAX);
	for (long long i = 0; i<n; i++) {
		long long tmp = lower_bound(all(dp), a[i]) - dp.begin();
		dp[tmp] = a[i];
	}
	long long k = 0;
	while (k<n && dp[k] != LLONG_MAX) k++;
	return k;
}

/*使い方

cin >> n;
vll v(n);
rep(i,n) cin >> v[i];

cout << LIS(v) << endl;


*/