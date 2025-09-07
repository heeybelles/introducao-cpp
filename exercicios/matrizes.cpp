#include <iostream>
using namespace std;

// Exercício 1: soma da diagonal principal de uma matriz 4x4
void exercicio1() {
    int matriz[4][4], soma = 0;

    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            cout << "Digite um valor para [" << l+1 << "][" << c+1 << "]: ";
            cin >> matriz[l][c];
        }
    }

    cout << "\nSua matriz:\n";
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            cout << matriz[l][c] << "\t";
            if (l == c) soma += matriz[l][c];
        }
        cout << endl;
    }

    cout << "\nA soma da diagonal principal é: " << soma << endl;
}

// Exercício 2: soma das linhas de uma matriz 3x5
void exercicio2() {
    int A[3][5];
    int Soma_Linha[3] = {0};

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 5; c++) {
            cout << "Digite um valor para A[" << l+1 << "][" << c+1 << "]: ";
            cin >> A[l][c];
        }
    }

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 5; c++) {
            Soma_Linha[l] += A[l][c];
        }
    }

    cout << "\nVetor Soma_Linha:\n";
    for (int l = 0; l < 3; l++) {
        cout << "Linha " << l+1 << ": " << Soma_Linha[l] << endl;
    }
}

// Exercício 3: matriz transposta 2x3
void exercicio3() {
    int matriz[2][3], transposta[3][2];

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            cout << "Digite um valor para [" << l+1 << "][" << c+1 << "]: ";
            cin >> matriz[l][c];
        }
    }

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            transposta[c][l] = matriz[l][c];
        }
    }

    cout << "\nMatriz original (2x3):\n";
    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz transposta (3x2):\n";
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 2; c++) {
            cout << transposta[l][c] << "\t";
        }
        cout << endl;
    }
}

// Exercício 4: elementos com (linha+coluna) ímpar em uma matriz 5x5
void exercicio4() {
    int matriz[5][5];

    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            cout << "Digite um valor para [" << l+1 << "][" << c+1 << "]: ";
            cin >> matriz[l][c];
        }
    }

    cout << "\nMatriz completa:\n";
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    cout << "\nElementos com (linha+coluna) ímpar:\n";
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            if ( (l + c) % 2 != 0 ) {
                cout << matriz[l][c] << " ";
            }
        }
    }
    cout << endl;
}

// Exercício 5: produto abaixo da diagonal principal de uma matriz 6x6
void exercicio5() {
    int matriz[6][6];
    long long produto = 1;

    for (int l = 0; l < 6; l++) {
        for (int c = 0; c < 6; c++) {
            cout << "Digite um valor para [" << l+1 << "][" << c+1 << "]: ";
            cin >> matriz[l][c];
        }
    }

    for (int l = 0; l < 6; l++) {
        for (int c = 0; c < 6; c++) {
            if (l > c) produto *= matriz[l][c];
        }
    }

    cout << "\nO produto dos elementos abaixo da diagonal principal é: " << produto << endl;
}

// Programa principal com menu
int main() {
    int opcao;

    do {
        cout << "\n===== MENU DE EXERCÍCIOS =====\n";
        cout << "1 - Soma da diagonal principal (4x4)\n";
        cout << "2 - Soma das linhas (3x5)\n";
        cout << "3 - Matriz transposta (2x3)\n";
        cout << "4 - Elementos (linha+coluna ímpar) (5x5)\n";
        cout << "5 - Produto abaixo da diagonal principal (6x6)\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            case 4: exercicio4(); break;
            case 5: exercicio5(); break;
            case 0: cout << "Encerrando...\n"; break;
            default: cout << "Opção inválida!\n";
        }
    } while(opcao != 0);

    return 0;
}
