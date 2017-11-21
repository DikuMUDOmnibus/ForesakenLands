/***************************************************************************
 *  Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,        *
 *  Michael Seifert, Hans Henrik St{rfeldt, Tom Madsen, and Katja Nyboe.   *
 *                                                                         *
 *  Merc Diku Mud improvments copyright (C) 1992, 1993 by Michael          *
 *  Chastain, Michael Quan, and Mitchell Tse.                              *
 *                                                                         *
 *  In order to use any part of this Envy Diku Mud, you must comply with   *
 *  the original Diku license in 'license.doc', the Merc license in        *
 *  'license.txt', as well as the Envy license in 'license.nvy'.           *
 *  In particular, you may not remove either of these copyright notices.   *
 *                                                                         *
 *  Much time and thought has gone into this software and you are          *
 *  benefitting.  We hope that you share your changes too.  What goes      *
 *  around, comes around.                                                  * 
 *                                                                         *
 *      ROM 2.4 is copyright 1993-1998 Russ Taylor                         *
 *      ROM has been brought to you by the ROM consortium                  *
 *          Russ Taylor (rtaylor@hypercube.org)                            *
 *          Gabrielle Taylor (gtaylor@hypercube.org)                       *
 *          Brian Moore (zump@rom.org)                                     *
 *      By using this code, you have agreed to follow the terms of the     *
 *      ROM license, in the file Rom24/doc/rom.license                     *
 *                                                                         *
 * Code Adapted and Improved by Abandoned Realms Mud                       *
 * and Aabahran: The Forsaken Lands Mud by Virigoth                        *
 *                                                                         *
 * Continued Production of this code is available at www.flcodebase.com    *
 ***************************************************************************/

#define ML 	MAX_LEVEL	/* implementor */
#define L1	MAX_LEVEL - 1  	/* creator */
#define L2	MAX_LEVEL - 2	/* supreme being */
#define L3	MAX_LEVEL - 3	/* deity */
#define L4 	MAX_LEVEL - 4	/* god */
#define L5	MAX_LEVEL - 5	/* immortal */
#define L6	MAX_LEVEL - 6	/* demigod */
#define L7	MAX_LEVEL - 7	/* angel */
#define L8	MAX_LEVEL - 8	/* avatar */
#define HE	MAX_LEVEL - 9   /* hero */
#define IM	LEVEL_IMMORTAL 	/* hero */
#define NO	LEVEL_HERO	/* highest mortal */

#define COM_INGORE	1

struct	cmd_type
{
    char * const	name;
    DO_FUN *		do_fun;
    sh_int		position;
    sh_int		level;
    sh_int		log;
    sh_int              show;
    sh_int		mob;
    sh_int		charm;
    sh_int		order;
    sh_int		hide;
    sh_int		sneak;
    sh_int		camo;
    sh_int		shadow;
    sh_int		quiet;
    sh_int		swtch;
    sh_int		morph;
    sh_int		meditate;
};

extern	const	struct	cmd_type	cmd_table	[];

bool do_reset_bastions( CHAR_DATA *ch, int mob_vnum );
bool do_reset_bastions_remove( CHAR_DATA *ch, int mob_vnum );

DECLARE_DO_FUN( do_opedit );
DECLARE_DO_FUN( do_rpedit );
DECLARE_DO_FUN( do_opdump );
DECLARE_DO_FUN( do_opstat );
DECLARE_DO_FUN( do_rpdump );
DECLARE_DO_FUN( do_rpstat );

