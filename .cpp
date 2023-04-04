#include <graphics.h>
using namespace std;
#include <iostream>
#include <stdio.h>

class paintbrush{

	public:
		int drawrect( int a , int e , int c , int d){
		
			initwindow(300,300);
			setfillstyle(SOLID_FILL ,  GREEN);
			rectangle(a, e , c ,d);
			floodfill(a+1 , e+1, WHITE);
		}
	int drawcircle(int x , int y , int r){
		initwindow(500,500);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, YELLOW);
		circle(x , y , r);
		floodfill(x , y , WHITE);
	}
	
};

int main(){
paintbrush pb;
cout<<"Which shape you want: "<<"  "<<endl<< "1.  Circle " << endl<< "2.  Rectangle"<<endl;
int c;
cin>>c;
while(c){

if(c==1){
	int m , n , o;
	cout<<"You choose a circle"<<endl;
	cout<<"Specify dimensions of a circle :"<<endl<<"X - axis"<<endl<< "Y-axis"<<endl<<"radius"<<endl;
	cin>>m;
    cout<<"x-axis"<<" "<<m<<endl;
    cin>>n;
    cout<< "Y-axis"<<" "<<n<<endl;
	cin>>o;
	cout<<"radius"<<o<<" "<<endl;
	cout<<"SET BORDER COLOR"<<" "<<endl;
	string col;
	cin>>col;
	cout<<" Border Color"<<" "<<col<<endl;
	cout<<"SET COLOR FILL"<<" "<< endl;
	string bor;
	cin>>bor;
	cout<<"FLOOD-FILL"<<" "<<bor<<endl;
pb.drawcircle(m , n, o);
getch();
	
	
}
else if(c==2){

int l, t, r, b ;
cout<<"Specify dimensions of rectangle : Left , top , bottom , right "<<endl;
cin>>l;
cin>>t;
cin>>r;
cin>>b;
cout<< "Left length"<<" "<<l<<endl;
cout<<"Top length"<<" "<<t<<endl;
cout<<"Right length"<<" "<<r<<endl;
cout<<"Bottom side"<<" "<<b<<endl;
	cout<<"SET BORDER COLOR"<<" "<<endl;
	string col;
	cin>>col;
	cout<<" Border Color"<<" "<<col<<endl;
	cout<<"SET COLOR FILL"<<" "<< endl;
	string bor;
	cin>>bor;
	cout<<"FLOOD-FILL"<<" "<<bor<<endl;

pb.drawrect(l ,t,r,b);
getch();}

else{
	cout<<"Invalid choice";
	cout<<"exit";
	
	
}

}
}
