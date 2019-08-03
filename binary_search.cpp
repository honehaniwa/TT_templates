bool isOK(int mid, double key) {
	double y = (double)mid / (double)n;
	//cout << sqrt(key + y * y) << " ";
	if (sqrt(key + (y * y)) <= 1) return true;
	else return false;
}

int binary_search(double key) {
	int ng = -1; //�uindex = 0�v�������𖞂������Ƃ�����̂ŁA�����l�� -1
	int ok = n; // �uindex = a.size()-1�v�������𖞂����Ȃ����Ƃ�����̂ŁA�����l�� a.size()
				// ok �� ng �̂ǂ��炪�傫�����킩��Ȃ����Ƃ��l��
	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		//cout << mid << " " << key << endl;
		if (!isOK(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
}