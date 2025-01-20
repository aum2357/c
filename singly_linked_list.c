#include <stdio.h>
#include <stdlib.h>

// definition of linked-list

typedef struct ListNode
{
   int info;
   struct ListNode *next;
} node;

// initially at begining of the code

node *head = NULL;
node *tail = NULL;

// linked-list functions

void insert(int idx, int val); // add the value at specified pos of the list
void append(int val);          // add the value at the end of the list
void prepend(int val);         // add the value at begining of the list
int len();           // return the length of the list
int search(int val);           // find the index of value otherwise return -1
void del(int idx);             // delete the value at specified index in the list
void reverse();      // reverse the list
void sort();         // sort the list
void disp();         // display the list

// entry part of the code

int main()
{
   for (int i = 0; i < 9; i++)
   {
      append(i);
   }
   disp();
   reverse();
   disp();
   return 0;
}
void reverse()
{
   node* curr = head;
   node* next = NULL;
   node* prev = NULL;
   while (curr!=NULL)
   {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
   }
   head = prev;  
}
void del(int idx)
{
   int changeTail = 0;
   if (len(head) == idx)
   {
      changeTail = 1;
   }
   if (idx == 0)
   {
      head = head->next;
   }
   else
   {
      node *temp = head;
      for (int i = 0; i < idx - 2; ++i)
      {
         temp = temp->next;
      }
      temp->next = temp->next->next;
      if (changeTail == 1)
      {
         tail = temp;
      }
   }
}
void insert(int idx, int val)
{
   node *temp = (node *)malloc(sizeof(node));
   temp->info = val;
   temp->next = NULL;
   if (idx == 0)
   {
      temp->next = head;
      head = temp;
   }
   else if (idx == len(head))
   {
      tail->next = temp;
      tail = temp;
   }
   else
   {
      node *itemp = head;
      for (int i = 0; i < idx - 1; i++)
      {
         itemp = itemp->next;
      }
      temp->next = itemp->next;
      itemp->next = temp;
   }
}

void append(int val)
{
   node *temp = (node *)malloc(sizeof(node));
   temp->info = val;
   temp->next = NULL;
   if (head == NULL)
   {
      head = temp;
      tail = temp;
   }
   else
   {
      tail->next = temp;
      tail = temp;
   }
}
void prepend(int val)
{
   node *temp = (node *)malloc(sizeof(node));
   temp->info = val;
   temp->next = NULL;
   if (head == NULL)
   {
      head = temp;
      tail = temp;
   }
   else
   {
      temp->next = head;
      head = temp;
   }
}

int len()
{
   node *temp = head;
   int count = 0;
   while (temp != NULL)
   {
      ++count;
      temp = temp->next;
   }
   return count;
}
void disp()
{
   node *temp = head;
   while (temp != NULL)
   {
      printf("%d -> ", temp->info);
      temp = temp->next;
   }
   printf("NULL\n");
}