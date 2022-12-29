#include <iostream>
using namespace std;

int main(){
    int numberRzero, cont = 0;
    cin >> numberRzero;

    while (numberRzero-- > 0){
        int all[26] = {0};

        int n, m;
        cin >> n >> m;

        char word[n];
        cin >> word;

        int qtdN = m;

    anchor:
        if (cont == 1)
            qtdN = 1;

        while (qtdN-- > 0){
            int numbero;

            if (cont == 1){
                numbero = n;
            }else{
                cin >> numbero;
            }

            for (int i = 0; i < numbero; i++){
                switch (word[i]){
                case 'a':
                    all[0]++;
                    break;
                case 'b':
                    all[1]++;
                    break;
                case 'c':
                    all[2]++;
                    break;
                case 'd':
                    all[3]++;
                    break;
                case 'e':
                    all[4]++;
                    break;
                case 'f':
                    all[5]++;
                    break;
                case 'g':
                    all[6]++;
                    break;
                case 'h':
                    all[7]++;
                    break;
                case 'i':
                    all[8]++;
                    break;
                case 'j':
                    all[9]++;
                    break;
                case 'k':
                    all[10]++;
                    break;
                case 'l':
                    all[11]++;
                    break;
                case 'm':
                    all[12]++;
                    break;
                case 'n':
                    all[13]++;
                    break;
                case 'o':
                    all[14]++;
                    break;
                case 'p':
                    all[15]++;
                    break;
                case 'q':
                    all[16]++;
                    break;
                case 'r':
                    all[17]++;
                    break;
                case 's':
                    all[18]++;
                    break;
                case 't':
                    all[19]++;
                    break;
                case 'u':
                    all[20]++;
                    break;
                case 'v':
                    all[21]++;
                    break;
                case 'w':
                    all[22]++;
                    break;
                case 'x':
                    all[23]++;
                    break;
                case 'y':
                    all[24]++;
                    break;
                case 'z':
                    all[25]++;
                    break;
                }
            }
        }

        if (cont == 0){
            cont++;
            goto anchor;
        }

        for (int i = 0; i < 26; i++)
            cout << all[i] << "\t";

        cont = 0;
        cout << endl;
    }
    return 0;
}