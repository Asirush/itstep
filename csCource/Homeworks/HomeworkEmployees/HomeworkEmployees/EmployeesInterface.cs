using System;
using System.Xml.Linq;

namespace HomeworkEmployees
{
    public interface EmployeesInterface
    {
        string EmployeesName { set; get; }
        string EmployeesSurname { set; get; }
        DateTime EmployeesBday { set; get; }
        EmployeesJobTitle EmployeesJobTitle { set; get; }
        DateTime EmployeesEmploymentDate { set; get; }
        EmployeesGender EmployeesGender { set; get; }
        double EmployeesSalary { set; get; }
    }
}

