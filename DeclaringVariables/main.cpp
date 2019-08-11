#include <iostream>

using namespace std;

int main()
{
    const double pi {3.1415926};
    string name = "adrian"; // Normal string
    int age; //Uninitialized
    int age_two = 21; // C-Like initialization
    int age_three (21); // Constructor initialization
    int age_four {21}; //c++11  list initialization syntax
    double total_hours {7.5};
    cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int " << sizeof(unsigned int) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    cout << "long long " << sizeof(long long) << " bytes" << endl;
    
    cout << "float " << sizeof(float) << " bytes" << endl;
    cout << "double " << sizeof(double) << " bytes" << endl;
    cout << "long double " << sizeof(long double) << " bytes" << endl;
	return 0;
}
