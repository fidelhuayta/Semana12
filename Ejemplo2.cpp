#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <deque>
using namespace std;

int main()
{
    deque<int> cola;
    cola.push_back(1);
    cola.push_back(2);
    cola.push_back(3);
    cola.push_back(10);
    cola.push_back(15);
    cola.push_back(9);
    
    //back el ultimo, front es el primer elemento
    cout<<"el tamaño es :"<<cola.size()<<endl;
    cout<<"el ultimo es"<<cola.back()<<endl;
    cola.pop_back();
    cout<<"el primero es "<<cola.front()<<endl;
    
    cout<<"los datos de Dequeue son :"<<endl;
    for (auto it : cola)
        cout<<it<<endl;
    
    cout<<"los datos de Dequeue al reves es :"<<endl;
    for (auto it = cola.rbegin(); it !=cola.rend(); it++)
        cout<<*it<<endl;
    
    cout<<"sacando los datos desde el frente"<<endl;
    while (cola.empty() == false)
    {
        cout<<cola.front()<<endl;
        cola.pop_front();
    }
    cout<<"sacando los datos desde el frente"<<endl;
    
    cola.push_front(9); //"push_front" pone datos al frente del que ya existe
    cola.push_front(15);
    cola.push_front(10);
    cola.push_front(3);
    cola.push_front(2);
    cola.push_front(1);
    
    cout<<"el primer valor es :"<<cola[0]<<endl;
    
    cout<<"sacando los datos desde el fondo"<<endl;
    while (cola.empty() == false)
    {
        cout<<cola.back()<<endl;
        cola.pop_back();
    }
    
     cout<<"el tamaño es :"<<cola.size()<<endl;
     
     
     
    
    
    return 0 ;
}