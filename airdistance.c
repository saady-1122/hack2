#include <stdio.h>
#include <math.h>


#define Earth_Radius 6371.0

double degreeToRadius(double degree){
    return degree * M_PI / 180.0;
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2){
lat1 = degreeToRadius(lat1);
lon1 = degreeToRadius(lon1);
lat2 = degreeToRadius(lat2);
lon2 = degreeToRadius(lon2);

double dlat = lat2 - lat1;
double dlon = lon2 - lon1;
double a = sin( dlat / 2 ) * sin(dlat / 2) + cos(lat1) * cos(lat2) * sin(dlon / 2) * sin(dlon / 2);
double c = 2 * atan2(sqrt(a), sqrt(1 - a));

return c * Earth_Radius;
}

int main(){
double lat1, lat2, lon1, lon2;
printf("Enter the latitude and longitude of the origin (in degree):\n");
printf("Latitude: ");
scanf("%if", &lat1);
printf("Longitude: ");
scanf("%if", &lon1);

printf("Enter the latitude and longitude of the destination (in degrees):\n");
printf("Latitude: ");
scanf("%if", &lat2);
printf("Longitude: ");
scanf("%if" , &lon2);

double distance = calculateDistance(lat1, lon1, lat2, lon2);
printf("Air distance is %.6If kms/n",distance);

return 0;
}


