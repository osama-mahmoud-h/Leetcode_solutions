import java.util.concurrent.BrokenBarrierException;
import java.util.concurrent.CyclicBarrier;

class FooBar {
    private final int n;
    private final CyclicBarrier barrier = new CyclicBarrier(2);
    private volatile boolean fooTurn = true;

    public FooBar(int n) {
        this.n = n;
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            while (!fooTurn) {
                Thread.yield();
            }
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            fooTurn = false;
            try {
                barrier.await();
            } catch (BrokenBarrierException e) {
                Thread.currentThread().interrupt();
            }
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            try {
                barrier.await();
            } catch (BrokenBarrierException e) {
                Thread.currentThread().interrupt();
            }
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            fooTurn = true;
        }
    }
}
