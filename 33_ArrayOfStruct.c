//This is example of array if struct 
//just like 1D array but its a set of data 

#include<stdio.h>

typedef struct{ //using type def
    char name[20];
    int model;
    float price;
    
}CARS;

int main(){
    
    CARS CARM[] = {{"nitro",2424,10.000}, //1D Array using struct array
                   {"back",2023,12.000}};
    
    int size = sizeof(CARM) / sizeof(CARM[0]);
    
    for(int i = 0; i < size; i++){
        printf("%s %d $%f",CARM[i].name ,CARM[i].model ,CARM[i].price);
      //we need to set [i] for each variable that store data
        
    }
    
    
    return 0;
}
