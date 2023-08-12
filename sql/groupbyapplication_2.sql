
select a.name, group_concat(m.title separator " | ") as  movie_name  from 
actors a join movie_actor ma 
on ma.actor_id=a.actor_id
join movies m on m.movie_id=ma.movie_id
group by a.name 
having name='Chris Hemsworth'