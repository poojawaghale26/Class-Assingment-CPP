#include<iostream>
using namespace std;
class Reverse
{
	private:
			int no,rev=0,rem;
	public:
			void input()
			{
				cout<<"\n Enter the number:";
				cin>>no;
			}
			void process()
			{
				while(no!=0)
				{
					rem=no%10;
					rev=rev*10+rem;
					no=no/10;
				}
			}
			void show()
			{
				cout<<"\n The Reverse number is "<<rev;
			}
};
int main()
{
	Reverse obj;
	obj.input();
	obj.process();
	obj.show();
	return 0;
}
