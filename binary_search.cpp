bool isOK(int mid) {
	if (mid>100) return true;//�����͖��ɍ��킹�ď�������ς���
	else return false;
}

int binary_search(long long n) {
	int ng = -1; //�uindex = 0�v�������𖞂������Ƃ�����̂ŁA�����l�� -1
	int ok = n; // �uindex = a.size()-1�v�������𖞂����Ȃ����Ƃ�����̂ŁA�����l�� a.size()
				// ok �� ng �̂ǂ��炪�傫�����킩��Ȃ����Ƃ��l��
	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		//cout << mid << " " << key << endl;
		if (isOK(mid)) ok = mid;
		else ng = mid;
	}

	return ok;
}

/*
main���ɏ��������Ƃ��p

long long ng = 0,ok = 1<<18;

while (abs(ok - ng) > 1) {
	long long mid = (ok + ng) / 2;
	if (������) ok = mid;
	else ng = mid;
}

*/