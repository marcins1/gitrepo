/*
 * algorytm3.cpp
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	float stopien, radian;
    stopien = 0.0;
    
    do{
        radian = stopien * M_PI / 180;
        cout << "cos(" << stopien << ") = " << cos(radian) << endl;
        stopien += 1.0;
    } while(stopien != 91);
    
	return 0;
}

