# Write your MySQL query statement below

/*
SELECT E.employee_id,
CASE 
WHEN E.employee_id%2 <>0 AND LEFT(E.name,1)<>'M'
THEN E.salary
ELSE 0
END AS bonus
FROM Employees E
 
*/
SELECT E.employee_id,
CASE 
WHEN E.employee_id%2 <>0 AND E.name NOT LIKE 'M%'
THEN E.salary
ELSE 0
END AS bonus
FROM Employees E