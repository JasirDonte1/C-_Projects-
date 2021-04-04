
/*This assignment required the use of enumerations, switch statement, and loops. A day of the week is set and returns what the user should be doing on that day.
 
 Thomas Edison State University
 Course: COS-116 C Programming
 Assignment 6B

*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};  //enum for the days of the week Mon = 0
    
//This function will evaluate Saturday
    enum week today = Saturday;
    
    for(int x =0; x<2; x++){
        switch (today)
        {
            case Monday :
            case Tuesday :
            case Wednesday :
            case Thursday :
            case Friday : printf("Go to work!\n");
                break;
            case Saturday :
            case Sunday : printf("You can rest today!\n");
                break;
        }
        
        
        if(x==0){today = Tuesday;}   //This line evaluates the ofther statement(s) to show both text will print.
    }
    
    return 0;
}
