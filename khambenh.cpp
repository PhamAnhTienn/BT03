#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Nhập số lượng bệnh nhân
    int N;
    cin >> N;

    // Khai báo và nhập thời gian khám cho từng bệnh nhân
    vector<int> thoiGianKham(N);
    for (int i = 0; i < N; ++i) {
        cin >> thoiGianKham[i];
    }

    // Sắp xếp danh sách thời gian khám tăng dần
    sort(thoiGianKham.begin(), thoiGianKham.end());

    // Tính tổng thời gian chờ đợi
    int tongThoiGianChoDoi = 0;
    for (int i = 1; i < N; ++i) {
        thoiGianKham[i] += thoiGianKham[i - 1];
        tongThoiGianChoDoi += thoiGianKham[i - 1];
    }

    // In ra tổng thời gian chờ đợi
    cout << tongThoiGianChoDoi << endl;

    return 0;
}
