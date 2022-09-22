#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

main(){
	time_t t;
	time(&t);
	srand(t);
	int die1,die2,sum,a,ali,ayse;
	float deger,aliW,ayseW;
	die1=1;
	die2=1;
	ali=0;
	ayse=0;
	aliW=0;
	ayseW=0;

	
	for(a=1;a<=100000;a++){
		ali=0;
		ayse=0;
		cout<<"time "<<a<<endl;
		
		//ALÝ YUVARLIYO
		die1 = rand() % 6 +1;
		die2 = rand() % 6 +1;
		sum=die1+die2;
		
			cout<<"	Ali ";
			cout<<"{"<<die1<<","<<die2<<"} = "<<sum<<"	";
			if(sum==7 || sum==11){
				ali=ali+8;
			}
			else{
				ali=ali-3;
				ayse=ayse+3;
			}
		cout<<"Ali :"<<ali<<"	Ayse :"<<ayse<<endl;
			
		//AYÞE YUVARLIYO
		die1 = rand() % 6 +1;
		die2 = rand() % 6 +1;
		sum=die1+die2;
		
			cout<<"	Ayse";
			cout<<"{"<<die1<<","<<die2<<"} = "<<sum<<"	";
			if(sum==2||sum==3||sum==12){
				ayse=ayse+10;
			}
			else{
				ali=ali+5;
				ayse=ayse-5;
			}
		
	
		cout<<"Ali :"<<ali<<"	Ayse :"<<ayse<<endl;
		if(ali>ayse){
			aliW++;
			cout<<"Kazanan : Ali		";
			cout<<"aliW :"<<aliW<<"	ayseW :"<<ayseW<<endl;
		}
		else{
			ayseW++;
			cout<<"Kazanan : Ayse		";
			cout<<"aliW :"<<aliW<<"	ayseW :"<<ayseW<<endl;
		}
	}
	cout<<"aliW :"<<aliW<<"	ayseW :"<<ayseW<<endl;

		int o=1000;
		deger=(aliW/o);
		cout<<endl<<"Ali kazanma orani %"<<deger;
cin>>die1;
	
}
