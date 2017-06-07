#! /usr/bin/perl


#注意这里是圆括号不是花括号
my %dic = (
	fred => "flintston",
	barney => "rubble",
	wilma => "flintston",
);

while(<>){
	chomp;
	if(defined($dic{$_})){
		print "The family name of $_ is $dic{$_}\n";
	}
}