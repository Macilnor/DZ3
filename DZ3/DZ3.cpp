// DZ3.cpp
//

#include <iostream>
using namespace std;

//Exercise 3.1/3.4
extern int a,b,c,d;
//Exercise 3.2
int x = 31;
//Exercise 3.3
int arr[3][3][3];                  
int* pArr = &arr[1][1][1];

int main()
{
    //Exercise 3.1/3.4
    float out = a * (b + (static_cast <float>(c) / static_cast <float>(d)));
    cout << "Exercise 3.1/3.4: " << out << endl;
    
    //Exercise 3.2
    int y = (x <= 21) ? 21 - x : (x - 21)*2 ;
    cout << "Exercise 3.2: " << y << endl;

    //Exercise 3.3
    for (int i = 0; i<3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) {
                arr[i][j][k] = i+j+k;
            }
    cout << "Exercise 3.3: " << *pArr << endl;

    return 0;
}


