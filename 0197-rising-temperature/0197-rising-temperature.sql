# Write your MySQL query statement below
/*


*/
/*
select DATEDIFF(recordDate , "2015-01-03") as dif 
from Weather*/

select w1.id 
from Weather w1
join Weather w2 
on w1.temperature > w2.temperature
and DATEDIFF(w1.recordDate,w2.recordDate) =1

                     
