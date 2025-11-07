#include <stdio.h>
#include "string.h"
// sepretor();////function ahee section seprate karnya sathi
int main() {

   
    void sepretor();
    void sepretor1();
    char name[19],stream[15],ch,ans[2];
    int a,b,i,cmd;
   

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Hello, %s\n",name);
    printf("Try prompts like,\n");
    printf("1.my name\n");
    printf("2.HELLO your name\n
    printf("3.calculator\n");
    printf("4.good bye\n")
    printf("5.department\n");
    sepretor();

    home: ///our home page
    printf("How may I help you? ");
    scanf("%i",&cmd);
    if(cmd!=0)
{
    switch(cmd)
    {
    case 1:  
        printf("Your name is %s\n", name);
        goto home;
    case 2: 
        printf("hello\n");
        //goto home;
        goto home;    
    case 3:
        sepretor1();
        again:
        //seperator start
        printf("No 1: ");
        scanf("%d",&a);
        printf("No 2; ");
        scanf("%d",&b);
        //input completed
        printf("arithmetic operator ?"),scanf(" %s",&ch);
        switch(ch)
        {
        case '+': printf("%d + %d = %d\n",a,b,a+b);
        goto again;
        case '-': printf("%d - %d = %d\n",a,b,a-b);
        goto again;
        case '*': printf("%d X %d = %d\n",a,b,a*b);
        goto again;
        case '/': printf("%d / %d = %d\n",a,b,a/b);
        goto again;
        case '!': printf("terminated\n");
        sepretor();
        goto home;
        default: printf("improper\n");
        
        }
        
        sepretor1();//sepretor closed
        goto home;
        ///break;
    case 4:
    printf("Goodbye!\n");
    
    break;
    case 5:
        printf("enter your department: "),scanf("%s",&stream);
        if(strcmp(stream,"BCS")==0 || strcmp(stream,"bsc cs")==0 || strcmp(stream,"bcs")==0)
        {
            printf("ashwini pawar\n");    
        }
        if(strcmp(stream,"animation")==0 ||strcmp(stream,"Animation")==0 ||strcmp(stream,"bcs animaion")==0 ||strcmp(stream,"bcs Animation")==0)
        {
            printf("vasihnavi joshi \n");
        }
        sepretor();
        //goto home;
        goto home;
    //else condition triggering if nothing workss
    default: 
    printf("Sorry, I don't understand that command.\n");
    sepretor();
    
    printf("want to exit ? ( y / n ): "),scanf("%s",&ans);
    if(strcmp(ans,"n")==0 || strcmp(ans,"N")==0)
    {
        goto home;
    }
    break;
    }
   // }
    }
    return 0;
}
///function to seperate 
void sepretor()
{
    for(int i = 0 ; i < 50 ; i++)//20
        {
            printf("---");
        }
        printf("\n");  
}
//diffrent type of seperator
void sepretor1()
{
    for(int i = 0 ; i < 30 ; i++)
        {
            printf("* ");
        }
        printf("\n");
}
