#include <iostream>
#include <locale.h>
#include <fstream>
#include <string>


using namespace std;




int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	ifstream arq;
	arq.open("lista.txt");

	if (arq.is_open())
	{
		string linha;
		while (getline(arq, linha))
		{

			string ultimo_nome;
			ultimo_nome = linha;


			int pos1;
			int pos2;
			pos1 = linha.find(" "); 
			pos2 = linha.rfind(" ");


			ultimo_nome.erase(0, pos2); 
			ultimo_nome.erase(0, 1);
			linha.erase(pos2, linha.size()); 

			ultimo_nome.append(", " + linha);

			cout << ultimo_nome << endl;
			

			
			
			

		}
		arq.close();

	}
	else {
		cout << "Não foi possível abrir o arquivo.";
	}



	return 0;
}
