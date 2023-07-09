package odev3;

public class TaktikA extends Taktik {
    @Override
    public int savas(int koloni1Populasyon, int koloni2Populasyon){
       
        int popülasyon = getPopülasyon(); // Koloninin mevcut popülasyonunu al

        if (popülasyon < 500) {
            return 500;
        } else if (popülasyon >= 500 && popülasyon <= 1000) {
            return (int) (Math.random() * 1000);
        } else {
            return popülasyon * 3;
        }
    }

	private int getPopülasyon() {
		// TODO Auto-generated method stub
		return 0;
	}
}
