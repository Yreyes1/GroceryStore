// Author:Yaneth Reyes Hinojosa
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> groceryList; // vector of strings
        int numItems = 0;
        char input;
        string item;

        do 
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>> input;

                if(input == 'a'|| input == 'A')
                {
                        cout<< "What is the item?\n";
                        cin >> item;
                        groceryList.push_back(item);
                }


                if(input != 'a' && input != 'A' && input != 'q' && input != 'Q')
                {
                        cout<<"That is not a valid input";
                }        

        }while (input != 'q' && input != 'Q');

        if(groceryList.empty() == false)
        {
             cout<<"==ITEMS TO BUY==\n";
        }

        if(groceryList.empty() == true)
        {
            cout<<"No items to buy!\n";
        }
        for(int index = 0; index < groceryList.size(); index ++)
        {
              cout<< index + 1;
              cout<<" " <<groceryList[index]<<endl;
        }  



        return 0;
}
