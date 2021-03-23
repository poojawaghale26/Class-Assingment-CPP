#include<iostream>
using namespace std;
class Factorial
{
	private:
			int num,i,fact=1;
	public:
			Factorial()//Default constructor;
			{
				cout<<"\n Enter the number to find factorial:";
				cin>>num;
			}
			Factorial(int n) //Argumented constructor;
			{
				num=n;
			}
			void findfactorial()
			{
				for(i=1;i<=num;i++)
				{
					fact=fact*i;
				}
			}
			void show()
			{
				cout<<"\n Factoial of "<<num<<" is "<<fact;
			}
};
int main()
{
	Factorial f1;
	f1.findfactorial();
	f1.show();
	Factorial f2(6);
	f2.findfactorial();
	f2.show();
	return 0;
}
