import java.util.ArrayList;

public class StaffList implements Employee {

    ArrayList<Employee> salaries = new ArrayList<Employee>();

    public StaffList() {
        Manager manager = new Manager();
        SalesPerson salesPerson1 = new SalesPerson();
        SalesPerson salesPerson2 = new SalesPerson();
        salaries.add(manager);
        salaries.add(salesPerson1);
        salaries.add(salesPerson2);
    }

    public int getSalary() {
        int sum = 0;
        for (Employee salary : salaries) {
            sum += salary.getSalary();
        }
        return sum;
    }

}
