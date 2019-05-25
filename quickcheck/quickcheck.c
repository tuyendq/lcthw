#include <stdio.h>

// Check integer overflow
int main() {
	int num = 50000;
	int result = num * num;
	printf ("Result: %d", result);
	
	return 0;
}

/*
int main (){
   int x = 0, y = 1;
   if (x || !y)
  	printf("1");
   else if (y && x)
  	printf("2");
   else
  	printf("3");


   if((10 || (5-2)) && ((6 / 2) - (1 + 2))) {
   	printf("true");
   } else {
   	printf("false");
   }

}
*/

/*
int main (){
   int x = 0, z = 2;
   while (x < 3) {
  	printf ("%i ", x);
      x = x + z;
    }
}
*/

/*
int foo (int q) {
    int x = 1;
    return (q + x);
}
int main (){
   int x = 0;
   while (x < 3) {
  	printf ("%i ", x);
      x = x + foo(x);
    }
}
*/