DECLARE_DO_FUN(	do_abduction	);
DECLARE_DO_FUN( do_losereply );
DECLARE_DO_FUN(	do_act		);
DECLARE_DO_FUN(	do_advance	);
DECLARE_DO_FUN( do_affects	);
DECLARE_DO_FUN( do_afk		);
DECLARE_DO_FUN( do_alia		);
DECLARE_DO_FUN(	do_allow	);
DECLARE_DO_FUN( do_answer	);
DECLARE_DO_FUN( do_application	);
DECLARE_DO_FUN( do_approve	);
DECLARE_DO_FUN(	do_areas	);
DECLARE_DO_FUN(	do_at		);
DECLARE_DO_FUN(	do_auction	);
DECLARE_DO_FUN( do_autoassist	);
DECLARE_DO_FUN( do_autoaim	);
DECLARE_DO_FUN( do_autocabal	);
DECLARE_DO_FUN( do_autoexp	);
DECLARE_DO_FUN( do_autofire	);
DECLARE_DO_FUN( do_autoalias	);
DECLARE_DO_FUN( do_autosex	);
DECLARE_DO_FUN( do_autoscore	);
DECLARE_DO_FUN( do_autosheath	);
DECLARE_DO_FUN( do_autoequip	);
DECLARE_DO_FUN( do_autoexit	);
DECLARE_DO_FUN( do_autogold	);
DECLARE_DO_FUN( do_autolist	);
DECLARE_DO_FUN( do_autoloot	);
DECLARE_DO_FUN( do_autosac	);
DECLARE_DO_FUN( do_autosplit	);
DECLARE_DO_FUN(	do_backstab	);
DECLARE_DO_FUN(	do_brownie	);
DECLARE_DO_FUN(	do_boulder_throw);
DECLARE_DO_FUN(	do_bio		);
DECLARE_DO_FUN(	do_bail		);
DECLARE_DO_FUN(	do_bamfin	);
DECLARE_DO_FUN(	do_bamfout	);
DECLARE_DO_FUN(	do_ban		);
DECLARE_DO_FUN( do_bash		);
DECLARE_DO_FUN( do_batter	);
DECLARE_DO_FUN( do_beckon	);
DECLARE_DO_FUN( do_behead	);
DECLARE_DO_FUN( do_berserk	);
DECLARE_DO_FUN(	do_brandish	);
DECLARE_DO_FUN(	do_bribe	);
DECLARE_DO_FUN(	do_broadcast	);
DECLARE_DO_FUN( do_brief	);
DECLARE_DO_FUN(	do_bug		);
DECLARE_DO_FUN(	do_build	);
DECLARE_DO_FUN(	do_buy		);
DECLARE_DO_FUN(	do_cast		);
DECLARE_DO_FUN(	do_cancel	);
DECLARE_DO_FUN(	do_cyclone	);
DECLARE_DO_FUN(	do_coup		);
DECLARE_DO_FUN(	do_critical	);
DECLARE_DO_FUN(	do_cstat	);
DECLARE_DO_FUN( do_changes	);
DECLARE_DO_FUN( do_chant	);
DECLARE_DO_FUN( do_channels	);
DECLARE_DO_FUN( do_clone	);
DECLARE_DO_FUN(	do_close	);
DECLARE_DO_FUN(	do_commands	);
DECLARE_DO_FUN( do_compact	);
DECLARE_DO_FUN(	do_compare	);
DECLARE_DO_FUN(	do_consider	);
DECLARE_DO_FUN(	do_conjure	);
DECLARE_DO_FUN(	do_conceal	);
DECLARE_DO_FUN(	do_corrupt	);
DECLARE_DO_FUN( do_count	);
DECLARE_DO_FUN( do_deaf		);
DECLARE_DO_FUN( do_delet	);
DECLARE_DO_FUN( do_delete	);
DECLARE_DO_FUN(	do_deny		);
DECLARE_DO_FUN(	do_description	);
DECLARE_DO_FUN(	do_destroy_undead);
DECLARE_DO_FUN( do_dice		);
DECLARE_DO_FUN( do_diplomacy	);
DECLARE_DO_FUN( do_dirt		);
DECLARE_DO_FUN(	do_disarm	);
DECLARE_DO_FUN( do_disguise     );
DECLARE_DO_FUN(	do_disconnect	);
DECLARE_DO_FUN(	do_down		);
DECLARE_DO_FUN(	do_drink	);
DECLARE_DO_FUN(	do_dreamwalk	);
DECLARE_DO_FUN(	do_drop		);
DECLARE_DO_FUN( do_dump		);
DECLARE_DO_FUN(	do_east		);
DECLARE_DO_FUN(	do_escort	);
DECLARE_DO_FUN(	do_eat		);
DECLARE_DO_FUN(	do_fury		);
DECLARE_DO_FUN( do_smoke	);
DECLARE_DO_FUN( do_surname	);
DECLARE_DO_FUN( do_surrender	);
DECLARE_DO_FUN(	do_echo		);
DECLARE_DO_FUN(	do_emote	);
DECLARE_DO_FUN(	do_embrace 	);
DECLARE_DO_FUN( do_envenom	);
DECLARE_DO_FUN(	do_equipment	);
DECLARE_DO_FUN(	do_examine	);
DECLARE_DO_FUN(	do_exits	);
DECLARE_DO_FUN(	do_exile	);
DECLARE_DO_FUN( do_fdress	);
DECLARE_DO_FUN(	do_fill		);
DECLARE_DO_FUN( do_flag		);
DECLARE_DO_FUN(	do_flee		);
DECLARE_DO_FUN(	do_follow	);
DECLARE_DO_FUN(	do_focused_bash	);
DECLARE_DO_FUN(	do_forget	);
DECLARE_DO_FUN(	do_forms	);
DECLARE_DO_FUN(	do_force	);
DECLARE_DO_FUN(	do_forfeit	);
DECLARE_DO_FUN(	do_freeze	);
DECLARE_DO_FUN( do_gain		);
DECLARE_DO_FUN(	do_get		);
DECLARE_DO_FUN(	do_give		);
DECLARE_DO_FUN(	do_goto		);
DECLARE_DO_FUN(	do_group	);
DECLARE_DO_FUN(	do_gtell	);
DECLARE_DO_FUN( do_cabal    	);
DECLARE_DO_FUN( do_clan    	);
DECLARE_DO_FUN( do_heal		);
DECLARE_DO_FUN( do_high		);
DECLARE_DO_FUN( do_low		);
DECLARE_DO_FUN( do_normal	);
DECLARE_DO_FUN(	do_help		);
DECLARE_DO_FUN(	do_hide		);
DECLARE_DO_FUN( do_hunt		);
DECLARE_DO_FUN(	do_holylight	);
DECLARE_DO_FUN( do_idea         );
DECLARE_DO_FUN(	do_immtalk	);
DECLARE_DO_FUN(	do_impale	);
DECLARE_DO_FUN( do_imotd        );
DECLARE_DO_FUN( do_credits      );
DECLARE_DO_FUN( do_crimes       );
DECLARE_DO_FUN( do_incognito	);
DECLARE_DO_FUN( do_cabaltalk    );
DECLARE_DO_FUN( do_clantalk    );
DECLARE_DO_FUN( do_newbiechat   );
DECLARE_DO_FUN( do_nemesis   );
DECLARE_DO_FUN(	do_inventory	);
DECLARE_DO_FUN(	do_sheath	);
DECLARE_DO_FUN(	do_sharpen	);
DECLARE_DO_FUN(	do_draw		);
DECLARE_DO_FUN(	do_invis	);
DECLARE_DO_FUN(	do_kick		);
DECLARE_DO_FUN(	do_kill		);
DECLARE_DO_FUN(	do_list		);
DECLARE_DO_FUN(	do_browse	);
DECLARE_DO_FUN(	do_law		);
DECLARE_DO_FUN(	do_lifedrain	);
DECLARE_DO_FUN( do_load		);
DECLARE_DO_FUN(	do_lock		);
DECLARE_DO_FUN(	do_log		);
DECLARE_DO_FUN(	do_look		);
DECLARE_DO_FUN(	do_memory	);
DECLARE_DO_FUN(	do_middle	);
DECLARE_DO_FUN(	do_memorize	);
DECLARE_DO_FUN(	do_melee	);
DECLARE_DO_FUN(	do_mercy	);
DECLARE_DO_FUN(	do_mfind	);
DECLARE_DO_FUN(	do_mload	);
DECLARE_DO_FUN( do_modify       );
DECLARE_DO_FUN( do_motd         );
DECLARE_DO_FUN( do_mob          );
DECLARE_DO_FUN( do_obj          );
DECLARE_DO_FUN( do_onslaught	);
DECLARE_DO_FUN( do_reject	);
DECLARE_DO_FUN( do_right	);
DECLARE_DO_FUN( do_room         );
DECLARE_DO_FUN( do_rfind        );
DECLARE_DO_FUN(	do_armored_rush	);
DECLARE_DO_FUN(	do_armorpierce	);
DECLARE_DO_FUN(	do_mset		);
DECLARE_DO_FUN(	do_mstat	);
DECLARE_DO_FUN(	do_mwhere	);
DECLARE_DO_FUN(	do_murde	);
DECLARE_DO_FUN(	do_murder	);
DECLARE_DO_FUN( do_newlock	);
DECLARE_DO_FUN( do_news		);
DECLARE_DO_FUN( do_nochannels	);
DECLARE_DO_FUN(	do_noemote	);
DECLARE_DO_FUN( do_nofollow	);
DECLARE_DO_FUN(	do_north	);
DECLARE_DO_FUN( do_nosummon	);
DECLARE_DO_FUN(	do_note		);
DECLARE_DO_FUN(	do_notell	);
DECLARE_DO_FUN(	do_ofind	);
DECLARE_DO_FUN(	do_oload	);
DECLARE_DO_FUN(	do_open		);
DECLARE_DO_FUN(	do_order	);
DECLARE_DO_FUN(	do_oset		);
DECLARE_DO_FUN(	do_ospell	);
DECLARE_DO_FUN(	do_ostat	);
DECLARE_DO_FUN( do_outfit	);
DECLARE_DO_FUN( do_owhere	);
DECLARE_DO_FUN( do_twhere	);
DECLARE_DO_FUN(	do_pardon	);
DECLARE_DO_FUN(	do_password	);
DECLARE_DO_FUN(	do_delpass	);
DECLARE_DO_FUN(	do_peace	);
DECLARE_DO_FUN( do_penalty	);
DECLARE_DO_FUN( do_permban	);
DECLARE_DO_FUN(	do_pick		);
DECLARE_DO_FUN(	do_defuse	);
DECLARE_DO_FUN( do_pmote	);
DECLARE_DO_FUN(	do_pommel_smash	);
DECLARE_DO_FUN( do_pour		);
DECLARE_DO_FUN(	do_practice	);
DECLARE_DO_FUN(	do_profind	);
DECLARE_DO_FUN(	do_print	);
DECLARE_DO_FUN(	do_psalm	);
DECLARE_DO_FUN( do_prefix	);
DECLARE_DO_FUN( do_predict	);
DECLARE_DO_FUN( do_preserve     );
DECLARE_DO_FUN( do_prompt	);
DECLARE_DO_FUN( do_protect	);
DECLARE_DO_FUN(	do_purge	);
DECLARE_DO_FUN(	do_push       	);
DECLARE_DO_FUN(	do_put		);
DECLARE_DO_FUN( do_nock		);
DECLARE_DO_FUN( do_unload	);
DECLARE_DO_FUN(	do_quaff	);
DECLARE_DO_FUN( do_question	);
DECLARE_DO_FUN(	do_qui		);
DECLARE_DO_FUN( do_quiet	);
DECLARE_DO_FUN(	do_quit		);
DECLARE_DO_FUN( do_read		);
DECLARE_DO_FUN(	do_reboo	);
DECLARE_DO_FUN(	do_reboot	);
DECLARE_DO_FUN(	do_recall	);
DECLARE_DO_FUN(	do_recho	);
DECLARE_DO_FUN(	do_recite	);
DECLARE_DO_FUN(	do_remove	);
DECLARE_DO_FUN( do_replay	);
DECLARE_DO_FUN( do_reputation	);
DECLARE_DO_FUN(	do_reply	);
DECLARE_DO_FUN(	do_report	);
DECLARE_DO_FUN(	do_rescue	);
DECLARE_DO_FUN(	do_rest		);
DECLARE_DO_FUN(	do_restore	);
DECLARE_DO_FUN(	do_return	);
DECLARE_DO_FUN(	do_retrieve	);
DECLARE_DO_FUN(	do_rset		);
DECLARE_DO_FUN(	do_rstat	);
DECLARE_DO_FUN( do_rwhere	);
DECLARE_DO_FUN(	do_sacrifice	);
DECLARE_DO_FUN(	do_stash	);
DECLARE_DO_FUN(	do_save		);
DECLARE_DO_FUN(	do_say		);
DECLARE_DO_FUN(	do_score	);
DECLARE_DO_FUN( do_scroll	);
DECLARE_DO_FUN(	do_seep		);
DECLARE_DO_FUN(	do_sell		);
DECLARE_DO_FUN(	do_sequencer	);
DECLARE_DO_FUN( do_set		);
DECLARE_DO_FUN( do_show		);
DECLARE_DO_FUN( do_shoulder_smash);
DECLARE_DO_FUN(	do_shutdow	);
DECLARE_DO_FUN(	do_shutdown	);
DECLARE_DO_FUN( do_sit		);
DECLARE_DO_FUN( do_skills	);
DECLARE_DO_FUN(	do_sla		);
DECLARE_DO_FUN(	do_slay		);
DECLARE_DO_FUN( do_bolo		);
DECLARE_DO_FUN( do_bowyer	);
DECLARE_DO_FUN( do_bounty	);
DECLARE_DO_FUN( do_sever	);
DECLARE_DO_FUN(	do_sleep	);
DECLARE_DO_FUN(	do_slookup	);
DECLARE_DO_FUN( do_smote	);
DECLARE_DO_FUN(	do_sneak	);
DECLARE_DO_FUN(	do_snoop	);
DECLARE_DO_FUN( do_socials	);
DECLARE_DO_FUN(	do_south	);
DECLARE_DO_FUN( do_sockets	);
DECLARE_DO_FUN( do_spells	);
DECLARE_DO_FUN( do_spellkiller	);
DECLARE_DO_FUN( do_spawn_blade	);
DECLARE_DO_FUN(	do_split	);
DECLARE_DO_FUN(	do_sset		);
DECLARE_DO_FUN(	do_sgset	);
DECLARE_DO_FUN(	do_stand	);
DECLARE_DO_FUN( do_stat		);
DECLARE_DO_FUN(	do_steal	);
DECLARE_DO_FUN(	do_approach	);
DECLARE_DO_FUN(	do_traps	);
DECLARE_DO_FUN(	do_track	);
DECLARE_DO_FUN(	do_study 	);
DECLARE_DO_FUN(	do_pry 		);
DECLARE_DO_FUN(	do_plant	);
DECLARE_DO_FUN( do_string	);
DECLARE_DO_FUN(	do_switch	);
DECLARE_DO_FUN(	do_tell		);
DECLARE_DO_FUN(	do_telepathy	);
DECLARE_DO_FUN(	do_time		);
DECLARE_DO_FUN(	do_train	);
DECLARE_DO_FUN(	do_transfer	);
DECLARE_DO_FUN(	do_gtransfer	);
DECLARE_DO_FUN( do_trip		);
DECLARE_DO_FUN( do_lash		);
DECLARE_DO_FUN(	do_trust	);
DECLARE_DO_FUN(	do_typo		);
DECLARE_DO_FUN(	do_unlock	);
DECLARE_DO_FUN(	do_unseen	);
DECLARE_DO_FUN( do_unread	);
DECLARE_DO_FUN(	do_up		);
DECLARE_DO_FUN(	do_value	);
DECLARE_DO_FUN(	do_visible	);
DECLARE_DO_FUN(	do_revert	);
DECLARE_DO_FUN( do_violate	);
DECLARE_DO_FUN( do_vnum		);
DECLARE_DO_FUN(	do_w_compass	);
DECLARE_DO_FUN(	do_wake		);
DECLARE_DO_FUN(	do_watchtower	);
DECLARE_DO_FUN(	do_wear		);
DECLARE_DO_FUN(	do_werepower	);
DECLARE_DO_FUN(	do_weather	);
DECLARE_DO_FUN(	do_west		);
DECLARE_DO_FUN(	do_where	);
DECLARE_DO_FUN(	do_who		);
DECLARE_DO_FUN( do_whois	);
DECLARE_DO_FUN( do_whios	);
DECLARE_DO_FUN(	do_wimpy	);
DECLARE_DO_FUN(	do_wish		);
DECLARE_DO_FUN(	do_wizhelp	);
DECLARE_DO_FUN(	do_wizlock	);
DECLARE_DO_FUN( do_wizlist	);
DECLARE_DO_FUN( do_wiznet	);
DECLARE_DO_FUN( do_worth	);
DECLARE_DO_FUN(	do_yell		);
DECLARE_DO_FUN(	do_zap		);
DECLARE_DO_FUN(	do_zecho	);
DECLARE_DO_FUN(	do_use		);
DECLARE_DO_FUN( do_color        );
DECLARE_DO_FUN( do_scan         );
DECLARE_DO_FUN( do_olevel       );
DECLARE_DO_FUN( do_mlevel       );
DECLARE_DO_FUN( do_pray         );
DECLARE_DO_FUN( do_noyel        );
DECLARE_DO_FUN( do_noyell       );
DECLARE_DO_FUN( do_mpasound     );
DECLARE_DO_FUN( do_mpjunk       );
DECLARE_DO_FUN( do_disappear    );
DECLARE_DO_FUN( do_imptalk      );
DECLARE_DO_FUN( do_mpstat       );
DECLARE_DO_FUN( do_bringon      );
DECLARE_DO_FUN( do_cwhere       );
DECLARE_DO_FUN( do_last         );
DECLARE_DO_FUN( do_chown        );
DECLARE_DO_FUN( do_rename       );
DECLARE_DO_FUN( do_second       );
DECLARE_DO_FUN( do_secret_arts  );
DECLARE_DO_FUN( do_for          );
DECLARE_DO_FUN( do_repop        );
DECLARE_DO_FUN( do_exlist       );
DECLARE_DO_FUN( do_noxlist       );
DECLARE_DO_FUN( do_vlist        );
DECLARE_DO_FUN( do_tattoo       );
DECLARE_DO_FUN( do_mold		);
DECLARE_DO_FUN( do_olc          );
DECLARE_DO_FUN( do_asave        );
DECLARE_DO_FUN( do_alist        );
DECLARE_DO_FUN( do_resets       );
DECLARE_DO_FUN( do_wanted       );
DECLARE_DO_FUN( do_jail         );
DECLARE_DO_FUN( do_judge        );
DECLARE_DO_FUN( do_deputize     );
DECLARE_DO_FUN( do_squire       );
DECLARE_DO_FUN( do_shield_disarm);
DECLARE_DO_FUN( do_shield_bash);
DECLARE_DO_FUN( do_rake         );
DECLARE_DO_FUN( do_rapid_fire   );
DECLARE_DO_FUN( do_raid         );
DECLARE_DO_FUN( do_rally_justice);
DECLARE_DO_FUN( do_status	);
DECLARE_DO_FUN( do_smite	);
DECLARE_DO_FUN( do_lore		);
DECLARE_DO_FUN( do_lay_on_hands );
DECLARE_DO_FUN( do_detect_hidden);
DECLARE_DO_FUN( do_hotreboot	);
DECLARE_DO_FUN( do_tick		);
DECLARE_DO_FUN( do_cleave	);
DECLARE_DO_FUN( do_assassinate	);
DECLARE_DO_FUN( do_blackjack	);
DECLARE_DO_FUN( do_gag  	);
DECLARE_DO_FUN( do_strangle	);
DECLARE_DO_FUN( do_accept	);
DECLARE_DO_FUN( do_acupuncture  );
DECLARE_DO_FUN( do_herb		);
DECLARE_DO_FUN( do_tame		);
DECLARE_DO_FUN( do_beast_call	);
DECLARE_DO_FUN( do_rage 	);
DECLARE_DO_FUN( do_bodyslam	);
DECLARE_DO_FUN( do_grapple	);
DECLARE_DO_FUN( do_charge	);
DECLARE_DO_FUN( do_shoot	);
DECLARE_DO_FUN( do_ambush	);
DECLARE_DO_FUN( do_endure	);
DECLARE_DO_FUN( do_barkskin	);
DECLARE_DO_FUN( do_warcry	);
DECLARE_DO_FUN( do_circle	);
DECLARE_DO_FUN( do_swing	);
DECLARE_DO_FUN( do_windmill	);
DECLARE_DO_FUN( do_cusinart	);
DECLARE_DO_FUN( do_headbutt	);
DECLARE_DO_FUN( do_camouflage	);
DECLARE_DO_FUN( do_chameleon	);
DECLARE_DO_FUN( do_camp 	);
DECLARE_DO_FUN( do_keen_sight	);
DECLARE_DO_FUN( do_vanish	);
DECLARE_DO_FUN( do_chii		);
DECLARE_DO_FUN( do_blindness_dust);
DECLARE_DO_FUN( do_poison_smoke	);
DECLARE_DO_FUN( do_butcher	);
DECLARE_DO_FUN( do_anum		);
DECLARE_DO_FUN( do_balance      );
DECLARE_DO_FUN( do_withdraw     );
DECLARE_DO_FUN( do_deposit      );
DECLARE_DO_FUN( do_request      );
DECLARE_DO_FUN( do_crashus	);
DECLARE_DO_FUN( do_freezeus	);
DECLARE_DO_FUN( do_interest	);
DECLARE_DO_FUN( do_interrupt	);
DECLARE_DO_FUN( do_identify	);
DECLARE_DO_FUN( do_star_seer	);
DECLARE_DO_FUN( do_obelisk_seer	);
DECLARE_DO_FUN( do_random	);
DECLARE_DO_FUN( do_home		);
DECLARE_DO_FUN( do_release	);
DECLARE_DO_FUN( do_call		);
DECLARE_DO_FUN( do_caltraps	);
DECLARE_DO_FUN( do_nerve	);
DECLARE_DO_FUN( do_resistance	);
DECLARE_DO_FUN( do_truesight	);
DECLARE_DO_FUN( do_trophy	);
DECLARE_DO_FUN( do_spellbane	);
DECLARE_DO_FUN( do_cognizance	);
DECLARE_DO_FUN( do_stance	);
DECLARE_DO_FUN( do_permit	);
DECLARE_DO_FUN( do_hometown	);
DECLARE_DO_FUN( do_knight	);
DECLARE_DO_FUN( do_guard	);
DECLARE_DO_FUN( do_guild	);
DECLARE_DO_FUN( do_dismount	);
DECLARE_DO_FUN( do_mount	);
DECLARE_DO_FUN( do_spy		);
DECLARE_DO_FUN( do_affstrip	); 
DECLARE_DO_FUN( do_songstrip	); 
DECLARE_DO_FUN( do_in_range	); 
DECLARE_DO_FUN( do_relax	);
DECLARE_DO_FUN( do_weapon_cleave);
DECLARE_DO_FUN( do_weapon_lock);
DECLARE_DO_FUN( do_shield_cleave);
DECLARE_DO_FUN( do_if		);
DECLARE_DO_FUN( do_endif	);
DECLARE_DO_FUN( do_pipe		);
DECLARE_DO_FUN( do_doas		);
DECLARE_DO_FUN( do_brew		);
DECLARE_DO_FUN( do_challenge	); 
DECLARE_DO_FUN( do_record	); 
DECLARE_DO_FUN( do_contract	);
DECLARE_DO_FUN( do_contingency	);
DECLARE_DO_FUN( do_herblore	);
DECLARE_DO_FUN( do_leader	);
DECLARE_DO_FUN( do_left		);
DECLARE_DO_FUN( do_doof		);
DECLARE_DO_FUN( do_coding	);
DECLARE_DO_FUN( do_most 	);
DECLARE_DO_FUN( do_plag		);
DECLARE_DO_FUN( do_lastname	);
DECLARE_DO_FUN( do_immpass	);
DECLARE_DO_FUN( do_hearall	);
DECLARE_DO_FUN( do_untransfer	);
DECLARE_DO_FUN( do_bounty_collect );
DECLARE_DO_FUN( do_mortal_wound	);
DECLARE_DO_FUN( do_fletchery	);
DECLARE_DO_FUN( do_ranger_staff	);
DECLARE_DO_FUN( do_healer_staff	);
DECLARE_DO_FUN( do_druid_staff  );
DECLARE_DO_FUN( do_invoke	);
DECLARE_DO_FUN( do_throw	);
DECLARE_DO_FUN( do_throatcut	);
DECLARE_DO_FUN( do_roar 	);
DECLARE_DO_FUN( do_edge_craft	);
DECLARE_DO_FUN( do_counterfeit	);
DECLARE_DO_FUN( do_scout	);
DECLARE_DO_FUN( do_ignore	);
DECLARE_DO_FUN( do_servant	);
DECLARE_DO_FUN( do_army		);
DECLARE_DO_FUN( do_hound_obey   );
DECLARE_DO_FUN( do_commune	);
DECLARE_DO_FUN( do_defecate	);
DECLARE_DO_FUN( do_vomit	);
DECLARE_DO_FUN( do_addpsalm	);
DECLARE_DO_FUN( do_rempsalm	);
DECLARE_DO_FUN( do_setquest	);
DECLARE_DO_FUN( do_tempquest	);
DECLARE_DO_FUN( do_permquest	);
DECLARE_DO_FUN( do_inviquest	);
DECLARE_DO_FUN( do_remquest	);
DECLARE_DO_FUN( do_setquest2	);
DECLARE_DO_FUN( do_deathmark	); 
DECLARE_DO_FUN( do_quest	);
DECLARE_DO_FUN( do_oowner	);
DECLARE_DO_FUN( do_pilfer	);
DECLARE_DO_FUN( do_stalk	);
DECLARE_DO_FUN( do_control	);
DECLARE_DO_FUN( do_break	);
DECLARE_DO_FUN( do_ensnare	);
DECLARE_DO_FUN( do_qslay	);
DECLARE_DO_FUN( do_drain	);
DECLARE_DO_FUN( do_coffin	);
DECLARE_DO_FUN( do_tear		);
DECLARE_DO_FUN( do_quest_crus	);
DECLARE_DO_FUN( do_quest_king	);
DECLARE_DO_FUN( do_quest_psi	);
DECLARE_DO_FUN( do_quest_race	);
DECLARE_DO_FUN( do_quest_vamp	);
DECLARE_DO_FUN( do_quest_druid  );
DECLARE_DO_FUN( do_quest_demon	);
DECLARE_DO_FUN( do_quest_avatar	);
DECLARE_DO_FUN( do_quest_undead	);
DECLARE_DO_FUN( do_quest_elder	);
DECLARE_DO_FUN( do_quest_shaman	);
DECLARE_DO_FUN( do_quest_healer	);
DECLARE_DO_FUN( do_quest_druid	);
DECLARE_DO_FUN( do_masquerade	);
DECLARE_DO_FUN( do_maelstrom	);
DECLARE_DO_FUN( do_convert	);
DECLARE_DO_FUN( do_select	);
DECLARE_DO_FUN( do_vote		);
DECLARE_DO_FUN( do_royal        );
DECLARE_DO_FUN( do_badname      );
DECLARE_DO_FUN( do_stake        );
DECLARE_DO_FUN( do_proficiency  );
DECLARE_DO_FUN( do_write_tome	);
DECLARE_DO_FUN( do_read_tome	);
DECLARE_DO_FUN( do_toxify	);
DECLARE_DO_FUN( do_top10	);
DECLARE_DO_FUN( do_tackle	);
DECLARE_DO_FUN( do_thrust	);
DECLARE_DO_FUN( do_eavesdrop	);
DECLARE_DO_FUN( do_pixie_dust	);
DECLARE_DO_FUN( do_meditate	);
DECLARE_DO_FUN( do_beads	);
DECLARE_DO_FUN( do_monkey	);
DECLARE_DO_FUN( do_tiger	);
DECLARE_DO_FUN( do_crane	);
DECLARE_DO_FUN( do_mantis	);
DECLARE_DO_FUN( do_mantis_maul	);
DECLARE_DO_FUN(	do_mana_charge	);
DECLARE_DO_FUN(	do_voodoo	);
DECLARE_DO_FUN( do_drunken	);
DECLARE_DO_FUN( do_horse	);
DECLARE_DO_FUN( do_catalepsy	);
DECLARE_DO_FUN( do_revive	);
DECLARE_DO_FUN( do_aura		);
DECLARE_DO_FUN( do_sense_motion	);
DECLARE_DO_FUN( do_healing	);
DECLARE_DO_FUN( do_apprehend	);
DECLARE_DO_FUN( do_kinetics	);
DECLARE_DO_FUN( do_outcast	);
DECLARE_DO_FUN( do_empower	);
DECLARE_DO_FUN( do_thrash	);
DECLARE_DO_FUN( do_store_chii	);
DECLARE_DO_FUN( do_chii_bolt	);
DECLARE_DO_FUN( do_trip_wire	);
DECLARE_DO_FUN( do_deathblow	);
DECLARE_DO_FUN( do_trap_silvanus);
DECLARE_DO_FUN( do_entomb	);
DECLARE_DO_FUN( do_untomb	);
DECLARE_DO_FUN( do_reversal	);
DECLARE_DO_FUN( do_test		);
DECLARE_DO_FUN( do_dragon	);
DECLARE_DO_FUN( do_buddha	);
DECLARE_DO_FUN( do_burrow	);
DECLARE_DO_FUN( do_unburrow	);
DECLARE_DO_FUN( do_transform	);
DECLARE_DO_FUN( do_cone		);
DECLARE_DO_FUN( do_double_grip	);
DECLARE_DO_FUN( do_dark_ritual	);
DECLARE_DO_FUN( do_damage	);
DECLARE_DO_FUN( do_cutpurse	);
DECLARE_DO_FUN( do_cutter	);
DECLARE_DO_FUN( do_insect_swarm	);
DECLARE_DO_FUN( do_offhand_disarm );
DECLARE_DO_FUN( do_shed		);
DECLARE_DO_FUN( do_fasting	);
DECLARE_DO_FUN( do_swallow	);
DECLARE_DO_FUN( do_probe	);
DECLARE_DO_FUN( do_decoy	);
DECLARE_DO_FUN( do_crusade	);
DECLARE_DO_FUN( do_avenger	);
DECLARE_DO_FUN( do_heroism	);
DECLARE_DO_FUN( do_sing		);
DECLARE_DO_FUN( do_rehearse	);
DECLARE_DO_FUN( do_songs	);
DECLARE_DO_FUN( do_matchip	);
DECLARE_DO_FUN( do_impget	);
DECLARE_DO_FUN( do_refrain	);
DECLARE_DO_FUN( do_tarot	);
DECLARE_DO_FUN( do_grant	);
DECLARE_DO_FUN( do_leech	);
DECLARE_DO_FUN( do_tko		);
DECLARE_DO_FUN( do_create_torch	);
DECLARE_DO_FUN( do_noquit	);
DECLARE_DO_FUN( do_noaffquit	);
DECLARE_DO_FUN( do_analyze	);
DECLARE_DO_FUN( do_panhandle	);
DECLARE_DO_FUN( do_pack_call	);
DECLARE_DO_FUN( do_attract	);
DECLARE_DO_FUN( do_taunt	);
DECLARE_DO_FUN( do_uppercut	);
DECLARE_DO_FUN( do_set_alarm	);
DECLARE_DO_FUN(	do_qtrans	);
DECLARE_DO_FUN(	do_ventriloquate);
DECLARE_DO_FUN(	do_duet		);
DECLARE_DO_FUN(	do_tune		);
DECLARE_DO_FUN(	do_feed		);
DECLARE_DO_FUN(	do_feign	);
DECLARE_DO_FUN(	do_ignite	);
DECLARE_DO_FUN(	do_alias	);
DECLARE_DO_FUN(	do_advself	);
DECLARE_DO_FUN(	do_allowname	);
DECLARE_DO_FUN(	do_appdesc	);
DECLARE_DO_FUN(	do_history	);
DECLARE_DO_FUN(	do_ram		);
DECLARE_DO_FUN(	do_anger	);
DECLARE_DO_FUN( do_call_roc	);
DECLARE_DO_FUN( do_warmaster_code );
DECLARE_DO_FUN( do_haymaker	);
DECLARE_DO_FUN(	do_deity	);
DECLARE_DO_FUN(	do_brand_weapon	);
DECLARE_DO_FUN( do_entangle     );

void do_affects2(CHAR_DATA *ch, CHAR_DATA *victim );
void do_dirting ( CHAR_DATA *ch, int wait, char *argument);

// 04-10 20:00 Ath: added: do_coding
// 04-17 21:00 Viri: added do_seep
// 05-07 15:00 Raght: added do_warmaster_code
// 05-08-00 Viri: Added do_haymaker.
// 05-08-00 Viri: Added do_deity.
// 11-28-00 Ath: Added do_affects2 prototype
//01-02-01 Ath: Added "application" type notes
