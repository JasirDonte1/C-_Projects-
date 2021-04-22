/*
 linked list
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(int argc, const char * argv[]) {
    int length = 0;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* head = newNode;
    struct node* temp = NULL;
    int value; //value
    
    while (length < 5){
        if(length == 0){
            printf("Enter the first number: ");
            scanf("%d", &value);
            head->data = value;
            length++;
        }else{
            if (length == 1){
                temp = newNode;
                head->next = temp;
                
                printf("Enter a number: ");
                scanf("%d", &value);
                
                temp->data = value;
                length++;
                
            }else{
                temp->next = newNode;
                temp = temp->next;
                
                printf("Enter a number: ");
                scanf("%d", &value);
                
                
                temp->data = value;
                length++;
            }
            
        }
    }
    for (int x = length; x != 0; x--){
        struct node* y = head;
        printf("%d\n", y->data);
        y = y->next;
    }
    
    
    
    
    return 0;
}
