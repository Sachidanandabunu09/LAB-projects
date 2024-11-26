/* WRITE A PROGRAM IN C FOR THE FOLLOWING. 
   AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS    
   FOLLOWS. 
   for 0-200_____re 0.5 per unit
   210-400________re 100+0.65 extra per extra unit above 200
   401-600_________re 230 plus 0.8 re extra per unit above 400
   above 600________Re425 plus rs 125 extra per unit of 600
   */
  #include <stdio.h>
  
  int main(){
    int unit,charges;
    printf("enter unit;\n");
    scanf("%d",&unit);

    if(unit<=200){
        charges=0.5*unit;
        printf("Your charges are;\n");
    }
    else if (unit>=201&&unit<=400)
    {
       charges=100+(unit-200)*0.65;
       printf("Your charges are;\n");
    }
    else if (unit>=401&&unit<=600)
    {
        charges=230+(unit-400)*0.8;
        printf("Your charges are;\n");

    }
    else if (unit>600)
    {
        charges=425+(unit-600)*1.25;
        printf("Your charges are;\n");
    }
    
       
    
    return 0;
  }
  