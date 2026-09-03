#include <iostream>
using namespace std;

#define L 5

int achar_maior(int v[L], int tamanho);
void achar_maior(int v[L], int tamanho, int &maior);

int main (){
    int v[L]={};
    int maior_funcao=0;
    int maior_procedimento=0;

    for(int i=0;i<L;i++){
        cout<<"Digite o valor "<<i + 1<<": ";
        cin>>v[i];
    }
    
    maior_funcao = achar_maior(v, L);
    achar_maior(v, L, maior_procedimento);
    
    cout << "\nMaior via Função: "<<maior_funcao;
    cout << "\nMaior via Procedimento: "<<maior_procedimento;
}

int achar_maior(int v[L], int tamanho){
    int maior = v[0];
    for (int i = 1; i < tamanho; i++)
        if (v[i] > maior)
            maior = v[i];
            
    return maior;
}

void achar_maior(int v[L], int tamanho, int &maior){
    maior = v[0];
    for (int i = 1; i < tamanho; i++)
        if (v[i] > maior)
            maior = v[i];
}
