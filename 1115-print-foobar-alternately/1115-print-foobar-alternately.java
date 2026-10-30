import java.util.concurrent.atomic.AtomicBoolean;

class FooBar {
    private final int n;
    private final AtomicBoolean isFooTurn = new AtomicBoolean(true);

    public FooBar(int n) {
        this.n = n;
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            while (!isFooTurn.get()) {
                Thread.yield();
            }
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            isFooTurn.set(false);
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            while (isFooTurn.get()) {
                Thread.yield();
            }
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            isFooTurn.set(true);
        }
    }
}
