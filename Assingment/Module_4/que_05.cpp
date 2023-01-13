#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
       string name;
       int accountNumber;
       string typeOfAccount;
       int balance;

public:
       void assignValues(string n, int a, string t, int b)
       {
              name = n;
              accountNumber = a;
              typeOfAccount = t;
              balance = b;
       }

       void deposit(int amount)
       {
              balance += amount;
       }

       void withdraw(int amount)
       {
              if (amount > balance)
              {
                     cout << "Insufficient balance!" << endl;
              }
              else
              {
                     balance -= amount;
              }
       }
       void display()
       {
              cout << "Depositor Name: " << name << endl;
              cout << "Account Number: " << accountNumber << endl;
              cout << "Account Type: " << typeOfAccount << endl;
              cout << "Balance: " << balance << endl;
       }
};

int main()
{
       BankAccount person1;
       person1.assignValues("Naim Shaikh", 12345, "Savings", 1000);
       person1.display();
       person1.deposit(500.0);
       person1.display();
       person1.withdraw(1500.0);
       person1.display();

       return 0;
}
