entity hurz is
end;

architecture hurz of hurz is
begin
	stimulus: process
	begin
		assert false report "hurzischwurz"
		severity note;
		wait;
	end process stimulus;
end hurz;

