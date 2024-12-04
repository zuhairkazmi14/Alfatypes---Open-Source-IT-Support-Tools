#include<iostream>

using namespace std;

class MathOperations 
{

public:
	int add(int a, int b)
	{
		return a + b;
	}
	int add(int a, int b, int c)
	{
		return a + b + c;
	}
	




};
int main() 
{
	int a = 5, b = 8, c = 10;
	MathOperations test;
	cout << "Adding " << a << "\t" << b<<"\t"<<"=\t" << test.add(a, b) << endl;
	cout << "Adding " << a << "\t" << b<<"\t"<<c<<"\t=" << "\t" << test.add(a, b, c);




	return 0;
}