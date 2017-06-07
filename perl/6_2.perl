#!/usr/bin/perl

while(<>){
	$i += 1;
	chomp;
	$dic{$_} += 1;
}

while(($key,$value) = each %dic){
	print "$key repeate $value times.\n"
}