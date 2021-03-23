#include<iostream>
using namespace std;
class Prime
{
	private:
			int n,i,flag=0;
	public:
			Prime()
			{
				cout<<"\n Enter the number:";
				cin>>n;
			}
			void findprimenum()
			{
				for(i=2;i<n/2;i++)
				{
					if(n%i==0)
					{
						flag=1;
						break;
					}
				}
			}
			void display()
			{
				if(flag==1)
				{
					cout<<n<<" is not a prime number.";
				}
				else
				{
					cout<<n<<" is a prime number.";
				}
			}
};
int main()
{
	Prime p;
	p.findprimenum();
	p.display();
	return 0;
}
