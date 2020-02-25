#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b, int *c, int *d){
  int AAA[]={*a,*b,*c,*d};
  for(int i=0;i<10;i++){
  	int W=rand()%4;
  	int E=rand()%4;
  	int Q=AAA[W];
  	AAA[W]=AAA[E];
  	AAA[E]=Q;
  }
  *a=AAA[0];
  *b=AAA[1];
  *c=AAA[2];
  *d=AAA[3];
}
