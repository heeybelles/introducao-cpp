//Feito por Eduarda Belles

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// ===================== EXERCICIO 1 =====================
void exercicio1() {
    int i = 0;
    int num[10];

    while (i < 10) {
        cout << "Insira um valor (1 a 10): ";
        cin >> num[i];

        if (num[i] <= 0 || num[i] > 10) {
            cout << "Valor invalido! Tente novamente.\n";
        } else {
            i++;
        }
    }

    cout << "Array completo!\n";
    for (int j = 0; j < 10; j++) {
        num[j] = -num[j];
        cout << "Posicao " << j << " = " << num[j] << endl;
    }
}

// ===================== EXERCICIO 2 =====================
void exercicio2() {
    int vetor[100];
    int i = 0;

    cout << "Digite numeros (0 para parar):\n";
    while (i < 100) {
        cin >> vetor[i];
        if (vetor[i] == 0) break;
        i++;
    }

    if (i == 0) {
        cout << "Nenhum numero valido foi digitado.\n";
        return;
    }

    int ultimo = vetor[i - 1];
    int contador = 0;

    for (int j = 0; j < i; j++) {
        if (vetor[j] == ultimo) {
            contador++;
        }
    }

    cout << "O ultimo numero valido foi: " << ultimo << endl;
    cout << "Ele apareceu " << contador << " vezes.\n";
}

// ===================== EXERCICIO 3 =====================
void exercicio3() {
    char palavra[10];
    cout << "Digite uma palavra (max 9 letras): ";
    cin >> palavra;

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    cout << "Palavra invertida: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << palavra[i];
    }
    cout << endl;
}

// ===================== EXERCICIO 4 =====================
void exercicio4() {
    int v[10];
    int w[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um valor: ";
        cin >> v[i];

        int n = 1;
        for (int c = 1; c <= v[i]; c++) {
            n *= c;
        }
        w[i] = n;
        cout << v[i] << "!" << " = " << w[i] << endl;
    }
}

// ===================== EXERCICIO 5 =====================
void exercicio5() {
    int vetor[12];
    int media, num = 0, soma = 0;

    cout << "Digite um valor: ";
    cin >> vetor[0];

    int menor = vetor[0];
    int maior = vetor[0];
    soma = vetor[0];

    if (vetor[0] % 2 == 0) {
        num++;
    }

    for (int i = 1; i < 12; i++) {
        cout << "Digite um valor: ";
        cin >> vetor[i];

        if (vetor[i] < menor) {
            menor = vetor[i];
        } else if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] % 2 == 0) {
            num++;
        }

        soma += vetor[i];
    }

    media = soma / 12;

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    cout << "Quantidade de pares: " << num << endl;
    cout << "Media: " << media << endl;
}

// ===================== EXERCICIO 6 =====================
void exercicio6() {
    int num[8];

    for (int x = 0; x < 8; x++) {
        cout << "Digite o " << x + 1 << "° valor: ";
        cin >> num[x];
    }

    // Crescente
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (num[i] < num[j]) {
                swap(num[i], num[j]);
            }
        }
    }

    cout << "Ordem Crescente: ";
    for (int i = 0; i < 8; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    // Decrescente
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (num[i] > num[j]) {
                swap(num[i], num[j]);
            }
        }
    }

    cout << "Ordem Decrescente: ";
    for (int i = 0; i < 8; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

// ===================== EXERCICIO 7 =====================
void exercicio7() {
    double valorA[7];
    double valorB[7];
    char operacao[] = {'+', '-', '*', '/'};
    double resultado[7];

    for (int x = 0; x < 7; x++) {
        cout << "A - Digite o " << x + 1 << "° valor: ";
        cin >> valorA[x];

        cout << "B - Digite o " << x + 1 << "° valor: ";
        cin >> valorB[x];
    }

    for (int i = 0; i < 7; i++) {
        char op = operacao[i % 4];

        switch (op) {
            case '+': resultado[i] = valorA[i] + valorB[i]; break;
            case '-': resultado[i] = valorA[i] - valorB[i]; break;
            case '*': resultado[i] = valorA[i] * valorB[i]; break;
            case '/':
                if (valorB[i] != 0) resultado[i] = valorA[i] / valorB[i];
                else {
                    cout << "Erro: divisao por zero na posicao " << i+1 << "!\n";
                    resultado[i] = 0;
                }
                break;
        }

        cout << valorA[i] << " " << op << " " << valorB[i]
             << " = " << resultado[i] << endl;
    }
}

// ===================== MAIN =====================
int main() {
    int escolha;
    cout << "Escolha o exercicio (1 a 7): ";
    cin >> escolha;

    switch (escolha) {
        case 1: exercicio1(); break;
        case 2: exercicio2(); break;
        case 3: exercicio3(); break;
        case 4: exercicio4(); break;
        case 5: exercicio5(); break;
        case 6: exercicio6(); break;
        case 7: exercicio7(); break;
        default: cout << "Exercicio invalido!" << endl;
    }

    return 0;
}
