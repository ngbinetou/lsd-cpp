#include<iostream>

#include "Phonebook.hpp"

using namespace std;




phonebook::phonebook():index{0}{}



void phonebook::ADD()
{
	if (index>7)
			index=0;


	string FirstName;
	string LastName;
	string NickName;
	string PhoneNumber;

	cout<<"entre le firstname";
	cin>>FirstName;

	cout<<"entre le lastname";
	cin>>LastName;

	cout<<"entre le nickname";
	cin>>NickName;

	cout<<"entre le phonenumber";
	cin>>PhoneNumber;
	

	LesContacts[index].firstName=FirstName;
	LesContacts[index].lastName=LastName;
	LesContacts[index].nickName=NickName;
	LesContacts[index].phoneNumber=PhoneNumber;
		



	index++;


}




void phonebook:: search()
{
	for (int i=0;i<8;i++)
	{
		string s=".";
		string s0="         ";
		string s1=LesContacts[i].firstName;
		string s2=LesContacts[i].lastName;
		string s3=LesContacts[i].nickName;


		//gerer l'affichage de firstName
		if (s1.length() < 10)
		{
			s1=s1+s0;
			s1=s1.substr(0,10);
		}
		else if (s1.length() > 10)
		{
			s1=s1.substr(0,9);
			s1+=s;
		}
		else
			s1=s1;




		//gerer l'affichage de lastName
		if(s2.length ()< 10)
		{
			s2=s2+s0;
			s2=s2.substr(0,10);
		}
		else if (s2.length()> 10)
		{
			s2=s2.substr(0,9);
			s2+=s;
		}
		else
			s2=s2;



		//gerer l'affichage de nickName
		if (s3.length() < 10)
		{
			s3=s3+s0;
			s3=s3.substr(0,10);
		}
		else if (s3.length() > 10)
		{
			s3=s3.substr(0,9);
			s3+=s;
		}
		else
			s3=s3;


		





		cout<<i<<"|"<<s1<<"|"<<s2<<"|"<<s3<<endl;
	}



	int k;
	cout<<"donner l'indice de l'utilisateur dont vous voulez visualiser les informations";
	cin>>k;
	
	while (k<0 || k>7)
	{
		cout<<"index invalid, please enter a new index"<<endl;
		cin>>k;

	}

	cout<<"Le contact correspondant a l indice "<< k <<"est"<<endl<<"Nom: "<<LesContacts[k].firstName<<endl<<"Prenom: "<<LesContacts[k].lastName<<endl<<"surnom: "<<LesContacts[k].nickName;


}




