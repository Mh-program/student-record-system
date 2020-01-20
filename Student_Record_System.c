/* Student Record System
    Author: Mahim Hossain
    Date: 19/01/2020
*/

#include <stdio.h>

int main() {
    
    char fn; // First Name
    
    char ln; // Last Name
    
    char option; // Option of Yes or No (Y/N)
    
    int id; // Student ID
    
    int pn; // Phone Number
    
    int g1, g2, g3, g4, g5; // Grades from 1-5
    
    int t; // Total Grade Amount
    
    int a; // Grade Average
    
    printf("Student Record System \n \n"); // Intro to System
    
    printf("First Name: "); // Inputting the First Name
    scanf("%1s", &fn);
    flushall();
    
    printf("Would you like to input the last name? (Y/N) \n"); // Option of (Y/N)
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Last Name: "); // Inputting the Last Name
        scanf("%1s", &ln);
        flushall();
        
    } // END OF IF
    
    else {
        
        printf("Program is ending");
        
    } // END OF ELSE
    
    printf("Would you like to input the phone number? (Y/N) \n"); // Option of (Y/N)
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Phone Number: "); // Inputting the Phone Number
        scanf("%d", &pn);
        flushall();
        
    } // END OF IF
    
    else {
        
        printf("Program is Ending");
        
    } // END OF ELSE
    
    printf("Would you like to input the address? (Y/N) \n"); // Option of (Y/N)
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Address: "); // Inputting the Address
        scanf("%1s", &a);
        flushall();
        
    } // END OF IF 
    
    else {
        
        printf("Program is ending");
        
    } // END OF ELSE
    
    printf("Would you like to enter the student ID? (Y/N) \n"); // Option of (Y/N)
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Student ID: "); // Inputting Student ID
        scanf("%d", &id);
        flushall();
        
    } // END OF IF
    
    else {
        
        printf("Program is ending");
    
    } // END OF ELSE 
    
    printf("Would you like to enter grades and calculate average? (Y/N) \n"); // Option of (Y/N)
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Input Grade 1/5: "); // Inputting grades from 1-5
        scanf("%d", &g1);
        flushall();
        
        printf("Input Grade 2/5: ");
        scanf("%d", &g2);
        flushall();
        
        printf("Input Grade 3/5: ");
        scanf("%d", &g3);
        flushall();
        
        printf("Input Grade 4/5: ");
        scanf("%d", &g4);
        flushall();
        
        printf("Input Grade 5/5: ");
        scanf("%d", &g5);
        flushall();
        
        printf("Grades Inputted: \n %d \n %d \n %d \n %d \n %d \n", g1,g2,g3,g4,g5);
        
        t = g1+g2+g3+g4+g5; // Total being calculated
        a = t/5; // Average being calculated
        
        printf("Average calculated as: %d \n", a);
        
        if (a >= 40) { // If the grade is higher or equal to 40 then the student has passed
            
            printf("This Student has passed \n");
            printf("Details have been recorded and are now in the database \n");
            printf("Program is now ending.....");
            
        } // END OF IF
        
        if (a < 40) { // If the student gets below 40 then the student has failed
            
            printf("This Student has failed \n");
            printf("Details have been recorded and are now in the database \n");
            printf("Program is now ending.....");
            
        } // END OF IF
        
    } // END OF IF
    
    else {
        
        printf("Program is ending");
        
    } // END OF ELSE
        
    
    getchar();
    return 0;
    
}
    