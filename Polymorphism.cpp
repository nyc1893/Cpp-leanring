#include <iostream>
using namespace std;


class Person{
private:

    int m_age;

public:
    //声明构造函数
    Person();
    void setage(int age);
    //
    void show();
};

Person::Person(){

    m_age = 20;
}


void Person::setage(int age){

    m_age = age;
}
//定义普通成员函数
void Person::show(){
    cout<<"my age is"<<m_age<<endl;
}



class Student : public Person{
private:
    int m_age;

public:

    Student();

};

Student::Student()
{
    m_age = 20;
}


void oper(Student *anyone){
	anyone->setage(0);
}

int main(){

    Student stu;
    Student &r = stu;
    r.show();
    oper(&r);
    r.show();
    r.setage(25);
    r.show();
    return 0;
}
