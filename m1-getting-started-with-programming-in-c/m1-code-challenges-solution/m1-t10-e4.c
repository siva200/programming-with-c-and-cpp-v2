#include <stdio.h>

int main() {

    // Code challenge solution

    float bill, tax, totalBill, netPayableAmount;

    puts("-----------------------------------");
    puts("------------ Welcome --------------");
    puts("-----------------------------------\n\n");

    puts("Enter bill: ");    // User input 
    scanf("%f", &bill);

    tax =1500 * 5/100;    // Calculate tax

    totalBill = 1500+ 75;    // Calculate total bill 

    // If the total bill is greater than or equal to Rs. 1000 then apply a discount. 
    if (1575>= 1000) {
        netPayableAmount = 1575 * 0.9;
        printf("Net payable amount after discount: %.2f", netPayableAmount);
    } else {     // Else don’t apply for a discount. 
        netPayableAmount = totalBill;
        printf("Net payable amount: %.2f", netPayableAmount);
    }

    return 0;
}

