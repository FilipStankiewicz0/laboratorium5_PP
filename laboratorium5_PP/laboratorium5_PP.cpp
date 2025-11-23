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


// ZADANIE 2
/* #include <iostream>
using namespace std;
int main() {
	int tab[100];
	int x;

	cout << "Podaj rozmiar tablicy: ";
	cin >> x;

	tab[0] = 0;
	tab[1] = 1;

	for (int i = 2; i < x; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
	}

	cout << endl << "Ciag Fibonacciego: ";
	for (int i = 0; i < x; i++)
	cout << tab[i] << " ";

}
*/


// ZADANIE 3
/* #include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	int tab[10];
	int srednia = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		tab[i] = rand();
		cout << tab[i] << " ";
		srednia = srednia + tab[i];
	}
	srednia = srednia / 10;

	int mniej = 0;
	for (int i = 0; i < 10; i++) {
		if (tab[i] < srednia) {
			mniej++;
		}
	}
	
	int mini = tab[0], maks = tab[0];
	for (int i = 1; i < 10; i++){
		if (tab[i] < mini) {
			mini = tab[i];
	}
		if (tab[i] > maks) {
			maks = tab[i];
		}
	}

	cout << endl << "Srednia wartosc elementow tablicy: " << srednia;
	cout << endl << "Elementow mniejszych od sredniej jest " << mniej;
	cout << endl << "Najmniejszy element tablicy: " << mini;
	cout << endl << "Najwiekszy element tablicy: " << maks;
}
*/


// ZADANIE 4
/* #include <iostream>
using namespace std;
int main() {
	int w, k;

	cout << "Podaj liczbe wierszy macierzy: ";
	cin >> w;
	cout << "Podaj liczbe kolumn macierzy: ";
	cin >> k;
	
	int** tab = new int* [w];
	for (int i = 0; i < w; i++) {
		tab[i] = new int[k];
	}

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			cout << "Podaj element macierzy [" << i+1 << "]" << "[" << j+1 << "]: ";
			cin >> tab[i][j];
		}
	}
	cout << endl << "Twoja macierz:";
	for (int i = 0; i < w; i++) {
		cout << endl;
		for (int j = 0; j < k; j++) {
			cout << tab[i][j] << "\t";
		}
	}
	for (int i = 0; i < w; i++) {
		delete[] tab[i];
	}
	delete[] tab;
}
*/


// ZADANIE 5
/* #include <iostream>
using namespace std;
int main() {
	int tab[10];
	int n;
	float srednia = 0.0;
	cout << "Podaj liczbe elementow tablicy (max 10): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Podaj element tablicy [" << i + 1 << "]: ";
		cin >> tab[i];
		srednia += tab[i];
	}

	for (int i = n; i < 10; i++) {
		tab[i] = 0;
	}
	srednia /= 10;

	cout << "Elementy tablicy to: ";
	for (int i = 0; i < 10; i++) {
		cout << tab[i] << " ";
	}

	int mini = tab[0], maks = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < mini) {
			mini = tab[i];
		}
		if (tab[i] > maks) {
			maks = tab[i];
		}
	}

	cout << endl << "Wartosc srednia tablicy: " << srednia;
	cout << endl << "Wartosc minimalna tablicy: " << mini;
	cout << endl << "Wartosc maksymalna tablicy: " << maks;
}
*/


