class kQueues {
  private:
    int n, k;
    int freeSpot;
    vector<int> arr, front, rear, next;

  public:
    kQueues(int n, int k) {
        this->n = n;
        this->k = k;

        arr.resize(n);
        front.resize(k, -1);
        rear.resize(k, -1);
        next.resize(n);

        // Initialize free list
        for (int i = 0; i < n - 1; i++)
            next[i] = i + 1;
        next[n - 1] = -1;

        freeSpot = 0;
    }

    void enqueue(int x, int i) {
        if (isFull()) return;

        int index = freeSpot;
        freeSpot = next[index];

        if (front[i] == -1)
            front[i] = index;
        else
            next[rear[i]] = index;

        next[index] = -1;
        rear[i] = index;
        arr[index] = x;
    }

    int dequeue(int i) {
        if (isEmpty(i)) return -1;

        int index = front[i];
        front[i] = next[index];

        next[index] = freeSpot;
        freeSpot = index;

        if (front[i] == -1)
            rear[i] = -1;

        return arr[index];
    }

    bool isEmpty(int i) {
        return front[i] == -1;
    }

    bool isFull() {
        return freeSpot == -1;
    }
};
