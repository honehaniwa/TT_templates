bool isOK(int mid) {
	if (mid>100) return true;//ここは問題に合わせて条件式を変える
	else return false;
}

int binary_search(long long n) {
	int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
	int ok = n; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
				// ok と ng のどちらが大きいかわからないことを考慮
	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		//cout << mid << " " << key << endl;
		if (isOK(mid)) ok = mid;
		else ng = mid;
	}

	return ok;
}

/*
main内に書きたいとき用

long long ng = 0,ok = 1<<18;

while (abs(ok - ng) > 1) {
	long long mid = (ok + ng) / 2;
	if (条件式) ok = mid;
	else ng = mid;
}

*/