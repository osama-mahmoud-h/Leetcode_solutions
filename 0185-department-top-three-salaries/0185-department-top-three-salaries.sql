SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
FROM Department d JOIN Employee e ON d.id = e.departmentId
WHERE (
       SELECT COUNT(DISTINCT salary)
       FROM Employee e2
       WHERE e2.salary >= e.salary
            AND e2.departmentId = d.id
) <= 3
