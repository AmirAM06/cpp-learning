#include <iostream>
using namespace std;


char in[10^5+1];

long long i = 0;
long long len = 0;
//counts the amount of ABs and BAs and saves the place of them in the array
long long abpair = 0;
long long bapair = 0;
long long abplc[10^5];
long long baplc[10^5];

long long aboverlap = 0;
long long baoverlap = 0;



int main(){

    cin >> in;

    //counts the length of the array
    
    while (in[i] != 0){
        len = i;
        i++;
    }
    len += 1;

    //cout << "len: " << len << '\n';

    
    for (int i = 0; i < len; i++){
        if (in[i] == 'A' && in[i+1] == 'B'){
            abplc[abpair] = i;
            abpair += 1;
        }
        if (in[i] == 'B' && in[i+1] == 'A'){
            baplc[bapair] = i;
            bapair += 1;
        }
    }
    //cout << "ab pair: " << abpair << '\n' << "ba pair: " << bapair << '\n';

    //checks if ABs and BAs are overlapping, and how many of them don't overlap
        //do ABs overlap with BAs?
    for (int i = 0; i < abpair; i++){
        if(in[abplc[i] + 2] == 'A' && in[abplc[i] + 3] != 'B'){
            aboverlap += 1;
        }
    }
    //cout << "aboverlap: " << aboverlap << '\n';
        //removes the illigal pairs of BAs
    bapair -= aboverlap;

        //do BAs overlap with BAs?
    for (int i = 0; i < bapair; i++){
        if(in[baplc[i] + 2] == 'B' && in[baplc[i] + 3] != 'A'){
            baoverlap += 1;
        }
    }
    //cout << "baoverlap: " << baoverlap << '\n';

        //removes the illigal pairs of ABs
    abpair -= baoverlap;

        //do thay exist any more?
    //cout << "ab pair: " << abpair << '\n' << "ba pair: " << bapair << '\n';
    
    //resault
    if (abpair > 0 && bapair > 0){
        cout << "YES";
    }else{
        cout << "NO";
    }



    return 0;
}