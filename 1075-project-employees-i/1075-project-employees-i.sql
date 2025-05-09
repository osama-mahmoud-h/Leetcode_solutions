-- Write your PostgreSQL query statement below
select 
    p.project_id , 
    round(avg(e.experience_years) , 2) as average_years

FROM Project p JOIN Employee e ON p.employee_id = e.employee_id

GROUP BY p.project_id