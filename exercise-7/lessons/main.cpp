#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
//Инициализация на масив от символи като низ
    char s[]={’a’,’b’,’c’,’d’,’\0’};  //Дефиниция и инициализация на масив s

    char s[]="abcd"; //Дефиниция и инициализация на масив s
    
    размерът на въвеждания низ да не е по-голям от размера на s;

//Въвеждане и извеждане на символни низове
    cin>>s; 
    cin.getline(inputString, sizeof(inputString));
    cout<<s; puts(s);
    
    //въвежданият низ не трябва да съдържа символите: интервал (' '), табулация ('\t'),
    //нов ред ('\n') и връщане на каретката ('\r'),тъй като се третират като разделители.
    
    
    char name[100];
    std::cout << "Въведете вашето име: ";
    std::cin >> name;
    std::cout << "Здравей, " << name << "!" << std::endl;
    

//Функции за работа със символни низове
     //Копиране на символен низ в друг символен низ
     strcpy(str1, str2);
     //Копиране на част от символен низ в друг символен низ
     strncpy(str1, str2,n); 
    //Обединяване на символни низове
     strcat(str1, str2);
     // Сравняване на символни низове.
      strcmp(str1, str2);//отрицателно, когато str1<str2, нула, когато str1=str2 и положително, когато str1>str2
      //Намиране на дължината на символен низ.
      strlen(str1);//число, което показва броя на символите в низа. Тя не брои символът ‘\0’.
    
    char myString[] = "Hello, World!";
    int length = strlen(myString);
    std::cout << "Дължина на низа: " << length << std::endl;
    
    
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        std::cout << "Низовете са еднакви." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 е по-малък от str2." << std::endl;
    } else {
        std::cout << "str1 е по-голям от str2." << std::endl;
    }
    //for (int i = 0; inputString[i] != '\0'; i++)

  //ASCII table
   char X;
   cout<<"Enter a character:"; 
   cin>>X;
   X=X+32;
   cout<<"Converted character to lowercase:";
   cout<<X;
   
   char X;
   cout<<"Enter a character:"; 
   cin>>X;
   X=X-32;
   cout<<"Converted character to UPPERCASE:";
   cout<<X;

   
   
    char c;
    cout << "Enter an uppercase alphabet\n";
    cin >> c;
  
    if(c >= 'A' && c <= 'Z'){
        // Add 32 to uppercase character to 
        // convert it to lowercase
        c += 32;
        cout << "Lowercase Alphabet : " << c;
    } else {
        cout << "Not an uppercase Alphabet";
    }
   
   
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);
    
    
    
    //2D array 
    
    int arr[4][2] = {
    {1234, 56},
    {1212, 33},
    {1434, 80},
    {1312, 78}
    } ;
    
    int arr[4][2] = {1234, 56, 1212, 33, 1434, 80, 1312, 78};
    
    
    int x[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            x[i][j] = i+j;
            cout<<" "<<x[i][j];
        }
        cout<<endl;
    }
    
    

    return 0;
}
