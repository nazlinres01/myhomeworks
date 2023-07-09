package odev3;

public class UretimA extends Uretim {
    @Override
    public int uret() {
    	
        // 1 ile 5 arasında rastgele bir tam sayı üretir
        return (int) (Math.random() * 5) + 1;
    }
}
