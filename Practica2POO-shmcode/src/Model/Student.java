package Model;

public class Student {

    private String cif;
    private String firstName;
    private String secondName;
    private String lastName;
    private String lastName2;

    //CONSTRUCTOR
    public Student(String cif, String firstName, String secondName, String lastName, String lastName2) {
        this.cif = cif;
        this.firstName = firstName;
        this.secondName = secondName;
        this.lastName = lastName;
        this.lastName2 = lastName2;
    }

    //CONSTRUCTOR
    public Student() {
    }

    //GETTER AND SETTER
    public String getCif() {
        return cif;
    }

    public void setCif(String cif) {
        this.cif = cif;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getSecondName() {
        return secondName;
    }

    public void setSecondName(String secondName) {
        this.secondName = secondName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getLastName2() {
        return lastName2;
    }

    public void setLastName2(String lastName2) {
        this.lastName2 = lastName2;
    }

    @Override
    public String toString() {
        return "Student{" +
                "cif='" + cif + '\'' +
                ", firstName='" + firstName + '\'' +
                ", secondName='" + secondName + '\'' +
                ", lastName='" + lastName + '\'' +
                ", lastName2='" + lastName2 + '\'' +
                '}';
    }
}
