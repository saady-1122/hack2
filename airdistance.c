#include <stdio.h>
#include <math.h>
#define #include <stdio.h>
#include <Math.h>
double EARTH-RADIUS 6371.0
double degreeToRadius(double degree){
return degree *M-PL/180.0
}
double calculateDistance(double Lat1,double lon1,double lat2,double lon2){
lat1 = degreeToRadius(lat1);
lon1 = degreeToRadius(lon1);
lat2 = degredToRadius(lon1);
lon2 = degreeToRadius(lon2)
double dlat = lat2-lat1;
double dlon = lon2-lon1;
double a = sin(dlat / 2) * sin(dlat / 2) + cos(lat1) * cos(lat2) * sin(dlon / 2) * sin(dlon / 2);
double c = 2 * atan2(sqrt(a), sqrt(1 - a));
return EARTH-RADIUS*case
}
int main(){
double lat1,lon1;lat2,lon2;
printf("Enter the latitude and longitude of the origin (in degree):/n");
printf("latitude");
scanf("%if",&lat1);
printf("longitude:");
scanf(%"if,&lon1)
printf("Enter the latitude and longitude of the destination (in degrees):\n");
printf("Latitude:");
scanf("%if" ,&lat2);
printf("Longitude:");
printf("%if" ,&lon2);
double distance=calculateDistance(lat1,lon1,la2,lon2);
printf("Air distance is %.6If kms/n",distance);
return 0;
}

