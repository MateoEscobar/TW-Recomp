#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DF470
// Address: 0x4df470 - 0x4df840
void sub_004DF470_0x4df470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF470_0x4df470");
#endif

    switch (ctx->pc) {
        case 0x4df470u: goto label_4df470;
        case 0x4df474u: goto label_4df474;
        case 0x4df478u: goto label_4df478;
        case 0x4df47cu: goto label_4df47c;
        case 0x4df480u: goto label_4df480;
        case 0x4df484u: goto label_4df484;
        case 0x4df488u: goto label_4df488;
        case 0x4df48cu: goto label_4df48c;
        case 0x4df490u: goto label_4df490;
        case 0x4df494u: goto label_4df494;
        case 0x4df498u: goto label_4df498;
        case 0x4df49cu: goto label_4df49c;
        case 0x4df4a0u: goto label_4df4a0;
        case 0x4df4a4u: goto label_4df4a4;
        case 0x4df4a8u: goto label_4df4a8;
        case 0x4df4acu: goto label_4df4ac;
        case 0x4df4b0u: goto label_4df4b0;
        case 0x4df4b4u: goto label_4df4b4;
        case 0x4df4b8u: goto label_4df4b8;
        case 0x4df4bcu: goto label_4df4bc;
        case 0x4df4c0u: goto label_4df4c0;
        case 0x4df4c4u: goto label_4df4c4;
        case 0x4df4c8u: goto label_4df4c8;
        case 0x4df4ccu: goto label_4df4cc;
        case 0x4df4d0u: goto label_4df4d0;
        case 0x4df4d4u: goto label_4df4d4;
        case 0x4df4d8u: goto label_4df4d8;
        case 0x4df4dcu: goto label_4df4dc;
        case 0x4df4e0u: goto label_4df4e0;
        case 0x4df4e4u: goto label_4df4e4;
        case 0x4df4e8u: goto label_4df4e8;
        case 0x4df4ecu: goto label_4df4ec;
        case 0x4df4f0u: goto label_4df4f0;
        case 0x4df4f4u: goto label_4df4f4;
        case 0x4df4f8u: goto label_4df4f8;
        case 0x4df4fcu: goto label_4df4fc;
        case 0x4df500u: goto label_4df500;
        case 0x4df504u: goto label_4df504;
        case 0x4df508u: goto label_4df508;
        case 0x4df50cu: goto label_4df50c;
        case 0x4df510u: goto label_4df510;
        case 0x4df514u: goto label_4df514;
        case 0x4df518u: goto label_4df518;
        case 0x4df51cu: goto label_4df51c;
        case 0x4df520u: goto label_4df520;
        case 0x4df524u: goto label_4df524;
        case 0x4df528u: goto label_4df528;
        case 0x4df52cu: goto label_4df52c;
        case 0x4df530u: goto label_4df530;
        case 0x4df534u: goto label_4df534;
        case 0x4df538u: goto label_4df538;
        case 0x4df53cu: goto label_4df53c;
        case 0x4df540u: goto label_4df540;
        case 0x4df544u: goto label_4df544;
        case 0x4df548u: goto label_4df548;
        case 0x4df54cu: goto label_4df54c;
        case 0x4df550u: goto label_4df550;
        case 0x4df554u: goto label_4df554;
        case 0x4df558u: goto label_4df558;
        case 0x4df55cu: goto label_4df55c;
        case 0x4df560u: goto label_4df560;
        case 0x4df564u: goto label_4df564;
        case 0x4df568u: goto label_4df568;
        case 0x4df56cu: goto label_4df56c;
        case 0x4df570u: goto label_4df570;
        case 0x4df574u: goto label_4df574;
        case 0x4df578u: goto label_4df578;
        case 0x4df57cu: goto label_4df57c;
        case 0x4df580u: goto label_4df580;
        case 0x4df584u: goto label_4df584;
        case 0x4df588u: goto label_4df588;
        case 0x4df58cu: goto label_4df58c;
        case 0x4df590u: goto label_4df590;
        case 0x4df594u: goto label_4df594;
        case 0x4df598u: goto label_4df598;
        case 0x4df59cu: goto label_4df59c;
        case 0x4df5a0u: goto label_4df5a0;
        case 0x4df5a4u: goto label_4df5a4;
        case 0x4df5a8u: goto label_4df5a8;
        case 0x4df5acu: goto label_4df5ac;
        case 0x4df5b0u: goto label_4df5b0;
        case 0x4df5b4u: goto label_4df5b4;
        case 0x4df5b8u: goto label_4df5b8;
        case 0x4df5bcu: goto label_4df5bc;
        case 0x4df5c0u: goto label_4df5c0;
        case 0x4df5c4u: goto label_4df5c4;
        case 0x4df5c8u: goto label_4df5c8;
        case 0x4df5ccu: goto label_4df5cc;
        case 0x4df5d0u: goto label_4df5d0;
        case 0x4df5d4u: goto label_4df5d4;
        case 0x4df5d8u: goto label_4df5d8;
        case 0x4df5dcu: goto label_4df5dc;
        case 0x4df5e0u: goto label_4df5e0;
        case 0x4df5e4u: goto label_4df5e4;
        case 0x4df5e8u: goto label_4df5e8;
        case 0x4df5ecu: goto label_4df5ec;
        case 0x4df5f0u: goto label_4df5f0;
        case 0x4df5f4u: goto label_4df5f4;
        case 0x4df5f8u: goto label_4df5f8;
        case 0x4df5fcu: goto label_4df5fc;
        case 0x4df600u: goto label_4df600;
        case 0x4df604u: goto label_4df604;
        case 0x4df608u: goto label_4df608;
        case 0x4df60cu: goto label_4df60c;
        case 0x4df610u: goto label_4df610;
        case 0x4df614u: goto label_4df614;
        case 0x4df618u: goto label_4df618;
        case 0x4df61cu: goto label_4df61c;
        case 0x4df620u: goto label_4df620;
        case 0x4df624u: goto label_4df624;
        case 0x4df628u: goto label_4df628;
        case 0x4df62cu: goto label_4df62c;
        case 0x4df630u: goto label_4df630;
        case 0x4df634u: goto label_4df634;
        case 0x4df638u: goto label_4df638;
        case 0x4df63cu: goto label_4df63c;
        case 0x4df640u: goto label_4df640;
        case 0x4df644u: goto label_4df644;
        case 0x4df648u: goto label_4df648;
        case 0x4df64cu: goto label_4df64c;
        case 0x4df650u: goto label_4df650;
        case 0x4df654u: goto label_4df654;
        case 0x4df658u: goto label_4df658;
        case 0x4df65cu: goto label_4df65c;
        case 0x4df660u: goto label_4df660;
        case 0x4df664u: goto label_4df664;
        case 0x4df668u: goto label_4df668;
        case 0x4df66cu: goto label_4df66c;
        case 0x4df670u: goto label_4df670;
        case 0x4df674u: goto label_4df674;
        case 0x4df678u: goto label_4df678;
        case 0x4df67cu: goto label_4df67c;
        case 0x4df680u: goto label_4df680;
        case 0x4df684u: goto label_4df684;
        case 0x4df688u: goto label_4df688;
        case 0x4df68cu: goto label_4df68c;
        case 0x4df690u: goto label_4df690;
        case 0x4df694u: goto label_4df694;
        case 0x4df698u: goto label_4df698;
        case 0x4df69cu: goto label_4df69c;
        case 0x4df6a0u: goto label_4df6a0;
        case 0x4df6a4u: goto label_4df6a4;
        case 0x4df6a8u: goto label_4df6a8;
        case 0x4df6acu: goto label_4df6ac;
        case 0x4df6b0u: goto label_4df6b0;
        case 0x4df6b4u: goto label_4df6b4;
        case 0x4df6b8u: goto label_4df6b8;
        case 0x4df6bcu: goto label_4df6bc;
        case 0x4df6c0u: goto label_4df6c0;
        case 0x4df6c4u: goto label_4df6c4;
        case 0x4df6c8u: goto label_4df6c8;
        case 0x4df6ccu: goto label_4df6cc;
        case 0x4df6d0u: goto label_4df6d0;
        case 0x4df6d4u: goto label_4df6d4;
        case 0x4df6d8u: goto label_4df6d8;
        case 0x4df6dcu: goto label_4df6dc;
        case 0x4df6e0u: goto label_4df6e0;
        case 0x4df6e4u: goto label_4df6e4;
        case 0x4df6e8u: goto label_4df6e8;
        case 0x4df6ecu: goto label_4df6ec;
        case 0x4df6f0u: goto label_4df6f0;
        case 0x4df6f4u: goto label_4df6f4;
        case 0x4df6f8u: goto label_4df6f8;
        case 0x4df6fcu: goto label_4df6fc;
        case 0x4df700u: goto label_4df700;
        case 0x4df704u: goto label_4df704;
        case 0x4df708u: goto label_4df708;
        case 0x4df70cu: goto label_4df70c;
        case 0x4df710u: goto label_4df710;
        case 0x4df714u: goto label_4df714;
        case 0x4df718u: goto label_4df718;
        case 0x4df71cu: goto label_4df71c;
        case 0x4df720u: goto label_4df720;
        case 0x4df724u: goto label_4df724;
        case 0x4df728u: goto label_4df728;
        case 0x4df72cu: goto label_4df72c;
        case 0x4df730u: goto label_4df730;
        case 0x4df734u: goto label_4df734;
        case 0x4df738u: goto label_4df738;
        case 0x4df73cu: goto label_4df73c;
        case 0x4df740u: goto label_4df740;
        case 0x4df744u: goto label_4df744;
        case 0x4df748u: goto label_4df748;
        case 0x4df74cu: goto label_4df74c;
        case 0x4df750u: goto label_4df750;
        case 0x4df754u: goto label_4df754;
        case 0x4df758u: goto label_4df758;
        case 0x4df75cu: goto label_4df75c;
        case 0x4df760u: goto label_4df760;
        case 0x4df764u: goto label_4df764;
        case 0x4df768u: goto label_4df768;
        case 0x4df76cu: goto label_4df76c;
        case 0x4df770u: goto label_4df770;
        case 0x4df774u: goto label_4df774;
        case 0x4df778u: goto label_4df778;
        case 0x4df77cu: goto label_4df77c;
        case 0x4df780u: goto label_4df780;
        case 0x4df784u: goto label_4df784;
        case 0x4df788u: goto label_4df788;
        case 0x4df78cu: goto label_4df78c;
        case 0x4df790u: goto label_4df790;
        case 0x4df794u: goto label_4df794;
        case 0x4df798u: goto label_4df798;
        case 0x4df79cu: goto label_4df79c;
        case 0x4df7a0u: goto label_4df7a0;
        case 0x4df7a4u: goto label_4df7a4;
        case 0x4df7a8u: goto label_4df7a8;
        case 0x4df7acu: goto label_4df7ac;
        case 0x4df7b0u: goto label_4df7b0;
        case 0x4df7b4u: goto label_4df7b4;
        case 0x4df7b8u: goto label_4df7b8;
        case 0x4df7bcu: goto label_4df7bc;
        case 0x4df7c0u: goto label_4df7c0;
        case 0x4df7c4u: goto label_4df7c4;
        case 0x4df7c8u: goto label_4df7c8;
        case 0x4df7ccu: goto label_4df7cc;
        case 0x4df7d0u: goto label_4df7d0;
        case 0x4df7d4u: goto label_4df7d4;
        case 0x4df7d8u: goto label_4df7d8;
        case 0x4df7dcu: goto label_4df7dc;
        case 0x4df7e0u: goto label_4df7e0;
        case 0x4df7e4u: goto label_4df7e4;
        case 0x4df7e8u: goto label_4df7e8;
        case 0x4df7ecu: goto label_4df7ec;
        case 0x4df7f0u: goto label_4df7f0;
        case 0x4df7f4u: goto label_4df7f4;
        case 0x4df7f8u: goto label_4df7f8;
        case 0x4df7fcu: goto label_4df7fc;
        case 0x4df800u: goto label_4df800;
        case 0x4df804u: goto label_4df804;
        case 0x4df808u: goto label_4df808;
        case 0x4df80cu: goto label_4df80c;
        case 0x4df810u: goto label_4df810;
        case 0x4df814u: goto label_4df814;
        case 0x4df818u: goto label_4df818;
        case 0x4df81cu: goto label_4df81c;
        case 0x4df820u: goto label_4df820;
        case 0x4df824u: goto label_4df824;
        case 0x4df828u: goto label_4df828;
        case 0x4df82cu: goto label_4df82c;
        case 0x4df830u: goto label_4df830;
        case 0x4df834u: goto label_4df834;
        case 0x4df838u: goto label_4df838;
        case 0x4df83cu: goto label_4df83c;
        default: break;
    }

    ctx->pc = 0x4df470u;

