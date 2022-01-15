#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)
#include <math.h> // para fazer potenciacao x²...

using namespace std;
/*
--------------------------------------------------------------------
exercicio

fazer um programa para ler as medidas da 
base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, 
com quatro casas decimais, conforme exemplos.
--------------------------------------------------------------------
*/
int main()
{
    float b, h, area, diagonal, perimetro;

    cout << "Digite a altura (h) do retangulo:  ";
    cin >> h;
    cout << "Digite a base (b) do retangulo: ";
    cin >> b;
  
    area = (h*b);
    perimetro = (h*2)+(b*2);
    diagonal = sqrt((pow(b,2))+(pow(h,2))); 
    
/* 
sqrt() ele ira me retornar a raiz quadrada de um numero
pow() vai elevar em potenciacao  x² ex: pow(x,2)
*/

     cout << "\n A area do seu retangulo " << fixed << setprecision(4) << area; 
    cout << "\n O diagonal do seu retangulo " << fixed << setprecision(4) << diagonal; 
    cout << "\n O perimetro do seu retangulo " << fixed << setprecision(4) << perimetro << endl; 

    return 0;
}