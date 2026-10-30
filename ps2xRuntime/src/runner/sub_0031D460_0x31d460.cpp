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

// Function: sub_0031D460
// Address: 0x31d460 - 0x31d758
void sub_0031D460_0x31d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D460_0x31d460");
#endif

    switch (ctx->pc) {
        case 0x31d460u: goto label_31d460;
        case 0x31d464u: goto label_31d464;
        case 0x31d468u: goto label_31d468;
        case 0x31d46cu: goto label_31d46c;
        case 0x31d470u: goto label_31d470;
        case 0x31d474u: goto label_31d474;
        case 0x31d478u: goto label_31d478;
        case 0x31d47cu: goto label_31d47c;
        case 0x31d480u: goto label_31d480;
        case 0x31d484u: goto label_31d484;
        case 0x31d488u: goto label_31d488;
        case 0x31d48cu: goto label_31d48c;
        case 0x31d490u: goto label_31d490;
        case 0x31d494u: goto label_31d494;
        case 0x31d498u: goto label_31d498;
        case 0x31d49cu: goto label_31d49c;
        case 0x31d4a0u: goto label_31d4a0;
        case 0x31d4a4u: goto label_31d4a4;
        case 0x31d4a8u: goto label_31d4a8;
        case 0x31d4acu: goto label_31d4ac;
        case 0x31d4b0u: goto label_31d4b0;
        case 0x31d4b4u: goto label_31d4b4;
        case 0x31d4b8u: goto label_31d4b8;
        case 0x31d4bcu: goto label_31d4bc;
        case 0x31d4c0u: goto label_31d4c0;
        case 0x31d4c4u: goto label_31d4c4;
        case 0x31d4c8u: goto label_31d4c8;
        case 0x31d4ccu: goto label_31d4cc;
        case 0x31d4d0u: goto label_31d4d0;
        case 0x31d4d4u: goto label_31d4d4;
        case 0x31d4d8u: goto label_31d4d8;
        case 0x31d4dcu: goto label_31d4dc;
        case 0x31d4e0u: goto label_31d4e0;
        case 0x31d4e4u: goto label_31d4e4;
        case 0x31d4e8u: goto label_31d4e8;
        case 0x31d4ecu: goto label_31d4ec;
        case 0x31d4f0u: goto label_31d4f0;
        case 0x31d4f4u: goto label_31d4f4;
        case 0x31d4f8u: goto label_31d4f8;
        case 0x31d4fcu: goto label_31d4fc;
        case 0x31d500u: goto label_31d500;
        case 0x31d504u: goto label_31d504;
        case 0x31d508u: goto label_31d508;
        case 0x31d50cu: goto label_31d50c;
        case 0x31d510u: goto label_31d510;
        case 0x31d514u: goto label_31d514;
        case 0x31d518u: goto label_31d518;
        case 0x31d51cu: goto label_31d51c;
        case 0x31d520u: goto label_31d520;
        case 0x31d524u: goto label_31d524;
        case 0x31d528u: goto label_31d528;
        case 0x31d52cu: goto label_31d52c;
        case 0x31d530u: goto label_31d530;
        case 0x31d534u: goto label_31d534;
        case 0x31d538u: goto label_31d538;
        case 0x31d53cu: goto label_31d53c;
        case 0x31d540u: goto label_31d540;
        case 0x31d544u: goto label_31d544;
        case 0x31d548u: goto label_31d548;
        case 0x31d54cu: goto label_31d54c;
        case 0x31d550u: goto label_31d550;
        case 0x31d554u: goto label_31d554;
        case 0x31d558u: goto label_31d558;
        case 0x31d55cu: goto label_31d55c;
        case 0x31d560u: goto label_31d560;
        case 0x31d564u: goto label_31d564;
        case 0x31d568u: goto label_31d568;
        case 0x31d56cu: goto label_31d56c;
        case 0x31d570u: goto label_31d570;
        case 0x31d574u: goto label_31d574;
        case 0x31d578u: goto label_31d578;
        case 0x31d57cu: goto label_31d57c;
        case 0x31d580u: goto label_31d580;
        case 0x31d584u: goto label_31d584;
        case 0x31d588u: goto label_31d588;
        case 0x31d58cu: goto label_31d58c;
        case 0x31d590u: goto label_31d590;
        case 0x31d594u: goto label_31d594;
        case 0x31d598u: goto label_31d598;
        case 0x31d59cu: goto label_31d59c;
        case 0x31d5a0u: goto label_31d5a0;
        case 0x31d5a4u: goto label_31d5a4;
        case 0x31d5a8u: goto label_31d5a8;
        case 0x31d5acu: goto label_31d5ac;
        case 0x31d5b0u: goto label_31d5b0;
        case 0x31d5b4u: goto label_31d5b4;
        case 0x31d5b8u: goto label_31d5b8;
        case 0x31d5bcu: goto label_31d5bc;
        case 0x31d5c0u: goto label_31d5c0;
        case 0x31d5c4u: goto label_31d5c4;
        case 0x31d5c8u: goto label_31d5c8;
        case 0x31d5ccu: goto label_31d5cc;
        case 0x31d5d0u: goto label_31d5d0;
        case 0x31d5d4u: goto label_31d5d4;
        case 0x31d5d8u: goto label_31d5d8;
        case 0x31d5dcu: goto label_31d5dc;
        case 0x31d5e0u: goto label_31d5e0;
        case 0x31d5e4u: goto label_31d5e4;
        case 0x31d5e8u: goto label_31d5e8;
        case 0x31d5ecu: goto label_31d5ec;
        case 0x31d5f0u: goto label_31d5f0;
        case 0x31d5f4u: goto label_31d5f4;
        case 0x31d5f8u: goto label_31d5f8;
        case 0x31d5fcu: goto label_31d5fc;
        case 0x31d600u: goto label_31d600;
        case 0x31d604u: goto label_31d604;
        case 0x31d608u: goto label_31d608;
        case 0x31d60cu: goto label_31d60c;
        case 0x31d610u: goto label_31d610;
        case 0x31d614u: goto label_31d614;
        case 0x31d618u: goto label_31d618;
        case 0x31d61cu: goto label_31d61c;
        case 0x31d620u: goto label_31d620;
        case 0x31d624u: goto label_31d624;
        case 0x31d628u: goto label_31d628;
        case 0x31d62cu: goto label_31d62c;
        case 0x31d630u: goto label_31d630;
        case 0x31d634u: goto label_31d634;
        case 0x31d638u: goto label_31d638;
        case 0x31d63cu: goto label_31d63c;
        case 0x31d640u: goto label_31d640;
        case 0x31d644u: goto label_31d644;
        case 0x31d648u: goto label_31d648;
        case 0x31d64cu: goto label_31d64c;
        case 0x31d650u: goto label_31d650;
        case 0x31d654u: goto label_31d654;
        case 0x31d658u: goto label_31d658;
        case 0x31d65cu: goto label_31d65c;
        case 0x31d660u: goto label_31d660;
        case 0x31d664u: goto label_31d664;
        case 0x31d668u: goto label_31d668;
        case 0x31d66cu: goto label_31d66c;
        case 0x31d670u: goto label_31d670;
        case 0x31d674u: goto label_31d674;
        case 0x31d678u: goto label_31d678;
        case 0x31d67cu: goto label_31d67c;
        case 0x31d680u: goto label_31d680;
        case 0x31d684u: goto label_31d684;
        case 0x31d688u: goto label_31d688;
        case 0x31d68cu: goto label_31d68c;
        case 0x31d690u: goto label_31d690;
        case 0x31d694u: goto label_31d694;
        case 0x31d698u: goto label_31d698;
        case 0x31d69cu: goto label_31d69c;
        case 0x31d6a0u: goto label_31d6a0;
        case 0x31d6a4u: goto label_31d6a4;
        case 0x31d6a8u: goto label_31d6a8;
        case 0x31d6acu: goto label_31d6ac;
        case 0x31d6b0u: goto label_31d6b0;
        case 0x31d6b4u: goto label_31d6b4;
        case 0x31d6b8u: goto label_31d6b8;
        case 0x31d6bcu: goto label_31d6bc;
        case 0x31d6c0u: goto label_31d6c0;
        case 0x31d6c4u: goto label_31d6c4;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6ccu: goto label_31d6cc;
        case 0x31d6d0u: goto label_31d6d0;
        case 0x31d6d4u: goto label_31d6d4;
        case 0x31d6d8u: goto label_31d6d8;
        case 0x31d6dcu: goto label_31d6dc;
        case 0x31d6e0u: goto label_31d6e0;
        case 0x31d6e4u: goto label_31d6e4;
        case 0x31d6e8u: goto label_31d6e8;
        case 0x31d6ecu: goto label_31d6ec;
        case 0x31d6f0u: goto label_31d6f0;
        case 0x31d6f4u: goto label_31d6f4;
        case 0x31d6f8u: goto label_31d6f8;
        case 0x31d6fcu: goto label_31d6fc;
        case 0x31d700u: goto label_31d700;
        case 0x31d704u: goto label_31d704;
        case 0x31d708u: goto label_31d708;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d710u: goto label_31d710;
        case 0x31d714u: goto label_31d714;
        case 0x31d718u: goto label_31d718;
        case 0x31d71cu: goto label_31d71c;
        case 0x31d720u: goto label_31d720;
        case 0x31d724u: goto label_31d724;
        case 0x31d728u: goto label_31d728;
        case 0x31d72cu: goto label_31d72c;
        case 0x31d730u: goto label_31d730;
        case 0x31d734u: goto label_31d734;
        case 0x31d738u: goto label_31d738;
        case 0x31d73cu: goto label_31d73c;
        case 0x31d740u: goto label_31d740;
        case 0x31d744u: goto label_31d744;
        case 0x31d748u: goto label_31d748;
        case 0x31d74cu: goto label_31d74c;
        case 0x31d750u: goto label_31d750;
        case 0x31d754u: goto label_31d754;
        default: break;
    }

    ctx->pc = 0x31d460u;

