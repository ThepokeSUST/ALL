import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

class A {

}

public class factorialUsingExecutor {

    static int fact(int a) {
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ie) {
            Thread.currentThread().interrupt();
        }
        int ans = 1;
        for (int i = 1; i <= a; i++) {
            ans *= i;
        }
        return ans;
    }

    public static void main(String[] args) {

        long l = System.currentTimeMillis();
        int n = 10;
        for (int i = 1; i <= n; i++) {
            System.out.println(fact(i));
        }
        System.out.println();
        System.out.println("Time " + (System.currentTimeMillis() - l));

        System.out.println();
        l = System.currentTimeMillis();

        // Thread th[] = new Thread[n + 1];
        System.out.println("'''''''''''''''''''''''''''''");

        ExecutorService executor = Executors.newFixedThreadPool(11);
        for (int i = 0; i <= n; i++) {
            int fi = i;
            executor.submit(() -> {
                int ans = fact(fi);
                System.out.println(ans);
            });

        }
        executor.shutdown(); 
        try {
            executor.awaitTermination(10,TimeUnit.SECONDS);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println();
        System.out.println("Time " + (System.currentTimeMillis() - l));

    }
}
