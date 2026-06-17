heather
<string.h> 

    #include<stdio.h>
    #include<string.h>

    int main(){
        char name[40];
    
    printf("Input name: ");
    fgets(name,sizeof(name),stdin);
    name [strcspn(name,"\n")] = '\0';
    //this will select the character we want and remove it and it will become NULL
    name[strlen(name) - 1] = '\0'; 
    //this one will subtract the total array of character and replace the subracted one a NULL
    strcpy() // this will copy the string
    
    return 0;
}
