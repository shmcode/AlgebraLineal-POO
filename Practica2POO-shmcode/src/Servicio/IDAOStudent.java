package Servicio;

import Model.Student;

import java.util.List;

public interface IDAOStudent {

    //Abstract class with abstract methods. All the properties are FINAL.

    void createStudent(Student student);
    void updateStudent(Student student);
    void deleteStudent(Student student);
    List<Student> getAll();
    Student findByCif(String cif);

}
