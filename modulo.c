#include <stdio.h> 

int mod (int a, int b);

int main(int argc, char *argv[]){
    int ret = 0;
    int a = -5;
    int b = -41;
    
    ret = mod(a,b);
    printf("%d mod %d = %d\n", a, b, ret);
    printf("%d %% %d = %d\n", a, b, (a%b));
    return ret;
}

int mod(int x, int m){
	if (x < 0)
    		if (m < 0) //if both are negative
      			return -(-x % -m);
    		else
      			return (x % m + m) % m; //if only x is negative
	else if (m < 0)
 		return (x % -m == 0 ? 0 : -( -m - (x % -m ))); //if only m is negative
    	else
    		return x % m; //if neither are negative
}

