#include <iostream>

int main()
{  //trying to make a pyramaid of 1s, 2s, and 3s like that programming challenege
int count(1), count2(1), count3(1);
   do{
    std::cout << count;
    count++;
    if(count == 5){
        std::cout << "\n";
    }
    std::cout << count2;
    count2++;
    if (count2 == 4){
        std::cout << "\n";
    }
    std::cout << count3;
    count3++;
     if (count3 == 3){
        std::cout << "\n";
    }
   } while(count == 5, count2 == 4, count3 == 3);
    return 0;
}
