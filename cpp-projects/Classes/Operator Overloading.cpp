#include<iostream>

using namespace std;

class Vector2D 
{
	int x;
	int y;
public:

	Vector2D(int x, int y) { this->x = x; this->y = y; }

	Vector2D operator-()
	{
		x = -x;
		y = -y;
		return *this;
	}

	int get_x() { return x; }
	int get_y() { return y; }
};

class Counter 
{
	int count;

public:

	Counter() :count(0) {}
	Counter operator++() 
	{
		
		count++;

		return *this;
	
	}

	Counter operator++(int a) 
	{
		Counter C_temp;
		C_temp = *this;

		count++;
		return C_temp;
	}
	int get_Count() 
	{
	
		return count;
	}


	void print() 
	{
	
		cout << count;
	
	}
};


int main() 
{
	Vector2D v1(2, 5);

	cout << "vector Before Negation\tx\t" << v1.get_x() << "\ty\t" << v1.get_y() << endl;
	v1 = -v1;

	cout << "vector After Negation\tx\t" << v1.get_x() << "\ty\t" << v1.get_y()<<endl;

	Counter C;
	
	cout << "Counter Postfix: \t" << (C++).get_Count() << endl;
	++C;
	cout << "Counter Prefix: \t" << C.get_Count()<<endl;
	



}