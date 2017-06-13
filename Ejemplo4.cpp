#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;


struct TNotas
{
    string nombre;
    float sp1;
    float sp2;
    float sp3;
    float sp4;
    float sp5;
    float sp6;
    float py1;
    float py2;
};

int main()
{
    //con vector
    vector<TNotas> notas;
    notas.push_back(TNotas{"alumno1,14,20,18,15,15,20,12,15"});
    notas.push_back(TNotas{"alumno2,14,15,8,17,17,17,12,15"});
    notas.push_back(TNotas{"alumno3,14,11,10,13,13,14,12,15"});
    
    //con mapa
    map<string,TNotas> mapa;
    
    mapa.insert(pair<string,TNotas>("alumno1",{"alumno1,14,20,18,15,15,20,12,15"}));
    mapa.insert(pair<string,TNotas>("alumno2",{"alumno2,14,15,8,17,17,17,12,15"}));
    mapa.insert(pair<string,TNotas>("alumno3",{"alumno3,14,11,10,13,13,14,12,15"}));
    
    //
    string busqueda;
    cout<<"ingrese alumno"<<endl;
    cin>>busqueda;
    for (int i= 0; i<notas.size();i++)
    {
        auto dato = notas[i];
        if (dato.nombre ==busqueda)
        cout<<dato.nombre<<"su promedio es :"
        <<(dato.sp1+dato.sp2+dato.sp3+
        dato.sp4+dato.sp5+dato.sp6+
        dato.py1+dato.py2)/8
        <<endl;
    }
    
    
   
   
    auto dato = mapa[busqueda];
     cout<<dato.nombre<<"su promedio es :"
        <<(dato.sp1+dato.sp2+dato.sp3+
        dato.sp4+dato.sp5+dato.sp6+
        dato.py1+dato.py2)/8
        <<endl;
    
    
    return 0;
}