#include <iostream>
 
using namespace std;
 
int main()
{
    int a = 5, b = 6, c = 7, *pt1, *pt2, *pt3, *vaux, v[10] =
    {0,10,20,30,40,50,60,70,80,90};
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    cout << &a << " " << pt1 << " " << *pt1 << "\n";
    vaux = &v[1];
    cout << *vaux << endl;
    for(int i=1; i<10;i = i +2){
        *vaux = *vaux + 10;
        cout << i << " " << *vaux << endl;
        vaux = vaux + 2;
    }

    system("PAUSE");
    return 0;
}
