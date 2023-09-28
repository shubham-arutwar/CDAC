#include<iostream>
using namespace std;

void print(string pr){
    cout << pr << endl;
}

void input_string(string *str){
    cin >> *str;
}

int count_character(string *str, char ch){
    int count=0;
    for(int i=0; i<sizeof(str)/sizeof(str[0]); i++){
        if(char(str[i])==ch){
            count++;
        }
    }
}

int main(){
    string str;
    char ch;
    input_string(&str);
    print("Enter a character to search occurnce in string : ");
    cin >> ch;
    count_character(&str, ch);

}