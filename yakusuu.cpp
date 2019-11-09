vector<long long> divisor(long long n)//n‚Ì–ñ”‚ğ—ñ‹“
{
	vector<long long> w;
	for (long long i = 1; i*i <= n; ++i)
	{
		if (n%i == 0)
		{
			w.push_back(i);
			//cout << i << endl;
			if (i != 1 && i*i != n)
			{
				w.push_back(n / i);
				//cout << n/i << endl;
			}
		}
	}
	sort(w.begin(), w.end());
	return w;
}