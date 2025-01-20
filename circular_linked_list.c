#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode* next;
}node;

node* head = NULL;
node* tail = NULL;

void append(int val);
void disp();

int main()
{
    for (size_t i = 0; i < 9; i++)
    {
        append(i);
    }
    tail->next = head;
    disp();   
    return 0;
}
void append(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = val;
    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
}
void disp(){
    node* temp = head;
    while(temp!=tail){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
