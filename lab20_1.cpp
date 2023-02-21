#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){
	

}

int main() {
	
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	


	return 0;
}
