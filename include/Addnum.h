
//Class declaration to add two integers

class AddNum
{
private:
int first;
int second;

public:
AddNum();	//construstor
~AddNum();	//destructor

void setFirst(int var);
void setSecond(int var)
{
 second = var;
}

int getSum() const
{
return (first+second);
}

};
