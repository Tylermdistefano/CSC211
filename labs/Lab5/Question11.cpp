int sumOprod(int a, int b, int c){

int lower,higher;
int final = 0;
int check = b - c ;


if (check > 0){
higher = b;
lower = c;
}
else if ( check < 0){
higher = c ;
lower = b;

}
else {
// numbers are the same
}


if ( a % 2 == 0 ){
for (int i = lower; i < higher ; i++){
final += i;

}

}

else{

for (int i = lower; i < higher ; i++){
final *= i;

}

}

return final;

}