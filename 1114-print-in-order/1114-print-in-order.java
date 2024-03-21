class Foo {
    Semaphore runs[];
    public Foo() {
        runs = new Semaphore[3];
        runs[0] = new Semaphore(1);
        runs[1] = new Semaphore(0);
        runs[2] = new Semaphore(0);
    }

    public void first(Runnable printFirst) throws InterruptedException {

        // printFirst.run() outputs "first". Do not change or remove this line.
        runs[0].acquire();
        printFirst.run();
        runs[1].release();
    }

    public void second(Runnable printSecond) throws InterruptedException {

        // printSecond.run() outputs "second". Do not change or remove this line.
        runs[1].acquire();
        printSecond.run();
        runs[2].release();
    }

    public void third(Runnable printThird) throws InterruptedException {

        // printThird.run() outputs "third". Do not change or remove this line.
        runs[2].acquire();
        printThird.run();

    }
}
