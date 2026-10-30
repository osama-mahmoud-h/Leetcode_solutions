import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;

class FooBar {
    private final int n;
    private final CompletableFuture<Void>[] allowBar;
    private final CompletableFuture<Void>[] allowFoo;

    @SuppressWarnings("unchecked")
    public FooBar(int n) {
        this.n = n;
        this.allowBar = new CompletableFuture[n];
        this.allowFoo = new CompletableFuture[n];
        for (int i = 0; i < n; i++) {
            allowBar[i] = new CompletableFuture<>();
            allowFoo[i] = new CompletableFuture<>();
        }
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                try {
                    allowFoo[i - 1].get();
                } catch (ExecutionException e) {
                    throw new RuntimeException(e);
                }
            }
            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            allowBar[i].complete(null);
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            try {
                allowBar[i].get();
            } catch (ExecutionException e) {
                throw new RuntimeException(e);
            }
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            allowFoo[i].complete(null);
        }
    }
}