label_4df470:
    // 0x4df470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4df470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4df474:
    // 0x4df474: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4df474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4df478:
    // 0x4df478: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4df478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4df47c:
    // 0x4df47c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4df47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4df480:
    // 0x4df480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4df480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4df484:
    // 0x4df484: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4df484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4df488:
    // 0x4df488: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4df488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4df48c:
    // 0x4df48c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4df48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df490:
    // 0x4df490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4df494:
    // 0x4df494: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4df494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4df498:
    // 0x4df498: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4df49c:
    if (ctx->pc == 0x4DF49Cu) {
        ctx->pc = 0x4DF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF498u;
        // 0x4df49c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF4A0u;
        goto label_4df4a0;
    }
    ctx->pc = 0x4DF498u;
    {
        const bool branch_taken_0x4df498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF498u;
        // 0x4df49c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df498) {
            ctx->pc = 0x4DF4BCu;
            goto label_4df4bc;
        }
    }
    ctx->pc = 0x4DF4A0u;
label_4df4a0:
    // 0x4df4a0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4df4a4:
    if (ctx->pc == 0x4DF4A4u) {
        ctx->pc = 0x4DF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4A0u;
        // 0x4df4a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF4A8u;
        goto label_4df4a8;
    }
    ctx->pc = 0x4DF4A0u;
    {
        const bool branch_taken_0x4df4a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4A0u;
        // 0x4df4a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df4a0) {
            ctx->pc = 0x4DF4C0u;
            goto label_4df4c0;
        }
    }
    ctx->pc = 0x4DF4A8u;
