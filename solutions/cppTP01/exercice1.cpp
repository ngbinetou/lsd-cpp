#include<iostream>

using namespace std;



struct noeudd
{
   int valeur;
   struct noeudd* suivant;
};

typedef struct noeudd noeud;





void push(int i, noeud** tete) 
{

   noeud* nnoeud {new noeud};


	if(*tete==NULL)
	{
		nnoeud->valeur = i;
   		nnoeud->suivant = NULL;
   		*tete = nnoeud;

	}

	else
	{
		nnoeud->valeur = i;
		nnoeud->suivant=NULL;
		noeud* temp;
		temp=*tete;
		while(temp->suivant != NULL)
		{
			
			temp=temp->suivant;
		}

  		temp->suivant=nnoeud;

	}

 
  return;
}
 




void pop( noeud* tete) 
{
   if(tete==NULL)
   cout<<"pile vide"<<endl;
   else 
   {
   		noeud* temp1;
   		noeud* temp=tete;
		while(temp->suivant != NULL)
		{
			temp1=temp;
			temp=temp->suivant;
		}

   		temp1->suivant=NULL;
    	cout<<"l'element supprime est "<< temp->valeur <<endl;
      	
      	
      	delete temp;
   }
   return;
}





void print(noeud* L)
{
	while(L->suivant != NULL)
	{
		cout<< L->valeur <<endl;
		L=L->suivant;
	}
	cout<< L->valeur <<endl;
	return;
}






int main()
{
	noeud *L=NULL;
	push(1,&L);
	push(2,&L);
	push(3,&L);
	push(4,&L);
	push(5,&L);
	push(6,&L);
	pop(L);
	print(L);
	return 0;


}
