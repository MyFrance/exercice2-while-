// afficher les nombres de 10 à 100

#include <iostream>
using namespace std;
int main()
{
	int nombre(10);

	while (nombre <= 100)
	{
		cout << nombre << endl;
		++nombre;
	}

	cout << "tout est ok " << endl;
	return 0; 
}
