#include <iostream>
using namespace std;

#define C 3
#define L 3

int multi(int a);
void exibir(int matriz[L][C]);

int main (){
    int mat[L][C]={};

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            cout<<"Digite o valor: ";
            cin>>mat[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"\nMatriz original\n";
    exibir(mat);

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            mat[i][j]=multi(mat[i][j]);
    }
    
    cout << "\nMatriz multiplicada por 2\n";
    exibir(mat);
}

int multi(int a){
    return a*2;
}

void exibir(int matriz[L][C]){
    cout<<"\n";
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            cout<<" "<<matriz[i][j]<<"\t";
            
        cout<<"\n\n";
    }
}
