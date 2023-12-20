#include <iostream>
using namespace std;

class First
{
public:
	virtual void SimpleFunc() { cout<<"First"<<endl;}
};

class Second: public First
{
public:
	virtual void SimpleFunc() { cout<<"Second"<<endl;}
};

int main(void)
{
	First * ptr=new First();
	ptr->SimpleFunc();
	delete ptr; //stack에 있는 ptr이 아닌 heap에 있는 ptr의 new First를 삭제 -> delete 해도 ptr은 살아있음 
	
	ptr=new Second();
	ptr->SimpleFunc();
	delete ptr;
	return 0;
}
