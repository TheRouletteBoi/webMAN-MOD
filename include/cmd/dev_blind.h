	if(sys_admin && islike(param, "/dev_blind"))
	{
		// /dev_blind          auto-enable & access /dev_blind
		// /dev_blind?         shows status of /dev_blind
		// /dev_blind?1        mounts /dev_blind
		// /dev_blind?enable   mounts /dev_blind
		// /dev_blind?0        unmounts /dev_blind
		// /dev_blind?disable  unmounts /dev_blind

		is_binary = FOLDER_LISTING;
		if(param[10] == '?') 
		{
			if(!param[11]) param[11] = '0' + isDir("/dev_blind");
			goto html_response;
		}
		goto html_listing;
	}
