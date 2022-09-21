using System;
using System.Xml.Linq;
using HomeworkEmployees;

namespace HomeworkEmployees
{
    public struct Employee : EmployeesInterface
    {
        public string EmployeesName { set; get; }
        public string EmployeesSurname { set; get; }
        public DateTime EmployeesBday { set; get; }
        public EmployeesJobTitle EmployeesJobTitle { set; get; }
        public DateTime EmployeesEmploymentDate { set; get; }
        public EmployeesGender EmployeesGender { set; get; }
        public double EmployeesSalary { set; get; } 

        public override string ToString()
        {
            return ("Employees Name/Surname: {0} {1}\nJob Title: {2}\nSalary: {3}", EmployeesName, EmployeesSurname, EmployeesJobTitle.ToString(), EmployeesSalary);
        }

        public Employee() { }
    }
}

