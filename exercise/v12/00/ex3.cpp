#include <iostream>
#include <cstring>

using namespace std;

class P
{
	private:
		char * name;
		int age;
	public:
		P(char * myname, int myage)
		{
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname);
			age = myage;
		}
		
		void ShowPInfo() const
		{
			cout<<"이름 : "<<name<<endl;
			cout<<"나이 : "<<age<<endl;
		}
		~P()
		{
			delete []name;
			cout<<"called destructor!"<<endl;
		}
};

int main()
{
	P m1("mk", 16);
	P m2("mm", 11);
	m1.ShowPInfo();
	m2.ShowPInfo();
	return 0;
}
