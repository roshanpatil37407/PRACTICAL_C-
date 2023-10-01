#include<iostream>
using namespace std;
class roshan
{
	private:
		int meter;
		public:
			friend int fun(roshan);
};
int fun(roshan d)
{
	d.meter+=5;
	return d.meter;
}
int main()
{
	roshan d;
	cout<<"\nroshan :"<<fun(d);
}
