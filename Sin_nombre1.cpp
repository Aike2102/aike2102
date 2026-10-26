#include <iostream>
#include <fstream>
#include <sstream>  

using namespace std;
int main(){
	ifstream archivoentrada("input/Archivo_entrada.txt");
    ofstream archivosalida("output/Archivo_salida.txt");

    if(archivoentrada.is_open() && archivosalida.is_open()){
        cout<<"Archivo abierto"<<endl;
        string linea;

        while(getline(archivoentrada, linea)){
            archivosalida<<linea;
        }
        cout<<"Archivo copeado correctamente"<<endl;
    }
}
