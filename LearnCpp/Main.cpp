#include <iostream>
#include "Source.cpp"





int main()
{
	int x, y,z,t;
	std::cout << "toplamak icin 2 sayi giriniz: \n";
	std::cin >> x >> y;

	int carp(int a, int b); //forward declaration (blok hariç kalanýný yaz)

	z = topla(x, y);
	t = carp(x, y);

	doSomething(carp(x,y),topla(x,y));
	
	doPrint(x, y);

	std::cout << "girdiginiz sayilarin toplami: " << z << "\n";
	std::cout << "girdiginiz sayilarin carpimi: " << t << std::endl;
	std::cout << "girdiginiz sayilarin farki: " << cikar(x,y) << std::endl;
	std::cout << "carpimlari ile toplamlarinin farki: " << doSomething(carp(x, y), topla(x, y)) << std::endl;
	std::cout << "girdiginiz sayilarin bolumu: " << bol(x,y) << std::endl;
	std::cout << "ilk girdiginiz sayinin yarisi " << bol(x) << std::endl;
	std::cout << "ikinci girdiginiz sayinin yarisi " << bol(y) << std::endl;


	




	std::cout << print(); //alt alta 2 tane A yazdiracak

	return 0;
}





