#include <iostream>
#include <stdio.h>
#include <pthread.h>
using namespace std;
//
//class singleton
//{
//	public:
//		static singleton *GetInstance()
//		{
//			static singleton instance;
//			return &instance;
//		}
//		void prin()
//		{
//			cout<<"hello i am singleton"<<endl;
//		}
//	private:
//		singleton()
//		{}
//		singleton(const singleton &);
//		singleton& operator=(const singleton &);//只声明不实现
//};

class singleton;

pthread_mutex_t Mutex = PTHREAD_MUTEX_INITIALIZER;

singleton singleton::*instance = NULL;

class singleton
{
	public:
		static singleton * GetInstance()
		{
			if (instance == NULL)
			{
				pthread_mutex_lock(&Mutex);
				if (instance == NULL)
				{
					instance = new singleton();
				}		
				pthread_mutex_unlock(&Mutex);
			}
			return instance;
		}
		void prin()
		{
			cout<<"hello i am a singleton"<<endl;
		}
	private:
		singleton()
		{}
		singleton(const singleton &);
		singleton & operator=(const singleton &);
	private:
		static singleton *instance;
};


int main()
{

	pthread_mutex_init(&Mutex,NULL);
	static singleton *instanced = singleton::GetInstance();
	static singleton *instance2 = singleton::GetInstance();
	printf("%x\n",&(*instanced));//the same address
	printf("%x\n",&(*instance2));
	instanced->prin();
	return 0;
}
