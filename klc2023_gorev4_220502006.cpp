#include <iostream>
#pragma once



void sifrele(const char* s1, const char* s2, char* result) {

    int i = 0;



    while (*s1 != '\0' || *s2 != '\0') {


        if (*s1 != '\0') {

            *result = *s1;
            ++result;
            ++s1;
        }
        if (*s2 != '\0') {

            *result = *s2;
            ++result;
            ++s2;
        }
    
        if (i >= 100) {
            std::cout << "100 karakteri geçtin." << std::endl;
            break;
        }
    }
    *result = '\0'; 
}

int main() {
    const int max = 100;
    char s1[max], s2[max], result[max];

    std::cout << "Birinci stringi giriniz: ";
    std::cin.getline(s1, max);

    std::cout << "Ýkinci stringi giriniz: ";
    std::cin.getline(s2, max);

    sifrele(s1, s2, result);

    std::cout << "Þifrelenmiþ string: " << result << std::endl;

    return 0;
}
