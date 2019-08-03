bool isOK(int mid, double key) {
	double y = (double)mid / (double)n;
	//cout << sqrt(key + y * y) << " ";
	if (sqrt(key + (y * y)) <= 1) return true;
	else return false;
}

int binary_search(double key) {
	int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
	int ok = n; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
				// ok と ng のどちらが大きいかわからないことを考慮
	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		//cout << mid << " " << key << endl;
		if (!isOK(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
}