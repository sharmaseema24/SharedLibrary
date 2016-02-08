#include "AddNum.h"
#include <iostream>

using namespace std;

AddNum::AddNum()
{
	cout << "\n AddNum constructor"<<endl;
}

void AddNum::setFirst(int var)
{
  first = var;
}

AddNum::~AddNum()
{
	cout << "\n AddNum Desctuctor"<<endl;
}

