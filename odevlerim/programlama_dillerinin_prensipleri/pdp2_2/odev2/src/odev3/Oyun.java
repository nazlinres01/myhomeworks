package odev3;

import java.util.ArrayList;
import java.util.List;

public class Oyun {
    private Koloni[] koloniler;

    public Oyun(Koloni[] koloniler) {
        this.koloniler = koloniler;
    }

    public void baslat() {
        while (koloniler.length > 1) {
            turuOynat();
        }
        Koloni kazananKoloni = koloniler[0];
        System.out.println("Kazanan Koloni: " + kazananKoloni.getSembol());
    }

    private void turuOynat() {
        for (int i = 0; i < koloniler.length; i++) {
            Koloni koloni = koloniler[i];
            koloni.uretimYap();
            koloni.popülasyonArtir();
            savaslariYap(koloni, i);
        }
        kolonileriGuncelle();
    }

    private void savaslariYap(Koloni koloni, int currentIndex) {
        for (int i = 0; i < koloniler.length; i++) {
            if (i != currentIndex) {
                Koloni digerKoloni = koloniler[i];
                koloni.savasYap(digerKoloni);
            }
        }
    }

    private void kolonileriGuncelle() {
        List<Koloni> hayattaKoloniler = new ArrayList<>();
        for (Koloni koloni : koloniler) {
            if (koloni.hayattaMi()) {
                hayattaKoloniler.add(koloni);
            }
        }
        koloniler = hayattaKoloniler.toArray(new Koloni[0]);
    }
}
