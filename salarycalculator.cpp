 #include<iostream>
using namespace std;
string empno,empname,designation,department;
double basicsalary;
double total_allowance=0.0,gross_pay=0.0,total_deduction=0.0,net_pay=0.0,upfa=0.0,etfa=0.0;
void Display_Menu()
{
    cout<<"1-Employee Details."<<endl;
    cout<<"2-Calculate the Total Allowance."<<endl;
    cout<<"3-Calculate the Gross Pay."<<endl;
    cout<<"4-Calculate the Total Deduction."<<endl;
    cout<<"5-Calculate the Net Pay."<<endl;
    cout<<"6-Calculate the UPF and ETF Per Month."<<endl;
    cout<<"7-calculate the Annual UPF and ETF amount."<<endl;
    cout<<"8-Display the Salary Sheet."<<endl;

}
void Employee_Details()
{
    cout<<"Enter the Employee Number:"<<endl;
    cin>>empno;
    cout<<"Enter the Employee Name:"<<endl;
    cin>>empname;
    cout<<"Enter the Employee Designation:"<<endl;
    cin>>designation;
    cout<<"Enter the Department:"<<endl;
    cin>>department;
    cout<<"Enter the Basic Salary"<<endl;
    cin>>basicsalary;
}
double Total_Allowance()
{
    double cla=7800.00;
    double ma=5000.00;
    double sa=2640.00;

    total_allowance=cla+ma+sa;
    return total_allowance;

}
double Gross_Pay()
{
    gross_pay=total_allowance+basicsalary;
    return gross_pay;
}
double Total_Deduction()
{
    double sd=25.00;
    double upfemp=5708.32;
    total_deduction=sd+upfemp;
    return total_deduction;

}
double Net_Pay()
{
    net_pay=gross_pay-total_deduction;
    return net_pay;

}
double upf_etf(int upfr,int etfr)
{
    upfa=(double)((net_pay*upfr)/100);
    etfa=(double)((net_pay*etfr)/100);
    cout<<"The UPF Amount of"<<empname<<" is "<<upfa<<endl;
    cout<<"The ETF Amount of "<<empname<<" is "<<etfa<<endl;
    return upfa,etfa;
}
void annualupfetf()
{
    cout<<"Annual UPF Amount for "<<empname<<" is "<<upfa*12<<endl;
    cout<<"Annual ETF Amount for "<<empname<<" is "<<etfa*12<<endl;
}
void Salary_Sheet()
{
    cout<<"University of Vavuniya Feb'23"<<endl;
    cout<<"Emp.Number: "<<empno<<endl;
    cout<<"Name: "<<empname<<endl;
    cout<<"Designation: "<<designation<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Basic Salary: "<<basicsalary<<endl;
    cout<<"Gross Pay: "<<Gross_Pay()<<endl;
    cout<<"Deductions: "<<Total_Deduction()<<endl;
    cout<<"Net Pay: "<<Net_Pay()<<endl;
    cout<<"UPF Amount: "<<upfa<<endl;
    cout<<"ETF Amount: "<<etfa<<endl;
    annualupfetf();

}
int main()
{
    int selection;
    char confirm;

    Display_Menu();
    do
    { 
        cout<<"Enter the number that you want to operate:"<<endl;
        cin>>selection;
        switch (selection)
        {
            case 1:
                Employee_Details();
                break;
            case 2:
                cout<<"The Total Allowance of "<<empname<<"is "<<Total_Allowance()<<endl;
                break;
            case 3:
                cout<<"The Gross Pay of "<<empname<<"is "<<Gross_Pay()<<endl;
                break;
            case 4:
                cout<<"The Total Deduction of "<<empname<<"is "<<Total_Deduction()<<endl;
                break;
            case 5:
                cout<<"The Net Pay of "<<empname<<"is "<<Net_Pay()<<endl;
                break;
            case 6:
                upf_etf(15,3);
                cout<<endl;
            break;
            case 7:
                annualupfetf();
                cout<<endl;
                break;
            case 8:
                cout<<"--Salary Sheet--"<<endl;
                Salary_Sheet();
                break;
            default:
                cout<<"Wrong Selection, Please select a correct Number"<<endl;
                break;
        }



        cout<<"Do you want to run this program again:"<<endl;
        cin>>confirm;
        
    } while (confirm=='Y'|| confirm=='y');
    
    cout<<"--Thank you Have a Nice day--";
    
    return 0;
}