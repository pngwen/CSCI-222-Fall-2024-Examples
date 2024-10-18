#include <iostream>
#include <string>

using namespace std;

class CopyOperators
{
public:
    // constructors
    CopyOperators();
    CopyOperators(const CopyOperators &rhs);
    CopyOperators(const string &str, int number);

    // accessors and mutators
    string getStr() const;
    void setStr(const string &str);
    int getNumber() const;
    void setNumber(int number);

    //member operator
    CopyOperators& operator=(const CopyOperators &rhs);

private:
    string str;
    int number;
};

void f(CopyOperators obj)
{
    cout << "Inside f()" << endl;
}


int main() 
{
    CopyOperators obj1("Hello", 5);
    CopyOperators obj2(obj1);
    CopyOperators obj3;

    cout << "obj1: " << obj1.getStr() << " " << obj1.getNumber() << endl;
    cout << "obj2: " << obj2.getStr() << " " << obj2.getNumber() << endl;

    f(obj1);
    obj3 = obj1;

    return 0;
}


CopyOperators::CopyOperators()
{
    cout << "No Arg Constructor" << endl;
    str = "";
    number = 0;
}

CopyOperators::CopyOperators(const CopyOperators &rhs)
{
    cout << "Copy Constructor" << endl;
    str = rhs.str;
    number = rhs.number;
}

CopyOperators::CopyOperators(const string &str, int number)
{
    cout << "Arg Constructor" << endl;
    this->str = str;
    this->number = number;
}

string CopyOperators::getStr() const
{
    return str;
}

void CopyOperators::setStr(const string &str)
{
    this->str = str;
}

int CopyOperators::getNumber() const
{
    return number;
}

void CopyOperators::setNumber(int number)
{
    this->number = number;
}

CopyOperators& CopyOperators::operator=(const CopyOperators &rhs)
{
    cout << "Assignment Operator" << endl;
    if (this != &rhs)
    {
        str = rhs.str;
        number = rhs.number;
    }
    return *this;
}