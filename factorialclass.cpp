#include<iostream>
using namespace std;
class Factorial
{
	private:
			int num,i,fact=1;
	public:
			void input()
			{
				cout<<"\n Enter the number:";
				cin>>num;
			}
			void process()
			{
				for(i=1;i<=num;i++)
				{
					fact=fact*i;
				}
			}
			void display()
			{
				cout<<"\n Factorial of "<<num<<" is "<<fact;
			}
};
int main()
{
	Factorial f;
	f.input();
	f.process();
	f.display();
	return 0;
}
