#include <iostream>
using namespace std;
#define MAX 10

void LerMatriz(int mat[MAX][MAX], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout<<"["<<i+1<<", "<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
}

void ImprimirMatriz(int mat[MAX][MAX], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout<<mat[i][j];
        }
    }
}

bool MatrizIdentidade(int mat[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i==j){
                if (mat[i][j] != 1){
                    return false;
                }
            } else {
                if(mat[i][j] !=0){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int mat[MAX][MAX];
    int linhas;
    cout<<"Quatidade de linhas: ";
    cin>>linhas;

    int colunas;
    cout<<"Quantidade de colunas: ";
    cin>>colunas;

    LerMatriz(mat, linhas, colunas);

    cout<<"Matriz lida: ";
    ImprimirMatriz(mat, linhas, colunas);
    cout<<endl;

    if (MatrizIdentidade(mat, linhas, colunas)) {
        cout << "A matriz Ã© uma matriz identidade." << endl;
    } else {
        cout << "A matriz nÃ£o Ã© uma matriz identidade." << endl;
    }

    system("pause");
    return 0;
}