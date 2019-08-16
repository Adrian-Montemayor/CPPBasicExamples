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
	return 0;
}
