#include<iostream>

using namespace std;

class Employee{
    public:
    char name[20];
    int id;
    float basicSalary;
};

int main(){
    int num;
    float finalSalary,tax;
    cout<<"Enter the number of employees:";
    cin>>num;
    Employee e[num];
    for(int i=0;i<num;i++){
    cin.ignore();
    cout<<endl<<"Enter the name of employee no."<<i+1<<":";
    cin.getline(e[i].name, 20);
    cout<<"Enter his/her ID:";
    cin>>e[i].id;
    cout<<"Enter his/her basic salary:";
    cin>>e[i].basicSalary;
    }
    for(int j=0;j<num;j++){
        if(e[j].basicSalary<=20000)
        tax=0;
        else if(e[j].basicSalary<=50000)
        tax=5;
        else if(e[j].basicSalary<=100000)
        tax=7.5;
        else
        tax=10;
        finalSalary=e[j].basicSalary-(e[j].basicSalary*5)/100;
        cout<<endl<<"Employee no."<<j+1<<endl<<e[j].name<<endl<<e[j].id<<endl<<e[j].basicSalary<<endl;
        cout<<"Tax="<<tax<<"%"<<endl<<"Final Salary="<<finalSalary<<endl;
    }
}