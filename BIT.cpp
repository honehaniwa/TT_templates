// thanks for heno_code
//Binary Index Tree
struct BIT {
private:
	vector<long long> node; int n;
public:
	void init(int n_) {
		n = n_; node.resize(n, 0);
	}
	//0-indexed
	void add(int a, long long w) {
		for (int i = a; i < n; i |= i + 1)node[i] += w;
	}
	//[0,a)
	long long sum(int a) {
		long long ret = 0;
		for (int i = a - 1; i >= 0; i = (i&(i + 1)) - 1)ret += node[i];
		return ret;
	}
	//[a,b)
	long long sum(int a, int b) {
		return sum(b) - sum(a);
	}

	void debug() {
		cerr << node << endl;
	}
};