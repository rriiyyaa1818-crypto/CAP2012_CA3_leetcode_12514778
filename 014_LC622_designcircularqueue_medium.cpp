class MyCircularQueue {
public:
    vector<int> arr;
    int front, rear, size;

    MyCircularQueue(int k) {
        arr.resize(k);
        front = -1;
        rear = -1;
        size = k;
    }

    bool enQueue(int value) {
        if (isFull())
            return false;

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % size;
        arr[rear] = value;

        return true;
    }

    bool deQueue() {
        if (isEmpty())
            return false;

        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return true;
    }

    int Front() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int Rear() {
        if (isEmpty())
            return -1;

        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};