label_31d460:
    // 0x31d460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31d464:
    // 0x31d464: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31d468:
    // 0x31d468: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31d46c:
    // 0x31d46c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d470:
    // 0x31d470: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31d474:
    // 0x31d474: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31d474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31d478:
    // 0x31d478: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31d47c:
    // 0x31d47c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31d480:
    // 0x31d480: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31d484:
    // 0x31d484: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31d484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_31d488:
    // 0x31d488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31d48c:
    // 0x31d48c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x31d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_31d490:
    // 0x31d490: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
label_31d494:
    if (ctx->pc == 0x31D494u) {
        ctx->pc = 0x31D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D490u;
        // 0x31d494: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D498u;
        goto label_31d498;
    }
    ctx->pc = 0x31D490u;
    {
        const bool branch_taken_0x31d490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D490u;
        // 0x31d494: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d490) {
            ctx->pc = 0x31D71Cu;
            goto label_31d71c;
        }
    }
    ctx->pc = 0x31D498u;
label_31d498:
    // 0x31d498: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_31d49c:
    // 0x31d49c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x31d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_31d4a0:
    // 0x31d4a0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x31d4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d4a4:
    // 0x31d4a4: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_31d4a8:
    if (ctx->pc == 0x31D4A8u) {
        ctx->pc = 0x31D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4A4u;
        // 0x31d4a8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4ACu;
        goto label_31d4ac;
    }
    ctx->pc = 0x31D4A4u;
    {
        const bool branch_taken_0x31d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4A4u;
        // 0x31d4a8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4a4) {
            ctx->pc = 0x31D6E4u;
            goto label_31d6e4;
        }
    }
    ctx->pc = 0x31D4ACu;
