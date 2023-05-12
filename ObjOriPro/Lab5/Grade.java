package CalculGrade;
public class Grade {
    public static double convertCtoF(double gradeC)
    {
        return (gradeC*1.8)+32;
    }
    public static double convertFtoC(double gradeF)
    {
        return (gradeF-32)/1.8;
    }
}
