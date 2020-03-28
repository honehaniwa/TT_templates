template<typename T>
struct Two_dimension_cumsum {
private:
	vector<vector<T>> cal; int H, W;
public:
	void debug() {
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cerr << cal[i][j] << " ";
			}
			cerr << endl;
		}
	}

	void init(vector<vector<T>> v) {
		H = v.size(), W = v[0].size();
		for (int i = 0; i < H; i++) {
			for (int j = 1; j < W; j++) {
				v[i][j] += v[i][j - 1];
			}
		}
		for (int i = 1; i < H; i++) {
			for (int j = 0; j < W; j++) {
				v[i][j] += v[i - 1][j];
			}
		}
		cal = v;
	}

	T sum(int x1, int y1, int x2, int y2) {
		int ret = cal[x2][y2];
		if (0 < x1)ret -= cal[x1 - 1][y2];
		if (0 < y1)ret -= cal[x2][y1 - 1];
		if (0 < x1 && 0 < y1)ret += cal[x1 - 1][y1 - 1];
		return ret;
	}

};

/*
How to use

// �錾(�^��long long�ɂ���ꍇ)
Two_dimension_cumsum<ll> cumsum;

// �ݐϘa�v�Z(���ɓ��͍ς�2����vector v�ɑ΂���)
cumsum.init(v);

// �Z�o((x1, y1) ���� (x2, y2)�܂ł̗ݐϘa)
int ans = cumsum.sum(x1, y1, x2, y2);

// �f�o�b�O�p(�ݐϘa�v�Z�pvector��private�ɂ��Ă��邽��)
cumsum.debug()

// �m�F�p�y�[�W
// https://qiita.com/drken/items/56a6b68edef8fc605821#4-%E4%BA%8C%E6%AC%A1%E5%85%83%E7%B4%AF%E7%A9%8D%E5%92%8C


*/

/*
��(���E�֘A�Ŏ��ɂ����Ȃ̂Œǉ����Ă���)

void solve() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> V(h, vll(w, 0));
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			cin >> V[i][j];
		}
	}
	Two_dimension_cumsum<int> cum;
	cum.init(V);
	int Q; cin >> Q;
	// for debug
	cum.debug();
	while (Q--) {
		int x1, y1, x2, y2;
		// ���͂�[ (x1,y1), (x2,y2) )�œ����Ă���
		// �܂�(x1, y1)�͋��E���Ɋ܂ނ�(x2, y2)�͋��E���Ɋ܂܂Ȃ�
		cin >> x1 >> x2 >> y1 >> y2;
		x2--, y2--;//���̃v���O�����͋��E���Ɋ܂ނ�ōl����
		cout << cum.sum(x1, y1, x2, y2) << endl;
	}
}
*/