label_31d4ac:
    // 0x31d4ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x31d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_31d4b0:
    // 0x31d4b0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_31d4b4:
    // 0x31d4b4: 0xc0cd4ee  jal         func_3353B8
label_31d4b8:
    if (ctx->pc == 0x31D4B8u) {
        ctx->pc = 0x31D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4B4u;
        // 0x31d4b8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4BCu;
        goto label_31d4bc;
    }
    ctx->pc = 0x31D4B4u;
    SET_GPR_U32(ctx, 31, 0x31D4BCu);
    ctx->pc = 0x31D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4B4u;
    // 0x31d4b8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31D4B4u, 0x31D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4BCu;
label_31d4bc:
    // 0x31d4bc: 0x2c42004c  sltiu       $v0, $v0, 0x4C
    ctx->pc = 0x31d4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
label_31d4c0:
    // 0x31d4c0: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
label_31d4c4:
    if (ctx->pc == 0x31D4C4u) {
        ctx->pc = 0x31D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4C0u;
        // 0x31d4c4: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4C8u;
        goto label_31d4c8;
    }
    ctx->pc = 0x31D4C0u;
    {
        const bool branch_taken_0x31d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d4c0) {
            ctx->pc = 0x31D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D4C0u;
            // 0x31d4c4: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D4C8u;
label_31d4c8:
    // 0x31d4c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31d4cc:
    // 0x31d4cc: 0xc059856  jal         func_166158
label_31d4d0:
    if (ctx->pc == 0x31D4D0u) {
        ctx->pc = 0x31D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4CCu;
        // 0x31d4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4D4u;
        goto label_31d4d4;
    }
    ctx->pc = 0x31D4CCu;
    SET_GPR_U32(ctx, 31, 0x31D4D4u);
    ctx->pc = 0x31D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4CCu;
    // 0x31d4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31D4CCu, 0x31D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4D4u;
label_31d4d4:
    // 0x31d4d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31d4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_31d4d8:
    // 0x31d4d8: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
label_31d4dc:
    if (ctx->pc == 0x31D4DCu) {
        ctx->pc = 0x31D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4D8u;
        // 0x31d4dc: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D4E0u;
        goto label_31d4e0;
    }
    ctx->pc = 0x31D4D8u;
    {
        const bool branch_taken_0x31d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d4d8) {
            ctx->pc = 0x31D4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D4D8u;
            // 0x31d4dc: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D4E0u;
label_31d4e0:
    // 0x31d4e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31d4e4:
    // 0x31d4e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31d4e8:
    // 0x31d4e8: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x31d4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31d4ec:
    // 0x31d4ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31d4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d4f0:
    // 0x31d4f0: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x31d4f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31d4f4:
    // 0x31d4f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x31d4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d4f8:
    // 0x31d4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31d4fc:
    // 0x31d4fc: 0xc137826  jal         func_4DE098
label_31d500:
    if (ctx->pc == 0x31D500u) {
        ctx->pc = 0x31D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4FCu;
        // 0x31d500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D504u;
        goto label_31d504;
    }
    ctx->pc = 0x31D4FCu;
    SET_GPR_U32(ctx, 31, 0x31D504u);
    ctx->pc = 0x31D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4FCu;
    // 0x31d500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31D4FCu, 0x31D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D504u;
label_31d504:
    // 0x31d504: 0xc0e409a  jal         func_390268
label_31d508:
    if (ctx->pc == 0x31D508u) {
        ctx->pc = 0x31D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D504u;
        // 0x31d508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D50Cu;
        goto label_31d50c;
    }
    ctx->pc = 0x31D504u;
    SET_GPR_U32(ctx, 31, 0x31D50Cu);
    ctx->pc = 0x31D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D504u;
    // 0x31d508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31D504u, 0x31D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D50Cu;
label_31d50c:
    // 0x31d50c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31d50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d510:
    // 0x31d510: 0x5220003d  beql        $s1, $zero, . + 4 + (0x3D << 2)
label_31d514:
    if (ctx->pc == 0x31D514u) {
        ctx->pc = 0x31D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D510u;
        // 0x31d514: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D518u;
        goto label_31d518;
    }
    ctx->pc = 0x31D510u;
    {
        const bool branch_taken_0x31d510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d510) {
            ctx->pc = 0x31D514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D510u;
            // 0x31d514: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D518u;
label_31d518:
    // 0x31d518: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31d518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31d51c:
    // 0x31d51c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31d51cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31d520:
    // 0x31d520: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31d520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d524:
    // 0x31d524: 0x50560038  beql        $v0, $s6, . + 4 + (0x38 << 2)
label_31d528:
    if (ctx->pc == 0x31D528u) {
        ctx->pc = 0x31D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D524u;
        // 0x31d528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D52Cu;
        goto label_31d52c;
    }
    ctx->pc = 0x31D524u;
    {
        const bool branch_taken_0x31d524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x31d524) {
            ctx->pc = 0x31D528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D524u;
            // 0x31d528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D52Cu;
label_31d52c:
    // 0x31d52c: 0xc05959e  jal         func_165678
label_31d530:
    if (ctx->pc == 0x31D530u) {
        ctx->pc = 0x31D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D52Cu;
        // 0x31d530: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D534u;
        goto label_31d534;
    }
    ctx->pc = 0x31D52Cu;
    SET_GPR_U32(ctx, 31, 0x31D534u);
    ctx->pc = 0x31D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D52Cu;
    // 0x31d530: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31D52Cu, 0x31D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D534u;
label_31d534:
    // 0x31d534: 0x50510034  beql        $v0, $s1, . + 4 + (0x34 << 2)
label_31d538:
    if (ctx->pc == 0x31D538u) {
        ctx->pc = 0x31D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D534u;
        // 0x31d538: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D53Cu;
        goto label_31d53c;
    }
    ctx->pc = 0x31D534u;
    {
        const bool branch_taken_0x31d534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31d534) {
            ctx->pc = 0x31D538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D534u;
            // 0x31d538: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D53Cu;
label_31d53c:
    // 0x31d53c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x31d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_31d540:
    // 0x31d540: 0x52220031  beql        $s1, $v0, . + 4 + (0x31 << 2)
label_31d544:
    if (ctx->pc == 0x31D544u) {
        ctx->pc = 0x31D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D540u;
        // 0x31d544: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D548u;
        goto label_31d548;
    }
    ctx->pc = 0x31D540u;
    {
        const bool branch_taken_0x31d540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d540) {
            ctx->pc = 0x31D544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D540u;
            // 0x31d544: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D548u;
label_31d548:
    // 0x31d548: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_31d54c:
    // 0x31d54c: 0x5222002e  beql        $s1, $v0, . + 4 + (0x2E << 2)
label_31d550:
    if (ctx->pc == 0x31D550u) {
        ctx->pc = 0x31D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D54Cu;
        // 0x31d550: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D554u;
        goto label_31d554;
    }
    ctx->pc = 0x31D54Cu;
    {
        const bool branch_taken_0x31d54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d54c) {
            ctx->pc = 0x31D550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D54Cu;
            // 0x31d550: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D554u;
label_31d554:
    // 0x31d554: 0xc05959e  jal         func_165678
label_31d558:
    if (ctx->pc == 0x31D558u) {
        ctx->pc = 0x31D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D554u;
        // 0x31d558: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D55Cu;
        goto label_31d55c;
    }
    ctx->pc = 0x31D554u;
    SET_GPR_U32(ctx, 31, 0x31D55Cu);
    ctx->pc = 0x31D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D554u;
    // 0x31d558: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31D554u, 0x31D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D55Cu;
label_31d55c:
    // 0x31d55c: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_31d560:
    if (ctx->pc == 0x31D560u) {
        ctx->pc = 0x31D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D55Cu;
        // 0x31d560: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D564u;
        goto label_31d564;
    }
    ctx->pc = 0x31D55Cu;
    {
        const bool branch_taken_0x31d55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d55c) {
            ctx->pc = 0x31D560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D55Cu;
            // 0x31d560: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D564u;
label_31d564:
    // 0x31d564: 0xc087502  jal         func_21D408
label_31d568:
    if (ctx->pc == 0x31D568u) {
        ctx->pc = 0x31D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D564u;
        // 0x31d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D56Cu;
        goto label_31d56c;
    }
    ctx->pc = 0x31D564u;
    SET_GPR_U32(ctx, 31, 0x31D56Cu);
    ctx->pc = 0x31D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D564u;
    // 0x31d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D564u, 0x31D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D56Cu;
label_31d56c:
    // 0x31d56c: 0x8043002c  lb          $v1, 0x2C($v0)
    ctx->pc = 0x31d56cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_31d570:
    // 0x31d570: 0x4620025  bltzl       $v1, . + 4 + (0x25 << 2)
label_31d574:
    if (ctx->pc == 0x31D574u) {
        ctx->pc = 0x31D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D570u;
        // 0x31d574: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D578u;
        goto label_31d578;
    }
    ctx->pc = 0x31D570u;
    {
        const bool branch_taken_0x31d570 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31d570) {
            ctx->pc = 0x31D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D570u;
            // 0x31d574: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D578u;
label_31d578:
    // 0x31d578: 0xc087502  jal         func_21D408
label_31d57c:
    if (ctx->pc == 0x31D57Cu) {
        ctx->pc = 0x31D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D578u;
        // 0x31d57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D580u;
        goto label_31d580;
    }
    ctx->pc = 0x31D578u;
    SET_GPR_U32(ctx, 31, 0x31D580u);
    ctx->pc = 0x31D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D578u;
    // 0x31d57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D578u, 0x31D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D580u;
label_31d580:
    // 0x31d580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31d580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d584:
    // 0x31d584: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31d584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31d588:
    // 0x31d588: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31d58c:
    if (ctx->pc == 0x31D58Cu) {
        ctx->pc = 0x31D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D588u;
        // 0x31d58c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D590u;
        goto label_31d590;
    }
    ctx->pc = 0x31D588u;
    {
        const bool branch_taken_0x31d588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D588u;
        // 0x31d58c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d588) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D590u;
label_31d590:
    // 0x31d590: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31d594:
    // 0x31d594: 0x10000002  b           . + 4 + (0x2 << 2)
label_31d598:
    if (ctx->pc == 0x31D598u) {
        ctx->pc = 0x31D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D594u;
        // 0x31d598: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D59Cu;
        goto label_31d59c;
    }
    ctx->pc = 0x31D594u;
    {
        const bool branch_taken_0x31d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D594u;
        // 0x31d598: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d594) {
            ctx->pc = 0x31D5A0u;
            goto label_31d5a0;
        }
    }
    ctx->pc = 0x31D59Cu;
label_31d59c:
    // 0x31d59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d5a0:
    // 0x31d5a0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x31d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31d5a4:
    // 0x31d5a4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31d5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31d5a8:
    // 0x31d5a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31d5ac:
    // 0x31d5ac: 0x40f809  jalr        $v0
label_31d5b0:
    if (ctx->pc == 0x31D5B0u) {
        ctx->pc = 0x31D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5ACu;
        // 0x31d5b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5B4u;
        goto label_31d5b4;
    }
    ctx->pc = 0x31D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D5B4u);
        ctx->pc = 0x31D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5ACu;
        // 0x31d5b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D5ACu, 0x31D5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D5B4u;
label_31d5b4:
    // 0x31d5b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31d5b8:
    // 0x31d5b8: 0x50430013  beql        $v0, $v1, . + 4 + (0x13 << 2)
label_31d5bc:
    if (ctx->pc == 0x31D5BCu) {
        ctx->pc = 0x31D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B8u;
        // 0x31d5bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5C0u;
        goto label_31d5c0;
    }
    ctx->pc = 0x31D5B8u;
    {
        const bool branch_taken_0x31d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d5b8) {
            ctx->pc = 0x31D5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D5B8u;
            // 0x31d5bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D5C0u;
label_31d5c0:
    // 0x31d5c0: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x31d5c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_31d5c4:
    // 0x31d5c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31d5c8:
    // 0x31d5c8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x31d5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_31d5cc:
    // 0x31d5cc: 0xc05959e  jal         func_165678
label_31d5d0:
    if (ctx->pc == 0x31D5D0u) {
        ctx->pc = 0x31D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5CCu;
        // 0x31d5d0: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5D4u;
        goto label_31d5d4;
    }
    ctx->pc = 0x31D5CCu;
    SET_GPR_U32(ctx, 31, 0x31D5D4u);
    ctx->pc = 0x31D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5CCu;
    // 0x31d5d0: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31D5CCu, 0x31D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5D4u;
label_31d5d4:
    // 0x31d5d4: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31d5d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_31d5d8:
    // 0x31d5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d5dc:
    // 0x31d5dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31d5e0:
    // 0x31d5e0: 0xc0cdb38  jal         func_336CE0
label_31d5e4:
    if (ctx->pc == 0x31D5E4u) {
        ctx->pc = 0x31D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5E0u;
        // 0x31d5e4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5E8u;
        goto label_31d5e8;
    }
    ctx->pc = 0x31D5E0u;
    SET_GPR_U32(ctx, 31, 0x31D5E8u);
    ctx->pc = 0x31D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5E0u;
    // 0x31d5e4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31D5E0u, 0x31D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5E8u;
label_31d5e8:
    // 0x31d5e8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31d5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_31d5ec:
    // 0x31d5ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31d5f0:
    // 0x31d5f0: 0x0  nop
    ctx->pc = 0x31d5f0u;
    // NOP
label_31d5f4:
    // 0x31d5f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31d5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d5f8:
    // 0x31d5f8: 0x0  nop
    ctx->pc = 0x31d5f8u;
    // NOP
label_31d5fc:
    // 0x31d5fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31d600:
    if (ctx->pc == 0x31D600u) {
        ctx->pc = 0x31D604u;
        goto label_31d604;
    }
    ctx->pc = 0x31D5FCu;
    {
        const bool branch_taken_0x31d5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d5fc) {
            ctx->pc = 0x31D614u;
            goto label_31d614;
        }
    }
    ctx->pc = 0x31D604u;
label_31d604:
    // 0x31d604: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31d604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31d608:
    // 0x31d608: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31d608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31d60c:
    // 0x31d60c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_31d610:
    if (ctx->pc == 0x31D610u) {
        ctx->pc = 0x31D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D60Cu;
        // 0x31d610: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D614u;
        goto label_31d614;
    }
    ctx->pc = 0x31D60Cu;
    {
        const bool branch_taken_0x31d60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D60Cu;
        // 0x31d610: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d60c) {
            ctx->pc = 0x31D4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d4f8;
        }
    }
    ctx->pc = 0x31D614u;
label_31d614:
    // 0x31d614: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_31d618:
    if (ctx->pc == 0x31D618u) {
        ctx->pc = 0x31D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D614u;
        // 0x31d618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D61Cu;
        goto label_31d61c;
    }
    ctx->pc = 0x31D614u;
    {
        const bool branch_taken_0x31d614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D614u;
        // 0x31d618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d614) {
            ctx->pc = 0x31D6E4u;
            goto label_31d6e4;
        }
    }
    ctx->pc = 0x31D61Cu;
label_31d61c:
    // 0x31d61c: 0xc105d9c  jal         func_417670
label_31d620:
    if (ctx->pc == 0x31D620u) {
        ctx->pc = 0x31D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D61Cu;
        // 0x31d620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D624u;
        goto label_31d624;
    }
    ctx->pc = 0x31D61Cu;
    SET_GPR_U32(ctx, 31, 0x31D624u);
    ctx->pc = 0x31D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D61Cu;
    // 0x31d620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417670u, 0x31D61Cu, 0x31D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D624u;
label_31d624:
    // 0x31d624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31d624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d628:
    // 0x31d628: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
label_31d62c:
    if (ctx->pc == 0x31D62Cu) {
        ctx->pc = 0x31D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D628u;
        // 0x31d62c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D630u;
        goto label_31d630;
    }
    ctx->pc = 0x31D628u;
    {
        const bool branch_taken_0x31d628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D628u;
        // 0x31d62c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d628) {
            ctx->pc = 0x31D6E4u;
            goto label_31d6e4;
        }
    }
    ctx->pc = 0x31D630u;
label_31d630:
    // 0x31d630: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_31d634:
    // 0x31d634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31d638:
    // 0x31d638: 0x0  nop
    ctx->pc = 0x31d638u;
    // NOP
label_31d63c:
    // 0x31d63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d640:
    // 0x31d640: 0x0  nop
    ctx->pc = 0x31d640u;
    // NOP
label_31d644:
    // 0x31d644: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_31d648:
    if (ctx->pc == 0x31D648u) {
        ctx->pc = 0x31D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D644u;
        // 0x31d648: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D64Cu;
        goto label_31d64c;
    }
    ctx->pc = 0x31D644u;
    {
        const bool branch_taken_0x31d644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d644) {
            ctx->pc = 0x31D648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D644u;
            // 0x31d648: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D64Cu;
label_31d64c:
    // 0x31d64c: 0xc10587a  jal         func_4161E8
label_31d650:
    if (ctx->pc == 0x31D650u) {
        ctx->pc = 0x31D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D64Cu;
        // 0x31d650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D654u;
        goto label_31d654;
    }
    ctx->pc = 0x31D64Cu;
    SET_GPR_U32(ctx, 31, 0x31D654u);
    ctx->pc = 0x31D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D64Cu;
    // 0x31d650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31D64Cu, 0x31D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D654u;
label_31d654:
    // 0x31d654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d658:
    // 0x31d658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d65c:
    // 0x31d65c: 0xc091e94  jal         func_247A50
label_31d660:
    if (ctx->pc == 0x31D660u) {
        ctx->pc = 0x31D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D65Cu;
        // 0x31d660: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D664u;
        goto label_31d664;
    }
    ctx->pc = 0x31D65Cu;
    SET_GPR_U32(ctx, 31, 0x31D664u);
    ctx->pc = 0x31D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D65Cu;
    // 0x31d660: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x31D65Cu, 0x31D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D664u;
label_31d664:
    // 0x31d664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d668:
    // 0x31d668: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
label_31d66c:
    if (ctx->pc == 0x31D66Cu) {
        ctx->pc = 0x31D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D668u;
        // 0x31d66c: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D670u;
        goto label_31d670;
    }
    ctx->pc = 0x31D668u;
    {
        const bool branch_taken_0x31d668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31d668) {
            ctx->pc = 0x31D66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D668u;
            // 0x31d66c: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D670u;
label_31d670:
    // 0x31d670: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x31d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d674:
    // 0x31d674: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x31d674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_31d678:
    // 0x31d678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31d67c:
    // 0x31d67c: 0x0  nop
    ctx->pc = 0x31d67cu;
    // NOP
label_31d680:
    // 0x31d680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d684:
    // 0x31d684: 0x0  nop
    ctx->pc = 0x31d684u;
    // NOP
label_31d688:
    // 0x31d688: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_31d68c:
    if (ctx->pc == 0x31D68Cu) {
        ctx->pc = 0x31D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D688u;
        // 0x31d68c: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D690u;
        goto label_31d690;
    }
    ctx->pc = 0x31D688u;
    {
        const bool branch_taken_0x31d688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d688) {
            ctx->pc = 0x31D68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D688u;
            // 0x31d68c: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D690u;
label_31d690:
    // 0x31d690: 0xc0a4e54  jal         func_293950
label_31d694:
    if (ctx->pc == 0x31D694u) {
        ctx->pc = 0x31D698u;
        goto label_31d698;
    }
    ctx->pc = 0x31D690u;
    SET_GPR_U32(ctx, 31, 0x31D698u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31D690u, 0x31D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D698u;
label_31d698:
    // 0x31d698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d69c:
    // 0x31d69c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_31d6a0:
    if (ctx->pc == 0x31D6A0u) {
        ctx->pc = 0x31D6A4u;
        goto label_31d6a4;
    }
    ctx->pc = 0x31D69Cu;
    {
        const bool branch_taken_0x31d69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d69c) {
            ctx->pc = 0x31D6D0u;
            goto label_31d6d0;
        }
    }
    ctx->pc = 0x31D6A4u;
label_31d6a4:
    // 0x31d6a4: 0xc087502  jal         func_21D408
label_31d6a8:
    if (ctx->pc == 0x31D6A8u) {
        ctx->pc = 0x31D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6A4u;
        // 0x31d6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6ACu;
        goto label_31d6ac;
    }
    ctx->pc = 0x31D6A4u;
    SET_GPR_U32(ctx, 31, 0x31D6ACu);
    ctx->pc = 0x31D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6A4u;
    // 0x31d6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D6A4u, 0x31D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6ACu;
label_31d6ac:
    // 0x31d6ac: 0x8e47002c  lw          $a3, 0x2C($s2)
    ctx->pc = 0x31d6acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_31d6b0:
    // 0x31d6b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d6b4:
    // 0x31d6b4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x31d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_31d6b8:
    // 0x31d6b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x31d6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_31d6bc:
    // 0x31d6bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31d6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31d6c0:
    // 0x31d6c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31d6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31d6c4:
    // 0x31d6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d6c8:
    // 0x31d6c8: 0xc0b6dda  jal         func_2DB768
label_31d6cc:
    if (ctx->pc == 0x31D6CCu) {
        ctx->pc = 0x31D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6C8u;
        // 0x31d6cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6D0u;
        goto label_31d6d0;
    }
    ctx->pc = 0x31D6C8u;
    SET_GPR_U32(ctx, 31, 0x31D6D0u);
    ctx->pc = 0x31D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6C8u;
    // 0x31d6cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x31D6C8u, 0x31D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6D0u;
label_31d6d0:
    // 0x31d6d0: 0xc087502  jal         func_21D408
label_31d6d4:
    if (ctx->pc == 0x31D6D4u) {
        ctx->pc = 0x31D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6D0u;
        // 0x31d6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6D8u;
        goto label_31d6d8;
    }
    ctx->pc = 0x31D6D0u;
    SET_GPR_U32(ctx, 31, 0x31D6D8u);
    ctx->pc = 0x31D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6D0u;
    // 0x31d6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D6D0u, 0x31D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6D8u;
label_31d6d8:
    // 0x31d6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d6dc:
    // 0x31d6dc: 0xc0a35d6  jal         func_28D758
label_31d6e0:
    if (ctx->pc == 0x31D6E0u) {
        ctx->pc = 0x31D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6DCu;
        // 0x31d6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6E4u;
        goto label_31d6e4;
    }
    ctx->pc = 0x31D6DCu;
    SET_GPR_U32(ctx, 31, 0x31D6E4u);
    ctx->pc = 0x31D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6DCu;
    // 0x31d6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31D6DCu, 0x31D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6E4u;
label_31d6e4:
    // 0x31d6e4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x31d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_31d6e8:
    // 0x31d6e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_31d6ec:
    if (ctx->pc == 0x31D6ECu) {
        ctx->pc = 0x31D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6E8u;
        // 0x31d6ec: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6F0u;
        goto label_31d6f0;
    }
    ctx->pc = 0x31D6E8u;
    {
        const bool branch_taken_0x31d6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6E8u;
        // 0x31d6ec: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6e8) {
            ctx->pc = 0x31D71Cu;
            goto label_31d71c;
        }
    }
    ctx->pc = 0x31D6F0u;
label_31d6f0:
    // 0x31d6f0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x31d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_31d6f4:
    // 0x31d6f4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31d6f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d6f8:
    // 0x31d6f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31d6fc:
    if (ctx->pc == 0x31D6FCu) {
        ctx->pc = 0x31D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6F8u;
        // 0x31d6fc: 0x24420bb8  addiu       $v0, $v0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D700u;
        goto label_31d700;
    }
    ctx->pc = 0x31D6F8u;
    {
        const bool branch_taken_0x31d6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6F8u;
        // 0x31d6fc: 0x24420bb8  addiu       $v0, $v0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6f8) {
            ctx->pc = 0x31D71Cu;
            goto label_31d71c;
        }
    }
    ctx->pc = 0x31D700u;
label_31d700:
    // 0x31d700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d704:
    // 0x31d704: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x31d704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_31d708:
    // 0x31d708: 0xc0c743a  jal         func_31D0E8
label_31d70c:
    if (ctx->pc == 0x31D70Cu) {
        ctx->pc = 0x31D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D708u;
        // 0x31d70c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D710u;
        goto label_31d710;
    }
    ctx->pc = 0x31D708u;
    SET_GPR_U32(ctx, 31, 0x31D710u);
    ctx->pc = 0x31D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D708u;
    // 0x31d70c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0E8u, 0x31D708u, 0x31D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D710u;
label_31d710:
    // 0x31d710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d714:
    // 0x31d714: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_31d718:
    if (ctx->pc == 0x31D718u) {
        ctx->pc = 0x31D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D714u;
        // 0x31d718: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D71Cu;
        goto label_31d71c;
    }
    ctx->pc = 0x31D714u;
    {
        const bool branch_taken_0x31d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d714) {
            ctx->pc = 0x31D718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D714u;
            // 0x31d718: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D71Cu;
            goto label_31d71c;
        }
    }
    ctx->pc = 0x31D71Cu;
label_31d71c:
    // 0x31d71c: 0xc0c74d6  jal         func_31D358
label_31d720:
    if (ctx->pc == 0x31D720u) {
        ctx->pc = 0x31D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D71Cu;
        // 0x31d720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D724u;
        goto label_31d724;
    }
    ctx->pc = 0x31D71Cu;
    SET_GPR_U32(ctx, 31, 0x31D724u);
    ctx->pc = 0x31D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D71Cu;
    // 0x31d720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D358u, 0x31D71Cu, 0x31D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D724u;
label_31d724:
    // 0x31d724: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31d724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31d728:
    // 0x31d728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d72c:
    // 0x31d72c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31d72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31d730:
    // 0x31d730: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31d730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31d734:
    // 0x31d734: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31d734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d738:
    // 0x31d738: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31d738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d73c:
    // 0x31d73c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31d73cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d740:
    // 0x31d740: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31d740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d744:
    // 0x31d744: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31d744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d748:
    // 0x31d748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31d748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31d74c:
    // 0x31d74c: 0x3e00008  jr          $ra
label_31d750:
    if (ctx->pc == 0x31D750u) {
        ctx->pc = 0x31D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D74Cu;
        // 0x31d750: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D754u;
        goto label_31d754;
    }
    ctx->pc = 0x31D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D74Cu;
        // 0x31d750: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D754u;
label_31d754:
    // 0x31d754: 0x0  nop
    ctx->pc = 0x31d754u;
    // NOP
    ctx->pc = 0x31d758u;
}
