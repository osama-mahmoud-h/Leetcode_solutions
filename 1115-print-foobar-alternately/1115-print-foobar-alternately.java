class FooBar {
    private int n;
    private BlockingQueue<Byte> fooQ = new ArrayBlockingQueue<>(1);
    private BlockingQueue<Byte> barQ = new ArrayBlockingQueue<>(1);

    public FooBar(int n) {
        this.n = n;
        fooQ.add((byte)1);
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        for (int i = 0; i < n; i++) {
            fooQ.take();

            // printFoo.run() outputs "foo". Do not change or remove this line.
            printFoo.run();
            barQ.add((byte)1);
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {

        for (int i = 0; i < n; i++) {
            barQ.take();
            // printBar.run() outputs "bar". Do not change or remove this line.
            printBar.run();
            fooQ.add((byte)1);
        }
    }
}