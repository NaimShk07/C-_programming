#include <iostream>
#include <string>
using namespace std;

class BookShop
{
private:
       string author;
       string title;
       double price;
       string publisher;

public:
       void assignValues(string a, string t, double p, string pub)
       {
              author = a;
              title = t;
              price = p;
              publisher = pub;
       }

       void display()
       {
              cout << "Author: " << author << endl;
              cout << "Title: " << title << endl;
              cout << "Price: " << price << endl;
              cout << "Publisher: " << publisher << endl;
       }
};

int main()
{
       BookShop book1;
       book1.assignValues("Dale Carnegie", "How to win friends and influence people", 170, "Simon");

       book1.display();
       return 0;
}
