// �Œ�������������(LIS: Longest Increasing Subsequence)
/*
����n�̐���a0,a1,�c,an-1������B
���̐���̑��������񂤂��A�Œ��̂��̂̒��������߂�B
�������A����������Ƃ́A�S�Ă�i<j��ai<aj�𖞂���������̂��Ƃ������B

(��)
(����)
6
1 3 5 2 4 6
(�Œ�����������)
---------
1 2 4 6
---------
(�o��)
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

/*�g����

cin >> n;
vll v(n);
rep(i,n) cin >> v[i];

cout << LIS(v) << endl;


*/