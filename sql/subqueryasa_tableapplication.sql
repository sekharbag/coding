select * from 
(
select name,year(curdate())-birth_year as age 
from actors ) as age_actors_table 
where age<70 and age>40
order by age desc