#include<iostream>
#include "rectangle.cpp"
#include "triangle.cpp"

using namespase std;


int main()
{
	Rectangle rectangleBleu (4,10);
	Triangle triangleBleu(4,10);

	cout<<"l'aire du rectangle est: "<<rectangleBleu.area<<endl;
	


	cout<<"l'aire de triangle est: "<<triangleBleu.area<<endl;








	return 0;
}
