#include <iostream>

using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int before_bronze, after_bronze;
    cin >> before_bronze >> after_bronze;
    int before_silver, after_silver;
    cin >> before_silver >> after_silver;
    int before_gold, after_gold;
    cin >> before_gold >> after_gold;
    int before_platinum, after_platinum;
    cin >> before_platinum >> after_platinum;

    int gold_to_platinum = after_platinum - before_platinum;
    int silver_to_gold = (gold_to_platinum + after_gold) - before_gold;
    int bronze_to_silver = (silver_to_gold + after_silver) - before_silver;

    cout << bronze_to_silver << endl;
    cout << silver_to_gold << endl;
    cout << gold_to_platinum << endl;

    return 0;
}
