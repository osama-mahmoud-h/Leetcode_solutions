# Write your MySQL query statement below

select email
from Person p
group by p.email
having count(p.email)>1