import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

class FooBar {
    private final int n;
    private final FutureTask<Void>[] allowBar;
    private final FutureTask<Void>[] allowFoo;

    @SuppressWarnings("unchecked")
    public FooBar(int n) {
        this.n = n;
        this.allowBar = new FutureTask[n];
        this.allowFoo = new FutureTask[n];
        for (int i = 0; i < n; i++) {
            allowBar[i] = new FutureTask<>(() -> {}, null);
            allowFoo[i] = new FutureTask<>(() -> {}, null);
        }
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                try {
                    allowFoo[i - 1].get(); // Block until previous bar completes its FutureTask
                } catch (ExecutionException e) {
                    throw new RuntimeException(e);
                }
            }
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            allowBar[i].run();             // Transition allowBar[i] to completed state
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            try {
                allowBar[i].get();         // Block until current foo completes its FutureTask
            } catch (ExecutionException e) {
                throw new RuntimeException(e);
            }
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            allowFoo[i].run();             // Transition allowFoo[i] to completed state
        }
    }
}
