-- Write your PostgreSQL query statement below
SELECT ue.unique_id, e.name
FROM Employees e LEFT JOIN EmployeeUNI ue ON e.id = ue.id