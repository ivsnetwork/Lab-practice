#include <simplecpp>

// Your code starts from here -- DO NOT EDIT ANYTHING ABOVE
// Integer → Roman
string toRoman(int num) {
    
}

// Roman → Integer
int fromRoman(string s) {
    
}
// Your code ends here -- DO NOT EDIT ANYTHING BELOW

main_program {
    int choice;
    cin >> choice;

    if (choice == 1) {
        int n;
        cin >> n;
        cout << toRoman(n) << endl;
    } 
    else if (choice == 2) {
        string s;
        cin >> s;
        cout << fromRoman(s) << endl;
    }

    return 0;
}