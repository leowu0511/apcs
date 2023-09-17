#include<iostream>
using namespace std;
int main(){
	unsigned int n=0;
	cin>>n; //輸入數字 
	int i=2; //因數
	int t=0; //次方
	int yes=0; //偵測
	while(1){ //迴圈一直跑  
		if(n%i==0){
			t++;
			n=n/i;
			yes=1;
			continue;
			}
			if(yes==1)
			cout<<i;
		if(t>1){ //如果次方數>1就輸出次方 
			cout<<"^"<<t;
			yes=0;
			if(i+1<=n) //如果後面還有數字(!=0)就放 * 
			cout<<" * ";
			t=0; //把次方設0
			}
		else if(i+1<=n&&t==1){
				cout<<" * "; //如果剛好只能整除一次就輸出*
				t=0; //把次方設為0
				yes=0;  
			}
		if(i+1>n){ //如果因數+1>n,迴圈結束
			break;
		}
		i++; //因數加1 
	}
	if(n==1){
		cout<<n;
	}
}
