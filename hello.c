#include <stdio.h>
#include <string.h>
int main(){
    int choice=0;
    while(choice!=8){
        printf("----------------------------------");
    printf("\n\nThe rule engine contains\n\n");
    printf("----------------------------------");
    printf("\n1: Bank Loan Eligibility (Salary & Credit Score)\n2: Electricity Bill Calculation (Unit-based) \n3: Ticket Pricing (Age-based) \n4: Login Validation (Attempts-based) \n5: Password Strength (Length-based) \n6: Simple Discount (Purchase amount) \n7. Weather Advisory(based on temperatutre)\n 8: Exit\n\n ");
    printf("----------------------------------");
    printf("\n\nEnter the task you want to perform:\t");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:{int sal,credit;
        printf("\n\nYou choosed 1: Bank Loan Eligibility (Salary & Credit Score)\n\n ");
        printf("Enter salary and credit :\n");
    scanf("%d %d",&sal,&credit);
        if(sal>=50000 && credit>=700){
            printf("you are approved because your salary and credit is above 50000 and above 700 respectively..!!\n\n");
        }
        else if(sal>=30000){
            printf("you are approved condtionally because your salary is above 30000\n");

        }
        else{
            
            printf("Rejected because your salaray is below 30000 \n");
        }
        break;}
    case 2:{int u,r;
    printf("\n\nyou choosed 2: Electricity Bill Calculation (Unit-based)\n\n ");
    printf("Enter the units used: ");
    scanf("%d",&u);
    if(u<=100){
        printf("\n2 rupees per unit\n");
        r=2*u;
        printf("%d rupees is the electricity bill\n\n",r);
        
    }
    else if(u>100 && u<=300){
                printf("\n5 rupees per unit\n");
        r=5*u;
        printf("%d rupees is the electricity bill\n\n",r);
    }
    else{
        printf("\n8 rupees per unit\n");
        r=8*u;
        printf("%d rupees is the electricity bill\n\n",r);
    }
    break;}
    case 3:{
        int age;
        printf("\n\nyou choosed 3: Ticket Pricing (Age-based)\n\n ");
        printf("Enter the age:\n");
        scanf("%d",&age);
        if(age<12){
            printf("\n\nThe ticket price for the child is 100 rupees \n\n");
        }
        else if(age>=12 && age<=60){
            printf("\n\n The ticket price for the Adult is 200 rupees per person\n\n");
        }
        else{
            printf("\n\n The ticket price for the Senior citizen is is 150 rupees per person\n\n");
        }
        break;
    }
case 4: {

            int p, i;
            int cp = 123;

            printf("\nLogin Validation\n");

            for(i = 1; i <= 3; i++) {

                printf("Enter password: ");
                scanf("%d", &p);

                if(p == cp) {
                    printf("Login Allowed\n");
                    break;
                }
                else {
                    printf("Invalid Password\n");
                }
            }

            if(i > 3) {
                printf("User Blocked\n");
            }

            break;
        }
    case 5:{
        char pass[100];
        int len;
        printf("you choosed 5: Password Strength (Length-based)\n\n");
        printf("Enter the password must be (above 8 characters):\n\n");
        scanf("%s",pass);
        len=strlen(pass);
        if (len>=8){
            printf("strong password \n");
        }
        else{
            printf("password is weak\n\n");
        }
        break;

    }
    case 6:{
        float pur,res;
        printf("\n\nyou choosed 6: Simple Discount (Purchase amount)\n\n");
        printf("Enter the purchased amount\n");
        scanf("%f",&pur);
        if(pur>=5000){
            printf("The discount is 20 percent");
            res=pur-(pur*0.2);
            printf("final discounted price is %f",res);
        }
        else if( pur>=2000 && pur<5000){
            printf("The discount is 10 percent");
            res=pur-(pur*0.1);
            printf("final discounted price is %f",res);
        }
        else{
            printf("No discount \n the final price is %f",pur);
        }
        break;
    }
    case 7:{
        int temp;
        printf("You choosed 7. Weather Advisory(based on temperatutre)\n\n");
        printf("Enter the temperature in degree celsius:");
        scanf("%d",&temp);
        if(temp>35){
            printf("Weather is HOT\n");

        }
        else if(temp<15){
            printf("Weather is COLD\n");
        }
        else{
            printf("Weather is Moderate\n");
        }
        break;
    }
    case 8:{
        printf("press enter to exit from rule engine\n");
        break;
    }
default:
    printf("\n\nyou exited from operation.....!!!\n\n");
    printf("\n\n----------------------------------\n\n");
        break;
    }
}
    return 0;
}