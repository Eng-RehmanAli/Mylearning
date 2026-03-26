#include<iostream>
using namespace std;
int main(){
	// pattern #1
//	for(int i=1;i<=4;i++){
//            int k=1;
//		for(int j=1;j<=4;j++){
//			cout<<k<<" ";
//			k++;
//		}
//		cout<<endl;
//	}
//	
//  intilize the a variable with 3 values
// pattern #2
//int n=3;
//// take a loop to  handle the rows
//for(int i=1;i<4;i++){
//	for(int j=1;j<4;j++){
//		// take a loop to handle the colums 
//		cout<<n-j+1<<" ";
//	}
//	cout<<endl;
//}
//	  reverse printing 
// pattern #3
//char a=65;
//for(int i=1;i<=3;i++){
//	for(int j=1;j<=3;j++){
//		cout<<char(a)<<" ";
//	}
//	a++;
//	cout<<'\n';
//}
//char a=65;
//for(int i=1;i<=9;i++){
//	cout<<a++<<" ";
//cout<<endl;
//}
// A B C 
// D E F
// G H I 

//int i=0;
//int a=65;
//while(i<3){
//	int j=0;
//	while(j<3){
//		cout<<char(a)<<" ";
//		a++;
//		j++;
//		
//	}
//	i++;
//	cout<<endl;
//}	

//char a =65;
//int i=1;
//while(i<4){
//	int j=1;
//	while(j<4){
//		if(j+i-1){
//			cout<<char(a)<<" ";
//		}
//		j++;
//		a++;
//	}
//	cout<<endl;
//	a=a-2; 
//	i++;
//}
//  // trianguler sahpe printing 
//char a=65;
//for(int i=1;i<4;i++){
//	for(int j=0;j<i;j++){
//    cout<<char(a)<<" ";  
//	}
//	cout<<endl;
//	a++;
//}
  //  triangle withe patterin of the second diagonal 
  // i+j-1

//for(int i=1;i<=3;i++){
//	for(int j=1;j<=i;j++){
//   char a=('A'+i+j-2);
//   cout<<a;		
//	
//}
//cout<<endl;
//}

//D
//CD
//BCD
//ABCD 
//int subj=2;
//int  a=68;
//for(int i=1;i<=4;i++){
//	for(int j=1;j<=i;j++){
//		cout<<char(a);
//		a++; 
//	}
//	a=a-subj;
//	subj++;
//	cout<<endl;
// 	
//}


// int n;
// cout<<"Enter the number for the rows"<<endl;
// cin>>n;
// int i=1;
//  while(i<=n){
//  	//  print the spaces first 
//  	int spaces=n-i;
//  	while(spaces){
//  		cout<<" ";
//  		spaces--;
//	  }
//	  int col=1;
//	  	while(col<=i){
//  	  cout<<"*";
//  	  col++;
//	  }
//	  i++;
//	  cout<<endl;
//	  
//  }
  // for
//  int n;
//  cout<<"Enter the number for the rows"<<endl;
//  cin>>n;
//  for(int i=4;i>=1;i--){
//  	for(int j=1;j<=i;j++){
//  		cout<<"*";
//	  
//}
//cout<<endl;
//  }

//int n;
//cout<<"Enter the number "<<endl;
//cin>>n;
//
//int i=n;
//while(i>=0){
//	int spaces=n-i;
//	while(spaces){
//		cout<<" ";
//		spaces--;
//	}
//	int col=1;
//	while(col<=i){
//		cout<<"*";
//		col++;
//		
//	}
//	cout<<endl;
//	i--;
//}
//  test it 
//int n;
// cout<<"Enter number ";
// cin>>n;
// int num=1;
// for(int i=1;i<=n;i++){
// 	//left side spaces
// 	int spaces=n-i;
// 	for(int j=1;j<spaces;j++){
// 		cout<<" ";
// 		
//	 
//	 }
//	 // number for the printing
//	 	for(int k=1;k<=i;k++){
// 		cout<<num<<" ";
// 		num++;
//	 }
//	 // righ side printing 
//	 	int spaces2=n-i;
// 	for(int j=1;j<spaces2;j++){
// 		cout<<" ";
// 	 
//	 }
//	 cout<<endl;
// }

//
//int n;
//cout<<"Enter the number ";
//cin>> n;
//
//for(int i=1;i<=n;i++){
//	 // first spaces then printing 
//	 int spaces=n-i;
//	 for(int j=1;j<=spaces;j++){
//	 	cout<<" ";
//	 }
//	 int num=1;
//	 for(int k=1;k<=i;k++){
//	 	cout<<num;
//	 	num++;
//	 }
//	 int num2=1;
//	 for(int l=1;l<i;l++){
//	 	cout<<num2;
//	 	num2++;
//	 }
//	 cout<<endl;
//}

//int n;
//cout<<"Enter the number";
//cin>>n;
//for(int  i=1;i<=n;i++){
//    // take the digit first
//	int num1=1; 
//    for(int j=i;j<=n;j++){
//    	cout<<num1;
//    	num1++;
//	}
//    
//    // take the starts 
//     for(int k=1;k<=i;k++){
//     	if(k==1){
//     		
//		 }
//		 if(k>1){
//		 
//     	cout<<"**";
//     }
//     	
//	 }
//	 int num2=1;
//	 for(int l=n;l>=i;l--){
//	 	cout<<num2;
//	 	num2++;
//	 }
//    cout<<endl;
//}
	return 0;
}



























