#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void instructionnumber(){
	cout<<"***INSTRUCTIONS***\n"<<"1.Guess the number based on gaven range.\n"<<"2.You are allowed to make one guess at a time.\n"<<"3.Once you have used up all your chances, you lose the game."<<endl;
}

void instructionalphabet(){
	cout<<"***INSTRUCTIONS***\n"<<"1.Guess the letter based on gaven range.\n"<<"2.You are allowed to make one guess at a time.\n"<<"3.Once you have used up all your chances, you lose the game."<<endl;
}

char rand_vowel(){ 
    return "aeiou"[rand() % 5]; 
} 

char rand_consonant(){
	return "bcdfghjklmnpqrstvwxyz"[rand()% 20];
}

int main()
{
	beginning:
	int a,highscore,highscorealphabet;
	cout<<"***\nMENU\n"<<"---\n"<<"1.Guess the number\n"<<"2.Guess the alphabet\n"<<"3.Hight Score\n"<<"4.Credit\n"<<"5.Exit\n"<<"Enter your choice:\n"<<"===>";
	cin>>a;

    if (a==1){
	int b,guesses,chances=0;
	cout<<"Choose your difficulty level\n"<<"1.Easy\n"<<"2.Medium\n"<<"3.Hard\n"<<"4.Return to main menu\n"<<"===>";
	cin>>b;
	
	if (b==1){
		int choicesleft=5;
		instructionnumber();
		cout<<"Guess the number which is between 1 to 15. You have 5 chances to try.\n"<<"===>";
		srand(time(0));
		int randomNumber;
		randomNumber=rand()%15+1;
		for (int i=1;i<=5;i++){
			cin>>guesses;
			chances++;
			if(guesses==randomNumber){
				cout<<"You won. Congratulations! You got it in"<<chances<<"tries."<<endl;
				
				if (chances < highscore || highscore==0){
					highscore=chances;
				}
				break;
			}
			else{
				if (guesses<randomNumber){
					cout<<"Your guess is too low.\n";
				}
				else{
					cout<<"Your guess is to high.\n";
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost the game. The number was:"<<randomNumber<<endl;
				}
			}
       }
	}
		
	
		
	
	else if (b==2){
		int choicesleft=4;
		instructionnumber();
		cout<<"Guess the number between 1 to 20. You have 4 chances to try.\n"<<"===>";
		srand(time(0));
		int randomNumber;
		randomNumber=rand()%20+1;
		for (int i=1;i<=4;i++){
			cin>>guesses;
			chances++;
			if (guesses==randomNumber){
				cout<<"You won. Congratulations! You got it in "<<chances<< "tries."<<endl;
				
				if (chances<highscore || highscore==0){
					highscore=chances;
				}
				break;
			}
			else{
				if (guesses<randomNumber){
					cout<<"Your guess is too low."<<endl;
				}
				else{
					cout<<"Your guess is too high."<<endl;
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost. The number was:"<<randomNumber<<"\n";
				}
			}
		}
	}
	
	
	
	else if (b==3){
		int choicesleft=3;
		instructionnumber();
		cout<<"Guess the number between 1 to 100.\n You have 3 chances to try."<<"===>";
		srand(time(0));
		int randomNumber;
		randomNumber=rand()%40+1;
		for (int i=1;i<=3;i++){
			cin>>guesses;
			chances++;
			if (guesses==randomNumber){
				cout<<"You won. Congratulations! You got it in "<<chances<< " tries"<<endl;
				
				if(chances<highscore || highscore==0){
					highscore=chances;
				}
				break;
			}
			else{
				if (guesses<randomNumber){
					cout<<"Your guess is too low.\n";
				}
				else{
					cout<<"Your guess is too high.\n";
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost. The number was:"<<randomNumber<<"\n";
				}
			}
		}
	}
	
	
	else if (b==4){
		goto beginning;
	}
	else{
		cout<<"You pressed the wrong key. Try again.";
		goto beginning;
	}
}
	
	
	
else if (a==2){
	char randomvowel,randomalphabet,randomconsonant, guesses2;
	int c,chances2=0;
	cout<<"Choose your difficulty level\n1.Easy\n2.Medium\n3.Hard\n4.Return to main menu.\n ===>";
	cin>>c;
	
	if (c==1){
		instructionalphabet();
		cout<<"Guess the vowel letter. You have 2 chances to try."<<endl;
		int choicesleft=2;
		char randomvowel = rand_vowel(); 
		for (int i=1;i<=2;i++){
			cin>>guesses2;
			chances2++;
			if (guesses2==randomvowel){
				cout<<"You won. Congratulations! You got it in "<<chances2<< " tries."<<endl;
				if (chances2 < highscorealphabet || highscorealphabet==0){
					highscorealphabet=chances2;
				}
				break;
			}
			else{
				if (guesses2<randomvowel){
					cout<<"Your guess is too low."<<endl;
				}
				else{
					cout<<"Your guess is too high."<<endl;
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost. The letter was:"<<randomvowel<<endl;
				}
			}
			
		}
	}
	
	
	
	else if (c==2){
		instructionalphabet();
		cout<<"Guess the consonant letter. You have 5 chances to try."<<endl;
		int choicesleft=4;
		char randomconsonant= rand_consonant();
		for (int i=1;i<=4;i++){
			cin>>guesses2;
			chances2++;
			if (guesses2==randomconsonant){
				cout<<"You won! Congratulations! You got it in "<<chances2<< "tries"<<endl;
			
				if (chances2 < highscorealphabet || highscorealphabet==0){
					highscorealphabet=chances2;
				}
			break;
			}
			else{
				if(guesses2<randomconsonant){
					cout<<"Your guess is too low.\n";
				}
				else{
					cout<<"Your guess is too high.\n";
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost. The letter was:"<<randomconsonant<<endl;
			}
		}
	}
}
	
	
	
	else if (c==3){
		instructionalphabet();
		cout<<"Guess the alphabet between a to z. You have 5 chances to try."<<endl;
		int choicesleft=5;
		srand(time(0));
		randomalphabet='a'+rand()%25;
		for (int i=1;i<=5;i++){
			cin>>guesses2;
			chances2++;
			if (guesses2==randomalphabet){
				cout<<"You won! Congratulations! You got it in "<<chances2<< "tries"<<endl;
			
				if (chances2 < highscorealphabet || highscorealphabet==0){
					highscorealphabet=chances2;
				}
			break;
			}
			else{
				if(guesses2<randomalphabet){
					cout<<"Your guess is too low.\n";
				}
				else{
					cout<<"Your guess is too high.\n";
				}
				choicesleft--;
				cout<<choicesleft<<" choices left.\n"<<"===>";
				if (choicesleft==0){
					cout<<"You lost. The letter was:"<<randomalphabet<<endl;
			}
		}
	}
}
	
	else if (c==4){
		goto beginning;
	}
	
	else{
		cout<<"You pressed the wrong key. Try again.";
		goto beginning;
	}
}



else if (a==3){
	if (highscore==0 && highscorealphabet==0){
		cout<<"Your high score in guessing number as an attempt is: Haven't played yet\n Your high score in guessing alphabet as an attempt is: Haven't played yet\n";
	}
	else{
		cout<<"Your high score in guessing number as an attempt is:"<<highscore<<"\n"<<"Your high score in guessing alphabet as an attempt is:"<<highscorealphabet<<endl;
	}
}
	
	
	
else if (a==4){
	cout<<"Student names and numbers:\n Sevgi Sude UYSAL-220209804\n Rukiye KILIC-210200055\n Rumeysa ENSARI-210209040\n Melek CEYLAN-200209033\n Ahmet Can CAGLAR-200209055\n Helin CELIK-210209026\nCourse of study: Object Oriented Programming 2"<<endl;
	}



if (a==5){
	cout<<"Goodbye";
	return 0;
}
goto beginning;
}
