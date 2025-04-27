#include<iostream>
using namespace std;

class circle
{
	public:
		int r;
		float area;
		
		circle()
		{
			cout<<"Enter radius= ";
			cin>>r;
			area=3.142*r*r;
			cout<<"Area1= "<<area;
		}
		circle(int r1)
		{
			r=r1;
			area=3.142*r*r;
			cout<<"\nArea2= "<<area;
		}
		circle(circle &obj)
		{
			r=obj.r;
			area=3.142*r*r;
			cout<<"\nArea3= "<<area;
		}
		~circle();
};
int main()
{
	circle obj1;
	circle obj2(5);
	circle obj3(obj2);
}
circle::~circle()
{
	cout<<"\nDestructor run..";
}
