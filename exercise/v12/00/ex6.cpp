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
	delete ptr; //stack�� �ִ� ptr�� �ƴ� heap�� �ִ� ptr�� new First�� ���� -> delete �ص� ptr�� ������� 
	
	ptr=new Second();
	ptr->SimpleFunc();
	delete ptr;
	return 0;
}
