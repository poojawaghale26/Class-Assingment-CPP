#include<iostream>
using namespace std;
class Reverse
{
	private:
			int num,rev=0,rem;
	public:
			Reverse() //default constructor;
			{
				cout<<"\n Enter the number:";
				cin>>num;
			}
			Reverse( int no) //argumented constructor;
			{
				num=no;
			}
			void process()
			{
				while(num!=0)
				{
					rem=num%10;
					rev=rev*10+rem;
					num=num/10;
				}
			}
			void show()
			{
				cout<<"\n The Reverse number is "<<rev;
			}
};
int main()
{
	Reverse r1;
	r1.process();
	r1.show();
	Reverse r2(456);
	r2.process();
	r2.show();
	return 0;
}
