#include<iostream>
using namespace std;
int *merge(int a, int b,int *p)
{
	int m, n, t, d;
	m = b/ 10;
	n = a / 10;
	t = b % 10;
	d = a % 10;
	*p = d * 1000 + t * 100 + n * 10 + m;
	cout << *p << endl;
	return 0;
}
int main()
{
	int *merge(int a, int b, int *p);
	int a,b,c;
	int *t;
	cout << "ÇëÊäÈëa,bµÄÖµ: " << endl;
	cin >> a>>b;
	t=merge(a, b,&c);
}