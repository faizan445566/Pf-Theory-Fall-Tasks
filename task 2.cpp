	#include <stdio.h>

int main() {
    float distancemiles, distancekm, distancemeters, distancecm, distancemm, distancemicrometers;

    // taking input in miles from the user
    printf("Enter the distance between SHU and your home in miles: ");
    scanf("%f", &distancemiles);

    // Convert distance in km, meter, cm, mm and micrometers
    distancekm = distancemiles * 1.60934;           
    distancemeters = distancekm * 1000;            
    distancecm = distancemeters * 100;             
    distancemm = distancecm * 10;                  
    distancemicrometers = distancemm * 1000;     

    
    printf("Distance in kilometers: %.2f km\n", distancekm);
    printf("Distance in meters: %.2f m\n", distancemeters);
    printf("Distance in centimeters: %.2f cm\n", distancecm);
    printf("Distance in millimeters: %.2f mm\n", distancemm);
    printf("Distance in micrometers: %.2f um\n", distancemicrometers);


return 0;
}
