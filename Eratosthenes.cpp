vector<bool> sieve(long long max) {
	vector<bool> IsPrime;
	if (max + 1 > IsPrime.size()) {     // resize‚Å—v‘f”‚ªŒ¸‚ç‚È‚¢‚æ‚¤‚É
		IsPrime.resize(max + 1, true); // IsPrime‚É•K—v‚È—v‘f”‚ğŠm•Û
	}
	IsPrime[0] = false; // 0‚Í‘f”‚Å‚Í‚È‚¢
	IsPrime[1] = false; // 1‚Í‘f”‚Å‚Í‚È‚¢

	for (long long i = 2; i*i <= max; ++i) // 0‚©‚çsqrt(max)‚Ü‚Å’²‚×‚é
		if (IsPrime[i]) // i‚ª‘f”‚È‚ç‚Î
			for (ll j = 2; i*j <= max; ++j) // (maxˆÈ‰º‚Ì)i‚Ì”{”‚Í
				IsPrime[i*j] = false;      // ‘f”‚Å‚Í‚È‚¢
	return IsPrime;
}