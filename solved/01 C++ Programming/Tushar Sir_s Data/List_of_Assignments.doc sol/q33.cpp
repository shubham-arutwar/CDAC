#include<iostream>
using namespace std;

int main(){
    struct Book{
        int bookId;
        string title;
        int price;
    };
    typedef struct Book BOOK;
    BOOK shelf[5];
    cout << "Enter the book details in shelf" << endl;
    for(int i=0; i<5; i++){
        cout << i+1 << " > Bookid : ";
        cin >> shelf[i].bookId;
        cout << i+1 << " > title : ";
        cin >> shelf[i].title;
        cout << i+1 << " > price : ";
        cin >> shelf[i].price;
    }
    cout << "Entered data is" << endl;
    for(int i=0; i<5; i++){
        cout << i+1 << " > " << shelf[i].bookId << " : " << shelf[i].title << " : " << shelf[i].price << endl;
    }
}