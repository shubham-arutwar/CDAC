// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int total=0;

int choose();
int bot_play(int);
int res(int);

int main() {
    bool sw=0;
    cout << "Game started" << endl;
    while(sw==0){
        int user_choice = choose();
        res(user_choice);
        int bot_choice = bot_play(user_choice);
        res(bot_choice);
        if(total==20){
            sw=1;
        }
    }
    if(total==20){
        cout << "You lost the game!";
    }
}

int choose(){
    int num;
    bool sw=0;
    do{
        cout << "Enter number between 1-4 : ";
        cin >> num;
        if((num<5 && num>0)){
            sw=1;
        }
    }while(sw==0);
    return num;
}

int bot_play(int user_choice){
    int bot_choice = 5 - user_choice;
    cout << "Bot choice : " << bot_choice << endl;
    return bot_choice;
}

int res(int choice){
    total += choice;
    cout << "Total matchsticks : " << total << endl;
    return total;
}