#include<iostream>

using namespace std;

class Account{
    public:
    int accountNumber;
    char holderName[40];
    float balance;

    void printData(){
        cout<<endl<<"Account number:"<<accountNumber;
        cout<<endl<<"Name of the holder:";
        puts(holderName);
        cout<<"Balance:Rs. "<<balance<<endl;
    }
};

void activity(float balance){
    float originalBalance, deposit, withdraw;
    char choice;
    originalBalance = balance;

    while(1){
        cout<<endl<<"Do you want to deposit or withdraw money?(For deposit, enter D. For withdrawl, press W)"<<endl;
        cin>>choice;
        if(choice == 'w' || choice == 'W'){
            cout<<"How much amount would you like to withdraw? (Balance:Rs."<<balance<<")"<<endl;
            cin>>withdraw;
            balance -= withdraw;
            if(balance<0){
                cout<<"Your account doesn't have enough balance."<<endl<<"Balance:Rs."<<originalBalance;
            }
            cout<<"Balance atfer withdrawing:Rs."<<balance<<endl;
        }
        else if(choice == 'd' || choice == 'D'){
            cout<<"How much amount would you like to deposit? (Balance:Rs."<<balance<<")"<<endl;
            cin>>deposit;
            balance += deposit;
            cout<<"Balance atfer deposit:Rs."<<balance<<endl;
        }
        else{
            cout<<"Invalid input."<<endl;
        }
        cout<<endl<<"Do you wish to do more activities?(Y for yes and N for no)"<<endl;
        cin>>choice;
        if(choice == 'Y' || choice == 'y'){
            continue;
        }
        else{
            break;
        }
    }

}

int main(){
    Account account;
    cout<<"Enter the account number:";
    cin>>account.accountNumber;
    cin.ignore();
    cout<<"Enter the name of the account holder:";
    cin.getline(account.holderName, 40);
    account.balance = 10000.00;        //Consider this an a amount already there in the account
    
    account.printData();

    activity(account.balance);
}