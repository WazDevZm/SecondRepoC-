#include<iostream>
#include<cmath>
using namespace std;

class BankAccount {
    private:
    double balance;
    public:
    BankAccount(string name, double balance){// this is only used inside a class not outside
        this->balance = balance;
    }
    double withdraw(double amount);//prototype
    double deposit (double amount);// Prototype
    double MainBalance(double amount);
};// class ends here
double BankAccount::withdraw(double amount){// ::
    if(balance>=amount){
        balance = balance - amount;
        return balance;

    }
}
// this method is for depositing
double BankAccount::deposit(double amount){
    if(amount>0){ // checks if amount being deposited is a positve number greater than zero
        balance = amount + balance;
        return balance;
    }
}

double BankAccount::MainBalance(double amount){
    return balance;
}



int main (){
    cout<<"Welcome to ABSA Bank"<<endl;
    cout<<"The following are your acount details:"<<endl;
    cout<<"Name: Wazingwa Mugala"<<endl;
    cout<<"Acoount Number: 232243435"<<endl;
    cout<<"Branch Name: Kitwe"<<endl;

    BankAccount ba("Wazingwa Mugala", 12000);
    double balance = ba.withdraw(9500);// local scope
    cout<<"Your Balance iS- K"<<balance<<endl;
    balance = ba.deposit(15000);
    cout<<"Your deposit- K"<<balance<<endl;
    cout<<"Your Final Balance is: K"<<balance;
    cout<<"tHIS IS THE END OF THE PRGRAM EXECUTION, THANK YOU FOR SUING OUR SERVIVES"<<endl;
    

return 9;
}