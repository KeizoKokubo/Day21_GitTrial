#include <iostream>
#include <string>

using namespace std;

int main() {
    string heroName;
    int slimeHP = 10;
    int heroMode = 0; // 勇者のモード(0:通常, 1:攻撃, 2:防御)
    // とりあえず勇者は通常攻撃で20ダメージ、スライムは通常攻撃で5ダメージ
    int heroSpeed = 20; // 勇者の速度
    int slimeSpeed = 2; // スライムの速度

    cout << "=== Git Quest ===" << endl;
    cout << "勇者よ、名前を入力してください: ";
    cin >> heroName;

    cout << "\n" << heroName << " が現れた！" << endl;
    cout << "野生のスライムが現れた！ (HP: " << slimeHP << ", 速度: " << slimeSpeed << ")" << endl;

    cout << "\n" << heroName << " の攻撃！" << endl;
    cout << "スライムに 20 のダメージ！" << endl;
    
    slimeHP -= 20;

    if (slimeHP <= 0) {
        cout << "スライムを倒した！" << endl;
        cout << heroName << " は 経験値を 6 獲得した！" << endl;
    }

    return 0;
}
