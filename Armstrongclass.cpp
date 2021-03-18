#include<iostream>
using namespace std;
class Armstrong
{
	private:
			int no,num,rem,res=0;
	public:
			void input()
			{
				cout<<"\n Enter the number:";
				cin>>no;
			}
			void process()
			{
				num=no;
				while(num!=0)
				{
					rem=num%10;
					res=res+(rem*rem*rem);
					num=num/10;
				}
			}
			void show()
			{
				if(res==no)
				{
					cout<<res<<" is an Armstrong number";
				}
				else
				{
					cout<<res<<" is  not an Armstrong number";
				}
			}
};
int main()
{
	Armstrong obj;
	obj.input();
	obj.process();
	obj.show();
	return 0;
}
