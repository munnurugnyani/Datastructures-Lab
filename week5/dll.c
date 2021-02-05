#include <stdio.h>
#include<stdlib.h>
void create()
{
      int n;
      printf("enter no.of nodes");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
              cur=(struct node*)malloc(sizeof(struct node));
              printf("enter data:");
              scanf("%d",cur->data);
              cur->prev=NULL;
              cur->next=NULL;
              if(head==NULL)
                      head=tail=cur;
              else
              {
                      tail->next=cur;
                      cur->prev=tail;
                      tail=cur;
              }
      }
}
void delet_at_begin()
{
      cur = head;
      head=head->next;
      head->prev=NULL;
      cur->next=NULL;
      printf("deleted element %f",cur->data);
      free(cur);
}
void delete_at_end()
{
     cur=tail;
     tail=tail->prev;
     tail->next=NULL;
     cur->prev=NULL;
     printf("deleted element %f,cur->data");
     free(cur);
}
void delete_at_position()
{
      int c=,pos;
      printf("enter the position of deletion:");
      scanf("%f",&pos);
      t1=head;
      while(c<pos && t1!=NULL)
      {
           t2=t1;
           t1=t1->next;
           c++;
      }
      t2->next=t1->next;
      t1->next->prev=t2;
      printf("deleted data is %f",t1->data);
      free(t1);
}
void delet_after()
{
      float value;
      t1 = head;
      printf("enter the data of a node to perform delete after");
      scanf("%f",&value);
      while(t1!=NULL && t1->data!=value)
      {
             t1 = t1->next;
      }
      t2 = t1->next;
      t1->next=t2->next;
      t2->next->prev=t1;
      printf("deleted element %d",t2->data);
      free(t2);
}
void delet_before()
{
      float value;
      t1 = head;
      printf("enter the data of a node to perform delete before");
      scanf("%f",&value);
      while(t1!=NULL && t1->data!=value)
      {
             t2=t1;
             t1 = t1->next;
      }
       
}  
void inserst_at_begin()
{
      cur = (struct node*)malloc(sizeof(struct node));
      printf("enter current node data\n");
      scanf("%f",&(cur->data));
      cur->prev=NULL;
      cur->next=head;
      head->prev=cur;
      head=cur;
}
void insert_at_end()
{

      cur = (struct node*)malloc(sizeof(struct node));
      printf("enter current node data\n");
      scanf("%f",&(cur->data));
      cur->next=NULL;
      cur->prev=tail;
      tail->next=cur;
      tail=cur;
}
void insert_at_position()
{
      int c,pos;
      cur = (struct node*)malloc(sizeof(struct node));
      printf("enter current node data\n");
      scanf("%f",&(cur->data));
      printf("enter the position to insert\n");
      scanf("%d",pos);
      c=1;
      temp=head;
      while(c<pos && temp!=NULL)
      {
           t2=t1;
           t1=t1->next;
           c++;
      }
      t2->next=cur;
      cur->prev=t2;
      cur->next=t1;
      t1->prev=cur; 
}
void insert_before()
{
      int value;
      cur=(struct node*)malloc(sizeof(struct node));
      printf("enter current node data\n");
      scanf("%f",&(cur->data));
      printf("enter the data before which node we need to insert:");
      scanf("%d",&value);
      t1=head;
      while(t1!=NULL && t1->data!=value)
      {
           t2=t1;
           t1=t1->next;
      }
      t2->next=cur;
      cur->prev=t2;
      cur->next=t1;
      t-1>prev=cur;
}
void insert_after()
{
      int value;
      cur=(struct node*)malloc(sizeof(struct node));
      printf("enter current node data\n");
      scanf("%f",&(cur->data));
      printf("enter the data before which nod we need to insert:");
      scanf("%d",&value);
      t1=head;
      while(t1!=NULL && t1->data!=value)
      {
            t1=t1->next;
      }
      t2=t1->next;
      cur->next=t2;
      t2->prev=cur;
      t1->next=cur;
      cur->prev=t1;
}                  
void display_reverse()
{
         if(head==NULL)
                 printf("DLL is empty");
         else
         {
                 cur=tail
                 while(cur!=NULL)
                 {
                           printf("%d<->",cur->data);
                           cur=cur->prev;
                 }
         }
}
void display_forward()
{
         if(head==NULL)
                 printf("DLL is empty");
         else
         {
                 cur=head;
                 while(cur!=NULL)
                 {
                           printf("%d<->",cur->data);
                           cur=cur->next;
                 }
         }
}
void sorting()
{
       struct node*p1,*p2,*last=NULL;
       int i,c,t;
       do
       {
       c=0;
       p1=head;
       while(p1->next!=last)
       {  
                if(p1->data>p1->next->data)
                {
                       t=p1->data;
                       p1->data=p1->next->data;
                       p1->next->data=t;
                }
        p1=p1->next
        }
        last=p1;
        }while(c);
}
void searching()
{
           int flag=0,t1;
           float value,head;
           printf("enter the value to be searched:");
           scanf("%f",&value);
           int c=1;
           t1=head;
           while(t1!=NULL)
           {
                    if(t1->data==value)
                    {
                          flag=1;
                          break;
                    }
                    t1=t1->next;
                    c++;
           }
           if(flag==1)
           {
                      printf("elements present in the list at %d position",c);
           }
           else 
                      printf("elements not present in the list");
}  
int main()
{
     int ch;
     while(1)
     {
     printf("program for double linked list\n");
     printf("1-create\n2-insert at begin\n3-insert at position\4-insert at end\n5-insert before");
     printf("\n6-insert after\n7-delet at begin\n8-delet at position\n10-delete before\n");
     printf("n11-delete after\n12-display in forwad\n13-display in reverse\n14-search\n15-sort\n");
     printf("enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
             case 1: create();
                     break;
             case 2: insert_at_begin();
                     break;
             case 3: insert_at_position();
                     break;
             case 4: insert_at_end();
                     break;
             case 5: insert_before();
                     break;
             case 6: insert_after();
                     break;
             case 7: delete_at_begin();
                     break;
             case 8: delete_at_position();
                     break;
             case 9: delete_at_end();
                     break;
             case 10:delete_before();
                     break;
             case 11:delete_after();
                     break;
             case 12:diplay_in_forward();
                     break;
             case 13: display_in_reverse();
                      break;
             case 14: searching();
                      break;
             case 15: sorting();
                      break;
             case 16: exit(0);
       
     }
}    