-- Write your PostgreSQL query statement below
SELECT *

FROM Patients

WHERE conditions like 'DIAB1%'
     OR conditions like '% DIAB1%'