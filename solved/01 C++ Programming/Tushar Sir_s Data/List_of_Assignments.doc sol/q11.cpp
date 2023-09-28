#include<iostream>
using namespace std;

int main(){
    char ch;
    int ascii_ch;
    do
    {
        cout << "Enter a character to convert it in opposite case \nAllowed input : 'a-z' , 'A-Z' \n -> ";
        cin >> ch;
        ascii_ch = int(ch);
    } while (!((ascii_ch<=122 && ascii_ch>=97)||(ascii_ch<=90 && ascii_ch>=65)));
    (ascii_ch<=122 && ascii_ch>=97) ? ascii_ch -=32 : ascii_ch += 32;
    cout << "Opposite case of the character entered is : " << char(ascii_ch) << endl;
}