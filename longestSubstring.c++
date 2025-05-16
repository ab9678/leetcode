# include <iostream>
using namespace std;

int main(){
    string st ;
    cout << "Enter string: ";
    cin >> st;

    int largest = 0,count=0;
    string largestString="",currentString="";
    int len = st.length();

    for (int i = 0 ; i<len ; i++){
        currentString = "";
        count=0;
        for (int j=i; j<len ; j++){
            if (st[i] == st[j]){
                count++;
                currentString+=st[j];
            }
            else{
                break;
            }
        }

        if (count > largest){
            largest = count;
            largestString = currentString;
        }
    }

    cout << largestString<<" "<<largest;
}