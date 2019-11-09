//�Œ����ʕ���������̒T��
vector<long long> Z_algorithm(const string &s) {
	int N = s.size();
	vector<long long> a(N);
	a[0] = N;
	int i = 1, j = 0;
	while (i < N) {
		while (i + j < N&&s[j] == s[i + j])++j;
		a[i] = j;
		if (j == 0) { ++i; continue; }
		int k = 1;
		while (i + k < N&&k + a[k] < j)a[i + k] = a[k], ++k;
		i += k; j -= k;
	}
	return a;
}
/*
�擪�Ɠ��������o�Ă����瓯�������̐������J�E���g����B
��)
aaabaaaab
921034210

2�����ڂ���`�Ɛ擪�����炵�����Ƃ���
rep(i, n) {
	ll len = n - i;
	auto v = Z_algorithm(s);
	//Pvll(v);
	rep(j, len) {
		ll num = min(v[j], (ll)j);
		ans = max(ans, num);
	}
	s.erase(s.begin());
}
�݂����Ƀ��[�v���񂵂Ȃ���擪�̕������������������
*/