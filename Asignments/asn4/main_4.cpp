#include<iostream>
#include<string>
#include<vector>
#include<cmath>

double distance(double x1, double y1, double origin_x, double origin_y) {
    return sqrt(pow(x1 - origin_x, 2) + pow(y1 - origin_y, 2));
}
void order_color(char arr[],int j){
char temp = arr[j];
arr[j]= arr[j+1];
arr[j+1]= temp;

}
int amount_b(char color[],int near_neighbors){
int total = 0;
for(int i = 0 ; i < near_neighbors;i++){
    if(int(color[i]) == 66){
        total++;
    }
}
return total;
}
int amount_r(char color[],int near_neighbors){
    int total = 0;
for(int i = 0 ; i < near_neighbors;i++){
    if(int(color[i]) == 82){
        total++;
    }
}
return total;
}
void sort(double lengths[],char colors[],int amount_points){
for(int i = 0 ; i < amount_points; i++){
    for(int j = 0 ; j <amount_points-1 ; j++){
if (lengths[j]>lengths[j+1]){
double temp = lengths[j];
lengths[j]= lengths[j+1];
lengths[j+1]= temp;
order_color(colors, j);
}
}
}
}



int main(){
    int amout_points, near_neighbors;
    double origin_x, origin_y;
std::cin >> amout_points;
std::cin >> near_neighbors;
double x_locs[amout_points];
double y_locs[amout_points];
char colors[amout_points];                            //input      x_locs
                                                      //           y_locs
for(int i = 0 ; i < amout_points ; i++){              //           colors
std::cin>> x_locs[i];                                 //           origin_x
std::cin>> y_locs[i];                                 //           origin_y
std::cin>> colors[i];                                 //           amout_points
}                                                     //           near_neighbors 
std::cin>>origin_x;
std::cin>>origin_y;
//////////////////////////////////////////////////////
double calc_distances[amout_points];
for (int i = 0; i < amout_points; i++){
    calc_distances[i] = distance(x_locs[i], y_locs[i], origin_x, origin_y);
}
sort(calc_distances, colors, amout_points);


if(amount_r(colors, near_neighbors) > amount_b(colors, near_neighbors)){
    std::cout << "R" <<std::endl;
}
else{
        std::cout << "B" <<std::endl;

}


return 0;
}