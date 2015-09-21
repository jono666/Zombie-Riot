/**
 * ====================
 *     Zombie Riot
 *   File: zombieriot.inc
 *   Author: Greyscale
 * ==================== 
 */


#define DXLEVEL_MIN 90

#define DEFAULT_FOV 90
#define DEFAULT_GRAVITY 1.0

new bool:market;

new String:gMapConfig[PLATFORM_MAX_PATH];

new gDay;

new gZombieTeam;
new gHumanTeam;

new gZombiesKilled;

new dxLevel[MAXPLAYERS+1];

new bool:bZombie[MAXPLAYERS+1];
new Handle:trieDeaths = INVALID_HANDLE;

new gRespawnTime[MAXPLAYERS+1];
new Handle:tRespawn[MAXPLAYERS+1];
new Handle:tZVision[MAXPLAYERS+1];

new bool:bZVision[MAXPLAYERS+1];

new Handle:tHUD = INVALID_HANDLE;
new Handle:tFreeze = INVALID_HANDLE;

new QueryCookie:mat_dxlevel;

FindClientDXLevel(client)
{
    if (IsFakeClient(client))
    {
        return;
    }
    
    mat_dxlevel = QueryClientConVar(client, "mat_dxlevel", DXLevelClientQuery);
}

public DXLevelClientQuery(QueryCookie:cookie, client, ConVarQueryResult:result, const String:cvarName[], const String:cvarValue[])
{
    if (cookie != mat_dxlevel)
    {
        return;
    }
    
    dxLevel[client] = 0;
    
    if (result != ConVarQuery_Okay)
    {
        return;
    }
    
    dxLevel[client] = StringToInt(cvarValue);
}

DisplayClientOverlay(client, const String:overlay[])
{
    if (!dxLevel[client])
    {
        FindClientDXLevel(client);
        
        return;
    }
    
    if (dxLevel[client] >= DXLEVEL_MIN)
    {
        ClientCommand(client, "r_screenoverlay \"%s\"", overlay);
    }
    else
    {
        ZRiot_PrintCenterText(client, "DX90 not supported", dxLevel[client], DXLEVEL_MIN);
    }
}

stock GotoNextMap()
{
    new Handle:timelimit = FindConVar("mp_timelimit");
    
    if (timelimit == INVALID_HANDLE)
    {
        return;
    }
    
    new flags = GetConVarFlags(timelimit) & FCVAR_NOTIFY;
    SetConVarFlags(timelimit, flags);
    
    SetConVarInt(timelimit, 1);
}