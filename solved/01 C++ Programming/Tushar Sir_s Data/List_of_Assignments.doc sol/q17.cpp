#include<iostream>
using namespace std;

int main(){
	int count=0;
	for(int i=5; i>=1; i--){
		int j=1;
		for(j; j<=i; j++){
			cout << j;
		}
		for(int k=0; k<count-1; k++){
			cout << " ";
		}
		count += 2;
		for(j-=1; j>=1; j--){
			if(j==5){
				continue;
			}
			else{
				cout << j;
			}
		}
		cout << endl;
	}
}
