package odev3;

public class TaktikB extends Taktik {
    @Override
    public int savas(int koloni1Populasyon, int koloni2Populasyon) {
    	
        int popülasyon = getPopülasyon(); // Koloninin mevcut popülasyonunu al

        if (popülasyon < 500) {
            return 300;
        } else if (popülasyon >= 500 && popülasyon <= 1000) {
            return 700;
        } else {
            return 1000;
        }
    }

	private int getPopülasyon() {
		// TODO Auto-generated method stub
		return 0;
	}
}
