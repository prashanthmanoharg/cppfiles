#include<iostream>
#include<cstdlib>
#include<pthread.h>
using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
	long tid;
	tid=(long)threadid;
	cout<<"Hello World! Thread ID, "<<tid<<endl;
	pthread_exit(NULL);

}

void *Func1(void *threadid)
{
	long tid;
	tid=(long)threadid;
	cout<<"Welcome To C++"<<tid<<endl;
	pthread_exit(NULL);
}

int main()
{
pthread_t threads[NUM_THREADS];
int rc;
int i;
int cr;

for(i=0;i<NUM_THREADS;i++)
{
	cout<<"main(): Creating Threads, "<<i<<endl;
	rc=pthread_create(&threads[i],NULL,PrintHello,(void *)i);
        cr=pthread_create(&threads[i],NULL,Func1,(void *)i);

	if(rc||cr)
	{
		cout<<"Error: unable to create thread, " << rc<<endl;
		exit(-1);

	}
}
pthread_exit(NULL);

return 0;
}
