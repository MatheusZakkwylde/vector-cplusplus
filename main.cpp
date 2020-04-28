#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array;
    cout<<"Inicializando vector dinamicamente"<<endl;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    cout<<"Valores iniciados"<<endl<<endl;

    cout<<"Mostando valores dinamico"<<endl;
    for(int i = 0;i < array.size();i++){
        cout<<array[i]<<endl;
    }

    vector<int> vetor(10);
    cout<<"Inicializando dados do vector estatico"<<endl;
    for(int j = 0; j<10;j++){
        vetor[j] = j;
    }

    cout<<"Mostrando dados de vector estatico"<<endl;
    for(int j =0; j<10;j++){
        cout<<vetor[j]<<endl;
    }

    //trocando valores de um vetor para o outro
    array.swap(vetor);

    return 0;
}

