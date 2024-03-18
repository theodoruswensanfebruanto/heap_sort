#include <iostream>
#include <vector>

using namespace std;

int main() {
  while (true) {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    cout << "HEAP SORT";
    cout << "\n";
    cout << "\n";

    int n = 0;
    while (n <= 0) {
      cout << "Input your size of array: ";
      cin >> n;
    }
    cout << "\n";

    vector<int> a(n);

    cout << "Good, now please input the elements.";
    cout << "\n";
    for (int i = 0; i < n; i++) {
      cout << "Index " << i << ": ";
      cin >> a[i];
    }
    cout << "\n";

    cout << "Before: ";
    for (int i = 0; i < n; i++) {
      cout << a[i];
      
      if (i < n - 1) {
        cout << ", ";
      } else {
        cout << ".";
        cout << "\n";
      }
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
      int current_index = i;

      while (2 * current_index + 1 < n) {
        int child_index = 2 * current_index + 1;

        if (child_index + 1 < n && a[child_index] < a[child_index + 1]) {
          child_index++;
        }

        if (a[current_index] < a[child_index]) {
          int temp = a[current_index];
          a[current_index] = a[child_index];
          a[child_index] = temp;

          current_index = child_index;
        } else {
          break;
        }
      }
    }

    for (int i = n - 1; i > 0; i--) {
      int temp = a[0];
      a[0] = a[i];
      a[i] = temp;

      int current_index = 0;

      while (2 * current_index + 1 < i) {
        int child_index = 2 * current_index + 1;

        if (child_index + 1 < i && a[child_index] < a[child_index + 1]) {
          child_index++;
        }

        if (a[current_index] < a[child_index]) {
          int temp = a[current_index];
          a[current_index] = a[child_index];
          a[child_index] = temp;

          current_index = child_index;
        } else {
          break;
        }
      }
    }

    cout << "After: ";
    for (int i = 0; i < n; i++) {
      cout << a[i];

      if (i < n - 1) {
        cout << ", ";
      } else {
        cout << ".";
        cout << "\n";
        cout << "\n";
      }
    }

    cout << "Do you want to restart?";
    cout << "\n";
    cout << "1) Yes";
    cout << "\n";
    cout << "2) No";
    cout << "\n";

    int quit_or_no = 0;
    while (quit_or_no != 1 && quit_or_no != 2) {
      cout << "Choose between 1 and 2: ";
      cin >> quit_or_no;
    }

    if (quit_or_no == 2) {
      break;
    }
  }

  return 0;
}