#include <iostream>
using namespace std;

//AccountType 1.Saving Account 2.Current Account 3.CC Account

class Account
{
   public:
   virtual double chkBalance() = 0;
   virtual double interestCalc() = 0;
};

class SavingAccount : public Account
{
    double chkBalance() override 
    {
        return balance;
    }
    
    double interestCalc() override
    {
        return balance * 0.05;
    }
    private:
    double balance = 500000;
};

class CurrentAcccount : public Account
{
     double chkBalance() override 
    {
        return balance;
    }
    
    double interestCalc() override
    {
        return balance * 0.08;
    }
    private:
    double balance = 600000;
};

int main()
{
    Account *saving = new SavingAccount();
    cout<<saving->chkBalance()<<endl;
    cout<<saving->interestCalc()<<endl;
    Account *current = new CurrentAcccount();
    cout<<current->chkBalance()<<endl;
    cout<<current->interestCalc()<<endl;
    return 0;
}


/*
  Open Closed principles:
  Open-Closed Principle states that “Software Components (such as classes, modules, function, etc) should be open for extension but close for modifications.”
  In simple terms, it means that new functionality in the code can be added without changing existing source code.
*/

/*
Software Entity (Class) Should open for extension but closed for modification. 
We have multiple ways to acheive Open Closed Principle like inheritance, DI ..
Adv: less existing code changes. old code wont produce new bugs.

*/

