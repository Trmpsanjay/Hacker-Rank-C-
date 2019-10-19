#include <iostream>
#include<string.h>
#include <sstream>
using namespace std;
class Student
{
    private:
        int age,standard;
        string first_name,last_name;
    public:
        void set_age(int a)
        {
            age=a;
        }

        int get_age()
        {
            return age;
        }
        void set_standard(int b)
        {
            standard=b;
        }
        int get_standard()
        {
            return standard;
        }
        void set_first_name(string d)
        {
            first_name=d;
        }
        string get_first_name()
        {
            return first_name;
        }
        void set_last_name(string e)
        {
            last_name=e;
        }
        string get_last_name()
        {
            return last_name;
        }
        string to_string()
    { 
         string str;
         stringstream ss;
         ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
         str = ss.str();
         return str;
        }
    
};

/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
