#include <ctime>
#include <iostream>

using namespace std;

// Class to store account information
class Account
{
public:
    string name;
    string address;
    string branch;
    int acc_num;
    int balance;

    // Constructor to initialize account information
    Account(string nm, string add, string br, int acc_no, int bal)
    {
        name = nm;
        address = add;
        branch = br;
        acc_num = acc_no;
        balance = bal;
    }

    // Method to deposit amount into account
    void deposit(int amount) { balance += amount; }

    // Method to withdraw amount from account
    bool withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            return true;
        }
        return false;
    }
};

// Function to display the welcome screen
void displayWelcomeScreen()
{
    time_t now = time(0);
    char *dt = ctime(&now);

    cout << "***************** WELCOME *****************\n"
         << endl;
    cout << "-------------------------------------------\n"
         << endl;
    cout << "Date and Time: " << dt << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Press 1 to Access account" << endl;
    cout << "Press 2 to get Help" << endl;
}

// Function to display help screen
void displayHelpScreen()
{
    cout << "You must have the correct PIN number to access this account."
         << endl;
    cout << "See your bank representative for assistance during bank opening "
            "hours."
         << endl;
    cout << "Thank you for choosing us today!" << endl;
}

// Function to display menu screen
void displayMenuScreen()
{
    cout << "\nEnter 1 to deposit cash" << endl;
    cout << "Enter 2 to withdraw cash" << endl;
    cout << "Enter 3 to balance inquiry" << endl;
    cout << "Enter 0 to exit ATM" << endl;
    cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY:" << endl;
}

int main()
{
    int pin = 12345;
    Account acc("Rakesh Kharve", "Mumbai", "Andheri", 5678, 20000);

    displayWelcomeScreen();
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        int enteredPin;
        cout << "Enter ATM pin: ";
        cin >> enteredPin;

        if (enteredPin != pin)
        {
            cout << "You had made your attempt which failed!!! No more attempts "
                    "allowed!! Sorry!!"
                 << endl;
            return 0;
        }
        int option;
        while (option != 0)
        {
            displayMenuScreen();
            // int option;
            cin >> option;
            switch (option)
            {
            case 1:
            {
                int amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);

                cout << "\nThe name of account holder is " << acc.name << endl;
                cout << "The account holder address is " << acc.address << endl;

                cout << "The branch location is " << acc.branch << endl;
                cout << "Account number is " << acc.acc_num << endl;
                cout << "Present available balance " << acc.balance - amount << endl;
                cout << "Enter amount to be deposited " << amount << endl;
                cout << "your new available balanced amount is " << acc.balance << endl;

                cout << "Thank you!" << endl;

                break;
            }
            case 2:
            {
                int amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (acc.balance < amount)
                {
                    cout << "\nThe name of account holder is " << acc.name << endl;
                    cout << "The account holder address is " << acc.address << endl;

                    cout << "The branch location is " << acc.branch << endl;
                    cout << "Account number is " << acc.acc_num << endl;

                    cout << "Insufficient balance in your account !! Sorry !!.\n"
                         << endl;
                }
                else
                {

                    acc.withdraw(amount);

                    cout << "Cash withdrawn successfully.\n"
                         << endl;
                    cout << "Your current Balance is " << acc.balance << endl;
                }
                break;
            }
            case 3:
            {
                cout << "Your current Balance is " << acc.balance << endl;

                break;
            }
            case 0:
            {
                cout << "Thank you for using our ATM." << endl;
                cout << "Have a great day!" << endl;
            }
            }
        }
    }
    else
    {
        displayHelpScreen();
    }
    return 0;
}