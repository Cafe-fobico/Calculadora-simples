#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
void sep(){
cout<<"---------------------------";
}
float soma (float s1, float s2){
float resultado;
resultado = s1+s2;
return(resultado);
}
float subtrair (float t1, float t2){
float resultado;
resultado = t1-t2;
return(resultado);
}
float multiplicar (float m1, float m2){
float resultado;
resultado = m1*m2;
return(resultado);
}
float dividir (float d1, float d2){
float resultado;
resultado = d1/d2;
return(resultado);
}
int main()
{
setlocale(LC_ALL, "");
float n1, n2, resultado;
int op;
cout<<"Vamos calcular\n";
sep();
cout<<"\nSelecione uma das opcoes\n";
cout<<"1-       SOMAR\n";
cout<<"2-       SUBTRAIR\n";
cout<<"3-       MULTIPLICAR\n";
cout<<"4-       DIVIDIR\n";
sep();
cout<<"\nDigite a opção de sua escolha: ";
cin>>op;
sep();
switch(op){
case 1:
cout<<"\nDigite o primeiro número: ";
cin>>n1;
cout<<"\nDigite o segundo numero: ";
cin>>n2;
sep();
resultado=soma(n1, n2);
cout<<"\nO resultado da SOMA é: "<<resultado<<endl;
sep();
break;
case 2:
cout<<"\nDigite o primeiro número: ";
cin>>n1;
cout<<"\nDigite o segundo número: ";
cin>>n2;
sep();
resultado=subtrair(n1, n2);
cout<<"\nO resultado da SUBTRAÇÃO é: "<<resultado<<endl;
break;
case 3:
cout<<"\nDigite o primeiro número: ";
cin>>n1;
cout<<"\nDigite o segundo número: ";
cin>>n2;
sep();
resultado=multiplicar(n1, n2);
cout<<"\nO resultado da MULTIPLICAÇÃO é: "<<resultado<<endl;
break;
case 4:
cout<<"\nDigite o primeiro número: ";
cin>>n1;
cout<<"\nDigite o segundo número: ";
cin>>n2;
sep();
resultado=dividir(n1, n2);
cout<<"\nO resultado da DIVISÃO é: "<<resultado<<endl;
break;
}
return 0;
}
