#include <iostream> 
#include <string>
using namespace std ;
int main () 
{
    string user ;
    cout << "Are you male or female ? " << endl ;
    getline(cin,user) ; 
     
    string haircut ;
    string food ;
    string watching ;  

    if (user == "male") {
        cout << "Do you want Super hero or Super villain ? " << endl ;
            getline(cin , haircut) ;  
            if (haircut == "super hero") 
            { 
                    cout << "Do you want steak or sushi? " << endl ; 
                    getline(cin , food) ; 
                }
                    if (food == "steak")
                    { 
                        cout << "* You should get a flat top ." << endl ; 
                    }
                    else if (food =="sushi")
                    {
                        cout << "* You should get a pompadour" << endl ; 
                    }
            else if (haircut == "super villain")
            {
                cout << "* You should get a mohawk " << endl ;
            }
        }

    if (user == "female") {
        cout << "Do you want Super hero or Super villain ? " << endl ;
        getline(cin , haircut) ; 
            if (haircut == "super hero"){
                cout << "Do you want anime or sitcom ? " << endl ;
                getline(cin , watching) ;
            }

                if (watching == "anime") {
                        cout << "* You should go with bangs" << endl ; 
                    }
                else if (watching == "sitcom")  {
                        cout << "* You should get bobs" << endl ;
                }
            
            else if ("super villain"){
                cout << "* You should get a mohawk " << endl ;
    }
}
}