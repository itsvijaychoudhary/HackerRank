#include<iostream>
using namespace std;

struct Student
{
    int age,standard;
    string name,lastname;
    
};

int main(){
    struct Student xyz;
    xyz.age = 15;
    xyz.name = "jhon";
    xyz.lastname = "carmack";
    xyz.standard = 10;

    // printing all the elements in one single raw by a single space //

    // cout<<jhon.age<<jhon.name<<jhon.lastname<<jhon.standard<<endl;


    //cin >> xyz.age >> xyz.name >> xyz.lastname >> xyz.standard;
    cout << xyz.age << " " << xyz.name << " " << xyz.lastname << " " << xyz.standard;

    
    
    return 0;
}