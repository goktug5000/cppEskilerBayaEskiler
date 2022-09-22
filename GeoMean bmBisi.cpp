#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int col,row;
    cout<<"col: ";
    cin>>col;
    cout<<endl<<"row: ";
    cin>>row;
    double colonlar[col-1];
    double b,colonluk,output;
    colonluk=1;
    output=0;
    double poww;
    poww = pow(row, -1);
    for(int q=0;q<col;q++){
        cout<<endl;
        colonluk=1;
        for(int i=0;i<row;i++){
            cout<<"col: "<<q<<", row: "<<i<<": ";
            cin>>b;
            colonluk=colonluk*b;
        }
        colonluk = pow(colonluk, (poww));
        colonlar[q]=colonluk;
        output+=colonluk;
        
        cout<<endl<<"satir "<<q<< " GM : "<< colonluk;
    }
    for(int aq;aq<col;aq++){
		cout<<endl<<"GM: "<<colonlar[aq]<<endl;
		cout<<"col "<<aq<<" Weight : "<< (colonlar[aq]/output);
	}
	
	cin>>col;
    return 0;
}
