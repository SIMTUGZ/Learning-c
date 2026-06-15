#include<stdio.h>

int main(){
    //File logic
    FILE *pFile = fopen("TextFile.txt","r");
    char buffer[1000] = {0}; // we need to use buffer to store temporary character
    
    if(pFile == NULL){
        printf("Invalid to read file");
        return 1;
    }
    
    // using while loop
    while (fgets(buffer, sizeof(buffer), pFile)) {
        printf("%s ",buffer);
    }
    
    fclose(pFile);
    
    return 0;
}
