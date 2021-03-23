#include<iostream>
using namespace std;
class Swap
{
	private:
			int x,y,temp;
	public:
			Swap()
			{
				cout<<"\n Enter the two numbers:";
				cin>>x>>y;
			}
			void swapping()
			{
				cout<<"\n Before swapping x= "<<x<<" and y= "<<y;
				temp=x;
				x=y;
				y=temp;
				cout<<"\n After swapping x= "<<x<<" and y= "<<y;
			}
};
int main()
{
	Swap s;
	s.swapping();
	return 0;
}
