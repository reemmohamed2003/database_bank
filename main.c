#include <stdio.h>
#include <stdlib.h>
#define MAX_number  200

struct client{
    int id;
    double cash;
    char name[20];
    char type[10];
    int clientnumber[];
};

 int cliennumber=0;
 void add(struct client x[],int size)
 {
     int id_add,name_add,type_add,cash_add;
      int clientnumber=0;
     if(clientnumber<MAX_number ){
        printf("enter client id to add:");
        scanf("%d",&x[clientnumber].id);
        printf("enter client name to add:");
        scanf("%s",&x[clientnumber].name);
        printf("enter client type to add:");
        scanf("%s",&x[clientnumber].type);
        printf("enter client cash to add:");
        scanf("%lf",&x[clientnumber].cash);
     }
     printf("%d",&id_add);
     printf("%s",&name_add);
     printf("%s",&type_add);
     printf("%f",&cash_add);
     clientnumber++;
     //else{
      //  printf("no information about client")
     //}
 }

 void modify(struct client x[],int size)
 {
     int id_modify,name_modify,type_modify,cash_modify;
     int i;
     int clientnumber;
     printf("enter client id to modify:");
     scanf("%d",&id_modify);
     for(i=0;i<clientnumber;i++)
     {

         if(x[i].id==id_modify){
             printf("enter new cash:");
            scanf("%f",&x[i].cash);
             printf("enter new name:");
            scanf("%s",&x[i].name);
             printf("enter new type :");
            scanf("%s",&x[i].type);
         printf("%d\n",id_modify);
         printf("%f\n",cash_modify);
         printf("%s\n",name_modify);
         printf("%s\n",type_modify);
         }

         else{
            printf("no information");
         }
          }
 }


int main()
{
    struct client x[MAX_number];
    int clientnumber;
    int size;
    int choice;

    //for(;;)//
   // while (MAX_number)
        while (1){


    printf("show choices:\n");
    printf("1_enter client information\n");
    printf("2_add\n");
    printf("3_modify\n");
     printf("4_no information\n");
    printf("enter your choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
      for(int i=0;i<clientnumber;i++){

    printf("enter client_name:");
    scanf("%s",&x[i].name);
    printf("enter client_id:");
    scanf("%d",&x[i].id);
    printf("enter client_cash:");
    scanf("%lf",&x[i].cash);
    printf("enter client_type:");
    scanf("%s",&x[i].type);
    }



        for(int i=0;i<clientnumber;i++){
    printf("%s\n",x[i].name);
    printf("%d\n",x[i].id);
    printf("%lf\n",x[i].cash);
    printf("%s\n",x[i].type);
    }


    }
    else if(choice==2)
    {
        add(x,size);
    }
    else if(choice==3)
    {
         modify(x,size);
    }
    else{
        printf("no information");
    }

}
    return 0;
}
