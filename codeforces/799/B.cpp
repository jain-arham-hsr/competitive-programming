#include <bits/stdc++.h>
using namespace std;

struct tshirt {
    int price;
    int frontColor;
    int backColor;
    bool inStock = true;
};

bool compareByPrice(tshirt a, tshirt b) { return a.price < b.price; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<tshirt> tshirts(n);

    for (auto &x : tshirts)
        cin >> x.price;
    for (auto &x : tshirts)
        cin >> x.frontColor;
    for (auto &x : tshirts)
        cin >> x.backColor;

    vector<vector<int>> colors(4);
    vector<int> lastUnsold(4, 0);

    sort(tshirts.begin(), tshirts.end(), compareByPrice);

    for (int i = 0; i < n; i++) {
        tshirt currTshirt = tshirts[i];
        colors[currTshirt.frontColor].push_back(i);
        if (currTshirt.frontColor != currTshirt.backColor)
            colors[currTshirt.backColor].push_back(i);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int favColor;
        cin >> favColor;

        while (lastUnsold[favColor] < colors[favColor].size() &&
               !tshirts[colors[favColor][lastUnsold[favColor]]].inStock) {
            lastUnsold[favColor]++;
        }
        if (lastUnsold[favColor] >= colors[favColor].size()) {
            cout << -1 << " ";
            continue;
        }
        cout << tshirts[colors[favColor][lastUnsold[favColor]]].price << " ";
        tshirts[colors[favColor][lastUnsold[favColor]]].inStock = false;
    }

    return 0;
}
