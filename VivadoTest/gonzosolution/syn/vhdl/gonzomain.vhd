-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity gonzomain is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    output_M_instance_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    output_M_instance_ce0 : OUT STD_LOGIC;
    output_M_instance_we0 : OUT STD_LOGIC;
    output_M_instance_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    input_M_instance_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    input_M_instance_ce0 : OUT STD_LOGIC;
    input_M_instance_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of gonzomain is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "gonzomain,hls_ip_2015_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z010iclg225-1l,HLS_INPUT_CLOCK=2.500000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.390000,HLS_SYN_LAT=41,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=178,HLS_SYN_LUT=43}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_st4_fsm_3 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_st5_fsm_4 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_st6_fsm_5 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_22 : BOOLEAN;
    signal i_1_fu_65_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_1_reg_84 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_49 : BOOLEAN;
    signal p_n_assign_fu_71_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal p_n_assign_reg_89 : STD_LOGIC_VECTOR (63 downto 0);
    signal exitcond_fu_59_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal input_M_instance_load_reg_99 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_65 : BOOLEAN;
    signal grp_fu_76_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_reg_104 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st5_fsm_4 : STD_LOGIC;
    signal ap_sig_bdd_74 : BOOLEAN;
    signal i_reg_48 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st6_fsm_5 : STD_LOGIC;
    signal ap_sig_bdd_87 : BOOLEAN;
    signal grp_fu_76_ce : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);

    component gonzomain_add_32ns_32ns_32_2 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    gonzomain_add_32ns_32ns_32_2_U0 : component gonzomain_add_32ns_32ns_32_2
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => input_M_instance_load_reg_99,
        din1 => ap_const_lv32_3,
        ce => grp_fu_76_ce,
        dout => grp_fu_76_p2);





    -- the current state (ap_CS_fsm) of the state machine. --
    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    -- i_reg_48 assign process. --
    i_reg_48_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then 
                i_reg_48 <= i_1_reg_84;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                i_reg_48 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then
                i_1_reg_84 <= i_1_fu_65_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then
                input_M_instance_load_reg_99 <= input_M_instance_q0;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_fu_59_p2 = ap_const_lv1_0))) then
                    p_n_assign_reg_89(3 downto 0) <= p_n_assign_fu_71_p1(3 downto 0);
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then
                tmp_reg_104 <= grp_fu_76_p2;
            end if;
        end if;
    end process;
    p_n_assign_reg_89(63 downto 4) <= "000000000000000000000000000000000000000000000000000000000000";

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, exitcond_fu_59_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (not((exitcond_fu_59_p2 = ap_const_lv1_0))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                end if;
            when ap_ST_st3_fsm_2 => 
                ap_NS_fsm <= ap_ST_st4_fsm_3;
            when ap_ST_st4_fsm_3 => 
                ap_NS_fsm <= ap_ST_st5_fsm_4;
            when ap_ST_st5_fsm_4 => 
                ap_NS_fsm <= ap_ST_st6_fsm_5;
            when ap_ST_st6_fsm_5 => 
                ap_NS_fsm <= ap_ST_st2_fsm_1;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_59_p2)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond_fu_59_p2 = ap_const_lv1_0)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_idle assign process. --
    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if ((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_ready assign process. --
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_59_p2)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond_fu_59_p2 = ap_const_lv1_0)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_22 assign process. --
    ap_sig_bdd_22_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_22 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_49 assign process. --
    ap_sig_bdd_49_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_49 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_65 assign process. --
    ap_sig_bdd_65_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_65 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_bdd_74 assign process. --
    ap_sig_bdd_74_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_74 <= (ap_const_lv1_1 = ap_CS_fsm(4 downto 4));
    end process;


    -- ap_sig_bdd_87 assign process. --
    ap_sig_bdd_87_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_87 <= (ap_const_lv1_1 = ap_CS_fsm(5 downto 5));
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_22)
    begin
        if (ap_sig_bdd_22) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_49)
    begin
        if (ap_sig_bdd_49) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st3_fsm_2 assign process. --
    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_bdd_65)
    begin
        if (ap_sig_bdd_65) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st5_fsm_4 assign process. --
    ap_sig_cseq_ST_st5_fsm_4_assign_proc : process(ap_sig_bdd_74)
    begin
        if (ap_sig_bdd_74) then 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st6_fsm_5 assign process. --
    ap_sig_cseq_ST_st6_fsm_5_assign_proc : process(ap_sig_bdd_87)
    begin
        if (ap_sig_bdd_87) then 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_59_p2 <= "1" when (i_reg_48 = ap_const_lv4_8) else "0";
    grp_fu_76_ce <= ap_const_logic_1;
    i_1_fu_65_p2 <= std_logic_vector(unsigned(i_reg_48) + unsigned(ap_const_lv4_1));
    input_M_instance_address0 <= p_n_assign_fu_71_p1(3 - 1 downto 0);

    -- input_M_instance_ce0 assign process. --
    input_M_instance_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            input_M_instance_ce0 <= ap_const_logic_1;
        else 
            input_M_instance_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_M_instance_address0 <= p_n_assign_reg_89(3 - 1 downto 0);

    -- output_M_instance_ce0 assign process. --
    output_M_instance_ce0_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then 
            output_M_instance_ce0 <= ap_const_logic_1;
        else 
            output_M_instance_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_M_instance_d0 <= tmp_reg_104;

    -- output_M_instance_we0 assign process. --
    output_M_instance_we0_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5))) then 
            output_M_instance_we0 <= ap_const_logic_1;
        else 
            output_M_instance_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_n_assign_fu_71_p1 <= std_logic_vector(resize(unsigned(i_reg_48),64));
end behav;
