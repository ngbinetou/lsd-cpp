/*Reverse the linked List in groups of given size.
Given a linked list of size N. The task is to reverse every k nodes in the linked list.*/

#include <iostream>
using namespace std;


struct noeudd
{
   int valeur;
   struct noeudd* suivant;
};

typedef struct noeudd noeud;



//ajout fin d'une liste
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



// copier les k premiers elements d'une liste
noeud* copieK(int k,noeud** ll, noeud** L)
{
    int j;
    noeud* temp= *L;

   
    for( int i=0;i<k;i++)
    {
        if(temp->suivant !=NULL)
        {
            int j= temp->valeur;
            push(j,ll);
        }
        
        temp= temp->suivant;
    }

    
    return *ll;
}



// Pour recuperer la derniere valeur de la liste
int popRecup (noeud* tete)
{

    int k;
    if(tete==NULL)
    cout<<"pile vide"<<endl;
    else 
    {
        noeud* temp1 ;
        noeud* temp=tete;
        while(temp->suivant != NULL)
        {
            temp1=temp;
            temp=temp->suivant;
        }

        temp1->suivant=NULL;
        k= temp->valeur;
        
        
        delete temp;
   }
   return k;
}



// Suppression du début d'une liste 
void popInverse (noeud** L)
{
    if(L!=NULL)
    {
        noeud* temp=*L;
        
        if(temp->suivant !=NULL)
        {
            *L=(*L)->suivant;
            delete(temp);
        } 
    }
        
    return;
}






int main()
{
    noeud* L=NULL;
    noeud* ll=NULL;
    noeud* T= NULL;

    push(1,&L);
    push(2,&L);
    push(3,&L);
    push(4,&L);
    push(5,&L);
    push(6,&L);
    push(7,&L);
    push(8,&L);


    int k=3;
    int n=len(L);
    int r1=n/k;
    int r2=n%k;
    int m;

    

    while (r1>0)
    {
        //copier les k premiers elements de la liste;
        ll=copieK(k,&ll,&L);


        //supprimer les k premiers elements de la liste deja copies et creer la reverse linked list 
        while (k>0)
        {
            popInverse(&L);

            m= popRecup(ll);
            push(m,&T);
        
            k-=1;
        }

        r1-=1;
    }
        

    

    //Ajouter les derniers elements de la linked liste si n n'est pas divisible par k;
    if (r2>0)
    {
        while(r2>0)
        {
            m= popRecup(L);
            push(m,&T);
            
            r2-=1; 
        }
    }

    print(T);



    return 0;
}














































































































