# Write your MySQL query statement below

select max(salary) as SecondHighestSalary
from Employee e1
where e1.salary <>(select max(e2.salary) from Employee e2)
