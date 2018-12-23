#include <iostream>

using namespace std;

int main()
{
    int data [] = { 14, 33 ,27, 10 ,35, 19 ,48 ,44};
        int tmp;

        for( int i = 0; i < 5; i++)
            cout << data[i] << " ";

        cout << endl;

        for (int i = 0; i < 5 -1; i++)

            for (int j = i+1; j < 5; j++)

                if (data[i] > data[j])
                {
                    tmp = data[i];
                    data[i] = data[j];
                    cout << data[i] << " "<<endl;
                    data[j] = tmp;
                }

        for( int i = 0; i < 5; i++)
            cout << data[i] << " ";

        cout << endl;
        system ("pause");
        return 0;

    cout << "Hello World!" << endl;
    return 0;
}

