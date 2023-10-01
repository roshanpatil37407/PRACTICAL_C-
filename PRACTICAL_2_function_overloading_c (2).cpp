#include<iostream>
using namespace std;
int fun(int x, int y)
{
	return x+y;
}
double fun(double x,double y)
{
	return x+y;
}
int main()
{
	int n1=fun(8,5);
	double n2=fun(3.3,4.4);
	cout<<"Int="<<n1<<"\n";
	cout<<"Double="<<n2;
	return 0;
}
