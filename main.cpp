#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

//structures

struct Sine{
	
    double sin_a;
	int temp1;
	float f1 = 1, sin_rad = 0;
	
};

struct Cos{
	
	double cos_a;
    int temp1;
    float cos_rad = 1, f1 = -1;
    
};
struct Tan{
	
	double tan_a;
	int temp1;
	float tan_rad = 0;
	
};


//functions


double factorial (int n)
{
    double fact = 1;
    while(n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}


sinWave(){
	
	int n, angle=0;
	double x, y;
	
			
		//converting into radians
		
	
	Sine a;	
    cout << "Enter the Angle: ";
    cin >> a.sin_a;
    
    cout << "Enter the accuracy of the Result: ";
    cin >> n;
    
    a.temp1 = a.sin_a;
    a.sin_a= a.sin_a * 22 / (180*7);
    
     
    // Loop to calculate the value of Sine
	 
    
	for (int i = 1; i <= n; i += 2)
    {
         a.sin_rad = a.sin_rad + a.f1 * pow(a.sin_a,i) / (1.0 * factorial( i ));
         a.f1 = -a.f1;
    }
    
    cout << "sine ("<< a.temp1 <<") = " << a.sin_rad << endl;
    
     
    	
		//graph 
	
	

 line(0, getmaxy () / 2, getmaxx (), getmaxy () / 2);
 
 
  //generate a sine wave

 
  for(x = 0; x < getmaxx (); x += 3) 
 {
 
     // calculate y value given x
     
     y = a.temp1 * sin(angle * 3.141 / 180);
     y = getmaxy()/2 - y;
 
     // color a pixel at the given position
  
  putpixel (x, y, WHITE);
  
  //delays the draw action in milliseconds
  
  delay (100);
 
  // increment angle
  
  angle += 5;

 }
 
 
 // deallocate memory allocated for graphics screen
 
  closegraph();
  
 
}


cosWave(){
	
	int n, angle=0;
	double x, y;
	
	
	//converting into radians
	
	
	Cos b;
	
	   cout << "Enter the Angle: " ;
       cin >> b.cos_a;
       
       
	   cout << "Enter the accuracy of the Result: " ;
       cin >> n;
       
       
	   b.temp1 = b.cos_a;
       b.cos_a = b.cos_a * 22 / (180 * 7);
       
       
       
       // Loop to calculate the value of Cos
       
    
	
	for(int i = 2; i <= n; i += 2)
    {
         b.cos_rad = b.cos_rad + b.f1 * pow(b.cos_a,i) / (1.0*factorial(i));
         b.f1 = - b.f1;
    }
    
    
	cout <<"cos("<<b.temp1<<") = " << b.cos_rad << endl;
    
	
	//graph
    
    
	line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
	
	
	//generate a cos wave
    
            
		for(x = 0; x < getmaxx(); x+=3) {
            	
				//calculate y value given x
    
            y = b.temp1 * (angle*3.141/180);
     		y = getmaxy()/2 - y;		
 
    
	//color a pixel at given position
    
  
  putpixel(x, y, WHITE);
  
  
  //delays the drawing action
  
  
  delay(100);
 
  
  //increment angle
  
  
  angle+=5;
  
 }
 
 
 //deallocates memory allocated for graphics screen
 
 
 closegraph();


}


tanWave(){
	
	int n, angle=0;
	double x, y;
			
		//converting into radians
		
	Tan c;	
    cout << "Enter the Angle: ";
    cin >> c.tan_a;
    
    cout << "Enter the accuracy of the Result: ";
    cin >> n;
    
    c.temp1 = c.tan_a;
    c.tan_a = c.tan_a * 22 / (180*7);
    
     
    // Loop to calculate the value of Tan
	 
    
	for (int i = 1; i <= n; i += 2)
    {
         c.tan_rad = c.tan_rad +  pow(c.tan_a,i) / (1.0 * factorial( i ));
    }
    
    cout << "tan ("<< c.temp1 <<") = " << c.tan_rad << endl;
    
     
    	
		//graph 
	
	

 line(0, getmaxy () / 2, getmaxx (), getmaxy () / 2);
 
 
  //generate a tan wave

 
  for(x = 0; x < getmaxx (); x += 3) 
 {
 
     // calculate y value given x
     
     y = c.temp1 * tan(angle * 3.141 / 180);
     
     y = getmaxy()/2 - y;
     // color a pixel at the given position
  
  putpixel (x, y, WHITE);
  
  //delays the draw action in milliseconds
  
  delay (100);
 
  // increment angle
  
  angle += 5;

 }
 
 
 // deallocate memory allocated for graphics screen
 
  closegraph();
  
 
 
}

	


int main ()

{
	int gd = DETECT, gm;
	
	initgraph (&gd, &gm, "");
	
	int k;
	int n;
	double x, y;
    
    do{
	
    system("cls");
    
    
    cout <<"========================================================================================================================" << endl;
    cout <<"==============================================   -USER MENU-   =========================================================" << endl;
    cout <<"========================================================================================================================" << endl;
	cout << "|Select the trigonometric function you want to use. " << endl;
	cout << "|1. Sine " << endl;
	cout << "|2. Cosine " << endl;
	cout << "|3. Tangent " << endl;
	cout << "|4. Exit " << endl;
	
	cin >> k;
	
	switch (k)
	
	{
	case 1:
			
		sinWave();
		
 		break;
 		
    case 2:
       	
       	cosWave();
       	
       	break;
 
    case 3:
    	
    	tanWave();
    	
    	break;
 	 
	default:
		exit(0);
 
}
	
}	while(true);
    	return 0;
}
		
