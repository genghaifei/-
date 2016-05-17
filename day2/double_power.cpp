#include <iostream>

using namespace std;

int  double_power(int base,int ext)
{
	if (ext == 0)
		return 1;
	if (ext == 1)
		return base;
	int tmp = double_power(base,ext >> 1);//double_power(base,ext/2);
	tmp *=tmp;
	if (ext & 0x1 == 1)//if (ext % 2 == 1)
		tmp = base*tmp;
	return tmp;

}


int main()
{
	cout<<double_power(4,5)<<endl;
	return 0;
}
