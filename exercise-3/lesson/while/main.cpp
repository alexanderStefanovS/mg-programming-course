#include <iostream>

using namespace std;

int main()
{
    //Синтаксис:

    // while (<условие>) {
    //    <команда>;
    //}
    
    // Докато <условие> е истина ще се изпълнява <команда>
    // Силно препоръчително е в <команда> да се извършва действие, което да превърне <условие> в лъжа!
    
    
    // while (true) {
    //   cout << "I love MG\n"; // безкраен цикъл
    // }

    int i = 0;
    while (i < 10) {
        cout << i; // ще изпише числата от 0 до 9
        ++i;
    }
    
    //Синтаксис:

    //do <команда>; while (<условие>);

    // Първо ще се изпълни <команда>, а после докато <условие> е истина ще се изпълнява <команда>
    // Същата идея като while, но гарантирано цикълът ще се изпълни поне веднъж

    cout << endl;
    int k = 1;
    do {
        cout << k << endl;
        k++;
    } while (k <= 10);
    
    return 0;
}
