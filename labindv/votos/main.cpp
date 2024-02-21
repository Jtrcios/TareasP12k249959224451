#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Declaracion de constantes y rangos
const int N_Can = 5;
const int N_Af = 50;
const int N_Ron = 5;

//Generación de votos aleatorios
void genVotos(int votos[N_Can][N_Ron]) {
    for (int i = 0; i < N_Ron; ++i) {
        for (int j = 0; j < N_Can; ++j) {
            votos[j][i] = rand() % N_Af;
        }
    }
}

//Generar tabla de resultados
void Resultados(const string candidatos[], const int votos[N_Can][N_Ron]) {
    cout << "Tabla de votos por ronda:" << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Candidato\t1ra Ronda\t2da Ronda\t3ra Ronda\t4ta Ronda\t5ta Ronda" << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < N_Can; ++i) {
        cout << candidatos[i] << "\t\t";
        for (int j = 0; j < N_Ron; ++j) {
            cout << votos[i][j] << "\t\t";
        }
        cout << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}

//Calculo de candidato ganador y perdedor
void calcularGanador(const string candidatos[], const int votos[N_Can][N_Ron]) {
    int totalVotos[N_Can] = {0};

    for (int i = 0; i < N_Can; ++i) {
        for (int j = 0; j < N_Ron; ++j) {
            totalVotos[i] += votos[i][j];
        }
    }

    int maxVotos = totalVotos[0];
    int ganadorIndex = 0;

    for (int i = 1; i < N_Can; ++i) {
        if (totalVotos[i] > maxVotos) {
            maxVotos = totalVotos[i];
            ganadorIndex = i;
        }
    }

    cout << "El ganador es: " << candidatos[ganadorIndex] << " con un total de: " << maxVotos << " votos." << endl;

    int minVotos = totalVotos[0];
    int perdedorIndex = 0;

    for (int i = 1; i < N_Can; ++i) {
        if (totalVotos[i] < minVotos) {
            minVotos = totalVotos[i];
            perdedorIndex = i;
        }
    }

    cout << "El candidato con menor cantidad de votos es: " << candidatos[perdedorIndex] << " con un total de: " << minVotos << " votos." << endl;
}

//Principal y llamado de funciónes
int main() {
//Función rand para generación de votos
    srand(time(0));

    string candidatos[N_Can];

//Ingreso de candidatos
    cout << "Ingrese a los candidatos:" << endl;
    for (int i = 0; i < N_Can; ++i) {
        cout << "Nombre Candidato " << i + 1 << ": ";
        cin >> candidatos[i];
    }

//Llamado de funciones
    int votos[N_Can][N_Ron];
    genVotos(votos);

    Resultados(candidatos, votos);
    calcularGanador(candidatos, votos);

    return 0;
}
