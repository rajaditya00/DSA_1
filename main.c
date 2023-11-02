// #include <stdio.h>

// int sum(int n);

// int main(){

//     int n ;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     printf("sum of first %d natural number is :%d", n, sum(n));


// }

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;

//  return 0;
// }



// #include <stdio.h>

// int fact(int n);

// int main(){

// int n;
// printf("Enter the number :");
// scanf("%d",&n);

// printf("factorial of %d is : %d",n,fact(n));

//     return 0;
// }

// int fact(int n){
  
//     if(n==0 ){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;


//     return 0;
// }
// // 

// #include<stdio.h>

//  int fib(int n);

// int main(){

//     int n;

// printf("Enter the number : ");
// scanf("%d",&n);

// printf("The fibonacci Series till %d th term is : %d",n,fib(n));

//     return 0;
// }

//  int fib(int n){
//     if( n== 0){
//         return 0;
//     }
//     if( n == 1){
//         return 1;
//     }
//     int fibNm2 = fib(n-2);
//     int fibNm1 = fib(n-1);
//     int fibN = fibNm2 + fibNm1;
//     printf("fib of %d is : %d\n", n, fibN);
//     return fibN;
 
// }



// #include<stdio.h>



// int main(){

// float temp;
// printf("Enter the temperature (in calcius):");
// scanf("%f",&temp);

// if(temp <= 0.0 ){
//     printf("Too cold");
// }

// else if(temp >=0.0 && temp<=25.0){
//     printf("Room Temperature");
// }

// else if (temp >=25.0){
//     printf("It's Hot");
// }

// else{
//     printf("Please enter the correct temperature ");
// }

//     return 0;
// }



// #include<stdio.h>

// float sqrRoot(float n);

// int main(){

// float n;
// printf("Enter the value of n :");
// scanf("%f", &n);

// printf("square root of %f is: %f", n, sqrRoot(n));

//     return 0;
// }

// float sqrRoot(float n){
//   if( n< 0){
//     printf("Input must be non- negative number\n");
//     return -1;
//   } 

//   float sqrN = sqrRoot(n);
//    n =  sqrN *  sqrN;

//   return  sqrN;

// }




// #include<stdio.h>

// int findSqrt(int n){
//   int start=0;
//   int end=n;
//   int ans=0;
//   int mid=start+(end-start)/2;
//   while(start<=end){
//     int midSq=mid*mid;
//     if(midSq==n){
//       return mid;
//     }
//     else if(midSq<n){
//       ans=mid;
//       start=mid+1;
//     }
//     else{
//       end=mid-1;
//     }
//     mid=start+(end-start)/2;
//   }
//   return ans;
// }


// #include<stdio.h>




// int main(){

// }










// #include<stdio.h>

// int binarySearch(int arr[], int size, int key){

//     int start =0;
//     int end = size -1;
//     int mid = start +(end - start)/2;

//     while(start <=end){
//         if( key == arr[mid]){
//              return mid;
//         }
//         // for right search
//         else if( key > arr[mid]){
//             start = mid + 1;
//         }

//         // for left search
//         else if(key < arr[mid]){
//             end = mid - 1;
//         }
//        mid = start + (end - start)/2;

//     }
//     return -1;
// }
 

//  int main(){

// int evenarr[6] = {4,5,6,7,12,19};
// int oddarr[5] = {7,11,13,15,17};

 
// int evenIndex  = binarySearch(evenarr, 6 , 12);

// printf("The index of 12 is :%d\n", evenIndex);

// int oddIndex = binarySearch(oddarr,5, 13);

// printf("THe index of 13 is : %d\n", oddIndex);


//     return 0;
//  }






// #include<stdio.h>


// int binarySearch(int arr[ ],int size, int keys){
//      int start = 0;
//      int end = size - 1;
//      int mid = start + (end - start)/2 ;
      
//     while( start <= end){
       
//        if( keys == arr[mid]){
//         return mid;
//        }

//        else if( keys > arr[mid]){
//         start = mid + 1;
//        }

//        else if( keys < arr[mid]){
//         end = mid -1;
//        }
   
//    mid = start + (end-start)/2;
//     }

//  return -1;
// }


// int main(){


// int evenArr[ ] = {12,14,16,18,20,22};
// int oddArr[ ] = { 11,13,15,17,19};

// int evenIndex = binarySearch(evenArr , 6 , 18);

// printf("The index of 18 is : %d\n", evenIndex);

// int oddIndex = binarySearch(oddArr , 5 , 19 );

// printf("The index of 19 is : %d\n", oddIndex);


//     return 0;
// }





// #include<stdio.h>

// double squrt(double n){
//      int start =0;
//      int end = n-1;
//      int ans =0;
//      int mid = start + (end - start)/2;

//      while(start <= end){
//         int midsqr = mid * mid;
//         if(midsqr == n){
//             return mid;
//         }

//         else if(midsqr <n){
//             ans = mid;
//             start = mid+1;
//         }

//         else{
//             end = mid -1;
//         }
//        mid = start + (end - start)/2;
//      }
//   return ans;
// }

// int main(){

// double n;
// printf("Enter the number : ");
// scanf("%lf", &n);

//  printf("The square root of %f is : %f", n, squrt(n));
//     return 0;
// }



// find the square root of x^2-3x+2=0

// #include<stdio.h>
// #include <math.h>
 

//  int main(){

// float a,b,c,d,r1,r2;

// printf("Enter the value of a, b, and c :\n");
// scanf("%f %f %f", &a,&b,&c);

//    d =  b * b  - 4 * a * c;
 
