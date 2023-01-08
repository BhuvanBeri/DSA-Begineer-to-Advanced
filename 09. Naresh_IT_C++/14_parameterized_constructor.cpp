#include<iostream>
#include<string.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

class stu{
	char name[20], course[20];
public:
	stu(){}                                 //default constructor
	stu(char  name[20], char  course[20])   //parameterized constructor
	{
		strcpy(this->name,name);
		strcpy(this->course,course);
	}
	void showstu(){
		cout<<"Name :"<<name<<endl;
		cout<<"Course :"<<course<<endl;
	}
};

class marks:public stu  // marks = derived class, stu = base class
{
    int m,p,c;
public:
    marks(char name[20],char course[20],int m,int p,int c):stu(name,course)
    {

        marks :: stu(name,course);

        this->m=m;
        this->p=p;
        this->c=c;
    };
    void showmarks()
    {
        cout<<"Maths marks : "<<m<<endl;
        cout<<"Physics marks : "<<p<<endl;
        cout<<"Chemistry marks : "<<c<<endl;
    }
};




int main(){
	marks m("Ram","Engineering",65,75,85);
	m.showstu();
	m.showmarks();
}