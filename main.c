#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

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

float calculateTaxesOnSalary(float salary){
    if(salary >= 30000) return salary * 0.33;
    if(salary < 15000) return salary * 0.12;
    return salary * 0.28;
}

bool isVowel(char ch){
    ch = tolower(ch);
    if( ch == 'a'  || 
        ch == 'o' || 
        ch == 'u' ||
        ch == 'å' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'y' ||
        ch == 'ä' ||
        ch == 'ö' ) 
            return true;
    return false;
}


int countVowels(char *s){
    int counter = 0;
    for(int i=0; i < strlen(s);i++){
        char ch = s[i];
        if(isVowel(ch))
            counter++;
    }
    return counter;
}




int countCharacters(char *s){
    int counter = 0;
    for(int i=0; i < strlen(s);i++){
        char ch = s[i];
        if(isalnum(ch))
            counter++;
    }
    return counter;

}

bool isConsonant(char ch){
    return isalpha(ch) && !isVowel(ch);
}

// input this is fun
// i non
void translate(char *input,char *output){
    //strcpy(output, "");
    output[0] = 0;

    for(int i = 0; i < strlen(input);i++){
        char ch = input[i];
        if(isConsonant(ch)){ 
            int lastIndex = strlen(output);
            output[lastIndex] = ch;
            output[lastIndex+1] = 'o';
            output[lastIndex+2] = ch;
            output[lastIndex+3] = 0;
        } else{
            int lastIndex = strlen(output);
            output[lastIndex] = ch;
            output[lastIndex+1] = 0;
        }
    }
}


void main(){
    char texten[100] = "This is fun";
    char outtexten[300] = "";
    translate(texten,outtexten);
    printf("%s\n",outtexten);
    //Vokaler
    char ch = 'A';
    bool b = isVowel(ch);
    printf("%c\n", ch); //'a'
    char txt[100];
    scanf(" %s", txt);
    int vowelCount = countVowels(txt);
    printf("Your text is %d characters and contains %d vowels", 
        countCharacters(txt), 
        vowelCount );


    //Salary
    float salary;
    printf("Monthly salary:");
    scanf(" %f", &salary);
    printf("Taxes are: %.2f\n", calculateTaxesOnSalary(salary));


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