 //Write a program that reverses each word in a given text string that has two words 
 //separated by a space character. For example, if the input is "hello world" the program should output "olleh dlrow"
 #include <iostream>
 #include <string>
 using namespace std;

 int main() {
    string s1;
    getline(cin, s1);
    string s2="";
    string s3="";
    int i=0;

    cout << s1.find(" ");

    while (i<s1.length()) {
       // s2=s1[i]+s2;
    if (s1.find(" ")) {
       s2=s1[i]+s2;
       
     } i++;
    }  cout << s2;
     }
   