#include <iostream>
using namespace std;
// Uso de vectores o alegros de una dimensión
int main ()
{
    const int NUMERONOTAS = 5;
    string nombresAlumnos[NUMERONOTAS];
    double notas[NUMERONOTAS] = {0,0,0,0,0};
    // Ingreso de notas al vector
    for (int i=0; i<NUMERONOTAS; i++)
    {
        cout << "Ingrese la nota" << i+1 << ":";
        cin >> notas[i];
    }
    // Calculo del total de notas
    double sumaDeNotas = 0;
    for (int j=0; j<NUMERONOTAS; j++)
    {
        sumaDeNotas = sumaDeNotas + notas[j];
    }
    // Calculo del promedio de notas
    double promedioDeNotas = sumaDeNotas/NUMERONOTAS;
    char clasificacionDeNota = "";
    // Clasificación de Notas
    if (promedioDeNotas == 100)
    {
        clasificacionDeNota = "A";
    }
    else if (promedioDeNotas >= 80)
    {
        clasificacionDeNota = "B";
    }
    else if (promedioDeNotas >= 70)
    {
        clasificacionDeNota = "C";
    }
    else if (promedioDeNotas >= 60)
    {
        clasificacionDeNota = "D";
    }
    else
    {
        clasificacionDeNota = "E";
    }
    // Resultados finales
    cout << "Total de Notas: " << sumaDeNotas << endl;
    cout << "Promedio de Notas: " << promedioDeNotas << endl;
    cout << "Calificación final: " << clasificacionDeNota << endl;
}
