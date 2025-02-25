//SWAP VALUE EXCHANGE

public class swap {
    public static void Swap(int a, int b) {
        
        int temopu=a;
        a=b;
        b=temopu;

        System.out.println("a=" + a);
        System.out.println("b=" + b);

    }
    public static void main(String[] args) {
        int a=55;
        int b=44;
        Swap(a,b);
        
    }
}
