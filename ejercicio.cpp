#include <iostream> //libreria
using namespace std;

int main() //funcion 
{
    cout << "Estas en la lista de Kraven" << endl;
    cout << "ingrese que cosa eres" << endl;
    

    string cosa = "persona"; //declara variable con el personaje que eres
    string animal = "animal"; //declara variable con el personaje que eres
    string malo = "malo"; //declara variable con el personaje que eres

    string personaje = ""; // pregunta el tipo de sujeto que eres como persona, animal o malo

    cin >> personaje;


    if (personaje == cosa) //compara si ingresaste la palabra del tipo de personaje que eres 
    {
        cout << "Te salvastes no eres una presa de kraven" << endl;
        
    }
    else if (personaje == animal)//compara si ingresaste la palabra del tipo de personaje que eres
    {
        cout << "Eres una presa" << endl;
    }
    else if (personaje == malo)//compara si ingresaste la palabra del tipo de personaje que eres
    {
        cout << "Te saluda" << endl;
    }
    else 
    {
        ; 
    }

   return 0;
}
