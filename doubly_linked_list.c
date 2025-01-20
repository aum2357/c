#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode{
    struct ListNode* prev;
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
    disp();
    
    return 0;
}
void append(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = val;
    if (head == NULL)
    {
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        temp->prev = tail;
        temp->next = NULL;
        tail = temp;
    }
    
}
void disp(){
    node* temp1 = head;
    node* temp2 = tail;
    printf("Through head pointer:\n");
    printf("NULL <-> ");
    while (temp1!=NULL)
    {
        printf("%d <-> ",temp1->data);
        temp1 = temp1->next;
    }
    printf("NULL\n");
    printf("Through tail pointer:\n");
    printf("NULL <-> ");
    while (temp2!=NULL)
    {
        printf("%d <-> ",temp2->data);
        temp2 = temp2->prev;
    }
    printf("NULL\n");

}