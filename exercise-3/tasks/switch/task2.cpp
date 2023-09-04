//Въвеждаме число между 1 и 9 програмата извежда
//четно или нечетно е числото.

#include <iostream>

using namespace std;

int main(){
       
    int a;
       
    cout<<"Input number between 1 and 9 =>";
    cin>>a;
       
    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:cout<< " odd ";break;
        case 2:
        case 4:
        case 6:
        case 8:cout<< " even ";break;
    }
    
    return 0;
}
