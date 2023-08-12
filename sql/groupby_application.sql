SELECT * FROM moviesdb.movies;

select m.movie_id,m.title,group_concat(a.name)  from movies m
join movie_actor ma  on ma.movie_id=m.movie_id
join actors a on a.actor_id=ma.actor_id
group by m.movie_id;