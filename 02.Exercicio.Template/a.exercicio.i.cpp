#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void aee(vector<T>& v);

int main(){
    vector<float> numeros;
    float entrada;
    
    while(entrada!=0){
        cout<<"\nDigite o valor: ";
        cin>>entrada;
        if(entrada!=0)
            numeros.push_back(entrada);
    }
    
    if(numeros.size()>0)
        aee(numeros);
    else
        cout << "Nenhum numero foi inserido.";
        
    return 0;
}

template <typename T>
void aee(vector<T>& v){
    int n=v.size();
    
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (v[j]>v[j+1]){
                T temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    
    T soma = 0;
    for (int i=0; i<n; i++)
        soma+=v[i];
    
    T menor=v[0], maior=v[n-1];
    
    float media=(float)soma/n;
    
    float mediana=0;
    if (n%2 != 0)
        mediana=v[n/2];
    else
        mediana=(v[(n/2)-1] + v[n/2])/2.0;
    

    cout << "\nMenor valor: " << menor;
    cout << "\nMaior valor: " << maior;
    cout << "\nMedia: " << media;
    cout << "\nMediana: " << mediana;
}
