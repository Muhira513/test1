#include <iostream>
using namespace std;

class CParent {
public:
	int m_Value;
};

class CTest : public CParent
{
public:
	int m_Value;
};

void main()
{
	CTest t;
	t.CParent::m_Value = 1;
	t.m_Value = 2;

	cout << t.CParent::m_Value << endl;
	cout << t.m_Value << endl;
}
