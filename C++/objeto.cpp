#include <iostream>

using namespace std;

int main (){

    class persona  {

      public:  
        int id;
        string nombre;
        int matricula(){
            cout << "Matricula";

            return 0;
        }
    };

    class chicaVamp : persona {
        int numeroDeColmillos, numeroDeAlas, hombres;
    };

//    chicaVamp yesenia(10, "yesenia", )

    return 0;
}
