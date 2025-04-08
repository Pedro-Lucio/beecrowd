#include <iostream>
using namespace std;

int main(){
 string aux;
 int dia_inicial, dia_final, hora_inicial, hora_final, minuto_inicial, minuto_final, segundo_inicial, segundo_final;

 cin >> aux >> dia_inicial;
 cin >> hora_inicial >> aux >> minuto_inicial >> aux >> segundo_inicial;
 cin >> aux >> dia_final;
 cin >> hora_final >> aux >> minuto_final >> aux >> segundo_final;
 
segundo_inicial = segundo_final - segundo_inicial;
minuto_inicial = minuto_final - minuto_inicial;
hora_inicial = hora_final - hora_inicial;
dia_inicial = dia_final - dia_inicial;

if(segundo_inicial < 0){ segundo_inicial += 60; minuto_inicial--; }
if(minuto_inicial < 0){ minuto_inicial += 60; hora_inicial--; }
if(hora_inicial < 0){ hora_inicial += 24; dia_inicial--; }

cout << dia_inicial << " dia(s)" << endl;
cout << hora_inicial << " hora(s)" << endl;
cout << minuto_inicial << " minuto(s)" << endl;
cout << segundo_inicial << " segundo(s)" << endl;

return 0;
}
