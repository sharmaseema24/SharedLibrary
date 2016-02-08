#include <iostream>
#include "AddNum.h"
using namespace std;

int main()
{
	AddNum Add;
	
	Add.setFirst(5);
	Add.setSecond(20);
	cout << "\nSum is:" << Add.getSum() <<endl;
	return 0;
}
