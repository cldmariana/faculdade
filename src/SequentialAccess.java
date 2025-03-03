import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;

public class SequentialAccess {
    public static void main(String[] args) {
        String[] games = new String[]{"Valorant\n" +
                "GTA IV\n" +
                "GTA V\n" +
                "Minecraft\n" +
                "Roblox\n" +
                "FIFA 24\n" +
                "FIFA 25\n" +
                "CSGO\n" +
                "Counter-Strike 2\n" +
                "The Sims 3\n" +
                "The Sims 4\n" +
                "Brawl Stars\n" +
                "Euro Truck Simulator 2\n" +
                "Bully\n" +
                "Need for Speed\n" +
                "L.A. Noire\n" +
                "Mafia I\n" +
                "Mafia II"};

        System.out.println(Arrays.toString(games));
    }
}

//try (BufferedReader br = new BufferedReader(new FileReader("lista-de-jogos.txt"))) {
//String gameLine;
//
//int gameNumber = 1;
//            while ((gameLine = br.readLine()) != null) {
//        System.out.println(gameNumber + ". " + gameLine);
//gameNumber++;
//        }
//        } catch (IOException e) {
//        e.printStackTrace();
//        }