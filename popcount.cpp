template <typename T>
inline int pop_count(T n) {
	static int dp[0xFFFF];
	if (dp[1] == 0) {
		for (int i = 0; i < 0xFFFF; i++) dp[i] = dp[i / 2] + i % 2;
	}
	static_assert(std::is_integral<T>(), "T must be integer");
	constexpr int sect = sizeof(T) / 2;
	int res = 0;
	for (int i = 0; i < sect; ++i) {
		res += dp[n & 0xFFFF];
		n >>= 16;
	}
	return res;
}
/*
from https://tubo28.me/compprog/algorithm/popcount/
visual studioŠÂ‹«‚¾‚Æ__builtin_popcount‚ªŽg‚¦‚¸‹ƒ‚­‹ƒ‚­ŽØ‚è‚é‚±‚Æ‚É

*/