#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "portuguese_brazil");

    //EXERCÍCIO 1 
    {
        float a,b,c,d,x1,x2;
        cout << "Digite 3 valores \n";
        cin >> a >> b >> c;
        d = (b*b) - 4*a*c;
        if(d > 0){
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            cout << "x1: " << x1 << "\n" << "x2: " << x2 << "\n";
        } else if(d == 0){
            x1 = -b / (2*a);
            cout << "O valor é: " << x1 << "\n";
        } else {
            cout << "Não existe raiz \n";
        }
    }

    // EXERCÍCIO 2 
    {
        float a,b,h;
        cout << "Digite 2 valores para descobrirmos a área do retângulo \n";
        cin >> b >> h;
        a = b*h;
        cout << "A área é: " << a << " cm²\n";
    }

    // EXERCÍCIO 3 
    {
        float a,b,h;
        cout << "Digite 2 valores para descobrirmos a área do triângulo\n";
        cin >> b >> h;
        a = (b*h)/2;
        cout << "A área é: " << a << " cm²\n";
    }

    //EXERCÍCIO 4 
    {
        float area, b, B, h;
        cout << "Digite 3 valores para descobrirmos a área do trapézio\n";
        cin >> B >> b >> h;
        area = (B+b)*h/2;
        cout << "A área é: " << area << " cm²\n";
    }

    //EXERCÍCIO 5 
    {
        int v1;
        cout << "Digite um valor inteiro\n";
        cin >> v1;
        if(v1 % 2 == 0){
            cout << v1 << " é par \n";
        } else {
            cout << v1 << " é ímpar \n";
        }
    }

    // EXERCÍCIO 6 
    {
        string nome;
        int idade;
        cout << "Digite o seu nome: ";
        cin >> nome;
        cout << "Digite a sua idade: ";
        cin >> idade;

        cout << "Olá, " << nome << "!" << endl;
        if (idade >= 0 && idade <= 11) {
            cout << "Você é uma criança." << endl;
        }
        else if (idade >= 12 && idade <= 17) {
            cout << "Você é um adolescente." << endl;
        }
        else if (idade >= 18 && idade <= 50) {
            cout << "Você é um adulto." << endl;
        }
        else if (idade > 50) {
            cout << "Você é um idoso." << endl;
        }
        else {
            cout << "Idade inválida." << endl;
        }
    }

    // EXERCÍCIO 7 
    {
        int ano;
        cout << "Digite um ano qualquer: ";
        cin >> ano;
        if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
            cout << ano << " é um ano bissexto!" << endl;
        } else {
            cout << ano << " não é um ano bissexto!" << endl;
        }
    }

    //EXERCÍCIO 8 
    {
        int a1,a2,a3;
        cout << "Digite 3 ângulos de triângulo: ";
        cin >> a1 >> a2 >> a3;

        if (a1 + a2 + a3 != 180 || a1 <= 0 || a2 <= 0 || a3 <= 0) {
            cout << "Os ângulos não formam um triângulo válido." << endl;
        }
        else if(a1==a2 && a2==a3){
            cout << "É um triângulo EQUILÁTERO." << endl;
        }
        else if(a1==a2 || a1==a3 || a2==a3){
            cout << "É um triângulo ISÓSCELES." << endl;
        }
        else {
            cout << "É um triângulo ESCALENO." << endl;
        }
    }

    // EXERCÍCIO 9 
    {
        float n1,n2,n3,n4,media;
        cout << "Digite 4 notas: ";
        cin >> n1 >> n2 >> n3 >> n4;
        
        float maior=n1, menor=n1;
        if (n2 > maior) maior = n2;
        if (n3 > maior) maior = n3;
        if (n4 > maior) maior = n4;
        if (n2 < menor) menor = n2;
        if (n3 < menor) menor = n3;
        if (n4 < menor) menor = n4;
        
        media = (n1+n2+n3+n4)/4;
        cout << "Maior nota: " << maior << endl;
        cout << "Menor nota: " << menor << endl;
        cout << "Média: " << media << endl;
    }

    return 0;
}
