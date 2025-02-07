#include <iostream>
using namespace std;
int main() {
    int G, S, C;
    cin >> G >> S >> C;

    int buyingPower = G * 3 + S * 2 + C;

    string bestVictoryCard;
    if (buyingPower >= 8) {
        bestVictoryCard = "Province";
    } else if (buyingPower >= 5) {
        bestVictoryCard = "Duchy";
    } else if (buyingPower >= 2) {
        bestVictoryCard = "Estate";
    }

    string bestTreasureCard;
    if (buyingPower >= 6) {
        bestTreasureCard = "Gold";
    } else if (buyingPower >= 3) {
        bestTreasureCard = "Silver";
    } else {
        bestTreasureCard = "Copper";
    }

    if (!bestVictoryCard.empty()) {
        cout << bestVictoryCard << " or " << bestTreasureCard <<endl;
    } else {
        cout << bestTreasureCard <<endl;
    }

    return 0;
}
