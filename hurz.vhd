entity hurz is
end;

architecture hurz of hurz is

	signal x : bit;

	component nille port(x : in bit);
	end component;

begin

	nille1: nille port map(x);

	stimulus: process
	begin
		assert false report "hurzischwurz"
		severity note;
		wait;
	end process stimulus;

end hurz;

