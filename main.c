#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int plussaTalMindre100(int tal1, int tal2){
    // result += tal1;
    int result = 0;
    if(tal1 < 100)
        result += tal1;
    if(tal2 < 100)
        result += tal2;
    return result;
}


float calculateVat(float priceIncVat) {
    return priceIncVat * 0.2;
}


bool isAdult(int age){
    return age > 18;
}

char *hittaLangstaOrdet(char *str1, char *str2, char *str3){
    if(strlen(str1) > strlen(str2) && strlen(str1) > strlen(str3) )
        return str1;
    if(strlen(str2) > strlen(str1) && strlen(str2) > strlen(str3) )
        return str2;
    return str3;
}


void main(){
    //Hitta längsta ordet
    char s1[100];
    char s2[100];
    char s3[100];
    scanf(" %s", s1);
    scanf(" %s", s2);
    scanf(" %s", s3);


    char *longest2 = hittaLangstaOrdet(s1,s2,s3);
    printf("%s\n", longest2);


    //VAT
    float price;
    printf("Ange pris inkl moms:");    
    scanf(" %f", &price);
    float vat = calculateVat(price);

    //Age
    int age;
    
    printf("Ange age:");    
    scanf(" %d", &age);
    bool adult = isAdult(age);

    //Plussa
    int tal;
    scanf(" %d", &tal);
    int res2 = plussaTalMindre100(99,100);



}