import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

class FooBar {
    private final int n;
    private final Lock lock = new ReentrantLock();
    private final Condition fooCond = lock.newCondition();
    private final Condition barCond = lock.newCondition();
    private boolean isFooTurn = true;

    public FooBar(int n) {
        this.n = n;
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            lock.lock();
            try {
                while (!isFooTurn) {
                    fooCond.await();
                }
                // printFoo.run() outputs "foo". Do not change or remove this line.
                printFoo.run();
                isFooTurn = false;
                barCond.signal();
            } finally {
                lock.unlock();
            }
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            lock.lock();
            try {
                while (isFooTurn) {
                    barCond.await();
                }
                // printBar.run() outputs "bar". Do not change or remove this line.
                printBar.run();
                isFooTurn = true;
                fooCond.signal();
            } finally {
                lock.unlock();
            }
        }
    }
}
