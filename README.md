docker build -t random .   
docker run --rm -it -v $PWD:/random -w /random random 
