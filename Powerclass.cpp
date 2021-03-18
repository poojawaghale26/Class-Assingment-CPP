#include<iostream>
using namespace std;
class Power
{
	private:
			int base,index,i,pow=1;
	public:
			void input()
			{
				cout<<"\n Enter the base:";
				cin>>base;
				cout<<"\n Enter the index:";
				cin>>index;
			}
			void process()
			{
				for(i=1;i<=index;i++)
				{
				pow=pow*base;
				}
			}
			void show()
			{
				cout<<base<<" raise to "<<index<<" is "<<pow;
			}
};
int main()
{
	Power obj;
	obj.input();
	obj.process();
	obj.show();
	return 0;
}
