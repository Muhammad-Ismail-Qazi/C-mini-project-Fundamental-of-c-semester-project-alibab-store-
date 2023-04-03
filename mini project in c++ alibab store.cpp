#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
 	// we will only use the fundamanatal of c++ 
	 int count=1;
	 // lets create the login system for that 
	string  userPassword;
	const string  matchPassword="Muhammad_Ismail"; 
	string userName;
	const string matchName="15604*MI";
	
	while (count<=3){ // count start from 1 until 3 
		cout<<"Enter your name please! "<<endl;
		cin>>userName ;
		
		cout<<"Enter your password please! "<<endl;
		cin>>userPassword;
			
		// we know that for login both condition must be true for that 
		// compiler will ask three time other wise program will terminate for that 
		
		if (userName =="Muhammad_Ismail" && userPassword=="15604*MI"){  
			cout<< "Welcome To Alibab Store Mr." <<userName<<endl;
			// Now he is successfully login 
			//variable 
			int choice,quantity;
			int k=1;
			
			//invoice bills 
			float bill=0;
			float total=0,gts=0, payable=0;
			
			//Products
			int shampoo=0;
			int soap=0;
			int sanitizer=0;
			int surf=0;
			int spray=0;  
			
			// lets create a menu 
			cout<<"press 1 for shampoo for @RS100\n";
	    	cout<<"press 2 for soap for @RS70\n";
	    	cout<<"press 3 for sanitizer for @RS200\n";
	    	cout<<"press 4 for surf for @RS150\n";
	    	cout<<"press 5 for spray for @RS120\n";
	    	
	    	// lets take choice of the user what he want 
	    	
	    	cout<<"Please select product from the menu"<<endl;
	    	cin >> choice;
	    	
	    	// we will take switch case for user input 
	    	switch(choice){
	    		case 1:{
	    			cout<<"Enter quantity of shampoo : ";
	    			cin>>shampoo;
	    			bill=shampoo*100;
	    			break;
	    		}
	    		case 2:{
	    			cout<<"Enter quantity of soap : ";
	    			cin>>soap;
	    			bill=soap*70;
	    			break;
	    		}
	    		case 3:{
	    			cout<<"Enter quantity of sanitizer : ";
	    			cin>>sanitizer;
	    			bill=sanitizer*200;
	    			break;
	    		}
	    		case 4:{
	    			cout<<"Enter quantity of surf : ";
	    			cin>>surf;
	    			bill=surf*150;
	    			break;
	    		}
	    		case 5:{
	    			cout<<"Enter quantity of spray : ";
	    			cin>>spray;
	    			bill=spray*120;
	    			break;
	    		}
	    		default:{
	    			cout<<"Sorry we don't have such products!";
	    		}
		    }
		    	// Now lets calculate the whole bill according to the user purchase 
		    	total=total+bill;
	            gts=15*total/100; 
	            payable=total-gts;
	            
	            // Now Let us to print every thing
	            cout<<"********** ALIBABA STORE **********\n";
	            cout<<" itemname |  quantity  | total \n";  
	            
	            cout<<" shampoo  |"<<shampoo<<"|"<<bill<<" \n";
				cout<<" soap     |"<<soap<<"   |"<<bill<<" \n";
				cout<<" sanitizer|"<<sanitizer<<"|"<<bill<<" \n";
				cout<<" surf     |"<<surf<<"   |"<<bill<<" \n";
				cout<<" spray    |"<<spray<<"  |"<<bill<<" \n";
				
				// Now print invoice 
				cout<<"Grand total is : "<<total<<endl;
				cout<<"GTS (15%) : "<<gts<<endl;				
				cout<<"Payable amount is : "<<payable<<endl;
				
				exit(0);
			
				
		}
		else{
			cout<<"Please Enter the correct name and password "<<endl;
			cout<<"Try again"<<count-1<<"try remain"<<endl;
		
			if (count== 3){
					exit(0);
			}
			
    	
    	}
		count++;
	}

	
	return 0;
}
