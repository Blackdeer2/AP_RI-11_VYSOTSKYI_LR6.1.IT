#include <iostream> 
#include <iomanip> 
#include <time.h>
using namespace std;
void Print(int* mas, const int n);
int Numbers(int * mas, const int n);
int Suma(int * mas, const int n);
void Zamina_0(int* mas, const int n);
void Create(int* mas, const int n, int A, int B);
int main()
{
	srand((unsigned)time(NULL));

	const int a = 20;
	int A[a]{};
	Create(A, a, -20, 50);
	Print(A, a);
	cout << "NUmbers = " << Numbers(A, a) << endl;
	cout << "Suma = " << Suma(A, a) << endl;
	cout << "Zamina_0 = "; Zamina_0(A, a); cout << endl;


/*	cout << "A{";
	for (int i = 0; i < a; i++) {

		//A[i] = -20 + rand() % (50 + 20 + 1);
		cout << A[i] << ", ";

	}
	cout << "}" << endl;*/
	return 0;
}

int Suma(int * mas, const int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0 && i % 5 != 0) {
			s += mas[i];
			//cout << mas[i]<<", ";
		}
	}
	return s;
}
void Zamina_0(int* mas, const int n)
{
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0 && i % 5 != 0) {
			mas[i] = 0;

		}
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << ", ";
	}
}

void Create(int* mas, const int n, int A, int B)
{
	for (int i  = 0; i < n; i++) {
		mas[i] = A + rand() % (B - A + 1);
	}
}
void Print(int* mas, const int n) {
	cout << "A {";
	for (int i = 0; i < n; i++)       
	cout <<" "<< mas[i];
	cout << "}";
	cout << endl;
}
int Numbers(int * mas, const int n)
{
	int num = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0 && i % 5 != 0) {
			num++;
		}
	}
	return num;
}