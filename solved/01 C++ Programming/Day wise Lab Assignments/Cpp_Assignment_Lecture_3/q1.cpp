#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter a positive integer : ";
    cin >> num;
    if (num>0){
        cout << "factors of " << num << " are : ";
        for(int i=1; i<=num;i++){
            if (num%i==0){
                cout << i << " ";
            }
        }
	cout << endl;
    }
    else {
        cout<<"number is not valid positive integer" << endl;
    }
    return 0;
}
