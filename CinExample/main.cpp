#include <iostream>
using namespace std;

void date_of_birth()
{
    int m {};
    int d {};
    int y {};
    std::cout << "Enter your date of birth" <<  std::endl;
    std::cin >> m;
    std::cin >> d;
    std::cin >> y;
    
    std::cout << m << " " << d << " " << y << std::endl;
}

int main()
{
	date_of_birth();
	return 0;
}
