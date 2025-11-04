// laboratorium5_PP.cpp :
// Filip Stankiewicz 170396

// ZADANIE 1
/* #include <iostream>
using namespace std;
int main(){
	int tab[10], i;
	for (i = 0; i < 10; i++) {
		cout << endl << "Podaj liczbe calkowita: ";
		cin >> tab[i];
	}

	cout << endl << "Liczby w odwrotnej kolejnosci : ";
	for (i = 9; i >= 0; i--) {
		cout << tab[i] << " ";
	}
}
*/


// ZADANIE 2 - do skonczenia
/* #include <iostream>
using namespace std;
int main() {
	int tab[10];
	tab[0] = 0;
	tab[1] = 1;
	int x;
	cout << "Podaj rozmiar tablicy: ";
	cin >> x;

	cout << endl << "Ciag Fibonacciego: ";
	for (int i = 0; i < x; i++) {
		tab[i + 1] = tab[i - 1] + tab[i];
		cout << tab[i] << " ";
	}
}
*/


// ZADANIE 3 - do skonczenia srand zamiast rand i minmax
/* #include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
	int tab[10];
	int srednia = 0;
	for (int i = 0; i < 10; i++) {
		tab[i] = rand();
		cout << tab[i] << " ";
		srednia = srednia + tab[i];
	}
	srednia = srednia / 10;
	cout << endl << "Srednia wartosc elementow tablicy: " << srednia;
	cout << endl << "Najmniejszy element tablicy: " << min(tab[10]);
	cout << endl << "Najwiekszy element tablicy: " << max(tab[10]);
}
*/


// ZADANIE 4 - do sprawdzenia
/* #include <iostream>
using namespace std;
int main() {
	int tab	[10] [10], w, k;

	cout << "Podaj liczbe wierszy macierzy: ";
	cin >> w;
	cout << "Podaj liczbe kolumn macierzy: ";
	cin >> k;

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			cout << "Podaj element macierzy [" << i+1 << "]" << "[" << j+1 << "]: ";
			cin >> tab[i][j];
		}
	}
}
*/


// ZADANIE 5 -  do zoptymalizowania
/* #include <iostream>
using namespace std;
int main() {
	int tab[10];
	int n;
	cout << "Podaj liczbe elementow tablicy (max 10): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Podaj element tablicy [" << i + 1 << "]: ";
		cin >> tab[i];
	}
	if (n < 10) {
		for (int j = n; j < 10; j++) {
			tab[j] = 0;
		}
	}
	cout << "Elementy tablicy to: ";
	for (int k = 0; k < 10; k++) {
		cout << tab[k] << " ";
	}
}
*/


// ZADANIE 6 - dodac srand
/* #include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int tab[10];
	int numerek = rand() % 11;
	int i, licznik = 0;
	cout << "Elementy tablicy: ";
	for (i = 0; i < 10; i++) {
		tab[i] = rand() % 11;
		cout << tab[i] << " ";
		if (numerek == tab[i]) {
			licznik++;
		}
	}
	cout << endl << "Szczesliwy numerek to: " << numerek << " i wystapil on " << licznik << " razy.";
}
*/


// ZADANIE 7
/* #include <iostream>
using namespace std;
int main() {
	int tab1[10][10];
	int tab2[10][10];
	int x1, x2;

	cout << "Podaj liczbe wierszy i kolumn macierzy 1: ";
	cin >> x1;

	cout << "Podaj liczbe wierszy i kolumn macierzy 2: ";
	cin >> x2;

	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < x; j++) {
			cout << "Podaj element macierzy 1 [" << i <<"][" << j <<"]: "
		}
	}
}
*/