// 12.	Дадено е число N (с не повече от 12 цифри). Да се провери дали цифрите му образуват палиндром.
// Палиндромът е число, което се чете по един и същ начин от ляво надясно и от дясно наляво.
// Пример: 1234321

#include <iostream>

using namespace std;

int main()
{
    long long number;   // Максималната стойност на int е 10-цифрено число. Максималната стойност на long long е 9 223 372 036 854 775 807.
    int digitsCount = 0, digits[18];
    cout << "Enter number: ";
    cin >> number;
    
    while (number > 0) {
        digits[digitsCount] = number % 10;  // на всяко въртене на цикъла записваме последната цифра от числото, като елемент в digits
        number /= 10;   // след това я премахваме от числото
        digitsCount++;
    }
    
    for (int i = 0; i < digitsCount / 2; i++){  // обхождаме масива до средния елемент
        if (digits[i] != digits[digitsCount - i - 1]){  // като на всяка итерация проверяваме дали текущото число е различно от противоположното му по позиция
            cout << "False";
            return 0;   // ако намерим несъответствие, принтираме съобщение и прекратяваме програмата
        }
    }
    cout << "True";
    return 0;
}
