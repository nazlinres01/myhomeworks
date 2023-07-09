package odev3;

public class UretimB extends Uretim {
    @Override
    public int uret() {
      
        // Üretim miktarını 2 ile 8 arasında rastgele bir tam sayı olarak belirler
        // Ancak her turda üretim miktarını %20 artırır
        // İlk turda 2 ile 8 arasında rastgele bir miktar üretirken, ikinci turda 2.4 ile 9.6 arasında bir miktar üretecektir

        int uretimMiktari = (int) (Math.random() * 7) + 2; // 2 ile 8 arasında rastgele bir sayı
        uretimMiktari = (int) (uretimMiktari * 1.2); // Üretim miktarını %20 artır

        return uretimMiktari;
    }
}
