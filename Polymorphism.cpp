#include <iostream>
using namespace std;


class Student{
private:

    int m_age;

public:
    //声明构造函数
    Student();
    virtual void setage(int age);
    //声明普通成员函数
    void show();
};

Student::Student(){

    m_age = 0;
}


void Student::setage(int age){

    m_age = age;
}
//定义普通成员函数
void Student::show(){
    cout<<"my age is"<<m_age<<endl;
}



class Child : public Student{
private:
    int m_age;

public:

    Child();

};

Child::Child()
{
    m_age = 0;
}


int main(){

    Child son;
    Child &r = son;
    r.show();
    r.setage(25);
    r.show();
    return 0;
}
