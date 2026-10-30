#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";

    int left = 0;
    int right = s.size()-1;

    bool isPalindrome = true;

    while(left < right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }
        if(!isalnum(s[right])){
            right--;
            continue;
        }

        char leftChar = tolower(s[left]);
        char rightChar = tolower(s[right]);

        if(leftChar != rightChar){
            isPalindrome = false;
            break;
        }
        left++;
        right--;

    }

    if(isPalindrome){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
