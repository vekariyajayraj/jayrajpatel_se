create database instagram;
use instagram;
create table user_id(
	user_id int auto_increment,
    Edit_profile varchar(50),
    Share_profile varchar(50),
    post varchar(40),
    followers int,
    following_id int,
    primary key (User_id)
);
create table log_in (
	 user_id int auto_increment,
	 user_name varchar(40),
     moblie_no int,
     Email_id varchar(40),
     id_password  varchar(20),
     primary key (user_id)
);
create table post (
	user_id int auto_increment,
    Tag_people varchar (20),
    Add_location varchar(20),
    Add_music varchar(20),
    Write_a_caption varchar(100),
    photos varchar(200),
    primary key (user_id)
);

create table live (
	user_name varchar(10),
    faeture varchar(50),
    live_share varchar (50),
    Add_people varchar (20),
    user_view int (10),
    primary key (User_name)
);
create table chatting(
		user_id varchar(20),
        video_call varchar(20),
        voice_call varchar(10),
        Chat varchar(10000),
        photo varchar(10),
        audio varchar(1000),
        primary key (user_id)
);
create table Reels (
	user_id varchar(20),
    Reel_like int,
    commnet varchar(100),
    Reels_share varchar(10),
    save varchar(10),
	Reels_view int,
    primary key (user_id)
);
create table Search(
	user_id varchar(10),
    private_public varchar(10),
    id_Followers int,
    id_following int,
    primary key (user_id)
    
);