// ZADANIE 6
/* /#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
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
	int x1, x2;

	cout << "Podaj liczbe wierszy i kolumn macierzy 1: ";
	cin >> x1;
	int** tab1 = new int* [x1];
	for (int i = 0; i < x1; i++) {
		tab1[i] = new int[x1];
	}

	cout << "Podaj liczbe wierszy i kolumn macierzy 2: ";
	cin >> x2;
	int** tab2 = new int* [x2];
	for (int i = 0; i < x2; i++) {
		tab2[i] = new int[x2];
	}

	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < x1; j++) {
			cout << endl << "Podaj element macierzy 1 [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> tab1[i][j];
		}
	}
	for (int i = 0; i < x2; i++) {
		for (int j = 0; j < x2; j++) {
			cout << endl << "Podaj element macierzy 2 [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> tab2[i][j];
		}
	}
	
	if (x1 == x2) {
		int** wynik = new int* [x1];
		for (int i = 0; i < x1; i++) {
			wynik[i] = new int[x1];
		}
		for (int i = 0; i < x2; i++) {
			for (int j = 0; j < x2; j++) {
				wynik[i][j] = tab1[i][j] + tab2[i][j];
			}
		}
		cout << endl << endl <<  "Wynik dodawania macierzy: ";
		for (int i = 0; i < x2; i++) {
			cout << endl;
			for (int j = 0; j < x2; j++) {
				cout << wynik[i][j] << " ";
			}
		}
		for (int i = 0; i < x1; i++) {
			delete[] wynik[i];
		}
		delete[] wynik;
	}
	else {
		cout << endl << "Nie mozna dodac macierzy o roznych wymiarach. ";
	}

	for (int i = 0; i < x1; i++) {
		delete[] tab1[i];
	}
	delete[] tab1;
	for (int i = 0; i < x2; i++) {
		delete[] tab2[i];
	}
	delete[] tab2;
}
*/


//ZADANIE 8
/* #include <iostream>
using namespace std;
int main() {
	int x1, x2;

	cout << "Podaj liczbe wierszy i kolumn macierzy 1: ";
	cin >> x1;
	int** tab1 = new int* [x1];
	for (int i = 0; i < x1; i++) {
		tab1[i] = new int[x1];
	}

	cout << "Podaj liczbe wierszy i kolumn macierzy 2: ";
	cin >> x2;
	int** tab2 = new int* [x2];
	for (int i = 0; i < x2; i++) {
		tab2[i] = new int[x2];
	}

	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < x1; j++) {
			cout << endl << "Podaj element macierzy 1 [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> tab1[i][j];
		}
	}
	for (int i = 0; i < x2; i++) {
		for (int j = 0; j < x2; j++) {
			cout << endl << "Podaj element macierzy 2 [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> tab2[i][j];
		}
	}

	if (x1 == x2) {
		int** wynik = new int* [x1];
		for (int i = 0; i < x1; i++) {
			wynik[i] = new int[x1];
		}
		for (int i = 0; i < x2; i++) {
			for (int j = 0; j < x2; j++) {
				wynik[i][j] = 0;
				for (int k = 0; k < x2; k++) {
					wynik[i][j] += tab1[i][k] * tab2[k][j];
				}
			}
		}
		cout << endl << endl << "Wynik mnozenia macierzy: ";
		for (int i = 0; i < x2; i++) {
			cout << endl;
			for (int j = 0; j < x2; j++) {
				cout << wynik[i][j] << " ";
			}
		}
		for (int i = 0; i < x1; i++) {
			delete[] wynik[i];
		}
		delete[] wynik;
	}
	else {
		cout << endl << "Nie mozna mnozyc macierzy o takich wymiarach kolumn i wierszy. ";
	}

	for (int i = 0; i < x1; i++) {
		delete[] tab1[i];
	}
	delete[] tab1;
	for (int i = 0; i < x2; i++) {
		delete[] tab2[i];
	}
	delete[] tab2;
}
*/

//ZADANIE 9
/* #include <iostream>
using namespace std;
int main() {
	int x, suma = 0;

	cout << "Podaj liczbe kolumn i wierszy: ";
	cin >> x;
	int** tab = new int*[x];
	for (int i = 0; i < x; i++) {
		tab[i] = new int[x];
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << endl << "Podaj element macierzy [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> tab[i][j];
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			if (i == j) {
				suma = suma + tab[i][j];
			}
		}
	}
	cout << "Suma liczb na glownej przekatnej macierzy: " << suma;

	for (int i = 0; i < x; i++) {
		delete[] tab[i];
	}
	delete[] tab;
}
*/

//ZADANIE 10
/* #include <iostream>
using namespace std;
int main() {
	int tab[10];
	
	for (int i = 0; i <= 9; i++) {
		cout << endl << "Podaj " << i + 1 << " element tablicy: ";
		cin >> tab[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (tab[j] > tab[j + 1]) {
				swap(tab[j], tab[j+1]);
			}
		}
	}

	cout << endl << "Tablica po sortowaniu: ";
	for (int i = 0; i <= 9; i++) {
		cout << tab[i] << " ";
	}
}
*/