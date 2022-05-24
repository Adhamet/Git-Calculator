    #include <iostream>

using namespace std;

int add(int x, int y);
int sub(int x, int y);
int div(int x, int y);

int main() {
    cout << "Enter your query?" << endl;

    int x, y, ans;
    char ch;

    cin >> x >> ch >> y;

    if (ch == '+') {
        ans = add(x, y);
    }
    else if (ch == '-') {
        ans = sub(x, y);
    }
    else if (ch == '%') {
        ans = div(x, y);
    }

    cout << ans << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int div(int x, int y) {
   return x % y;
}
