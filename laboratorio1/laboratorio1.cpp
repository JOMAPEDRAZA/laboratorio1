// laboratorio1
#include <iostream>
#include <ctime>
using namespace std;

class Jugador {
private:
    int puntaje;

public:
    Jugador() {
        puntaje = 0;
    }

    int elegirOpcion() {
        int opcion;
        cout << "Jugador elige tu opcion (1: Piedra, 2: Papel, 3: Tijera): ";
        cin >> opcion;

        while (opcion < 1 || opcion > 3) {
            cout << "Opcion invalida. Elige nuevamente: ";
            cin >> opcion;
        }

        return opcion;
    }

    void aumentarPuntaje() {
        puntaje++;
    }

    int getPuntaje() {
        return puntaje;
    }
};

int main() {
    Jugador jugador1, jugador2;
    srand(time(nullptr)); // Inicializar la semilla del generador de números aleatorios

    while (true) {
        int opcionJugador1 = jugador1.elegirOpcion();
        int opcionJugador2 = jugador2.elegirOpcion();

        cout << "Jugador 1 elige: ";
        switch (opcionJugador1) {
        case 1:
            cout << "Piedra";
            break;
        case 2:
            cout << "Papel";
            break;
        case 3:
            cout << "Tijera";
            break;
        }
        cout << endl;

        cout << "Jugador 2 elige: ";
        switch (opcionJugador2) {
        case 1:
            cout << "Piedra";
            break;
        case 2:
            cout << "Papel";
            break;
        case 3:
            cout << "Tijera";
            break;
        }
        cout << endl;

        if (opcionJugador1 == opcionJugador2) {
            cout << "Empate" << endl;
        }
        else if ((opcionJugador1 == 1 && opcionJugador2 == 3) ||
            (opcionJugador1 == 2 && opcionJugador2 == 1) ||
            (opcionJugador1 == 3 && opcionJugador2 == 2)) {
            cout << "Jugador 1 gana" << endl;
            jugador1.aumentarPuntaje();
        }
        else {
            cout << "Jugador 2 gana" << endl;
            jugador2.aumentarPuntaje();
        }

        cout << "Puntaje actual Jugador 1: " << jugador1.getPuntaje() << endl;
        cout << "Puntaje actual Jugador 2: " << jugador2.getPuntaje() << endl;

        char continuar;
        cout << "Quieres seguir jugando? (s/n): ";
        cin >> continuar;
        if (continuar != 's') {
            break;
        }
    }

    return 0;
}