using namespace std;
#include <iostream>



template <typename T>



//La fonction powiter
T powiter(T x, int y)
{
    T p=1;
    for (int i=0;i<y;i++)
        p=p*x;
    return p;
}









template <typename A>
//la fonction powrec
A powrec(A x, int y)
{
	if (y==0)
        return 1;

    else if (y%2==0)
        return powrec(x, y/2)*powrec(x, y/2);

    else 
        return powrec(x, (y-1)/2)*powrec(x, (y-1)/2)*x;

}







int main()
{
	cout<<powiter(2,3)<<endl;
	cout<<powiter(1.2,3)<<endl;

	cout<<powrec(2,3)<<endl;
	cout<<powrec(1.2,3)<<endl;
}