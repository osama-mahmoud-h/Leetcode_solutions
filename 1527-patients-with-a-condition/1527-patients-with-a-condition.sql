# Write your MySQL query statement below

select *
from Patients
where conditions is not null and conditions like 'DIAB1%'
or conditions like '% DIAB1%';

