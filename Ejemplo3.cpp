#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <list>
using namespace std;

bool comparar (int left, int rigth)
{
    return left >rigth;
}

bool remover_pares (int value)
{
    return value %2 ==0;
}

int main()
{
    list<int> lista = {1,2,12,4,13};
    
    cout<<"datos de la lista"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
     cout<<"datos de la lista usando for estandar"<<endl;
     for ( auto it= lista.begin(); it!=lista.end();it++)
        cout<<"el dato #"<<*it<<":"<<endl;
    
    //inseratar al comienzo
    auto it = lista.begin();
    lista.insert(it, 9);
    cout<<"*it "<<*it<<endl;
    advance(it,2);
    
    lista.insert(it, 8);
    cout<<"*it "<<*it<<endl;
    
    lista.erase(it); //borra una posicion
    
    cout<<"datos de la lista"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
    lista.sort();
    cout<<"datos de la lista ordenado ascendente :"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
    lista.sort(comparar);
    cout<<"datos de la lista ordenado descendente :"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
    lista.remove(13); //borra el valor
    cout<<"datos de la lista removiendo el 13 :"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
    lista.remove_if(remover_pares);
    cout<<"datos de la lista removiendo los pares :"<<endl;
    for (auto it:lista)
    {
        cout<<it<<endl;
    }
    
    return 0;
}