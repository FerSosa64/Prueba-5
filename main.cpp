#include <iostream>
#include <array>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char caracteres[80];
	cin.getline(caracteres, 80);
	
	cout << caracteres;
	
	return 0;
}