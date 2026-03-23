#include <iostream>
#include <string>

using namespace std;

int main() {
    string heroName;
    int slimeHP = 10;

    cout << "=== Git Quest ===" << endl;
    cout << "勇者よ、名前を入力せよ: ";
    cin >> heroName;

    cout << "\n" << heroName << " が現れた！" << endl;
    cout << "野生のスライムが現れた！ (HP: " << slimeHP << ")" << endl;

    cout << "\n" << heroName << " の攻撃！" << endl;
    cout << "スライムに 10 のダメージ！" << endl;
    
    slimeHP -= 10;

    if (slimeHP <= 0) {
        cout << "スライムを倒した！" << endl;
        cout << heroName << " は 経験値を 5 獲得した！" << endl;
    }

    return 0;
}
