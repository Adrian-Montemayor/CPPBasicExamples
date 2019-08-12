#include <iostream>
#include <vector>

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
    
    int test_scores [5] {100,90,50,90,85};
    int movie_rating [3][4] 
    {
      {0,4,3,5},
      {0,3,4,2},
      {1,4,4,5}
    };
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[0] << endl;
    cout << "Third score at index 2: " << test_scores[0] << endl;
    cout << "Fourth score at index 3: " << test_scores[0] << endl;
    cout << "Fifth score at index 4: " << test_scores[0] << endl;
    vector <char> vowels (5); //tells the compiler you want 5 characters
    vector <int> games_scores (5); // tells the compiler you want 5 values
    vector <double> temperatures (365,80.0); // initilize 365 doubles to 80.
    cout << "First temperature at index 0: " << temperatures[0] << endl;
    cout << "Second temperature at index 1: " << temperatures[1] << endl;
	return 0;
}
