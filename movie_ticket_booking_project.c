#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int registor(){
    char e[64],p[64],p1[64],u[64];
    int v2;
    flag:
    printf("email:\n");
    gets(e);
    printf("username:\n");
    gets(u);
    printf("password:\n");
    gets(p);
    printf("confirm password:\n");
    gets(p1);
    if(strcmp(p,p1)==0){
        printf("successful!!");
    }
    else{
        printf("password did not match!!! \n try again!!!");
        goto flag;

    }


    system("cls");
    printf("\nenter verification code:");
    scanf("%d",&v2);
    if(v2==111000){
        system("cls");

    }
    else{
        printf("verification failed!!!!");
    }
    return 0;
}

int login(){
    char a[64],b[64];
    int v;
    printf("email:\n");
    gets(a);
    printf("password:");
    gets(b);
    system("cls");
    printf("\nenter verification code:");
    scanf("%d",&v);
    if(v==111000){
        system("cls");
        printf("successfully logged in!!");
    }
    else{
        printf("verification failed!!!!");
    }
    return 0;
}
int main(){
        char z;
    printf("a.login\t\t\t\tif you already have an account\n");
    printf("b.register\t\t\tif you are new\n");
    printf("c.exit\t\t\t\tnot interested\n");
    printf("enter the choice:\n");
    scanf("%c",&z);
    fflush(stdin);


    switch (z)
{
    case 'a':
          login();
      break;

    case 'b':
          registor();
      break;

    default:
        exit(0);
}

    return 0;
}