label_4df4a8:
    // 0x4df4a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4df4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4df4ac:
    // 0x4df4ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4df4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4df4b0:
    // 0x4df4b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4df4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4df4b4:
    // 0x4df4b4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4df4b8:
    if (ctx->pc == 0x4DF4B8u) {
        ctx->pc = 0x4DF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4B4u;
        // 0x4df4b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF4BCu;
        goto label_4df4bc;
    }
    ctx->pc = 0x4DF4B4u;
    {
        const bool branch_taken_0x4df4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4B4u;
        // 0x4df4b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df4b4) {
            ctx->pc = 0x4DF550u;
            goto label_4df550;
        }
    }
    ctx->pc = 0x4DF4BCu;
label_4df4bc:
    // 0x4df4bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df4c0:
    // 0x4df4c0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4df4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4df4c4:
    // 0x4df4c4: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4df4c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4df4c8:
    // 0x4df4c8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4df4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4df4cc:
    // 0x4df4cc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4df4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4df4d0:
    // 0x4df4d0: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4df4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4df4d4:
    // 0x4df4d4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4df4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4df4d8:
    // 0x4df4d8: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4df4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4df4dc:
    // 0x4df4dc: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4df4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4df4e0:
    // 0x4df4e0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4df4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4df4e4:
    // 0x4df4e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4df4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4df4e8:
    // 0x4df4e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4df4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4df4ec:
    // 0x4df4ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4df4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4df4f0:
    // 0x4df4f0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4df4f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4df4f4:
    // 0x4df4f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4df4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4df4f8:
    // 0x4df4f8: 0x40f809  jalr        $v0
label_4df4fc:
    if (ctx->pc == 0x4DF4FCu) {
        ctx->pc = 0x4DF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4F8u;
        // 0x4df4fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF500u;
        goto label_4df500;
    }
    ctx->pc = 0x4DF4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DF500u);
        ctx->pc = 0x4DF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4F8u;
        // 0x4df4fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF4F8u, 0x4DF500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF500u;
