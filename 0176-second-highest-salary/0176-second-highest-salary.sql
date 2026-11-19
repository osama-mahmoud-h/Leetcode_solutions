# Write your MySQL query statement below
-- with salaries as (
--     select  distinct  e.salary as salary
--     from Employee e
--     order by e.salary desc 
--     limit 1 offset 1
-- )
-- select s.salary as SecondHighestSalary
-- from salaries s


-- select (
--     select distinct  e.salary as salary
--     from Employee e
--     order by e.salary desc 
--     limit 1 offset 1
-- ) as SecondHighestSalary;

select (
    select max(e.salary) 
    from Employee e
    where e.salary < (select max(e2.salary) from Employee e2) 
)as SecondHighestSalary