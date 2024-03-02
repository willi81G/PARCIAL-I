#include <iostream>
#include <string>
using namespace std;
class Animales {
private:
    float peso;
  	string color; 
  	float tamanio; 
  	int edad; 
  	string raza; 

public:
    Animales(float _peso, string _color, float _tamanio, int _edad, string _raza); 

    float getpeso() { return peso; }
    string getcolor() { return color; }
    float gettamnio() { return tamanio; }
    int getedad() { return edad; }
    string getraza() { return raza;	}

    void setpeso(float p) { peso = p; }
    void setcolor(string c) { color = c; }
    void settamanio(float t) { tamanio = t; }
    void setedad(int e) { edad = e; }
    void setraza(string r) { raza = r;	}

    void display() {
        cout << "peso: " << peso << std::endl;
        cout << "color: " << color << std::endl;
        cout << "tamanio:" << tamanio << std::endl;
        cout << "edad: " << edad << std::endl;
        cout << "raza: " << raza << std::endl;
        cout << "-------------------------" << std::endl;
    }
};

int main() {
    Animales micabra(180, "cafe", 1.30, 2, "natural" );
    Animales micaballo(570, "negro", 1.66, 2, "arabe");
    Animales miburro(200, "gris", 1.40, 3, "natural");
    Animales mivaca(890, "rojo", 1.65, 3, "cimental");
    Animales mioveja(120, "blanco", 1.10, 2, "natural");

    cout << "animales : " << endl;

    micabra.display();
    micaballo.display();
    miburro.display();
    mivaca.display();
    mioveja.display();

    return 0;
}