//Програма, чрез която въвеждаме две числа. След това можем да изберем операциите с тях: "+" - събиране, "-" - изваждане, "*" - умножение, "/" - деление.
//Във всеки друг случай извежда: "I do not know...." .

#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char c;
    
    cout << "a="; 
    cin >>a;

    cout << "b="; 
    cin >>b;
    
    cout << "Input action (+ , - , * , / ) ==> "; 
    cin >>c;
    
    switch(c){
        case '+':cout<< a<< c<< b <<"="<< a+b ;break;
        case '-':cout<< a<< c<< b <<"="<< a-b ;break;
        case '*':cout<< a<< c<< b <<"="<< a*b ;break;
        case '/':
            if(b!=0){
                cout<< a<< c<< b <<"= "<< a/b ;
            }else{
                cout << "Devision by 0"; break;
            }
        break;
        default : cout<< "I do not know....";
    }
    return 0;
}
