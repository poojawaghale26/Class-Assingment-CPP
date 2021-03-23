#include<iostream>
using namespace std;
class Armstrong
{
	private:
			int n,num,res=0,rem;
	public:
			Armstrong()
			{
				cout<<"\n Enter the number: ";
				cin>>n;
			}
			void process()
			{
				num=n;
				while(num!=0)
				{
					rem=num%10;
					res=res+(rem*rem*rem);
					num=num/10;
				}
			}
			void show()
			{
				if(n==res)
				{
					cout<<res<<" is an Armstrong number.";
				}
				else
				{
					cout<<res<<" is not an Armstrong number.";
				}
			}
};
int main()
{
	Armstrong a;
	a.process();
	a.show();
	return 0;
}
