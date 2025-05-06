#include <stdio.h>
int main(){
    int units;
    int charge;
    printf("enter number of units:");
    scanf("%d",&units);
    if ((units >= 0) && (units <= 50)){
        charge = 0;
    }
    else if ((units >= 51) && (units <= 100)){
        charge = (units-50)*5;
    }
    else if ((units >= 101) && (units <= 150)){
        charge = 250 + (units-100)*10;
    }
    else if ((units >= 151) && (units <= 200)){
        charge = 750 + (units-150)*20;
    }
    else {
        charge = 1750 + (units-200);
    }
    
    printf("\nYou have spent %d units so you have to pay %d rupees.\n",units,charge);
    
    return 0;
}