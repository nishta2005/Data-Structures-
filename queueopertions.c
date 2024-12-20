#include<stdio.h>
#define MAX 5



void enqueue(int queue[], int *front, int *rear, int value)
{
   if(*rear==MAX-1)
     printf("Queue is full. Element cannot be inserted.\n");
   else
   {
     if(*front==-1)
       *front=0;
     (*rear)++;
     queue[*rear]=value;
     printf("The element has been inserted.\n");
   }
}

int dequeue(int queue[], int *front, int *rear)
{
  if(*front==-1||*front>*rear)
  {
    printf("Queue is empty. cannot delete element from the queue.\n");
    return -1;
  }
  int deletedvalue=queue[*front];
  (*front)++;
  return deletedvalue;
  if(*front>*rear)
  {
    *front=*rear=-1;
  }
}

void display(int queue[], int front, int rear)
{
  if(front==-1||front>rear)
  {
    printf("Queue is empty. Cannot display elements");
   
  }
  else
  {
    for(int i=front; i<=rear; i++)
      {
        printf("%d", queue[i]);
      }
    printf("\n");
  }
 
}

int main()
{
  int choice, value;
  int queue[MAX];
  int front=-1;
  int rear=-1;
  do
    {
      printf("Queue Menu:\n");
      printf("1. Insert\n");
      printf("2.Delete\n");
      printf("Display\n");
      printf("4.Exit\n");
      printf("Enter your choice\n");
      scanf("%d", &choice);

      switch(choice)
        {
          case 1:
               printf("Enter the element to be inserted:");
               scanf("%d", &value);
               enqueue(queue, &front, &rear, value);
               break;
          case 2:
               value=dequeue(queue, &front, &rear);
               if(value!=-1)
               {
                 printf("The deleted element is %d\n", value);
                 
               }
              break;
          case 3:
               display(queue, front, rear);
               break;
          case 4:
                printf("Exited the program\n");
                break;
          default:
               printf("Enter a valid choice\n");
              break;
        }
    }while(choice!=4);
}
