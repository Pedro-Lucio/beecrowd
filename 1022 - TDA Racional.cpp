#include <iostream>
using namespace std;

int calculaMDC(int x, int y) {
    return (y == 0) ? x : calculaMDC(y, x % y);
}

int main() {
    int casos;
    char operador, separador;
    int num1, den1, num2, den2, numRes, denRes;

    cin >> casos;
    for (int idx = 0; idx < casos; ++idx) {
        cin >> num1 >> separador >> den1 >> operador >> num2 >> separador >> den2;

        if (operador == '+') {
            numRes = num1 * den2 + num2 * den1;
            denRes = den1 * den2;
        } 
        else if (operador == '-') {
            numRes = num1 * den2 - num2 * den1;
            denRes = den1 * den2;
        } 
        else if (operador == '*') {
            numRes = num1 * num2;
            denRes = den1 * den2;
        } 
        else if (operador == '/') {
            numRes = num1 * den2;
            denRes = den1 * num2;
        }

        cout << numRes << "/" << denRes << " = ";

        int mdc = (numRes < 0) ? calculaMDC(-numRes, denRes) : calculaMDC(numRes, denRes);

        numRes /= mdc;
        denRes /= mdc;

        cout << numRes << "/" << denRes << endl;
    }

    return 0;
}
