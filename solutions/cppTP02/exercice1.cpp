using namespace std;
#include <iostream>



template <typename T>



//La fonction multiply
T multiply(T x, int y)
{
	return x*y;

}


int main()
{
	cout<<multiply(2,3)<<endl;
	cout<< multiply(1.2,3)<<endl;
	return 0;
}