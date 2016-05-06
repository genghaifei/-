#include <iostream>
#include <stack>
using namespace std;


class queue
{
	public:
		queue()
		{};
		~queue()
		{}
		
		bool appendTail(int key)
		{
			st1.push(key);
		}
		int deleteHead()
		{
			if ( !st2.empty())
			{
				while ( !st1.empty())
				{
					st2.push(st1.top());
					st1.pop();
				}
			}
			int ret = st2.top();
			st2.pop();
			return ret;
		}
	private:
		stack<int> st1;
		stack<int> st2;
};


int main()
{
	queue qu;
	qu.appendTail(10);
	qu.appendTail(1);
	qu.appendTail(14);
	qu.appendTail(15);
	qu.appendTail(17);
	cout<<qu.deleteHead()<<endl;
	cout<<qu.deleteHead()<<endl;
	cout<<qu.deleteHead()<<endl;
	cout<<qu.deleteHead()<<endl;
	cout<<qu.deleteHead()<<endl;

	return 0;
}
