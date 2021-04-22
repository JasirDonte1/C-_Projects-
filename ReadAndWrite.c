
#include <ctype.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //setup vars 
    char file_name[20];
    char text [1000];
    
    printf("Enter the name of a file: ");   //get user input
    scanf("%[^\n]%*c", file_name);
    
    
    //locate and read from file
    FILE *fp = fopen(file_name, "r"); // read mode
    

    char x;
    int counter = 0;
    if (fp != NULL){  //segment will not run if no file was found
        while ((x = fgetc(fp)) != EOF){
            text[counter] = x;           //store text from file into char array
            counter++;
        }
    }
    for (int x = 0; x<counter; x++){    //loop to convert text to uppercase
        text[x] = toupper(text[x]);
    }
    
    //write back to file
    fp = fopen(file_name, "w"); // change fp to write mode
    printf("%s", text);    //at this point "text" does have capitol letters
    const char *tp = text;       //text pointer to point to text
    fprintf(fp, "%s", tp);     //write back to file
    
    
    
    fclose(fp);

    return 0;
}
