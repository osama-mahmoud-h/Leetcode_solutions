# Write your MySQL query statement below


SELECT E.employee_id
FROM Employees E LEFT JOIN Salaries S
ON E.employee_id = S.employee_id
WHERE E.name IS NULL OR S.salary IS NULL 
UNION 
SELECT S.employee_id
FROM Salaries S LEFT JOIN  Employees E 
ON E.employee_id = S.employee_id
WHERE E.name IS NULL OR S.salary IS NULL
ORDER BY employee_id
/*
WHERE
ORDER BY employee_id ASC*/
