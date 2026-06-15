#include<stdio.h>

int main(){

    //FILE function use to create file build in in stdio.h library
    // *pFile = fopen("//File location","read(r)","write(w)");
    FILE *pFile = fopen("TextFile.txt","w");

    char text[] = "This is example of c note file text \nthis is file text";

    if(pFile == NULL){
        printf("Invalid Error program");
        return 1;
    }

    //this where the file code will display file text using fprintf text display
    fprintf(pFile,"%s",text); 

    printf("Code file text working \n");
    fclose(pFile); //this will close

    return 0;
}
