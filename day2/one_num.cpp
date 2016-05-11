#include <iostream>

using namespace std;

//int one_num(int num)
//{
//	int total = 0;
//	while(num)
//	{
//		if (num & 1)
//			total++;
//		num = num>>1;
//	}
//	return total;
//}
//

int one_num(int num)
{
	int total = 0;
	while(num)
	{
//		if (num & (num-1))
			total++;
		num = num & (num - 1);
	}
	return total;
}

int main()
{
	cout<<one_num(9)<<endl;
}
