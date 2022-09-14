#include<bits/stdc++.h>
using namespace std; 
//my method has termionation problem ............problem solved by = repacinguse of -
//- vaiable ros by direct recursive calll.
// void replacePi(string s1){
//     if(s1.length()==0){
//         return;
//     } 
//     // string ros;
//     if(s1[0]=='p' && s1[1]=='i'){
//         cout<<"3.14 ";
//         // ros = s1.substr(2);        
//         replacePi(s1.substr(2));

//     }
//     else{
//         cout<< s1[0];
//         // ros = s1.substr(1);
//         replacePi(s1.substr(1));
//     }
      
//     // string ros = s1.substr(1);
//     // replacePi(ros);
// }


void replacePi(string s1){
    if(s1.length()==0){
        return;
    }
    if(s1[0]=='p' && s1[1]=='i'){
        cout<<"3.14";
        replacePi(s1.substr(2));
    }
    else{
        cout<<s1[0];
        replacePi(s1.substr(1));
    }
}
int main(){
    string s1 = "pipipipipipipipippippppppppppppppppppiiiiiiiiiipppppppipipipipi";
    replacePi(s1);
}