//     if( d == 0){
//          printf("the roots are real and equal\n");

//          r1 = -b/(2*a);
//          r2 = -b/(2*a);

//          printf("root 1 is : %f\n and root 2 is : %f\n", r1,r2);

//     }

//     else if( d > 0){

//         printf("the roots are real and different\n ");

//         r1 =( -b + sqrt(d))/ (2*a);
//         r2 =( -b - sqrt(d))/ (2*a);

//         printf("the root 1 is : %f\n and root 2 is : %f\n", r1,r2) ;
//     }

//     else{
//         printf("both roots are imaginary");
//     }


//     return 0;
//  }


// #include<stdio.h>

// void printString(char arr[ ]);

// int main(){
// char fname [ ] = "Aditya";
// char lname [ ] = "Raj";

// printString(fname);
// printString(lname);

//  return 0;
// }

// void printString(char arr[ ]){
//    for(int i =0; arr[i] != '\0'; i++){   
//     printf("%c",arr[i]);
//    }

//    printf("\n"); 
   
// }


// #include<stdio.h>
// #include<string.h>

// int countLength( char arr[ ]);

// int main(){

    // char name[100] = "Aditya ";
    // char lname[100] = "Addy";

    // strcat(name, lname);
    // puts(name);

    // strcpy(name,lname);
    // puts(name);

    // int length = strlen(name);
    // printf("length is : %d", length);




    // fgets(name,100,stdin);
    // puts(name);

    //  printf("length is : %d",countLength(name));
 
//     return 0;
// }

// int countLength(char arr[ ]){
//     int count = 0;
//     for(int i=0; arr[i] !='\0'; i++){
//         count ++;
//     }
//     return count-1;
// }
 

// #include<stdio.h>
// #include<string.h>

// int main(){
//  char name[100];
//  char ch;
//  int i=0;

//  while( ch != '\n'){
//      scanf("%c", &ch);
//      name[i] = ch;
//      i++;

//  }
//  name[i]='\0';
//  puts(name);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// void salting(char password[ ]);

// int main(){

//    char password[100];
//    scanf("%s", password);
//    salting(password);

//     return 0;
// }

// void salting(char password[ ]){
//     char salt[100]="123";
//     char newPass[200];
//   strcpy(newPass, password); 
//   strcat(newPass, salt);
//   puts(newPass);  
  
// }


// #include<stdio.h>
// #include<string.h>

// void salting(char password[]);
// void slice(char str[], int n, int m);

// int main(){

// char password[100];
// char name[100];

// scanf("%s",name);
// scanf("%s",password);


// salting(password);
// slice(name, 3, 6);

//     return 0;
// }

// void slice(char str[], int n, int m){
//     char newStr[100];
//     int j = 0;

//     for(int i=n; i<=m;i++, j++ ){
//         newStr[j] = str[i];
//     }
//     newStr[j] ='\0';
//     puts(newStr);

// }

// void salting(char password[]){
//      char salt[100] = "123";
//      char newPass[200];
//     strcpy(newPass,password);
//     strcat(newPass,salt);
//     puts(newPass);

// }



// #include<stdio.h>

// void checkChar(char str[], char ch);

// int main(){
//  char name[100] ="Aditya";
//  char ch ='Y';

// checkChar(name, ch);
//     return 0;
// }

// void checkChar(char str[], char ch){

//     for(int i = 0; str[i] !='\0'; i++){
//         if( str[i] == ch){
//             printf("character is present\n");
//             return;
//         }
//     }

//     printf("character is NOT present\n");
// }


// #include<stdio.h>

// int main(){

//     FILE *fptr;
//     fptr = fopen("doc.txt","r");

//  char ch;
//  ch = fgetc(fptr);

//  while(ch != EOF){
//     printf("%c", ch);
//     ch = fgetc(fptr);
//  }
// printf("\n");

//   fclose(fptr);
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>

// int main(){


 
//     int *ptr;

//     ptr = (int*) calloc(5,sizeof(int));

//  ptr[0] = 1;
//  ptr[1] = 3;
//  ptr[2] = 5;
//  ptr[3] = 7;
//  ptr[4] = 9;

//  for(int i=0; i<5; i++){
//     printf("%d\n",ptr[i]);
//  }
// // free(ptr);

// //  for(int i=0; i<2; i++){
// //     printf("%d\n",ptr[i]);
// //  }



// //  ptr = realloc(ptr,6);

// //  ptr[0] = 2;
// //  ptr[1] = 4;
// //  ptr[2] = 6;
// //  ptr[3] = 8;
// //  ptr[4] = 10;
// //  ptr[5] = 12;

// //  for(int i=0; i<6; i++){
// //    printf("%d\n",ptr[i]);
// //  }



//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int choice;

//     printf("Menu:\n");
//     printf("1. Option 1\n");
//     printf("2. Option 2\n");
//     printf("3. Option 3\n");
//     printf("4. Quit\n");

//     while (1) {
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("You selected Option 1.\n");
//                 // Continue to the next iteration of the loop
//                 continue;
//             case 2:
//                 printf("You selected Option 2.\n");
//                 // Continue to the next iteration of the loop
//                 continue;
//             case 3:
//                 printf("You selected Option 3.\n");
//                 // Break out of the switch and loop
//                 break;
//             case 4:
//                 printf("Goodbye!\n");
//                 // Exit the program
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//                 // Continue to the next iteration of the loop
//                 continue;
//         }
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int age = 118;
    
    printf("%s", (age == 118) ? "yes" : "no");
    
    return 0;
}
