//besmellah
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 55;
int a[maxn], b[maxn];

void mergesort (int l, int r) {
    if (r == l + 1) return;
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid, r);
    int ptr1 = l, ptr2 = mid;
    for (int i = l; i < r; i++) {
        if (ptr2 == r || (ptr1 != mid && a[ptr1] < a[ptr2])) {
            b[i] = a[ptr1++];
        }
        else b[i] = a[ptr2++];
    }
    copy(b + l, b + r, a + l);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    mergesort(0, n);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}