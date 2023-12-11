#include <iostream>
using namespace std;
int main(){
    int mat1[3][3]={{1,1,1},{1,1,1},{1,1,1}}, mat2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int prod[3][3];
    int i,j,k;
    for(i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int sum = 0;
            for(k = 0; k < 3; k++){
                sum += mat1[i][k]*mat2[k][j];
            }
            prod[i][j] = sum;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<prod[i][j]<<"\t";
        }
        cout<<'\n';
    }
}


    
