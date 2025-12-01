-- Write your PostgreSQL query statement below
select name as Employee 
from Employee e 
where e.salary > (select salary from Employee m where m.id = e.managerId)