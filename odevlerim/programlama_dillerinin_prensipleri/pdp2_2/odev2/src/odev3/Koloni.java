package odev3;

public class Koloni {
    private String sembol;
    private int popülasyon;
    private int yemekStogu;
    private Taktik taktik;
    private Uretim uretim;

    public Koloni(String sembol, int popülasyon, int yemekStogu, Taktik taktik, Uretim uretim) {
        this.sembol = sembol;
        this.popülasyon = popülasyon;
        this.yemekStogu = yemekStogu;
        this.taktik = taktik;
        this.uretim = uretim;
    }
    public int getPopülasyon() {
        return popülasyon;
    }
    
    public String getSembol() {
        return sembol;
    }

    public void uretimYap() {
        int uretilenMiktar = uretim.uret();
        yemekStogu += uretilenMiktar;
    }

    public void popülasyonArtir() {
        int artisMiktari = (int) (popülasyon * 0.2);
        popülasyon += artisMiktari;
        yemekStogu -= (popülasyon * 2);
    }

    public void savasYap(Koloni digerKoloni) {
        int savasSonucu = taktik.savas(popülasyon, digerKoloni.popülasyon);
        if (savasSonucu > 0) {
            digerKoloni.popülasyonKaybet(savasSonucu);
            yemekStoguAl(digerKoloni.yemekStogu * 20 / 100);
        } else if (savasSonucu < 0) {
            popülasyonKaybet(-savasSonucu);
            digerKoloni.yemekStoguAl(yemekStogu * 20 / 100);
        } else {
            // Eşitlik durumunda rastgele bir kazanan belirlenebilir.
            int random = (int) (Math.random() * 2);
            if (random == 0) {
                digerKoloni.popülasyonKaybet(popülasyon);
                yemekStoguAl(digerKoloni.yemekStogu * 20 / 100);
            } else {
                popülasyonKaybet(digerKoloni.popülasyon);
                digerKoloni.yemekStoguAl(yemekStogu * 20 / 100);
            }
        }
    }

    public void popülasyonKaybet(int kayipMiktari) {
        popülasyon -= kayipMiktari;
    }

    public void yemekStoguAl(int alinanMiktar) {
        yemekStogu += alinanMiktar;
    }

    public boolean hayattaMi() {
        return (popülasyon > 0 && yemekStogu > 0);
    }
}
