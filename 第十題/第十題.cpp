#include<iostream>
using namespace std;

int euc(int a, int b);
int main()
{
	int in = 0, in2 = 0, c = 0;

	cin >> in >> in2;
	if (in < in2)
	{
		c = in;
		in = in2;
		in2 = c;
	}
	cout << euc(in, in2) << endl;
	return 0;
}
int euc(int a, int b)
{
	int f = a % b;
	if (f == 0) return b;
	else return euc(b, f);
}
