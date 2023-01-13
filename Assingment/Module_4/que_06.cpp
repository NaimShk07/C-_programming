#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
       string authorName;
       string title;
       int price;
       string publisher;

public:
       Book(string authore, string titlee, int pricee, string publishere)
       {
              authorName = authore;
              title = titlee;
              price = pricee;
              publisher = publishere;
       }

       void display()
       {
              cout << "Author: " << authorName << endl;
              cout << "Title: " << title << endl;
              cout << "Price: " << price << endl;
              cout << "Publisher: " << publisher << endl;
       }
};

int main()
{
       Book book1("Dale Carnegie", "How to win friends and influence people", 170, "Simon");
       
       book1.display();
       return 0;
}
