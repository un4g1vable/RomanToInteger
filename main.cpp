#include <iostream>
 
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите количество символов римского числа:" << endl;
    cin >> size;
	char Roman[size];
    int count = 0 ;

    cout << "\n" "Введите римское число поэлементно в массив:" << endl;
	for (int i = 1; i < size + 1; i++){
        cout << "Roman[" << i << "] = ";
		cin >> Roman[i];}


    for (int j = 0; j < sizeof(Roman);j++){
    
        switch(Roman[j]){
        
         case 'M': 
            count += 1000;
            break;
        case 'D': 
            count += 500;
            break;
        case 'C':   
            if ( j+1 < sizeof(Roman) and (Roman[j + 1] == 'D' or Roman[j + 1] == 'M' ) )
                count -= 100;
            else 
                count += 100;
            break;
        case 'L': 
            count += 50;
            break;
        case 'X': 
            if (j+1 < sizeof(Roman) and (Roman[j + 1] == 'L' or Roman[j + 1] == 'C' or Roman[j + 1] == 'M')  )
                count -= 10;
            else 
                count += 10;
            break;
        case 'V': 
            count += 5;
            break;
        case 'I': 
           if (j+1 < sizeof(Roman) and (Roman[j + 1] == 'V' or Roman[j + 1] == 'X' or Roman[j + 1] == 'C'))
                count -= 1;
           else count +=1;         
            break;
 
        }
    }
    cout << "\n" "Арабское число: " << count << endl;
}