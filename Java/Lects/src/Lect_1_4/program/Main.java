package Lect_1_4.program;

public class Main {
    public static void main(String[] args) {

        Computer computer = new Computer();

        Program program = new Program("Skype", "3.4", "100500kB");

        computer.setupProgram(program);

        computer.runProgram("Skype");
        computer.runProgram("MineKraft");

        int[] myarray = {1, 2, 3, 4, 12};

        for (int elem : myarray) {
            System.out.println(elem);
        }


    }
}