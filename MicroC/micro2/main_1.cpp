//Birk has made a new shiny rocket and just received his licence from the Bluesky Global Order (BGO) to launch anytime within the next n days. He is, 
//however, worried that the rocket will hit space junk on its way. In order minimize the risk of a collision, Birk has made a model of how many pieces
//of space junk there will be for each of the next n days. He decided that he will launch his rocket on the day with the least space junk, and if there 
//are multiple days with the same amount of space junk he of course wants to send his rocket up as early as possible
//Can you help Birk find out how many days he has to wait until he sends up his rocket?

#include <iostream>
int n;
int main() {
std::cin >> n;
int daylyJunk[n];
for(int i = 0; i < n ; i++) {
  std::cin >> daylyJunk[i];

}
int testNum = daylyJunk[0];
int answer;
for(int i = 0; i < n ; i++){

if(testNum > daylyJunk[i]){
 answer = i; 
 testNum = daylyJunk[i];
}

}
std::cout << answer << std::endl;
return 0 ;
}