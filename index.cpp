// 1.while loop
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << '\n';
        }
        i++;
    }
    return 0;
}
// for loop
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int i = 1;
    for (i= 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << '\n';
        }

    }
    return 0;
}
// 2. for loop
#include<iostream>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    int c = 1;
    for (int i = 1; i <= b; i++) {
        c *= a;
    }
    cout << c << '\n';
    return 0;
}
// while loop 
#include<iostream>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    int c = 1;
    int i = 1;
    while ( i <= b ) {
        c *= a;
        i++;
    }
    cout << c << '\n';
    return 0;
}
// 3 .
#include<iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;


  int i = a;
  while (i >= 1) {
    if (i % b == 0) {
      cout << i << '\n';
    }
    i--;
  }
  return 0;
}
// 4.
#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;


  int i = 2;
  while (i <= n) {
    cout << i << '\n';
    i += 2;
  }
  return 0;
}
// 5.
#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int last_digit = i % 10;



    if (last_digit != 9) {
      continue;
    }
    if (i % 3 == 0) {
      continue;
    }


    cout << i << '\n';
  }
  return 0;
}
// 6. equation
#include<iostream>
using namespace std;

int32_t main() {
  int n; cin >> n;
  int sum = 0;
  for (int i = 1; i <= n * n; i++) {
    sum += i * i + 3 * i - 9;
  }
  cout << sum << '\n';
  return 0;
}