label_4df500:
    // 0x4df500: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4df500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df504:
    // 0x4df504: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4df504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4df508:
    // 0x4df508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4df50c:
    if (ctx->pc == 0x4DF50Cu) {
        ctx->pc = 0x4DF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF508u;
        // 0x4df50c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF510u;
        goto label_4df510;
    }
    ctx->pc = 0x4DF508u;
    {
        const bool branch_taken_0x4df508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF508u;
        // 0x4df50c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df508) {
            ctx->pc = 0x4DF520u;
            goto label_4df520;
        }
    }
    ctx->pc = 0x4DF510u;
label_4df510:
    // 0x4df510: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4df510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4df514:
    // 0x4df514: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4df514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4df518:
    // 0x4df518: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4df518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4df51c:
    // 0x4df51c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4df51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4df520:
    // 0x4df520: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4df520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4df524:
    // 0x4df524: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4df524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4df528:
    // 0x4df528: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4df52c:
    if (ctx->pc == 0x4DF52Cu) {
        ctx->pc = 0x4DF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF528u;
        // 0x4df52c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF530u;
        goto label_4df530;
    }
    ctx->pc = 0x4DF528u;
    {
        const bool branch_taken_0x4df528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df528) {
            ctx->pc = 0x4DF52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF528u;
            // 0x4df52c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF540u;
            goto label_4df540;
        }
    }
    ctx->pc = 0x4DF530u;
label_4df530:
    // 0x4df530: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4df530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4df534:
    // 0x4df534: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4df534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4df538:
    // 0x4df538: 0x10000022  b           . + 4 + (0x22 << 2)
label_4df53c:
    if (ctx->pc == 0x4DF53Cu) {
        ctx->pc = 0x4DF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF538u;
        // 0x4df53c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF540u;
        goto label_4df540;
    }
    ctx->pc = 0x4DF538u;
    {
        const bool branch_taken_0x4df538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF538u;
        // 0x4df53c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df538) {
            ctx->pc = 0x4DF5C4u;
            goto label_4df5c4;
        }
    }
    ctx->pc = 0x4DF540u;
label_4df540:
    // 0x4df540: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4df544:
    if (ctx->pc == 0x4DF544u) {
        ctx->pc = 0x4DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF540u;
        // 0x4df544: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF548u;
        goto label_4df548;
    }
    ctx->pc = 0x4DF540u;
    {
        const bool branch_taken_0x4df540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4df540) {
            ctx->pc = 0x4DF544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF540u;
            // 0x4df544: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF5C4u;
            goto label_4df5c4;
        }
    }
    ctx->pc = 0x4DF548u;
label_4df548:
    // 0x4df548: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4df54c:
    if (ctx->pc == 0x4DF54Cu) {
        ctx->pc = 0x4DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF548u;
        // 0x4df54c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF550u;
        goto label_4df550;
    }
    ctx->pc = 0x4DF548u;
    {
        const bool branch_taken_0x4df548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF548u;
        // 0x4df54c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df548) {
            ctx->pc = 0x4DF5C8u;
            goto label_4df5c8;
        }
    }
    ctx->pc = 0x4DF550u;
label_4df550:
    // 0x4df550: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4df550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4df554:
    // 0x4df554: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4df554u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4df558:
    // 0x4df558: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4df558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4df55c:
    // 0x4df55c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4df55cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4df560:
    // 0x4df560: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4df560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4df564:
    // 0x4df564: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4df564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4df568:
    // 0x4df568: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4df568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4df56c:
    // 0x4df56c: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4df56cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4df570:
    // 0x4df570: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4df570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4df574:
    // 0x4df574: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4df574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4df578:
    // 0x4df578: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4df578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4df57c:
    // 0x4df57c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4df57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4df580:
    // 0x4df580: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4df580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4df584:
    // 0x4df584: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4df584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4df588:
    // 0x4df588: 0x40f809  jalr        $v0
label_4df58c:
    if (ctx->pc == 0x4DF58Cu) {
        ctx->pc = 0x4DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF588u;
        // 0x4df58c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF590u;
        goto label_4df590;
    }
    ctx->pc = 0x4DF588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DF590u);
        ctx->pc = 0x4DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF588u;
        // 0x4df58c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF588u, 0x4DF590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF590u;
label_4df590:
    // 0x4df590: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4df590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df594:
    // 0x4df594: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4df594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4df598:
    // 0x4df598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4df59c:
    if (ctx->pc == 0x4DF59Cu) {
        ctx->pc = 0x4DF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF598u;
        // 0x4df59c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF5A0u;
        goto label_4df5a0;
    }
    ctx->pc = 0x4DF598u;
    {
        const bool branch_taken_0x4df598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF598u;
        // 0x4df59c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df598) {
            ctx->pc = 0x4DF5B0u;
            goto label_4df5b0;
        }
    }
    ctx->pc = 0x4DF5A0u;
