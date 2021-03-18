#include<iostream>
using namespace std;
class Prime
{
	private:
			int num,i,flag=0;
	public:
			void input()
			{
				cout<<"\n Enter the number:";
				cin>>num;
			}
			void process()
			{
				for(i=2;i<=num/2;i++)
				{
					if(num%i==0)
					{
						flag=1;
						break;
					}
				}
			}
			void show()
			{	if(flag==1)
				{
					cout<<num<<" is not a prime number.";
				}
				else
				{
					cout<<num<<" is a prime number.";
				}
			}
};
int main()
{
	Prime obj;
	obj.input();
	obj.process();
	obj.show();
	return 0;
}
