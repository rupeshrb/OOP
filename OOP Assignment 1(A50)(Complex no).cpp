#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(int r,int i)
		{
			real=r;
			img=i;
		}
		void print(void)
		{
			cout<<real<<"+"<<img<<endl;
		}
		complex operator+(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
		void read(void)
		{
			cout<<real<<"*"<<img<<endl;
		}
		complex operator*(complex c)
		{
			complex temp;
			temp.real=real*c.real;
			temp.img=img*c.img;
			return temp;
		}
		
};
int main()
{
	complex c1(5,7);
	complex c2(4,2);
	complex c3;
	c3=c1+c2;
	complex c4(2,3);
	complex c5(6,1);
	complex c6;
	c6=c4*c5;
	c3.print();
	c6.read();
	return 0;
}
