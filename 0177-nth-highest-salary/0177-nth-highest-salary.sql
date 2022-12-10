CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS
result NUMBER:=-1;
CURSOR cur is
SELECT DISTINCT(e.salary) FROM Employee e order by e.salary desc;
emp Employee%ROWTYPE;
i number:=1;
BEGIN
    /* Write your PL/SQL query statement below */
    for emp in cur 
    loop
    exit when i>N;
    if N= i
    then result := emp.salary;
    end if;
    i:=i+1;
    end loop;
    
    if result <>-1
    then
    RETURN result;
    else return null;
    end if;
END;