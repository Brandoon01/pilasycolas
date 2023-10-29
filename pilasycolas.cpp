#include <iostream>
#include <stack>
#include <queue>

int main() {
    std::stack<int> pila;
    std::queue<int> cola;

    int opcion;
    int valor;

    while (true) {
        std::cout << "Selecciona una opcion:\n";
        std::cout << "1. Agregar valor a la pila\n";
        std::cout << "2. Agregar valor a la cola\n";
        std::cout << "3. Sacar valor de la pila\n";
        std::cout << "4. Sacar valor de la cola\n";
        std::cout << "5. Salir\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese un valor: ";
                std::cin >> valor;
                pila.push(valor);
                break;
            case 2:
                std::cout << "Ingrese un valor: ";
                std::cin >> valor;
                cola.push(valor);
                break;
            case 3:
                if (!pila.empty()) {
                    std::cout << "Valor sacado de la pila: " << pila.top() << "\n";
                    pila.pop();
                } else {
                    std::cout << "La pila esta vacia.\n";
                }
                break;
            case 4:
                if (!cola.empty()) {
                    std::cout << "Valor sacado de la cola: " << cola.front() << "\n";
                    cola.pop();
                } else {
                    std::cout << "La cola esta vacia.\n";
                }
                break;
            case 5:
                return 0;
            default:
                std::cout << "Opcion no valida. Intentalo de nuevo.\n";
        }
    }

    return 0;
}

