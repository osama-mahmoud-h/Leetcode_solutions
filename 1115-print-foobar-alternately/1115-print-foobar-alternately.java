import java.util.concurrent.Exchanger;

class FooBar {
    private final int n;
    private final Exchanger<Void> exchanger = new Exchanger<>();

    public FooBar(int n) {
        this.n = n;
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            exchanger.exchange(null); // Rendezvous 1: allow bar to print
            exchanger.exchange(null); // Rendezvous 2: wait for bar to finish
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            exchanger.exchange(null); // Rendezvous 1: wait for foo to print
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            exchanger.exchange(null); // Rendezvous 2: allow next foo
        }
    }
}
