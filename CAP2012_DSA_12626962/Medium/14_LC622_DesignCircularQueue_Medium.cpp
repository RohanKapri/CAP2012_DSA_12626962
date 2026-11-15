class MyCircularQueue {
    vector<int> q;
    int f = 0, r = -1, cnt = 0, k;

public:
    MyCircularQueue(int k) : q(k), k(k) {}

    bool enQueue(int x) {
        if (cnt == k) return false;
        r = (r + 1) % k;
        q[r] = x;
        cnt++;
        return true;
    }

    bool deQueue() {
        if (cnt == 0) return false;
        f = (f + 1) % k;
        cnt--;
        return true;
    }

    int Front() {
        return cnt ? q[f] : -1;
    }

    int Rear() {
        return cnt ? q[r] : -1;
    }

    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == k;
    }
};
