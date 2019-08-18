#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int count {0};
    for (auto i: vec){
        if(i % 3 == 0 || i % 5 == 0){
            ++count;
        }
    }
    cout << count << endl;
    
    int i {1};
    while (i <= 10){
        if (i % 2 == 0){
            cout << i;
        }
        ++i;
    }
    cout << endl;
    
    char selection {};
    do {
        cout << "\n--------------" << endl;
        cout << "(0) Quit" << endl;
        cout << "(1) Do this" << endl;
        cin >> selection;
    }while(selection!='0');
    
    while (true) {
        char again {};
        cout << "Do you want to loop again? (Y/N):";
        cin >> again;
        
        if (again == 'N' || again == 'n')
            break;
    }
	return 0;
}
