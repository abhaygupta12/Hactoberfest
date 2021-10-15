#include <iostream>
using namespace std;
long long int fib(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int fib_itr(int n)
{
	int a = 0;
	int b = 1;
	int c;
	for (int i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;

}
int main()
{
	int n;
	cin >> n;
	cout << fib(n)<<endl;
	cout<<fib_itr(n);

}