//mandamos llamas  las librerias que vamos a ocupar 
#include <iostream>
#include <string>
using namespace std;
//ingredamos los atributos que van a tener 
struct CD {
//declaramos nuestras variables de tipo string
    string titulo;
    string artista;
//declaramos nuestras variables de tipo int
    int num_canciones;
    int anio;
    float precio;
};
//tenemos nuestrl metodo main

int main() {
    CD cd1;
//pedimos que se ingresen lls datos 
    cout << "Ingresa el título del CD: ";
    getline(cin, cd1.titulo);
//ingredamos el titulo
    cout << "Ingresa el artista: ";
    getline(cin, cd1.artista);

    cout << "Ingresa la cantidad de canciones: ";
    cin >> cd1.num_canciones;

    cout << "Ingresa el año de lanzamiento: ";
    cin >> cd1.anio;

    cout << "Ingresa el precio: ";
    cin >> cd1.precio;

    cout << "Título: " << cd1.titulo << endl;
    cout << "Artista: " << cd1.artista << endl;
    cout << "Número de canciones: " << cd1.num_canciones << endl;
    cout << "Año de lanzamiento: " << cd1.anio << endl;
    cout << "Precio: " << cd1.precio << endl;

    return 0;
}
