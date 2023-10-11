#include<iostream>
using namespace std;

int main(){
    struct Book{
        int bookId;
        string title;
        int price;
    };
    typedef struct Book BOOK;
    BOOK book1, book2, book3;
    book1.bookId = 11;
    book1.price = 499;
    book1.title = "name of the book";
        cout << "book1" << " : " << book1.title << " : " << book1.price << " : " << book1.bookId << endl;   
}