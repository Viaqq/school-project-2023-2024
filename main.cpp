#include <iostream>

// (ДЗ на 24.11)

// (ДЗ на 10.11)

void UnsignedSignedDifferences() {
	unsigned short foo1 = -1;
	short foo2 = -1;
	std::cout << "Unsigned: " << foo1 << std::endl;
	std::cout << "Signed: " << foo2 << std::endl;
}

// (ДЗ на 08.12)

// Функция поиска НОД двух чисел по алгоритму Евклида (не ДЗ)

long int findNod(long int _num1, long int _num2) {
        while (_num1 != _num2) {
                if (_num1 > _num2) {
                        _num1 = _num1 - _num2;
                } else if (_num1 < _num2) {
                        _num2 = _num2 - _num1;
                }
        }
        return _num1;
}

void findNokThree(long int num1, long int num2, long int num3) {
        long int nod, nok = 0;
        nod = findNod(num1, num2); // Ищем НОД двух чисел
        nok = (num1 / nod) * (num2 / nod) * nod; // Ищем НОК двух чисел
        nod = findNod(nok, num3);
        nok = (nok / nod) * (num3 / nod) * nod; // Ищем НОК трёх чисел
        std::cout << nok << std::endl;
}

// Точка входа

int main() {
	long int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	findNokThree(a, b, c);
	return 0;
}
