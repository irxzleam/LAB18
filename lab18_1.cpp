#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double sai = max(R1.x, R2.x);
    double kwa = min(R1.x + R1.w, R2.x + R2.w);
	double W = kwa - sai;

	double bon = min(R1.y,R2.y);
	double lang = max(R1.y - R1.h, R2.y - R2.h);
	double H = bon-lang;
    
    double area = W*H;
	if(area>0) {return area;}
	else {return 0;}
	
}
