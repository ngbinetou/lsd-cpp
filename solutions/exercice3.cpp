
#include <iostream>
using namespace std;

struct noeudd
{
   int valeur;
   struct noeudd* suivant;
};

typedef struct noeudd noeud;



//la fonction qui calcule la longueur
int len(noeud* L)
{   

    int nb=0;
    noeud* temp=L;
    while(temp != NULL)
    {
        nb++;
        temp=temp->suivant;
    }

    return nb;
}



//La Fonction print
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



//la fonction qui ajoute
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
 


//la fonction recherche
int recherche ( noeud* NewL, int j) 
{
   
   	noeud* temp=NewL;
	while(temp != NULL)
	{
		if (temp->valeur==j)
			return 1;
		else 
			return 0;
	}
}






// creation de la liste sans elements dupliques.
noeud* copie(noeud** L, noeud** NewL)
{
    int j;
    noeud* temp= *L;

    
    while(temp!=NULL)
    {
        int j= temp->valeur;
        int k= recherche(*NewL,j);
        if (k==1);
        	push(j,NewL);
        temp=temp->suivant;
    }
        
    temp= temp->suivant;
    

    
    return *NewL;
}



int main()
{
	noeud *L=NULL;
	noeud *NewL=NULL;

	push(1,&L);
	push(2,&L);
	push(3,&L);
	push(3,&L);
	push(4,&L);
	push(5,&L);
	push(6,&L);
	push(7,&L);
	push(8,&L);

	copie(&L, &NewL);
	print(NewL);


	return 0;
}