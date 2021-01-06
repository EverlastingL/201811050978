#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
struct Stu {
	int id;
	int chinese;
	int math;
	int english;
	int sum;
}stu[305];
bool cmp(struct Stu a, struct Stu b)
    {
	if (a.sum != b.sum)
	{
		return a.sum > b.sum;//比较学生总成绩
	}
	else
	{
		if (a.chinese != b.chinese)//总成绩相等，比较学生语文成绩
		{
			return a.chinese > b.chinese;
		}
		else
		{
			return a.id < b.id;//总成绩和语文成绩都相等，比较学号
		}
	}
}
int main()
{
	int n, i;
	cin >> n ;
	for (i = 0; i < n; ++i) 
	{
		stu[i].id = i + 1;
		cin >> stu[i].chinese >> stu[i].math >> stu[i].english;
		stu[i].sum = stu[i].chinese + stu[i].math + stu[i].english;
	}
	sort(stu, stu + n, cmp);
	for (i = 0; i < 5; ++i) 
	{
		cout << stu[i].id <<' '<<stu[i].sum << endl;
	}
	return 0;
}