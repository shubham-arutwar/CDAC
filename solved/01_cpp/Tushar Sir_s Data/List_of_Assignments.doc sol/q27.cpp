#include<iostream>
using namespace std;

void accept_matrix(int [3][3], string);
void display_matrix(int [3][3], string);
void transpose_matrix(int [3][3], int [3][3], string);
void add_matrix(int [3][3], int [3][3]);

int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int matrix_transpose[3][3];
    accept_matrix(matrix_1, "Enter matrix to find its transpose : ");
    display_matrix(matrix_1, "Entered 1st matrix is : ");
    transpose_matrix(matrix_1, matrix_transpose, "Transposed matrix is : ");
    accept_matrix(matrix_2, "Enter 2nd matrix to add to the orignal matrix : ");
    display_matrix(matrix_2, "Entered 2nd matrix is : ");
    add_matrix(matrix_1,matrix_2);
    display_matrix(matrix_1, "Addition of entered 2 matrix is : ");
}

void accept_matrix(int matrix[3][3], string messages){
    cout << messages << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << " > ";
            cin >> matrix[i][j];
        }
    }
}

void display_matrix(int matrix[3][3], string messgae){
    cout << messgae << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose_matrix(int matrix[3][3], int matrix_transpose[3][3], string messages){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix_transpose[j][i]=matrix[i][j];
            // if(i==j){
            //     continue;
            // }
            // else{
            //     // matrix[i][j]+=matrix[j][i];
            //     // matrix[j][i]=matrix[i][j]-matrix[j][i];
            //     // matrix[i][j]-=matrix[j][i];
            // }
        }
    }
    display_matrix(matrix_transpose, messages);
}

void add_matrix(int matrix_1[3][3], int matrix_2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix_1[i][j]+=matrix_2[i][i];
        }
    }
}