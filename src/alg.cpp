// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int result = 0, first = 0, second = size - 1, fr;
    while (first < second) {
        fr = (first + second) / 2;
        if (arr[fr] == value) {
            first = fr;
            while (arr[first] == value) {
                first--;
            }
            while (arr[cecond] != value) {
                second--;
            }
            for (++first; first <= second; first++) {
                result++;
            }
        }
        if (arr[fr] < value) {
            first = fr + 1;
        }
        if (arr[fr] > value) {
            second = fr - 1;
        }
    }
    if (result == 0) {
        if (arr[first] == value) {
            return 1;
        }
    }
    return result;
}
