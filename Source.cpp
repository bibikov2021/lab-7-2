#include <iostream>
#include <algorithm>
using namespace std;


void srt(double& v1, double& v2)
{
	if (v1 < v2)
		swap(v1, v2);
}

void func(double* a, double* b, double* c) {
	srt(*a, *b);
	srt(*a, *c);
	srt(*b, *c);
}

int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c;

	cout << "��������� 3 �����: ";
	cin >> a >> b >> c;

	func(&a, &b, &c);

	cout << "����� ����� ������ ��������(a,b,c): " << a << " " << b << " " << c;



	return 0;
}