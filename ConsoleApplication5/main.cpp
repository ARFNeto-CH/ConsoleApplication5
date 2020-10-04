#include "um.h"

int main(void)
{
	info i1("Nome");
	info i2("CPF");
	i1.print();
	i2.print();

	familia f1("mae");
	familia f2("pai");
	f1.print();
	f2.print();

	cout << "criando o trabalhador\n";
	trabalhador t1(i1, i2, f1, f2);

	return 0;
}
