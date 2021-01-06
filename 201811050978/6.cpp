#include<iostream>
using namespace std;
class vehicle
{
protected:
	int wheels;
	float weight;
public:
	vehicle(int w1, float w2)
	{
		wheels = w1;
		weight = w2;
	}
	void printf()
	{
		cout << "wheels=" << wheels << "," << "weight=" << "weight" << endl;
	}
};
class car :private vehicle
{
	int passenger_load;
public:
	car(int w1, float w2, int p1) :vehicle(w1, w2)
	{
		passenger_load = p1;
	}
	void printf()
	{
		vehicle::printf();
		cout << "passenger_load=" << passenger_load << endl;
	}
};
class truck :private vehicle
{
	int passenger_load;
	float payload;
public:
	truck(int w1, float w2, int p1, float p2) :vehicle(w1, w2)
	{
		passenger_load = p1;
		payload = p2;
	}
	void printf()
	{
		vehicle::printf();
		cout << "passenger_load=" << passenger_load << "," << "payload=" << payload << endl;
	}
};
void main()
{
	vehicle v(100, 542.2);
	v.printf();
	car c(99, 64.2, 64);
	c.printf();
	truck t(48, 29.5, 26, 49.8);
	t.printf();
}