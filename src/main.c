#include "language_layer.h"

int main(void){
    
    FILE* fp;
    char str[MAXCHAR];
    char* filename = "C:\\dev\\BlackLivesMatter-master\\test.txt";
    
    fp = fopen(filename, "r");
    
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    
    int i = 0;
    
    char c = "";
    printf("Original Text: \n");
    while (1)
    {
        c = fgetc (fp) ; // reading the file
        if (c == EOF)
            break;
        printf ("%c", c);
    }
    fclose(fp);
    
    
    fp = fopen(filename, "r");
    
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    
    c = "";
    printf("\n\nUpdated Text: \n");
    while (1)
    {
        c = fgetc (fp) ; // reading the file
        if (c == EOF)
            break;
        
        if (c == 'c' && fgetc(fp) == 'o' && fgetc(fp) == 'p'){
            
            printf("b");
            printf("l");
            printf("m");
        }
        else
            printf ("%c", c);
    }
    fclose(fp);
    /*
    while (fgetc(str, MAXCHAR, fp) != NULL){
        printf("Original Text: \n");
        printf("%s \n", str);
        
        if (str[i] == 'c' && str[i+1] == 'o' && str[i+2] == 'p'){
            
            str[i] = 'B';
            str[i+1] = 'L';
            str[i+2] = 'M';
            
        }
        
        printf("Updated Text: \n");
        printf("%s \n", str);
        ++i;
    } */
    
    
    printf("\n\nFinished Running \n");
    printf("Enter 'e' to End Program: \n");
    
    char close;
    scanf("%i", close);
    b8 closeCheck = close == 'e';
    
    if (close == 1)
        return 0;
}