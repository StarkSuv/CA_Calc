#include<iostream.h>
#include<conio.h>
void datainput();
void best_two();
void finaloutput();
void main()
{
  float ca1,ca2,ca3,sum=0;
  void datainput()
  {
	  cout << "Enter CA1 Marks:";
	  cin >> ca1;
	  cout << "Enter CA1 Marks:";
	  cin >> ca2;
	  cout << "Enter CA3 Marks:";
	  cin >> ca3;
  }
  //Methods is correct and takes all the requirements for CA calculation
  void best_two()
  {
	  if (ca1 >= ca2)
	  {
		  cout << "CA1 is selected";
		  sum = sum + ca1;
		  if (ca3 >= ca2)
		  {
			  cout << "CA3 is selected";
			  sum = sum + ca3;
		  }
		  else
		  {
			  cout << "CA2 is selected";
			  sum = sum + ca2;
		  }

	  }
	  else
	  {
		  cout << "CA2 is selected";
		  sum = sum + ca2;
		  if (ca3 >= ca1)
		  {
			  cout << "CA3 is selected";
			  sum = sum + ca3;
		  }
		  else
		  {
			  cout << "CA1 is selected";
			  sum = sum + ca1;
		  }
	  }
  }
  getch();
}
