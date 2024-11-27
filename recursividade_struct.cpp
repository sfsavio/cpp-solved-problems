// Crie uma struct chamada Estoque com os campos: nomeProduto e quantidade.
// Cadastre 10 produtos em um vetor.
// Crie uma função recursiva que some todas as quantidades dos produtos no vetor e exiba o total.

#include<iostream>

#define MAX 10

using namespace std;

struct est {
    char prod_name[50];
    int qtd = 0;
};

int sum (est micale[], int size) {
     return (size == 0) ? 0 : micale[size -1].qtd + sum(micale, size -1);    
}

int main() {
    struct est micale[MAX];
    
    for (int i = 0; i < MAX; i++) {
        cout<<"micale[" << i <<"].prod_name: ";
        cin>>micale[i].prod_name;
        cout<<"micale[" << i <<"].qtd: ";
        cin>>micale[i].qtd;
    }

    cout << endl;

    for (int i = 0; i < MAX; i++) {
        cout<<micale[i].prod_name;
        cout<<"\t"<<micale[i].qtd << "\n";
    }
    
    int qtd_total = sum(micale, MAX);
     
    cout << "\nqtd_total: " << qtd_total;
    
    return 0;
}

/*
input:  
    agua_sem_gas
    33
    agua_com_gas
    37
    coca_cola
    64
    batata_frita
    56
    garrafa-gin
    56
    garrafa_vodka
    82
    garrafa_pitu
    69
    polpa_laranja
    32
    fardo_cerveja
    10
    vinho_tinto
    15
*/