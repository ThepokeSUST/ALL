
class process {
    int data;
    boolean hasData = false;

    synchronized void produce(int data) {

        while (hasData) {
            try {
                System.out.println(Thread.currentThread().getName());
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }

        this.data = data;
        hasData = true;
        System.out.println("data produced");
        notifyAll();

    }

    synchronized int consume() {

        while (!hasData) {
            try {
                System.out.println(Thread.currentThread().getName());
                wait();

            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        hasData = false;

        System.out.println("Consumed " + data);
        notifyAll();
        return data;

    }
}

public class Communication {

    public static void main(String[] args) {
        process p = new process();

        Runnable r1 = new Runnable() {
            public void run() {
                for (int i = 0; i < 20; i++) {
                    p.produce(i);
                }
            }
        };
        Runnable r2 = new Runnable() {
            public void run() {
                for (int i = 0; i < 10; i++) {
                    p.consume();
                }
            }
        };
        Runnable r3 = new Runnable() {
            public void run() {
                // System.out.print("Thred3");
                for (int i = 0; i < 10; i++) {
                    p.consume();

                }
            }
        };
        Thread th1 = new Thread(r1, "pro");
        Thread th2 = new Thread(r2, "con1");
        Thread th3 = new Thread(r3, "con2");

        th1.start();
        th2.start();
        th3.start();

    }

}
