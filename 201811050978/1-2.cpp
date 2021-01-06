#include<iostream>
using namespace std;
void merge(int &u, int &v)
{
	int m, n, t, d;
	int c;
	m = v / 10;
	n = u / 10;
	t = v % 10;
	d = u % 10;
	c = d * 1000 + t * 100 + n * 10 + m;
	cout << c << endl;
}
void main()
{
	int a, b;
	cout << "ÇëÊäÈëa,bµÄÖµ:  " << endl;
	cin >> a >> b;
	merge(a, b);
}