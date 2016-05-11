#include <iostream>
using namespace std;
//
//int fibb(int num)
//{
//	if (num == 0)
//		return 0;
//	if (num == 2 || num == 1)
//		return 1;
//	return fibb(num-1)+fibb(num-2);
//}

int fibb(int num)
{
	if (num == 0)
		return 0;
	if (num == 1 || num == 2)
		return 1;
	int pos = 2;
	int fibbt = 0;
	int fibb_pre = 1;
	int fibb_pre2 = 1;
	for(;pos < num;pos++)
	{
		fibbt = fibb_pre+fibb_pre2;
		fibb_pre = fibb_pre2;
		fibb_pre2 = fibbt;
	}
	return fibbt; 
}

int main()
{
	cout<<fibb(10)<<endl;;
}
