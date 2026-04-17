#include <iostream>
using namespace std;

void inputSongs(int songs[], int n) {
    cout << "Enter the song IDs:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }
}

void reverse(int songs[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = songs[start];
        songs[start] = songs[end];
        songs[end] = temp;
        start++;
        end--;
    }
}

void displayReversedSongs(int songs[], int n) {
    cout << "The reversed playlist is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << songs[i] << " ";
    }
    cout << endl;
}

int main() {
cout <<"How many songs is there in the playlist?" << endl;
int n;
cin >> n;
int *songs = new int[n];  

inputSongs(songs, n);

reverse(songs, n);

displayReversedSongs(songs, n);

delete[] songs;
return 0;

}