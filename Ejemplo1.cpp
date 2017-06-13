#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    vector <int> nombre = {10,20,30};
    cout<<nombre.size()<<endl;
    nombre.resize(10);
    
    cout<<"datos con resize = 5"<<endl;
    for (int i = 0; i<nombre.size(); i++)
        cout<<"el valor"<<i<<":"<<nombre[i]<<endl;
    
    //recorre con el for c++
    int i=0;
    
    cout<<"datos version c++11"<<endl;
    for (auto item: nombre)
    {
        cout<<"el valor"<<i<<":"<<item<<endl;
        i++;
    }
    
    //recorrer con iteradores
    i = 0;
    cout<<"datos iteradores"<<endl;
    for (auto it = nombre.begin(); it !=nombre.end(); it++)
        cout<<"el valor"<<i<<":"<<*it<<endl;
        i++;
    
    cout<<nombre.size()<<endl;
    nombre.resize(20);
    cout<<nombre.size()<<endl;
    cout<<nombre.size()<<endl;
    
    
    
    return 0;
}