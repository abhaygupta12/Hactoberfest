#include <iostream>
#include<vector>
using namespace std;

int p[100000005] = {0};

// seieve
vector<int> prime_sieve(int *p, int n)
{	p[0] = p[1] = 0;
	p[2] = 1;
	int i;
	// mark all odd as prime only
	for ( i = 3; i <= n; i += 2)
	{
		p[i] = 1;
	}
	if (p[i])
	{	// mark all multiple of current prime as 0
		for (int j = i * i; j <= n; j += 2 * i)
		{
			p[j] = 0;
		}
	}

	vector<int> primes;
	primes.push_back(2);
	for (int i = 3; i <= n; i += 2)
	{
		if (p[i] == 1)
		{
			primes.push_back(i);
		}
	}

	return primes;

}

int no_of_div(int m, vector<int> &primes)
{

	int i = 0;
	int p = primes[0];
	int ans = 1;
	while (p * p <= m)
	{
		if (m % p == 0)

		{
			int count = 0;

			while (m % p == 0)
			{
				count++;
				m = m / p;
			}
			ans = ans * (count + 1);
		}
		i++;
		p = primes[i];
	} if (m != 1)
	{
		ans = ans * 2;
	}

	return ans;
}

int main()
{

	vector<int> primes = prime_sieve(p, 1000000);
	int tc;
	cin >> tc;
	while (tc--)
	{
		int num;
		cin >> num;
		int divs = no_of_div(num, primes);
		cout << divs << endl;
	}
	return 0;
}