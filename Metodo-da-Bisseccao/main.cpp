#include <iostream>
#include <cmath>

using namespace std;

double F(double x) {
    return 9 * exp(-1 * x) * cos(2 * M_PI * x) - 3;;
}

int main() {
    double inicio, fim, raiz, erro, temp;
    int precisao, iteracoes, cont;
    cin >> inicio >> fim >> precisao >> iteracoes;
    
    erro = 1;
    cont = 0;
    raiz = inicio;
    
    while (erro > precisao && cont < iteracoes) {
        temp = raiz;
        raiz = (inicio + fim)/2.0;
        erro = fabs((raiz - temp)/raiz);
        if (F(inicio) * F(raiz) < 0) {
            fim = raiz;
        } else {
            inicio = raiz;
        }
        ++cont;
    }
    
    cout << raiz << endl;
    
    return 0;
}