label_4df5a0:
    // 0x4df5a0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4df5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4df5a4:
    // 0x4df5a4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4df5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4df5a8:
    // 0x4df5a8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4df5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4df5ac:
    // 0x4df5ac: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4df5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4df5b0:
    // 0x4df5b0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4df5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4df5b4:
    // 0x4df5b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4df5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4df5b8:
    // 0x4df5b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4df5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4df5bc:
    // 0x4df5bc: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4df5c0:
    if (ctx->pc == 0x4DF5C0u) {
        ctx->pc = 0x4DF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5BCu;
        // 0x4df5c0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF5C4u;
        goto label_4df5c4;
    }
    ctx->pc = 0x4DF5BCu;
    {
        const bool branch_taken_0x4df5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4df5bc) {
            ctx->pc = 0x4DF5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF5BCu;
            // 0x4df5c0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF5C4u;
            goto label_4df5c4;
        }
    }
    ctx->pc = 0x4DF5C4u;
label_4df5c4:
    // 0x4df5c4: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4df5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4df5c8:
    // 0x4df5c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4df5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4df5cc:
    // 0x4df5cc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4df5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4df5d0:
    // 0x4df5d0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4df5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4df5d4:
    // 0x4df5d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4df5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4df5d8:
    // 0x4df5d8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4df5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4df5dc:
    // 0x4df5dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4df5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df5e0:
    // 0x4df5e0: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4df5e4:
    if (ctx->pc == 0x4DF5E4u) {
        ctx->pc = 0x4DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5E0u;
        // 0x4df5e4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF5E8u;
        goto label_4df5e8;
    }
    ctx->pc = 0x4DF5E0u;
    {
        const bool branch_taken_0x4df5e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5E0u;
        // 0x4df5e4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df5e0) {
            ctx->pc = 0x4DF804u;
            goto label_4df804;
        }
    }
    ctx->pc = 0x4DF5E8u;
label_4df5e8:
    // 0x4df5e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4df5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4df5ec:
    // 0x4df5ec: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4df5f0:
    if (ctx->pc == 0x4DF5F0u) {
        ctx->pc = 0x4DF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5ECu;
        // 0x4df5f0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF5F4u;
        goto label_4df5f4;
    }
    ctx->pc = 0x4DF5ECu;
    {
        const bool branch_taken_0x4df5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df5ec) {
            ctx->pc = 0x4DF5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF5ECu;
            // 0x4df5f0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF808u;
            goto label_4df808;
        }
    }
    ctx->pc = 0x4DF5F4u;
label_4df5f4:
    // 0x4df5f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4df5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4df5f8:
    // 0x4df5f8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4df5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df5fc:
    // 0x4df5fc: 0x0  nop
    ctx->pc = 0x4df5fcu;
    // NOP
label_4df600:
    // 0x4df600: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4df600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df604:
    // 0x4df604: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4df604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4df608:
    // 0x4df608: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4df60c:
    if (ctx->pc == 0x4DF60Cu) {
        ctx->pc = 0x4DF610u;
        goto label_4df610;
    }
    ctx->pc = 0x4DF608u;
    {
        const bool branch_taken_0x4df608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4df608) {
            ctx->pc = 0x4DF6F4u;
            goto label_4df6f4;
        }
    }
    ctx->pc = 0x4DF610u;
label_4df610:
    // 0x4df610: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4df610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4df614:
    // 0x4df614: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4df618:
    if (ctx->pc == 0x4DF618u) {
        ctx->pc = 0x4DF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF614u;
        // 0x4df618: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF61Cu;
        goto label_4df61c;
    }
    ctx->pc = 0x4DF614u;
    {
        const bool branch_taken_0x4df614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df614) {
            ctx->pc = 0x4DF618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF614u;
            // 0x4df618: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF634u;
            goto label_4df634;
        }
    }
    ctx->pc = 0x4DF61Cu;
label_4df61c:
    // 0x4df61c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4df61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4df620:
    // 0x4df620: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4df624:
    if (ctx->pc == 0x4DF624u) {
        ctx->pc = 0x4DF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF620u;
        // 0x4df624: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF628u;
        goto label_4df628;
    }
    ctx->pc = 0x4DF620u;
    {
        const bool branch_taken_0x4df620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df620) {
            ctx->pc = 0x4DF624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF620u;
            // 0x4df624: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF634u;
            goto label_4df634;
        }
    }
    ctx->pc = 0x4DF628u;
label_4df628:
    // 0x4df628: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4df628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4df62c:
    // 0x4df62c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4df630:
    if (ctx->pc == 0x4DF630u) {
        ctx->pc = 0x4DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF62Cu;
        // 0x4df630: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF634u;
        goto label_4df634;
    }
    ctx->pc = 0x4DF62Cu;
    {
        const bool branch_taken_0x4df62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF62Cu;
        // 0x4df630: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df62c) {
            ctx->pc = 0x4DF710u;
            goto label_4df710;
        }
    }
    ctx->pc = 0x4DF634u;
label_4df634:
    // 0x4df634: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4df634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4df638:
    // 0x4df638: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4df63c:
    if (ctx->pc == 0x4DF63Cu) {
        ctx->pc = 0x4DF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF638u;
        // 0x4df63c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF640u;
        goto label_4df640;
    }
    ctx->pc = 0x4DF638u;
    {
        const bool branch_taken_0x4df638 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4df638) {
            ctx->pc = 0x4DF63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF638u;
            // 0x4df63c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF690u;
            goto label_4df690;
        }
    }
    ctx->pc = 0x4DF640u;
label_4df640:
    // 0x4df640: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4df640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4df644:
    // 0x4df644: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4df644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4df648:
    // 0x4df648: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4df648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4df64c:
    // 0x4df64c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4df64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4df650:
    // 0x4df650: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4df654:
    if (ctx->pc == 0x4DF654u) {
        ctx->pc = 0x4DF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF650u;
        // 0x4df654: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF658u;
        goto label_4df658;
    }
    ctx->pc = 0x4DF650u;
    {
        const bool branch_taken_0x4df650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df650) {
            ctx->pc = 0x4DF654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF650u;
            // 0x4df654: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF658u;
            goto label_4df658;
        }
    }
    ctx->pc = 0x4DF658u;
