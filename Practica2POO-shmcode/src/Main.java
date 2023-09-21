import Model.Student;
import Servicio.IDAOStudent;
import Servicio.ImpIDAOStudent;
import data.DataBase;

import java.util.List;

public class Main {
    public static void main(String[] args) {

        Student s = new Student("21011748","Shemely","Yahoska", "Perez", "Alvarez");
        IDAOStudent dao = new ImpIDAOStudent();
        dao.createStudent(s);
        System.out.println("Quantity of Students: " + dao.getAll().size());
        s.setFirstName("Shem");
        dao.updateStudent(s);
        printStudent(DataBase.listStudent);
    }

    private static void printStudent(List<Student> list){
        for(Student i : list){
            System.out.println(i);
        }
    }
}