#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
string removeCharacters(string S ,char C)
{

	S.erase(remove(
				S.begin(), S.end(),C ),
			S.end());

	return S;
}


int main()
{
    int i=0;
cout<<"dSFSDFdsf"<<endl;

  string S;
  getline (cin, S);
  char C;
  while(S[i]!=NULL)
{
    S[i]=tolower(S[i]);
    i++;
}

for(i=0;i<S.size();i++)
{
    if(S[i]==65 || S[i]==69 ||S[i]==73 || S[i]==79 ||S[i]==85)
    {
        removeCharacters(S,S[i]);
    }
}
cout<<S;


return 0;
}
