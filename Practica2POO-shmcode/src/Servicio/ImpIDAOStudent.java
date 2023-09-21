package Servicio;

import Model.Student;
import data.DataBase;

import java.util.List;
//DAO = DATA ACCESS OBJECT
public class ImpIDAOStudent implements IDAOStudent{

    @Override
    public void createStudent(Student student) {
        DataBase.listStudent.add(student);
    }

    @Override
    public void updateStudent(Student student) {
        Student i = findByCif(student.getCif());
        i.setFirstName(student.getFirstName());
        i.setSecondName(student.getSecondName());
        i.setLastName(student.getLastName());
        i.setLastName2(student.getLastName2());
    }

    @Override
    public void deleteStudent(Student student) {

    }

    @Override
    public List<Student> getAll() {

        return DataBase.listStudent;
    }

    @Override
    public Student findByCif(String cif) {
        for(Student i : DataBase.listStudent) {
            if(i.getCif().equals(cif)){
                return i;
            }
        }
        return null;
    }
}
