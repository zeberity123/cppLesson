# include <iostream>

using namespace std;

class A
{
	int mv;
	
public: // const함수 사용 

	A()
	{
//		mv=456;		
		cout << " void constructor is called " << endl;
	}
	
	A( int i )
	{
		mv = i;
		cout << " (int) constructor is called " << endl;
	}
	
	int Get() const
	{
		return mv;
	}
	
	void Set()
	{
		mv = 123;
	}
};

int main()
{
	A  a(789);
//	a.Set();
	cout << a.Get() << endl;
	
	return 0;
}
