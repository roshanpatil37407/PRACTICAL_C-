#include<iostream>
using namespace std;
class text
{
	protected:
		float len;
		public:
			void get()
			{
				cout<<"\n enter the length of squre";
				cin>>len;
			}
			virtual float calarea()=0;
};
class squre:public text
{
	public:
		float calarea()
		{return len*len;
		}
};
class circle:public text
{
	public:
		int red;
		void get1()
		{
			cout<<"\n enter the radius of circle :";
			cin>>red;
			
		}
		float calarea()
		{return  3.14*red*red;
		}
		
};
int main ()
{
	squre s;
	circle c;
	s.get();
	cout<<"\n area of squre :"<<s.calarea();
	c.get1();
	cout<<"\n area of circle :"<<c.calarea();
	
}

