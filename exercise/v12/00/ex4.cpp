#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int a, int b)
		: num1(a), num2(b)
	{}
	SoSimple(SoSimple &copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout<<"Called SoSimple(SoSimple &copy)"<<endl;
	}
	void ShowSimpleData()
	{
		cout<<num1<<endl;
		cout<<num2<<endl;
	}	
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout<<"생성 및 초기화 직전"<<endl;
	SoSimple sim2(sim1);
	cout<<"생성 및 최기화 직후"<<endl;
	sim2.ShowSimpleData(); 
	return 0;
}
