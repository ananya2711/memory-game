  #include<process.h>
  #include<conio.h>
  #include<stdlib.h>
  #include<string.h>
  #include<stdio.h>
  #include<dos.h>


  /*This game allows the user to enter some words which need to
    be remembered by the user to be typed again along with some words given
    by the computer*/

  struct memory
  {
    char word[20];
  };

  struct final
  {
    char wrd[20];
  }fi[20];

  struct check
  {
    char rep[20];
  }ch[20];

  int main()
  {
    void time();
    void entering(int n);
    void check(int n);
    int n;
    time();
       textcolor(WHITE);
    cout<<"\ Do you have a sharp memory? Here I pose you a challenge!!";
    cout<<"\n Can you remember,say 10 elements? N0?"<<endl<<"enter how many you can(even pls)";
    cin>>n;
    cout<<"\n Hmmm."<<endl<<" Lets see if you can keep up to your word!"<<endl<<" The rule of this game goes like this:";
    cout<<endl<<"You and I enter words alternately and then you enter them together"<<endl<<"(mind the spellings )";
	entering(n);
	check(n);
    getch();
  }

  void time()
  { int i;
    clrscr();
       gotoxy(30,10);
       textcolor(YELLOW);
       textbackground(BLACK);
    cout<<" Welcome to my awesome game";
       sleep(2);
       clrscr();
    cout<<endl<<"There you go...."<<endl;
       textcolor(WHITE);
  }

  void entering(int n)
{  randomize();
    int i;
    int randnos[10];
	 for(i=0;i<10;i++)
	randnos[i]=random(10);

     memory mem[10]={{"weird"},
		     {"accommodate"},
		     {"handkerchief"},
		     {"samosa"},
		     {"conscience"},
		     {"goosebumps"},
		     {"embarrass"},
		     {"millennium"},
		     {"amazing"},
		     {"maintenance"},
		     };

    textcolor(BLUE);

  cout<<"\n enter elements"<<endl;
   for(i=0;i<n;i+=2)
    {
       gets(fi[i].wrd);
       strcpy(fi[i+1].wrd,mem[randnos[i]].word);
       cout<<" my word : ";
       cout<<mem[randnos[i]].word<<endl;
    }

    textcolor(GREEN);

    cout<<endl<<endl;
      cout<<"remember these,you have exactly 1 minute";
       for(i=0;i<n;i++)
	  cout<<endl<<fi[i].wrd;
	  sleep(5);


}

 void check(int n)
{ int ctr=0,score=0,i,ans;
    clrscr();
    cout<<endl<<"There you go....enter now"<<endl;
   for(i=0;i<n;i++)
    { gets(ch[i].rep);
     if(strcmpi(ch[i].rep,fi[i].wrd)==0)
	 { ctr++;
	 cout<<"\t right"<<endl;
	 }
     else
	cout<<"\t oops"<<endl;
    }
   textcolor(YELLOW);

   cout<<endl<<endl<<"correct:"<<ctr
       <<endl<<"score:"<<ctr*100/n;
}