label_4df658:
    // 0x4df658: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df65c:
    // 0x4df65c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4df65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4df660:
    // 0x4df660: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4df660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df664:
    // 0x4df664: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4df668:
    if (ctx->pc == 0x4DF668u) {
        ctx->pc = 0x4DF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF664u;
        // 0x4df668: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF66Cu;
        goto label_4df66c;
    }
    ctx->pc = 0x4DF664u;
    {
        const bool branch_taken_0x4df664 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df664) {
            ctx->pc = 0x4DF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF664u;
            // 0x4df668: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF674u;
            goto label_4df674;
        }
    }
    ctx->pc = 0x4DF66Cu;
label_4df66c:
    // 0x4df66c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4df670:
    if (ctx->pc == 0x4DF670u) {
        ctx->pc = 0x4DF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF66Cu;
        // 0x4df670: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF674u;
        goto label_4df674;
    }
    ctx->pc = 0x4DF66Cu;
    {
        const bool branch_taken_0x4df66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF66Cu;
        // 0x4df670: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df66c) {
            ctx->pc = 0x4DF684u;
            goto label_4df684;
        }
    }
    ctx->pc = 0x4DF674u;
label_4df674:
    // 0x4df674: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4df674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4df678:
    // 0x4df678: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4df67c:
    if (ctx->pc == 0x4DF67Cu) {
        ctx->pc = 0x4DF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF678u;
        // 0x4df67c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF680u;
        goto label_4df680;
    }
    ctx->pc = 0x4DF678u;
    {
        const bool branch_taken_0x4df678 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4df678) {
            ctx->pc = 0x4DF67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF678u;
            // 0x4df67c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF684u;
            goto label_4df684;
        }
    }
    ctx->pc = 0x4DF680u;
label_4df680:
    // 0x4df680: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4df680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4df684:
    // 0x4df684: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4df684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4df688:
    // 0x4df688: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4df688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4df68c:
    // 0x4df68c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df690:
    // 0x4df690: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4df690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4df694:
    // 0x4df694: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4df694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df698:
    // 0x4df698: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4df698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df69c:
    // 0x4df69c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4df69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4df6a0:
    // 0x4df6a0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4df6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df6a4:
    // 0x4df6a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4df6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df6a8:
    // 0x4df6a8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4df6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4df6ac:
    // 0x4df6ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4df6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4df6b0:
    // 0x4df6b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4df6b4:
    // 0x4df6b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4df6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4df6b8:
    // 0x4df6b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4df6bc:
    if (ctx->pc == 0x4DF6BCu) {
        ctx->pc = 0x4DF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6B8u;
        // 0x4df6bc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6C0u;
        goto label_4df6c0;
    }
    ctx->pc = 0x4DF6B8u;
    {
        const bool branch_taken_0x4df6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df6b8) {
            ctx->pc = 0x4DF6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF6B8u;
            // 0x4df6bc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF6C0u;
            goto label_4df6c0;
        }
    }
    ctx->pc = 0x4DF6C0u;
label_4df6c0:
    // 0x4df6c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4df6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4df6c4:
    // 0x4df6c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4df6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4df6c8:
    // 0x4df6c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4df6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df6cc:
    // 0x4df6cc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4df6d0:
    if (ctx->pc == 0x4DF6D0u) {
        ctx->pc = 0x4DF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6CCu;
        // 0x4df6d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6D4u;
        goto label_4df6d4;
    }
    ctx->pc = 0x4DF6CCu;
    {
        const bool branch_taken_0x4df6cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df6cc) {
            ctx->pc = 0x4DF6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF6CCu;
            // 0x4df6d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF6DCu;
            goto label_4df6dc;
        }
    }
    ctx->pc = 0x4DF6D4u;
label_4df6d4:
    // 0x4df6d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4df6d8:
    if (ctx->pc == 0x4DF6D8u) {
        ctx->pc = 0x4DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6D4u;
        // 0x4df6d8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6DCu;
        goto label_4df6dc;
    }
    ctx->pc = 0x4DF6D4u;
    {
        const bool branch_taken_0x4df6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6D4u;
        // 0x4df6d8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df6d4) {
            ctx->pc = 0x4DF6ECu;
            goto label_4df6ec;
        }
    }
    ctx->pc = 0x4DF6DCu;
label_4df6dc:
    // 0x4df6dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4df6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4df6e0:
    // 0x4df6e0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4df6e4:
    if (ctx->pc == 0x4DF6E4u) {
        ctx->pc = 0x4DF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6E0u;
        // 0x4df6e4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6E8u;
        goto label_4df6e8;
    }
    ctx->pc = 0x4DF6E0u;
    {
        const bool branch_taken_0x4df6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4df6e0) {
            ctx->pc = 0x4DF6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF6E0u;
            // 0x4df6e4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF6ECu;
            goto label_4df6ec;
        }
    }
    ctx->pc = 0x4DF6E8u;
