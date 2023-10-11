#include <iostream>
using namespace std;
#define MAX 10

void LerMatriz(int matriz[MAX][MAX], int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; i < coluna; i++){
            cout << "[" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void ImprimirMatriz(int matriz[MAX][MAX], int linha, int coluna){
    for(int i = 0; i < linha; i ++){
        for(int j = 0; i < coluna; i++){
            cout << matriz[i][j];
        }
    }
}

void SomarMatriz(int mat3[MAX][MAX], int mat1[MAX][MAX], int mat2[MAX][MAX], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main(){
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];
    int l, c;
    cout<<"Quantas linhas? ";
    cin>>l;
    cout<<"Quantas colunas? ";
    cin>>c;

    cout<<"Valores para a Matriz 1: "<<endl;
    LerMatriz(mat1,l,c);
    cout<<"Valores para a Matriz 2: "<<endl;
    LerMatriz(mat2,l,c);

    cout<<"Matriz 1: ";
    ImprimirMatriz(mat1, l, c);
    cout<<endl;
    cout<<"Matriz 2: ";
    ImprimirMatriz(mat2, l, c);
    cout<<endl;
    
    cout<<"Soma: ";
    SomarMatriz(mat3, mat1, mat2, l, c);
    ImprimirMatriz(mat3, l, c);

    return 0;
}