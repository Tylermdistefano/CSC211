#include<iostream>
#include<vector>
#include<cmath>
int distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main(){
int x, y, dis, record=0;
std::vector<int> xvals;
std::vector<int> yvals;

while(std::cin >> x){
    std::cin >> y;
xvals.push_back(x);
yvals.push_back(y);
}
for (int i = 0 ; i < ((xvals.size())); i++){
int x1 = xvals[i];
int y1 = yvals[i];

for(int j = 0; j < i; j++){
int x2 = xvals[j];
int y2 = yvals[j];
dis = distance( x1, y1, x2 , y2);

if (dis > record){
    record = dis;
}
}

}
std::cout << record << std::endl;




return 0;
}