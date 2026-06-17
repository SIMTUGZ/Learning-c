#include<stdio.h>
//Mutidimensional Array or tthey call it Array of Array

// array name [It represent how many array inside] [this one it represent how many element inside of the array]

// int arr[2][3];


// this will show you how to initialize this array
int arr[2][3] = {{1,3,5},{2,4,6}};

//lets think about this like row and collomn

//think about this like this 
[2] 
//this one represent how many array it hava // think it like this this is the row
[3]
//this one represent how many elements it have // this is the collomn

//THIS IS THE ARRAY INDEX IN 2D ARRAY
{      collomn
  row  {1,2,3},
  row  {1,2,3}  //this one more simple
}


// to acces the elemnt of the array

//this how to acces the each array and elements
     arra[0][2]; //first array elemnt 5
     arra[1][2]; //second array element 6
     
     //Example how to use it
     printf("%d \n",arra[0][2]);
     printf("%d \n",arra[1][2]);
     
     

 //this example teach you how to change the array elements for each row
     int arra[2][3] = {{1,3,5},{2,4,6}};
     
     arra[0][1] = 1; //we change the value of the elements by updating them and calling them at the same time
     arra[1][2] =67; //index in array means it show how its table
     
     printf("%d \n",arra[0][1]);
     printf("%d \n",arra[1][2]);
