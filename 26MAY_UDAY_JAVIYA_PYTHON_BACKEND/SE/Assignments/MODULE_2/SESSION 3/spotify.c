//Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.
#include<stdio.h>
main()
{
	char playlist_name[]="Patel Rocks";
	int total_songs=34;
	float average_song_duration=3.2;
	
	printf("welcome to Spotify playlist");
	printf("My favorite Spotify playlist is %s and has total %d number of songs in it,The average song duration is %.1f minutes.",playlist_name,total_songs,average_song_duration);
}
