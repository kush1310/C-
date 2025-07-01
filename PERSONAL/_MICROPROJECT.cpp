#include <iostream>
#include<process.h>
#include<math.h>
#include<iomanip>
using namespace std;
const int NUM_STUDENTS=5;
const int NUM_SUBJECTS=5;
const int NUMSTUDENTS=5;
int main() 
{
	cout<<"								WELCOME TO HOME SCREEN"<<endl<<endl<<endl<<endl;
	cout<<"THIS SOFTWARE IS DESIGNED TO RECORD THE STUDENTS' ATTENDANCE. WE HAVE TRIED TO MAKE IT MUCH EASIER SO THAT OUR TEACHERS CAN HANDLE THE RECORD    EASILY. WE HAVE ALSO ADDED OPTIONS TO VIEW MARKSHEETS OF STUDENTS AND ENTER THEIR MARKS...."<<endl<<endl<<endl<<endl;
    int attendance[70]={0};
    while (true) 
	{
        int choice;
        cout<< "MENU:\n";
        cout<< "1. MARK AND DISPLAY TODAY'S ATTENDANCE\n";     
 		cout<< "2. VIEW RECORD OF PREVIOUS MONTH\n";
        cout<< "3. MARKSHEET OF ALL STUDENTS\n";
        cout<< "4. ENTER MARKS OF 5 STUDENTS\n";
        cout<< "5. LOG OUT\n";
        cout<< "ENTER YOUR CHOICE:"<<endl;
        cin>> choice;
        switch (choice) 
		{
            case 1:
           	{
            string students[NUMSTUDENTS];
    		bool attendance[NUMSTUDENTS];
    
    		cout<<"NOTE:- PRESS 1 FOR PRESENT AND 0 FOR ABSENT"<<endl<<"IF YOU PRESS ANY OTHER KEY RATHER THAN 0 OR 1 THIS WILL RESULT THE SOFTWARE TO GO IN AN INFINITE LOOP..\n";
		    cout<<"ENTER THE ATTENDANCE RECORD FOR EACH STUDENT:\n";
    		for (int i=0;i< NUMSTUDENTS;i++) 
				{
       			    cout<<"STUDENT-"<<i+1 <<":";
        			cin>> attendance[i];
				}
    			 	cout << "\nATTENDANCE RECORD:\n";
    				for (int i=0;i<NUMSTUDENTS;i++) 
						{
			 	            cout<<"STUDENT-"<<i+1<< ":"<<(attendance[i] ? "PRESENT" : "ABSENT")<<endl;
					    }
                   break;
            }
                
  			case 2:
  				   	cout<<"PREVIOUS MONTH RECORD OF 2 STUDENTS IS:-"<<endl<<endl<<endl<<endl;										  		   					  		   								  	   		  	 	  	    	   	       	  
				    cout<<"				 DATE		STUDENT-1  STUDENT-2"<<endl<<endl;
				 	cout<<"		  	 	01-5-23	        ABSENT	    PRESENT"<<endl;
	                cout<<"		  	 	02-5-23		ABSENT	    PRESENT"<<endl;  					
				 	cout<<"		  	 	03-5-23		ABSENT	    PRESENT"<<endl;	  		    	
  					cout<<"		  	 	04-5-23		PRESENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	05-5-23		PRESENT	    PRESENT"<<endl;																																			  
					cout<<"		  	 	06-5-23		PRESENT	    ABSENT"<<endl;
	                cout<<"		  	 	07-5-23		PRESENT	    PRESENT"<<endl;  					
				 	cout<<"		  	 	08-5-23		PRESENT	    PRESENT"<<endl;	  		    	
  					cout<<"		  	 	09-5-23		PRESENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	10-5-23		PRESENT	    ABSENT"<<endl;																																				  
					cout<<"		  	 	11-5-23		PRESENT	    PRESENT"<<endl;
	                cout<<"		  	 	12-5-23		PRESENT	    PRESENT"<<endl;  					
				 	cout<<"		  	 	13-5-23		PRESENT	    PRESENT"<<endl;	  		    	
  					cout<<"		  	 	14-5-23		PRESENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	15-5-23		PRESENT	    PRESENT"<<endl;																																				        		 
	  		    	cout<<"		  	 	16-5-23		PRESENT	    PRESENT"<<endl;
	                cout<<"		  	 	17-5-23		ABSENT	    PRESENT"<<endl;  					
				 	cout<<"		  	 	18-5-23		ABSENT	    PRESENT"<<endl;	  		    	
  					cout<<"		  	 	19-5-23		PRESENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	20-5-23		ABSENT	    PRESENT"<<endl;	
					cout<<"		  	 	21-5-23		PRESENT	    PRESENT"<<endl;
	                cout<<"		  	 	22-5-23		ABSENT	    ABSENT"<<endl;  					
				 	cout<<"		  	 	23-5-23		PRESENT	    PRESENT"<<endl;	  		    	
  					cout<<"		  	 	24-5-23		ABSENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	25-5-23		PRESENT	    PRESENT"<<endl;	
					cout<<"		  	 	26-5-23		PRESENT	    ABSENT"<<endl;
	                cout<<"		  	 	27-5-23		PRESENT	    ABSENT"<<endl;  					
				 	cout<<"		  	 	28-5-23		PRESENT	    ABSENT"<<endl;	  		    	
  					cout<<"		  	 	29-5-23		ABSENT	    PRESENT"<<endl;									  		   								  	   		  	 	  	  		       		
					cout<<"		  	 	30-5-23		PRESENT	    PRESENT"<<endl;
					cout<<"		  	 	31-5-23		PRESENT	    PRESENT"<<endl;											  																																		
                break;
                
    	    case 3:
				 cout<<"							MARKSHEET OF STUDENT-1"<<endl<<endl<<endl;
				 cout<<"				SUBJECT NAME						MARKS OBTAINED"<<endl<<endl;
				 cout<<"		  	 BASIC COMPUTER PROGRAMMING					      148"<<endl;
				 cout<<"	              ENVIRONMENT AND SUSTAINABILITY				     	      088"<<endl;
				 cout<<"	         FUNDAMENTALS OF ELECTRICAL ELECTRONICS				              136"<<endl;
				 cout<<"		         	MATHEMATICS					 	      095"<<endl;
				 cout<<"			          ENGLISH					              146"<<endl;
				 cout<<"		 	   FUNDAMENTALS OF COMPUTER					      049"<<endl<<endl<<endl<<endl;
	
 					   				   //STUDENT-2
 									   			  					  			 	     		 			   
                 cout<<"							MARKSHEET OF STUDENT-2"<<endl<<endl<<endl;
 				 cout<<"				SUBJECT NAME						MARKS OBTAINED"<<endl<<endl;
				 cout<<"		  	 BASIC COMPUTER PROGRAMMING					      136"<<endl;
 				 cout<<"	              ENVIRONMENT AND SUSTAINABILITY				     	      075"<<endl;
				 cout<<"	         FUNDAMENTALS OF ELECTRICAL ELECTRONICS				              121"<<endl;
				 cout<<"		         	MATHEMATICS					 	      087"<<endl;
				 cout<<"			          ENGLISH					              129"<<endl;
				 cout<<"		 	   FUNDAMENTALS OF COMPUTER					      042"<<endl<<endl<<endl<<endl;
	
 					   				   //STUDENT-3
 									   			  					  			 	     		 			   
                 cout<<"							MARKSHEET OF STUDENT-3"<<endl<<endl<<endl;
 				 cout<<"				SUBJECT NAME						MARKS OBTAINED"<<endl<<endl;
				 cout<<"		  	 BASIC COMPUTER PROGRAMMING					      112"<<endl;
				 cout<<"	              ENVIRONMENT AND SUSTAINABILITY				     	      066"<<endl;
				 cout<<"	         FUNDAMENTALS OF ELECTRICAL ELECTRONICS				              131"<<endl;
				 cout<<"		         	MATHEMATICS					 	      068"<<endl;
				 cout<<"			          ENGLISH					              143"<<endl;
				 cout<<"		 	   FUNDAMENTALS OF COMPUTER					      038"<<endl<<endl<<endl<<endl;
	
 					   				   //STUDENT-4
 									   			  					  			 	     		 			   
	             cout<<"							MARKSHEET OF STUDENT-4"<<endl<<endl<<endl;
 				 cout<<"				SUBJECT NAME						MARKS OBTAINED"<<endl<<endl;
	    	     cout<<"		  	 BASIC COMPUTER PROGRAMMING					      130"<<endl;
				 cout<<"	              ENVIRONMENT AND SUSTAINABILITY				     	      072"<<endl;
			 	 cout<<"	         FUNDAMENTALS OF ELECTRICAL ELECTRONICS				              141"<<endl;
				 cout<<"		         	MATHEMATICS					 	      084"<<endl;
				 cout<<"			          ENGLISH					              122"<<endl;
				 cout<<"		 	   FUNDAMENTALS OF COMPUTER					      047"<<endl<<endl<<endl<<endl;
	
 					   				   //STUDENT-5
	
         	     cout<<"							MARKSHEET OF STUDENT-5"<<endl<<endl<<endl;
 				 cout<<"				SUBJECT NAME						MARKS OBTAINED"<<endl<<endl;
				 cout<<"		  	 BASIC COMPUTER PROGRAMMING					      142"<<endl;
				 cout<<"	              ENVIRONMENT AND SUSTAINABILITY				     	      077"<<endl;
				 cout<<"	         FUNDAMENTALS OF ELECTRICAL ELECTRONICS				              121"<<endl;
				 cout<<"		         	MATHEMATICS					 	      093"<<endl;
				 cout<<"			          ENGLISH					              118"<<endl;
				 cout<<"		 	   FUNDAMENTALS OF COMPUTER					      039"<<endl<<endl<<endl<<endl;
                break;
	
         case 4:
 		 	  int marks[NUM_STUDENTS][NUM_SUBJECTS];		  
    		  for (int i=0;i<NUM_STUDENTS;i++) 
			  	    {
        	   	   	    cout<<"ENTER MARKS OF THE STUDENT-"<<i+1<<":\n";
	   				        for (int j=0;j<NUM_SUBJECTS;j++) 
				  	        	{
      		  			 	        cout<<"SUBJECT"<<j+1<<":";
            						cin>>marks[i][j];
							    }
						            cout<<endl;
	                }
		 				cout<<"MARKS OF THE STUDENT:\n";
						    for (int i=0;i<NUM_STUDENTS;i++) 
								{
        						 	cout<<"STUDENT"<<i+1<<":\n";
        							for (int j=0;j<NUM_SUBJECTS;j++) 
										{
            							 	cout<<"SUBJECT-"<<j+1<<":"<<marks[i][j]<<endl;
 									    }
        								 	cout<<endl;
								}
				   				 			break;
         case 5:
         	  	cout<<"SYSTEM EXIT SUCCESSFUL.... PRESS ANY KEY...."<<endl;
                cout<<"THIS SOFTWARE IS DEVELOPED BY:-"<<endl;
				cout<<"KUSH SHAH[LEADER]"<<endl<<"PARTH TRIVEDI"<<endl<<"JITARTH BHATT"<<endl<<"KAVYA DESAI"<<endl;
                return 0;
                
            default:
                cout<<"INVALID CHOICE!!"<<endl;
                break;
        }
    }
}