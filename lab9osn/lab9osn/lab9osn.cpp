//V13
//#include <iostream>
//using namespace std;
//int dnx(int n, int x) {
//	if (x == 1) return 1;
//	else if ((n % x == 0) && (x > 1)) return dnx(n, x - 1) + 1;
//	else if ((n % x != 0) && (x > 1)) return dnx(n, x - 1);
//	else cout << "Ошибка!";
//}
//int main() {
//	setlocale(LC_ALL, "rus");
//	cout << "Найдем решение задачи подсчета для натурального числа n\n количества всех его положительных делителей,\n меньших или равных заданному натуральному числу x." << endl;
//	int n, x;
//	cout << "Введите натуральное число n: ";
//	cin >> n;
//	cout << "Введите натуральное число x: ";
//	cin >> x;
//	cout << "Результат: " << dnx(n, x);
//}
//V15
#include <iostream>
using namespace std;
int S(int x) {
	if (x > 100) return x += 10;
	else return S(S(x + 4));
}
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Найдем решение задачи подсчета значений S(x) для любых целых не отрицательных значений x." << endl;
	int x;
	cout << "Введите натуральное число x: ";
	cin >> x;
	if (x > 0)cout << "Результат: " << S(x);
	else cout << "Ошибка\n";
}

