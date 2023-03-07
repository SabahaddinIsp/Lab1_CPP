#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Question-1"<<endl;
    string name;
    int64_t id;
    cout<<"What is your name ?"<<endl;
    cin>>name;
    cout<<"Hello " + name<<endl;
    cout<<"Enter your student Id :"<<endl;
    cin>>id;
    cout<<"Your student Id is: ";
    cout<<id<<endl;


    cout<<""<<endl;
    cout<<"Question-2"<<endl;
    int var1;
    int var2;
    cout<<"Enter the first integer: "<<endl;
    cin>>var1;
    cout<<"Enter the second integer; "<<endl;
    cin>>var2;
    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Differences is: "<<diff<<endl;
    cout<<"Product is: " <<prod<<endl;


    cout<<""<<endl;
    cout<<"Question-3"<<endl;
    string name1;
    int labGrade;
    int midGrade;
    int finalGrade;
    cout<<"Enter your name: "<<endl;
    cin>>name1;
    cout<<"Enter your lab grade: " << endl;
    cin>>labGrade;
    cout<<"Enter your midterm grade: "<<endl;
    cin>>midGrade;
    cout<<"Enter your final grade: "<<endl;
    cin>>finalGrade;
    float totalGrade = labGrade*0.25 + midGrade*0.35 + finalGrade*0.4;
    cout<<"\n";
    cout<<"Name: "<< name1 <<endl;
    cout<<"Lab: "<<labGrade<<endl;
    cout<<"Midterm: "<<midGrade<<endl;
    cout<<"Final: "<<finalGrade<<endl;
    cout<<"Last Score: "<<totalGrade<<endl;


    cout<<""<<endl;
    cout<<"Question-4"<<endl;
    cout<<"*\n**\n***\n**\n*"<<endl;

    return 0;
}
