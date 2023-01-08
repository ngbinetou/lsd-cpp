using namespace std;
#include <iostream>
#include<vector>



template <typename T>




//fonction qui multiplie deux matrices qui sera utiliser dans matpow
vector<vector<T>> mult(vector<vector<T>> x, vector<vector<T>> y)
{
	vector<vector<T>> z;
	
	for (int i=0; i<x.size(); i++)
	{
		for (int j=0; j< y[i].size(); j++)
		{
			for (int k=0; k<3; k++)
				z [i][j] += x[i][k] * y[k][j];
		}
	}
	return z;
	
}



template <typename T>


// La fonction matpow, pour les matrices carres
vector<vector<T>> matpow(vector<vector<T>> vec, int y)
{

	if (y==0)
        return vector<vector<T>> (0);

    else if (y%2==0)
        return mult(matpow(vec, y/2),matpow(vec, y/2));

    else 
        return mult(mult(matpow(vec, (y-1)/2),matpow(vec, (y-1)/2)),vec);

}




template <typename T>

//La fonction matprint pour afficher
 void matprint(vector<vector<T>> vec)
{
	for (int i=0; i<vec.size(); i++)
	{
		for (int j=0; j < vec[i].size(); j++)
			cout<< vec[i][j]<< " ";
		cout <<endl;
	}

}






template <typename T>

//La foncion matpownaive, pour les matrices carres mais avec une plus grande complexite
vector<vector<T>> matpownaive(vector<vector<T>> x, int k)
{
	vector<vector<T>> z;
	
	int m =0;
	while (m,k)
	{
		for (int i=0; i<x.size(); i++)
		{
			for (int j=0; j< x[i].size(); j++)
			{
				for (int l=0; l<3; l++)
					z [i][j] += x[i][k] * x[k][j];
			}
		}
		z=x;	
	}
	return z;
	
}






int main()
{
	vector <vector<int>> v1{{1,2},{3,4}};
	
	
	
	// print la matrice v1
	matprint(v1);
	
	
	//Faire le mat**k avec k=2
	vector<vector<int>> mat =matpow(v1,2);
	
	//print resultat de matpow
	matprint(mat);
	


	//Faire matpownaive(v1,2);
	vector<vector<int>> mattt =matpownaive(v1,2);
	
	
	//print resultat de matpownaive
	matprint(mattt);

	return 0;
}

//POUR DE TRES GRANDES VALEURS DE K, MATPOW EST LARGEMENT PLUS EFFICACE QUE MATPOW NAIVE















