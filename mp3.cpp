#include <iostream>
#include <string>
using namespace std;

struct cancion

{
    string artista ;
    string titulo;
    int duracion;
    int peso;
} cancion;

  int main ()
  {

  struct cancion mp3;
  string artista ="";
   cout <<"Ingrese nombre del artista: ";
   getline( cin,artista);
   string titulo =  "";
   cout <<"\nIngrese nombre del titulo: ";
   getline(cin, titulo);
   string duracion ="";
	cout << "\nIngrese el tamaño (KB): ";
	getline ( cin,duracion);




 {       cout << "El nombre del artista es : " << artista << endl ;
        cout << "la cancion se llama : " << titulo  << endl;
        cout << "y su peso es: " << duracion << " KB " << endl;
}


return 0;












  }
