#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
	do{
		if(n<=0){
			cout<<"Ingrese un valor positivo mayor que cero: "<<endl;
			cin>>n;
		}
	}while(n<=0);
    int contador = 1;
    cout<<"Los "<<n<<" primeros multiplos de 7 son: "<<endl;
    while (contador <= n) {
        cout << contador * 7 << endl;
        contador++;
    }

    return 0;
}
