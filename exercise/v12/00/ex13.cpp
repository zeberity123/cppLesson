#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char * name;
	int age;
public:
	Person(char * myname, int myage)
	{
		int len=strlen(myname)+1;
		name = new char[len];
		strcpy(name, myname);
		age=myage;
	}
	void ShowPersonInfo() const
	{
		cout<<"�̸� : "<<name<<endl;
		cout<<"����: "<<age<<endl;
	}
	Person& operator=(const Person& ref)
	{
		delete []name;
		int len=strlen(ref.name)+1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
	~Person()
	{
		delete []name;
		cout<<"called destructor!"<<endl;
	}
};

int main(void)
{
	Person man1("H.M", 39);
	Person man2("K.R", 16);
	man2=man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
