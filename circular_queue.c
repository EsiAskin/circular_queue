#include <stdio.h>
#include <conio.h>
#define MAX 10

int queue[MAX];
int front=-1, rear = -1;

void insert(){
    int num;
    printf("Kac eklemek istiyorsun ?\n");
    scanf("%d", &num);
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=num;
    }
    else if(rear==MAX-1&&front!=0){
        rear=0;
        queue[rear]=num;
    }
    else if(rear==MAX-1&&front==0){
        printf("Kuyruk dolu ekleyemeyiz.\n");
    }
    else{
        rear++;
        queue[rear]=num;
    }
}
void del_element(){
    if(front==-1&&rear==-1){
        printf("Kuyruk bos silemeyiz.\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        if(front==MAX-1){
            front=0;
        } 
        else{
            front++;
        }
    }
}
void peek(){
    if(front==-1&&rear==-1){
        printf("Gosterilecek eleman yok.\n");
    }
    else{
        printf("%d \n", queue[front]);
    }
}

void display(){
    int i;
    if(front==-1&&rear==-1) printf("Kuyruk bos.\n");
    else if(front==rear) printf("%d \n", queue[front]);
    else if(front<rear){
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    else{
        for(i=front;i<=MAX-1;i++){
            printf("%d ",queue[i]);
        }
        for(i=0;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


int main()
{
  insert();
  insert();
  display();
  del_element();
  display();
  del_element();
  display();

}

