vll enum_div(ll n)//n‚Ì–ñ”‚ğ—ñ‹“
{
	vll w;
	for (int i = 1; i*i <= n; ++i)
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
	return w;
}