//OOPS 
//SYNTAX
// class students{
//     string name;
//     int age;
//     bool gender;
// };

#include <iostream>
using namespace std;
class students{
    public:
    string name;
    int age;
    bool gender;
void info(){
    cout<<"name : ";
    cout<<name<<endl;
    cout<<"age : ";
    cout<<age<<endl;
    cout<<"gender : ";
    cout<<gender<<endl;
    
}
    
};

int main(){
    students arr[3];
    for(int i=0;i<3;i++){
        cout<<"name : ";
        cin>>arr[i].name;
        cout<<"age : ";
        cin>>arr[i].age;
        cout<<"gender : ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].info();
    }

    return 0;
}




[11:01, 19/09/2022] Aarushi: #include <iostream>
using namespace std;
class Student
{
public:
    int age;
    string name;
    bool gender;
    // student(){
    //     cout<<"Default constructor"<<endl;
    // }
    Student(int a, string n, bool ge)
    {
        age = a;
        name = n;
        gender = ge;
        // cout<<"Parametrized constructor"
    }
    // to copy constructor
    Student(Student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // void getName{
    //     cout<<name<<endl;
    // }
    // void setName(string n){
    //     name=n;
    // }
    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
}; 
int main()
{
    Student a(20, "Urvi", 1);
    a.printInfo();
    Student b(20, "Raja", 0);
    b.printInfo();
    Student c = a;
    c.printInfo();
    return 0;
}