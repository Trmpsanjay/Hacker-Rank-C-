#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person 
{
    protected:
    int age;
    char name[70];
    public:
       virtual void getdata()=0;
       virtual void putdata()=0;
};

class Professor : public Person
{
    protected:
        int publications;
        static int cur_id;
        int cur;
    public:
        Professor()
        {
            ++cur_id;
            publications=0;
        }
        void getdata()
        {
            cin>>name>>age>>publications;
            cur=cur_id;
        }
        void putdata() 
        {
            cout<<name<< " "<<age<<" "<<publications<<" "<<cur<<endl;
        }
};

int Professor ::cur_id;


class Student : public Person
{
    protected:
        int marks[6],sum;
         static int cur_id;
         int cur;
    public:
        Student()
        {
            cur_id++;
            sum=0;

        }
        void getdata()
        {
            cin>>name>>age;
            cur=cur_id;
            for( int i=0;i<6;i++)
            {cin>>marks[i];}
        }

        void putdata()
        {
            for(int i=0;i<6;i++)
            {sum=sum+marks[i];}
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur<<endl;
        }
};
int Student ::cur_id;
int main(){
