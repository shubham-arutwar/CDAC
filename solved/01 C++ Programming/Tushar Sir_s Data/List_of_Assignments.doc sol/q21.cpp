#include<iostream>
using namespace std;

void areaCircum(double*, double*, double*);
void areaPeri(double*, double*, double*, double*);

int main(){
	bool sw;
	cout << " Choose an option\n 0 - Calculate area and circumfrence of a circle\n 1 - Calculate area and perimeter of a rectangle\n > : ";
	do{
		cin >> sw;
	}while(!(sw==0 || sw==1));
	if(sw==0){
		cout << "Enter radius of the circle : ";
		double r, area, circum;
		cin >> r;
		areaCircum(&r, &area, &circum);
		cout << "Area of the circle is : " << area << endl;
		cout << "Circumfrence of the circle is : " << circum << endl;
	}
	else{ 
                double l, b, area, peri;
               	cout << "Enter length of the rectangle : " << endl;
		cin >> l;
		cout << "Enter breadth of the rectangle : " << endl;
		cin >> b;
		areaPeri(&l, &b, &area, &peri);
		cout << "Area of the rectangle is : " << area << endl;
		cout << "Perimeter of the rectangle is : " << peri << endl;
        }
}

void areaCircum(double *r, double *area, double *circum){
	const int pi = 3.14;
	*area = pi * *r * *r;
	*circum = 2 * pi * *r;
}

void areaPeri(double *l, double *b, double *area, double *peri){
	*area = *l * *b;
	*peri = 2*(*l + *b);
}
