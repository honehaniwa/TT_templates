vector<bool> sieve(long long max) {
	vector<bool> IsPrime;
	if (max + 1 > IsPrime.size()) {     // resize�ŗv�f��������Ȃ��悤��
		IsPrime.resize(max + 1, true); // IsPrime�ɕK�v�ȗv�f�����m��
	}
	IsPrime[0] = false; // 0�͑f���ł͂Ȃ�
	IsPrime[1] = false; // 1�͑f���ł͂Ȃ�

	for (long long i = 2; i*i <= max; ++i) // 0����sqrt(max)�܂Œ��ׂ�
		if (IsPrime[i]) // i���f���Ȃ��
			for (ll j = 2; i*j <= max; ++j) // (max�ȉ���)i�̔{����
				IsPrime[i*j] = false;      // �f���ł͂Ȃ�
	return IsPrime;
}