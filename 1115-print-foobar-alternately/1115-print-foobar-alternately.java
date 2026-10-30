import java.util.concurrent.locks.LockSupport;

class FooBar {
    private final int n;
    private volatile boolean isFooTurn = true;
    private volatile Thread fooThread;
    private volatile Thread barThread;

    public FooBar(int n) {
        this.n = n;
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        fooThread = Thread.currentThread();
        for (int i = 0; i < n; i++) {
            while (!isFooTurn) {
                LockSupport.park();
                if (Thread.interrupted()) {
                    throw new InterruptedException();
                }
            }
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            isFooTurn = false;
            LockSupport.unpark(barThread);
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        barThread = Thread.currentThread();
        for (int i = 0; i < n; i++) {
            while (isFooTurn) {
                LockSupport.park();
                if (Thread.interrupted()) {
                    throw new InterruptedException();
                }
            }
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            isFooTurn = true;
            LockSupport.unpark(fooThread);
        }
    }
}
