#include  <iostream>
#include <string.h>
#include <assert.h>
using namespace std;
class cstring
{
	public:
		cstring(char* data = "\0")
		{
			m_data = new char[strlen(data)+1];
			strcpy(m_data,data);
		}
		~cstring()
		{
			delete []m_data;
		}
		cstring(const cstring &str)
		{
			m_data = new char[strlen(str.m_data)+1];
			assert(m_data != NULL);
			strcpy(m_data,str.m_data);
		}
//		cstring& operator=(const cstring &str) //一般方法。
//		{
//			if (this != &str)
//			{
//				delete []m_data;
//				m_data = NULL;
//				this->m_data = new char[strlen(str.m_data)+1];
//				strcpy(this->m_data,str.m_data);
//			}
//			return *this;
//		}

		cstring& operator=(const cstring &str)
		{
			if (this != &str)
			{
				cstring tmp(str);
				char* ptmp = tmp.m_data;
				tmp.m_data = m_data;
				m_data = ptmp;//交换两个对象的两个值通过析构临时对象的成员变量来析构本身的变量。
			}

			return *this;

		}
		
		void show()
		{
			cout<<this->m_data<<endl;
		}
	private:
		char* m_data;
};


int main()
{
	cstring str("srtff");
	cstring fg(str);
	cstring df;
	df = fg;
	str.show();
	fg.show();
	df.show();
	return 0;
}
