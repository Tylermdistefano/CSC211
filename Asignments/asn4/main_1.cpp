#include <iostream>
#include <string>


bool row(int arr[9][9] , int r){
  std::string store;
for (int i = 0 ; i < 9 ; i++){
store.push_back(arr[r][i]);
  }
for (int i = 0 ; i < store.size() ; i++){
for (int j = i+1 ; j < store.size() ; j++){
if (store[i]==store[j]){
    store.erase(j,1);
    j= i;
}
}
}


if(store.size() == 9){
    return true;
}
else{
return false;
}
}

bool collum(int arr[9][9] , int c){
    std::string store;
for (int i = 0 ; i < 9 ; i++){
store.push_back(arr[i][c]);
  }
for (int i = 0 ; i < store.size() ; i++){
for (int j = i+1 ; j < store.size() ; j++){
if (store[i]==store[j]){
    store.erase(j,1);
    j= i;
}
}
}

if(store.size() == 9){
    return true;
}
else{
return false;
}

}

bool box(int arr[9][9] , int b){
int r, c;
switch (b) {
  case 0:
    r=0;
    c=0;
    break;
  case 1:
    r=0;
    c=3;
    break;
  case 2:
    r=0;
    c=6;
    break;
  case 3:
    r=3;
    c=0;
    break;
  case 4:
    r=3;
    c=3;
    break;
  case 5:
    r=3;
    c=6;
    break;
  case 6:
    r=6;
    c=0;
    break;
  case 7:
    r=6;
    c=3;
    break;
  case 8:
    r=6;
    c=6;
    break;
}

 std::string store ={};
 int rr=r+3;
 int cc=c+3;
 for (int i = r ; i < rr ; i++){
for (int j = c ; j < cc ; j++){
 //std::cout << arr[i][j]<< " to be stored" << std::endl;
store.push_back(arr[i][j]);
  }
 }
//std::cout << store.size() << " before" << std::endl;
for (int i = 0 ; i < store.size() ; i++){
for (int j = i+1 ; j < store.size() ; j++){
if (store[i]==store[j]){
    store.erase(j,1);
    j = i;
}
}
}
//std::cout << store.size() << " after" << std::endl;
if(store.size() == 9){
    return true;
}

else{
return false;
}


}


int main(){
/////////////////////////////////////////
    int store[9][9], token = 0;
for ( int i = 0; i < 9 ; i++ ){
for ( int j = 0; j < 9 ; j++){
std::cin >> store[i][j];
}
}
//////////////////////////////////////////
for(int i = 0 ; i < 9 ; i++){
  //std::cout << row(store, i) << collum(store, i) << box(store , i) << std::endl;
if (row(store, i) && collum(store, i) && box(store , i)){
   token ++;
}
else{
    std::cout<< "Wrong solution!" << std::endl;
    return 0;
}
}

if (token == 9){
std::cout<< "Solution is good!" << std::endl;
}
    return 0 ;
}