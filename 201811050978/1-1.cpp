#include<iostream>
using namespace std;
void merge(int a, int b)
{
	int m, n, t, d;
	int c;
	     m=b/10;
		 n = a / 10;
		 t = b % 10;
		 d = a % 10;
		 c = d * 1000 + t * 100 + n * 10 + m;
	cout << c << endl;
}
 int main()
{
	int a, b,c;
	cin >> a >> b;
	merge(a, b);
}