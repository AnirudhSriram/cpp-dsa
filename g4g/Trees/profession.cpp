    #include<math.h>
    #include<iostream>
    #include<stdio.h>
    #include<vector>
    using namespace std;

    // vector<char> getChildren(vector<char> parents){
    //     vector<char> returnV ;
    //     for(char p : parents){
    //         if(p == 'e'){
    //             returnV.push_back('e');
    //             returnV.push_back('d');
    //         }else{
    //             returnV.push_back('d');
    //             returnV.push_back('e');
    //         }
    //     }

    //     return returnV;
    // }

    char profession(int level, int pos){
        if(level == 1){
            return 'e';
        }else if(level == 2){
            if (pos == 1){
                return 'e';
            }else{
                return 'd';
            }
        }else{
            
        }

    }

    int main(){
        cout << profession(3,4);
    }