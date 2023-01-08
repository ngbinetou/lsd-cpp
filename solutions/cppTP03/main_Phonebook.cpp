#include <iostream>
#include "Phonebook.cpp"
#include "Contact.cpp"

using namespace std;



int main()
{

	// un phonebook

	phonebook Repertoire;
	int k;
	cout<<"Bienvenue dans le phonebook. Que voulez-vous faire."<<endl<<"1) Ajouter un contact"<<endl<< "2) Chercher un contact"<<endl<<"3) quitter: attention vos cantacts seront perdus a jamais"<<endl;
	cin >> k;


	int l;
	while (k==1 || k==2)
	{
		switch (k)
		{
			case 1:
			cout<<"Veulliez ajout votre nouveau contact"<<endl;

			Repertoire.ADD();
			cout<<"Entrer une nouvelle option"<<endl;
			cin>>l;

			break;





			case 2:
			cout<<"Bienvenue dans le moteur de recherche"<<endl;

			Repertoire.search();
			cout<<"Entrer une nouvelle option"<<endl;
			cin>>l;
			break;



			default:
			cout<<"Option inconnue"<<endl<< "Fin du programme "<<endl;
			break;

		}
		k=l;
	}

	if(k==0)
		return 0;

	else
	{
		cout<<"Mauvaise option.Nous vous donnons une derniere tentative"<<endl;
		cin >> k;
	}



	
};