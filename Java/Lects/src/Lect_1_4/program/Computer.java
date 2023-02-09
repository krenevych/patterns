package Lect_1_4.program;

import java.util.HashMap;
import java.util.Map;

public class Computer {

    private final Map<String, Program> programs = new HashMap<>();

    void setupProgram(Program program){
        programs.put(program.getName(), program);
    }

    void runProgram(String programName){
        Program programOnComputer = programs.get(programName);
        if (programOnComputer != null){
            programOnComputer.run();
        } else {
            System.out.printf("Програма %s не знайдена", programName);
        }
    }

}
