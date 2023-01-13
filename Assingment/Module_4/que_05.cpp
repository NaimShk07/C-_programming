#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
       string depositorName;
       int accountNumber;
       string accountType;
       int balance;

public:
       BankAccount(string name, int number, string type, int bal)
       {
              depositorName = name;
              accountNumber = number;
              accountType = type;
              balance = bal;
       }

       void deposit(int amount)
       {
              balance += amount;
       }

       void withdraw(int amount)
       {
              if (amount > balance)
              {
                     cout << "Insufficient balance!" << std::endl;
              }
              else
              {
                     balance -= amount;
              }
       }

       void display()
       {
              cout << "Depositor Name: " << depositorName << std::endl;
              cout << "Account Number: " << accountNumber << std::endl;
              cout << "Account Type: " << accountType << std::endl;
              cout << "Balance: " << balance << std::endl;
       }
};

int main()
{
       BankAccount account("Naim Shaikh", 12345, "Savings", 1000);
       account.display();
       account.deposit(500.0);
       account.display();
       account.withdraw(1500.0);
       account.display();

       return 0;
}