label_4df6e8:
    // 0x4df6e8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4df6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4df6ec:
    // 0x4df6ec: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4df6f0:
    if (ctx->pc == 0x4DF6F0u) {
        ctx->pc = 0x4DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6ECu;
        // 0x4df6f0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6F4u;
        goto label_4df6f4;
    }
    ctx->pc = 0x4DF6ECu;
    {
        const bool branch_taken_0x4df6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6ECu;
        // 0x4df6f0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df6ec) {
            ctx->pc = 0x4DF7E4u;
            goto label_4df7e4;
        }
    }
    ctx->pc = 0x4DF6F4u;
label_4df6f4:
    // 0x4df6f4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4df6f8:
    if (ctx->pc == 0x4DF6F8u) {
        ctx->pc = 0x4DF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF6F4u;
        // 0x4df6f8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF6FCu;
        goto label_4df6fc;
    }
    ctx->pc = 0x4DF6F4u;
    {
        const bool branch_taken_0x4df6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df6f4) {
            ctx->pc = 0x4DF6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF6F4u;
            // 0x4df6f8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF728u;
            goto label_4df728;
        }
    }
    ctx->pc = 0x4DF6FCu;
label_4df6fc:
    // 0x4df6fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4df6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df700:
    // 0x4df700: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4df704:
    if (ctx->pc == 0x4DF704u) {
        ctx->pc = 0x4DF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF700u;
        // 0x4df704: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF708u;
        goto label_4df708;
    }
    ctx->pc = 0x4DF700u;
    {
        const bool branch_taken_0x4df700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df700) {
            ctx->pc = 0x4DF704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF700u;
            // 0x4df704: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF728u;
            goto label_4df728;
        }
    }
    ctx->pc = 0x4DF708u;
label_4df708:
    // 0x4df708: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4df708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4df70c:
    // 0x4df70c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4df70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4df710:
    // 0x4df710: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df714:
    // 0x4df714: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4df714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4df718:
    // 0x4df718: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4df718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4df71c:
    // 0x4df71c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df720:
    // 0x4df720: 0x10000031  b           . + 4 + (0x31 << 2)
label_4df724:
    if (ctx->pc == 0x4DF724u) {
        ctx->pc = 0x4DF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF720u;
        // 0x4df724: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF728u;
        goto label_4df728;
    }
    ctx->pc = 0x4DF720u;
    {
        const bool branch_taken_0x4df720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF720u;
        // 0x4df724: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df720) {
            ctx->pc = 0x4DF7E8u;
            goto label_4df7e8;
        }
    }
    ctx->pc = 0x4DF728u;
label_4df728:
    // 0x4df728: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4df728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4df72c:
    // 0x4df72c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4df730:
    if (ctx->pc == 0x4DF730u) {
        ctx->pc = 0x4DF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF72Cu;
        // 0x4df730: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF734u;
        goto label_4df734;
    }
    ctx->pc = 0x4DF72Cu;
    {
        const bool branch_taken_0x4df72c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4df72c) {
            ctx->pc = 0x4DF730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF72Cu;
            // 0x4df730: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF784u;
            goto label_4df784;
        }
    }
    ctx->pc = 0x4DF734u;
label_4df734:
    // 0x4df734: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4df734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4df738:
    // 0x4df738: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4df738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4df73c:
    // 0x4df73c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4df73cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4df740:
    // 0x4df740: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4df740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4df744:
    // 0x4df744: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4df748:
    if (ctx->pc == 0x4DF748u) {
        ctx->pc = 0x4DF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF744u;
        // 0x4df748: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF74Cu;
        goto label_4df74c;
    }
    ctx->pc = 0x4DF744u;
    {
        const bool branch_taken_0x4df744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df744) {
            ctx->pc = 0x4DF748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF744u;
            // 0x4df748: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF74Cu;
            goto label_4df74c;
        }
    }
    ctx->pc = 0x4DF74Cu;
label_4df74c:
    // 0x4df74c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df750:
    // 0x4df750: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4df750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4df754:
    // 0x4df754: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4df754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df758:
    // 0x4df758: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4df75c:
    if (ctx->pc == 0x4DF75Cu) {
        ctx->pc = 0x4DF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF758u;
        // 0x4df75c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF760u;
        goto label_4df760;
    }
    ctx->pc = 0x4DF758u;
    {
        const bool branch_taken_0x4df758 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df758) {
            ctx->pc = 0x4DF75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF758u;
            // 0x4df75c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF768u;
            goto label_4df768;
        }
    }
    ctx->pc = 0x4DF760u;
label_4df760:
    // 0x4df760: 0x10000005  b           . + 4 + (0x5 << 2)
label_4df764:
    if (ctx->pc == 0x4DF764u) {
        ctx->pc = 0x4DF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF760u;
        // 0x4df764: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF768u;
        goto label_4df768;
    }
    ctx->pc = 0x4DF760u;
    {
        const bool branch_taken_0x4df760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF760u;
        // 0x4df764: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df760) {
            ctx->pc = 0x4DF778u;
            goto label_4df778;
        }
    }
    ctx->pc = 0x4DF768u;
label_4df768:
    // 0x4df768: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4df768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4df76c:
    // 0x4df76c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4df770:
    if (ctx->pc == 0x4DF770u) {
        ctx->pc = 0x4DF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF76Cu;
        // 0x4df770: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF774u;
        goto label_4df774;
    }
    ctx->pc = 0x4DF76Cu;
    {
        const bool branch_taken_0x4df76c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4df76c) {
            ctx->pc = 0x4DF770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF76Cu;
            // 0x4df770: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF778u;
            goto label_4df778;
        }
    }
    ctx->pc = 0x4DF774u;
