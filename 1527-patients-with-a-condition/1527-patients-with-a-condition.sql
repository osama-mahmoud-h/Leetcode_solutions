# Write your MySQL query statement below

select patient_id,patient_name,conditions
from Patients
where conditions is not null and conditions like 'DIAB1%'
or conditions like '% DIAB1%';

