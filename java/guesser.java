import java.util.Scanner;

class guess {

    int guessnum;

    int guessingNumber() {
        System.out.println("guesser! kindly guess the no.");
        Scanner scan = new Scanner(System.in);
        guessnum = scan.nextInt();
        return guessnum;
    }
}

class player {
    int guessingNumber() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Players !kindly enter the no.");
        int guessNum = scan.nextInt();
        return guessNum;
    }
}

class umpire {
    int numFromGuesser;
    int numFromPlayer1;
    int numFromPlayer2;
    int numFromPlayer3;

    void collectNumfromGuesser() {
        guess g = new guess();
        numFromGuesser = g.guessingNumber();
    }

    void collectNumFromplayers() {
        player p1 = new player();
        player p2 = new player();
        player p3 = new player();
        numFromPlayer1 = p1.guessingNumber();
        numFromPlayer2 = p2.guessingNumber();
        numFromPlayer3 = p3.guessingNumber();
    }

    void compare() {
        if (numFromGuesser == numFromPlayer1) {
            System.out.println("player1 won the game");
        } else if (numFromGuesser == numFromPlayer2) {
            System.out.println("player2 won the match");
        } else if (numFromGuesser == numFromPlayer3) {
            System.out.println("player3 won the match");
        } else {
            System.out.println("you lose the game");
        }
    }

}

public class guesser {
    public static void main(String[] args) {
        System.out.println("game started");
        umpire u = new umpire();
        u.collectNumfromGuesser();
        u.collectNumFromplayers();
        u.compare();
    }
}