label_4df774:
    // 0x4df774: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4df774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4df778:
    // 0x4df778: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4df778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4df77c:
    // 0x4df77c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4df77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4df780:
    // 0x4df780: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df784:
    // 0x4df784: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4df784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4df788:
    // 0x4df788: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4df788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df78c:
    // 0x4df78c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df790:
    // 0x4df790: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4df790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4df794:
    // 0x4df794: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4df794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df798:
    // 0x4df798: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4df798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df79c:
    // 0x4df79c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4df79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4df7a0:
    // 0x4df7a0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4df7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4df7a4:
    // 0x4df7a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4df7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4df7a8:
    // 0x4df7a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4df7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4df7ac:
    // 0x4df7ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4df7b0:
    if (ctx->pc == 0x4DF7B0u) {
        ctx->pc = 0x4DF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7ACu;
        // 0x4df7b0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF7B4u;
        goto label_4df7b4;
    }
    ctx->pc = 0x4DF7ACu;
    {
        const bool branch_taken_0x4df7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df7ac) {
            ctx->pc = 0x4DF7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF7ACu;
            // 0x4df7b0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF7B4u;
            goto label_4df7b4;
        }
    }
    ctx->pc = 0x4DF7B4u;
label_4df7b4:
    // 0x4df7b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4df7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4df7b8:
    // 0x4df7b8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4df7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4df7bc:
    // 0x4df7bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4df7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df7c0:
    // 0x4df7c0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4df7c4:
    if (ctx->pc == 0x4DF7C4u) {
        ctx->pc = 0x4DF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7C0u;
        // 0x4df7c4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF7C8u;
        goto label_4df7c8;
    }
    ctx->pc = 0x4DF7C0u;
    {
        const bool branch_taken_0x4df7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df7c0) {
            ctx->pc = 0x4DF7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF7C0u;
            // 0x4df7c4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF7D0u;
            goto label_4df7d0;
        }
    }
    ctx->pc = 0x4DF7C8u;
label_4df7c8:
    // 0x4df7c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4df7cc:
    if (ctx->pc == 0x4DF7CCu) {
        ctx->pc = 0x4DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7C8u;
        // 0x4df7cc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF7D0u;
        goto label_4df7d0;
    }
    ctx->pc = 0x4DF7C8u;
    {
        const bool branch_taken_0x4df7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7C8u;
        // 0x4df7cc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df7c8) {
            ctx->pc = 0x4DF7E0u;
            goto label_4df7e0;
        }
    }
    ctx->pc = 0x4DF7D0u;
label_4df7d0:
    // 0x4df7d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4df7d4:
    // 0x4df7d4: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4df7d8:
    if (ctx->pc == 0x4DF7D8u) {
        ctx->pc = 0x4DF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7D4u;
        // 0x4df7d8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF7DCu;
        goto label_4df7dc;
    }
    ctx->pc = 0x4DF7D4u;
    {
        const bool branch_taken_0x4df7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4df7d4) {
            ctx->pc = 0x4DF7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF7D4u;
            // 0x4df7d8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF7E0u;
            goto label_4df7e0;
        }
    }
    ctx->pc = 0x4DF7DCu;
label_4df7dc:
    // 0x4df7dc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4df7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4df7e0:
    // 0x4df7e0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4df7e4:
    // 0x4df7e4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4df7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4df7e8:
    // 0x4df7e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4df7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df7ec:
    // 0x4df7ec: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4df7f0:
    if (ctx->pc == 0x4DF7F0u) {
        ctx->pc = 0x4DF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7ECu;
        // 0x4df7f0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF7F4u;
        goto label_4df7f4;
    }
    ctx->pc = 0x4DF7ECu;
    {
        const bool branch_taken_0x4df7ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4df7ec) {
            ctx->pc = 0x4DF7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF7ECu;
            // 0x4df7f0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF808u;
            goto label_4df808;
        }
    }
    ctx->pc = 0x4DF7F4u;
label_4df7f4:
    // 0x4df7f4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4df7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4df7f8:
    // 0x4df7f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4df7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4df7fc:
    // 0x4df7fc: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4df800:
    if (ctx->pc == 0x4DF800u) {
        ctx->pc = 0x4DF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7FCu;
        // 0x4df800: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF804u;
        goto label_4df804;
    }
    ctx->pc = 0x4DF7FCu;
    {
        const bool branch_taken_0x4df7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df7fc) {
            ctx->pc = 0x4DF800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF7FCu;
            // 0x4df800: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df600;
        }
    }
    ctx->pc = 0x4DF804u;
label_4df804:
    // 0x4df804: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4df804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df808:
    // 0x4df808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4df808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4df80c:
    // 0x4df80c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4df80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4df810:
    // 0x4df810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4df810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4df814:
    // 0x4df814: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4df814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4df818:
    // 0x4df818: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4df818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df81c:
    // 0x4df81c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4df81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4df820:
    // 0x4df820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df824:
    // 0x4df824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4df824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4df828:
    // 0x4df828: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4df828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4df82c:
    // 0x4df82c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4df82cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4df830:
    // 0x4df830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4df830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df834:
    // 0x4df834: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4df834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df838:
    // 0x4df838: 0x3e00008  jr          $ra
label_4df83c:
    if (ctx->pc == 0x4DF83Cu) {
        ctx->pc = 0x4DF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF838u;
        // 0x4df83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF840u;
        goto label_fallthrough_0x4df838;
    }
    ctx->pc = 0x4DF838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF838u;
        // 0x4df83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4df838:
    ctx->pc = 0x4DF840u;
}
