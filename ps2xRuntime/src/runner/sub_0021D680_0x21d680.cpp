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

// Function: sub_0021D680
// Address: 0x21d680 - 0x21d848
void sub_0021D680_0x21d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D680_0x21d680");
#endif

    switch (ctx->pc) {
        case 0x21d680u: goto label_21d680;
        case 0x21d684u: goto label_21d684;
        case 0x21d688u: goto label_21d688;
        case 0x21d68cu: goto label_21d68c;
        case 0x21d690u: goto label_21d690;
        case 0x21d694u: goto label_21d694;
        case 0x21d698u: goto label_21d698;
        case 0x21d69cu: goto label_21d69c;
        case 0x21d6a0u: goto label_21d6a0;
        case 0x21d6a4u: goto label_21d6a4;
        case 0x21d6a8u: goto label_21d6a8;
        case 0x21d6acu: goto label_21d6ac;
        case 0x21d6b0u: goto label_21d6b0;
        case 0x21d6b4u: goto label_21d6b4;
        case 0x21d6b8u: goto label_21d6b8;
        case 0x21d6bcu: goto label_21d6bc;
        case 0x21d6c0u: goto label_21d6c0;
        case 0x21d6c4u: goto label_21d6c4;
        case 0x21d6c8u: goto label_21d6c8;
        case 0x21d6ccu: goto label_21d6cc;
        case 0x21d6d0u: goto label_21d6d0;
        case 0x21d6d4u: goto label_21d6d4;
        case 0x21d6d8u: goto label_21d6d8;
        case 0x21d6dcu: goto label_21d6dc;
        case 0x21d6e0u: goto label_21d6e0;
        case 0x21d6e4u: goto label_21d6e4;
        case 0x21d6e8u: goto label_21d6e8;
        case 0x21d6ecu: goto label_21d6ec;
        case 0x21d6f0u: goto label_21d6f0;
        case 0x21d6f4u: goto label_21d6f4;
        case 0x21d6f8u: goto label_21d6f8;
        case 0x21d6fcu: goto label_21d6fc;
        case 0x21d700u: goto label_21d700;
        case 0x21d704u: goto label_21d704;
        case 0x21d708u: goto label_21d708;
        case 0x21d70cu: goto label_21d70c;
        case 0x21d710u: goto label_21d710;
        case 0x21d714u: goto label_21d714;
        case 0x21d718u: goto label_21d718;
        case 0x21d71cu: goto label_21d71c;
        case 0x21d720u: goto label_21d720;
        case 0x21d724u: goto label_21d724;
        case 0x21d728u: goto label_21d728;
        case 0x21d72cu: goto label_21d72c;
        case 0x21d730u: goto label_21d730;
        case 0x21d734u: goto label_21d734;
        case 0x21d738u: goto label_21d738;
        case 0x21d73cu: goto label_21d73c;
        case 0x21d740u: goto label_21d740;
        case 0x21d744u: goto label_21d744;
        case 0x21d748u: goto label_21d748;
        case 0x21d74cu: goto label_21d74c;
        case 0x21d750u: goto label_21d750;
        case 0x21d754u: goto label_21d754;
        case 0x21d758u: goto label_21d758;
        case 0x21d75cu: goto label_21d75c;
        case 0x21d760u: goto label_21d760;
        case 0x21d764u: goto label_21d764;
        case 0x21d768u: goto label_21d768;
        case 0x21d76cu: goto label_21d76c;
        case 0x21d770u: goto label_21d770;
        case 0x21d774u: goto label_21d774;
        case 0x21d778u: goto label_21d778;
        case 0x21d77cu: goto label_21d77c;
        case 0x21d780u: goto label_21d780;
        case 0x21d784u: goto label_21d784;
        case 0x21d788u: goto label_21d788;
        case 0x21d78cu: goto label_21d78c;
        case 0x21d790u: goto label_21d790;
        case 0x21d794u: goto label_21d794;
        case 0x21d798u: goto label_21d798;
        case 0x21d79cu: goto label_21d79c;
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7a4u: goto label_21d7a4;
        case 0x21d7a8u: goto label_21d7a8;
        case 0x21d7acu: goto label_21d7ac;
        case 0x21d7b0u: goto label_21d7b0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7b8u: goto label_21d7b8;
        case 0x21d7bcu: goto label_21d7bc;
        case 0x21d7c0u: goto label_21d7c0;
        case 0x21d7c4u: goto label_21d7c4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7ccu: goto label_21d7cc;
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d7d4u: goto label_21d7d4;
        case 0x21d7d8u: goto label_21d7d8;
        case 0x21d7dcu: goto label_21d7dc;
        case 0x21d7e0u: goto label_21d7e0;
        case 0x21d7e4u: goto label_21d7e4;
        case 0x21d7e8u: goto label_21d7e8;
        case 0x21d7ecu: goto label_21d7ec;
        case 0x21d7f0u: goto label_21d7f0;
        case 0x21d7f4u: goto label_21d7f4;
        case 0x21d7f8u: goto label_21d7f8;
        case 0x21d7fcu: goto label_21d7fc;
        case 0x21d800u: goto label_21d800;
        case 0x21d804u: goto label_21d804;
        case 0x21d808u: goto label_21d808;
        case 0x21d80cu: goto label_21d80c;
        case 0x21d810u: goto label_21d810;
        case 0x21d814u: goto label_21d814;
        case 0x21d818u: goto label_21d818;
        case 0x21d81cu: goto label_21d81c;
        case 0x21d820u: goto label_21d820;
        case 0x21d824u: goto label_21d824;
        case 0x21d828u: goto label_21d828;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d830u: goto label_21d830;
        case 0x21d834u: goto label_21d834;
        case 0x21d838u: goto label_21d838;
        case 0x21d83cu: goto label_21d83c;
        case 0x21d840u: goto label_21d840;
        case 0x21d844u: goto label_21d844;
        default: break;
    }

    ctx->pc = 0x21d680u;

label_21d680:
    // 0x21d680: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_21d684:
    // 0x21d684: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x21d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_21d688:
    // 0x21d688: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x21d688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_21d68c:
    // 0x21d68c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21d68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21d690:
    // 0x21d690: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x21d690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_21d694:
    // 0x21d694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d698:
    // 0x21d698: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x21d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_21d69c:
    // 0x21d69c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d6a0:
    // 0x21d6a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21d6a4:
    // 0x21d6a4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x21d6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21d6a8:
    // 0x21d6a8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x21d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_21d6ac:
    // 0x21d6ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x21d6acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21d6b0:
    // 0x21d6b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21d6b4:
    // 0x21d6b4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_21d6b8:
    if (ctx->pc == 0x21D6B8u) {
        ctx->pc = 0x21D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6B4u;
        // 0x21d6b8: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6BCu;
        goto label_21d6bc;
    }
    ctx->pc = 0x21D6B4u;
    {
        const bool branch_taken_0x21d6b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6B4u;
        // 0x21d6b8: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6b4) {
            ctx->pc = 0x21D6E0u;
            goto label_21d6e0;
        }
    }
    ctx->pc = 0x21D6BCu;
label_21d6bc:
    // 0x21d6bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_21d6c0:
    if (ctx->pc == 0x21D6C0u) {
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6C4u;
        goto label_21d6c4;
    }
    ctx->pc = 0x21D6BCu;
    {
        const bool branch_taken_0x21d6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6bc) {
            ctx->pc = 0x21D6E4u;
            goto label_21d6e4;
        }
    }
    ctx->pc = 0x21D6C4u;
label_21d6c4:
    // 0x21d6c4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x21d6c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_21d6c8:
    // 0x21d6c8: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x21d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
label_21d6cc:
    // 0x21d6cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21d6d0:
    // 0x21d6d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21d6d4:
    if (ctx->pc == 0x21D6D4u) {
        ctx->pc = 0x21D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6D0u;
        // 0x21d6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6D8u;
        goto label_21d6d8;
    }
    ctx->pc = 0x21D6D0u;
    {
        const bool branch_taken_0x21d6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6D0u;
        // 0x21d6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6d0) {
            ctx->pc = 0x21D6E8u;
            goto label_21d6e8;
        }
    }
    ctx->pc = 0x21D6D8u;
label_21d6d8:
    // 0x21d6d8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21d6dc:
    // 0x21d6dc: 0x84520144  lh          $s2, 0x144($v0)
    ctx->pc = 0x21d6dcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
label_21d6e0:
    // 0x21d6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d6e4:
    // 0x21d6e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d6e8:
    // 0x21d6e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21d6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d6ec:
    // 0x21d6ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x21d6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21d6f0:
    // 0x21d6f0: 0xc0992f6  jal         func_264BD8
label_21d6f4:
    if (ctx->pc == 0x21D6F4u) {
        ctx->pc = 0x21D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6F0u;
        // 0x21d6f4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6F8u;
        goto label_21d6f8;
    }
    ctx->pc = 0x21D6F0u;
    SET_GPR_U32(ctx, 31, 0x21D6F8u);
    ctx->pc = 0x21D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6F0u;
    // 0x21d6f4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x21D6F0u, 0x21D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6F8u;
label_21d6f8:
    // 0x21d6f8: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_21d6fc:
    if (ctx->pc == 0x21D6FCu) {
        ctx->pc = 0x21D700u;
        goto label_21d700;
    }
    ctx->pc = 0x21D6F8u;
    {
        const bool branch_taken_0x21d6f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d6f8) {
            ctx->pc = 0x21D80Cu;
            goto label_21d80c;
        }
    }
    ctx->pc = 0x21D700u;
label_21d700:
    // 0x21d700: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
label_21d704:
    if (ctx->pc == 0x21D704u) {
        ctx->pc = 0x21D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D700u;
        // 0x21d704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D708u;
        goto label_21d708;
    }
    ctx->pc = 0x21D700u;
    {
        const bool branch_taken_0x21d700 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D700u;
        // 0x21d704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d700) {
            ctx->pc = 0x21D778u;
            goto label_21d778;
        }
    }
    ctx->pc = 0x21D708u;
label_21d708:
    // 0x21d708: 0xc087502  jal         func_21D408
label_21d70c:
    if (ctx->pc == 0x21D70Cu) {
        ctx->pc = 0x21D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D708u;
        // 0x21d70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D710u;
        goto label_21d710;
    }
    ctx->pc = 0x21D708u;
    SET_GPR_U32(ctx, 31, 0x21D710u);
    ctx->pc = 0x21D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D708u;
    // 0x21d70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21D708u, 0x21D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D710u;
label_21d710:
    // 0x21d710: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x21d710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_21d714:
    // 0x21d714: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_21d718:
    if (ctx->pc == 0x21D718u) {
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D71Cu;
        goto label_21d71c;
    }
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21D774u;
            goto label_21d774;
        }
    }
    ctx->pc = 0x21D71Cu;
label_21d71c:
    // 0x21d71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d720:
    // 0x21d720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d724:
    // 0x21d724: 0xc0888a2  jal         func_222288
label_21d728:
    if (ctx->pc == 0x21D728u) {
        ctx->pc = 0x21D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D724u;
        // 0x21d728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D72Cu;
        goto label_21d72c;
    }
    ctx->pc = 0x21D724u;
    SET_GPR_U32(ctx, 31, 0x21D72Cu);
    ctx->pc = 0x21D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D724u;
    // 0x21d728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x21D724u, 0x21D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D72Cu;
label_21d72c:
    // 0x21d72c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_21d730:
    if (ctx->pc == 0x21D730u) {
        ctx->pc = 0x21D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D72Cu;
        // 0x21d730: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D734u;
        goto label_21d734;
    }
    ctx->pc = 0x21D72Cu;
    {
        const bool branch_taken_0x21d72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D72Cu;
        // 0x21d730: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d72c) {
            ctx->pc = 0x21D770u;
            goto label_21d770;
        }
    }
    ctx->pc = 0x21D734u;
label_21d734:
    // 0x21d734: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x21d734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21d738:
    // 0x21d738: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x21d738u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_21d73c:
    // 0x21d73c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21d740:
    // 0x21d740: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21d740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21d744:
    // 0x21d744: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21d744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_21d748:
    // 0x21d748: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21d74c:
    // 0x21d74c: 0xc0cdb38  jal         func_336CE0
label_21d750:
    if (ctx->pc == 0x21D750u) {
        ctx->pc = 0x21D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D74Cu;
        // 0x21d750: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D754u;
        goto label_21d754;
    }
    ctx->pc = 0x21D74Cu;
    SET_GPR_U32(ctx, 31, 0x21D754u);
    ctx->pc = 0x21D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D74Cu;
    // 0x21d750: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x21D74Cu, 0x21D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D754u;
label_21d754:
    // 0x21d754: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x21d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_21d758:
    // 0x21d758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21d75c:
    // 0x21d75c: 0x0  nop
    ctx->pc = 0x21d75cu;
    // NOP
label_21d760:
    // 0x21d760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21d760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21d764:
    // 0x21d764: 0x0  nop
    ctx->pc = 0x21d764u;
    // NOP
label_21d768:
    // 0x21d768: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_21d76c:
    if (ctx->pc == 0x21D76Cu) {
        ctx->pc = 0x21D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D768u;
        // 0x21d76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D770u;
        goto label_21d770;
    }
    ctx->pc = 0x21D768u;
    {
        const bool branch_taken_0x21d768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D768u;
        // 0x21d76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d768) {
            ctx->pc = 0x21D778u;
            goto label_21d778;
        }
    }
    ctx->pc = 0x21D770u;
label_21d770:
    // 0x21d770: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21d770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d774:
    // 0x21d774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d778:
    // 0x21d778: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x21d778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_21d77c:
    // 0x21d77c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_21d780:
    // 0x21d780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21d784:
    // 0x21d784: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x21d784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_21d788:
    // 0x21d788: 0xc0e57ce  jal         func_395F38
label_21d78c:
    if (ctx->pc == 0x21D78Cu) {
        ctx->pc = 0x21D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D788u;
        // 0x21d78c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D790u;
        goto label_21d790;
    }
    ctx->pc = 0x21D788u;
    SET_GPR_U32(ctx, 31, 0x21D790u);
    ctx->pc = 0x21D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D788u;
    // 0x21d78c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21D788u, 0x21D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D790u;
label_21d790:
    // 0x21d790: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x21d790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_21d794:
    // 0x21d794: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x21d794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_21d798:
    // 0x21d798: 0xafb5000c  sw          $s5, 0xC($sp)
    ctx->pc = 0x21d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 21));
label_21d79c:
    // 0x21d79c: 0xa3b30011  sb          $s3, 0x11($sp)
    ctx->pc = 0x21d79cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 19));
label_21d7a0:
    // 0x21d7a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d7a4:
    // 0x21d7a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21d7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21d7a8:
    // 0x21d7a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21d7ac:
    // 0x21d7ac: 0x40f809  jalr        $v0
label_21d7b0:
    if (ctx->pc == 0x21D7B0u) {
        ctx->pc = 0x21D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7ACu;
        // 0x21d7b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7B4u;
        goto label_21d7b4;
    }
    ctx->pc = 0x21D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D7B4u);
        ctx->pc = 0x21D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7ACu;
        // 0x21d7b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7ACu, 0x21D7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D7B4u;
label_21d7b4:
    // 0x21d7b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d7b8:
    // 0x21d7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d7bc:
    // 0x21d7bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21d7c0:
    // 0x21d7c0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x21d7c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_21d7c4:
    // 0x21d7c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x21d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_21d7c8:
    // 0x21d7c8: 0x40f809  jalr        $v0
label_21d7cc:
    if (ctx->pc == 0x21D7CCu) {
        ctx->pc = 0x21D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7C8u;
        // 0x21d7cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7D0u;
        goto label_21d7d0;
    }
    ctx->pc = 0x21D7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D7D0u);
        ctx->pc = 0x21D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7C8u;
        // 0x21d7cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7C8u, 0x21D7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D7D0u;
label_21d7d0:
    // 0x21d7d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d7d4:
    // 0x21d7d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21d7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21d7d8:
    // 0x21d7d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21d7dc:
    // 0x21d7dc: 0x40f809  jalr        $v0
label_21d7e0:
    if (ctx->pc == 0x21D7E0u) {
        ctx->pc = 0x21D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7DCu;
        // 0x21d7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7E4u;
        goto label_21d7e4;
    }
    ctx->pc = 0x21D7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D7E4u);
        ctx->pc = 0x21D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7DCu;
        // 0x21d7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7DCu, 0x21D7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D7E4u;
label_21d7e4:
    // 0x21d7e4: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_21d7e8:
    if (ctx->pc == 0x21D7E8u) {
        ctx->pc = 0x21D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7E4u;
        // 0x21d7e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7ECu;
        goto label_21d7ec;
    }
    ctx->pc = 0x21D7E4u;
    {
        const bool branch_taken_0x21d7e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d7e4) {
            ctx->pc = 0x21D7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D7E4u;
            // 0x21d7e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D7ECu;
label_21d7ec:
    // 0x21d7ec: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21d7f0:
    // 0x21d7f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_21d7f4:
    if (ctx->pc == 0x21D7F4u) {
        ctx->pc = 0x21D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7F0u;
        // 0x21d7f4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7F8u;
        goto label_21d7f8;
    }
    ctx->pc = 0x21D7F0u;
    {
        const bool branch_taken_0x21d7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d7f0) {
            ctx->pc = 0x21D7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D7F0u;
            // 0x21d7f4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D7F8u;
label_21d7f8:
    // 0x21d7f8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x21d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_21d7fc:
    // 0x21d7fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_21d800:
    if (ctx->pc == 0x21D800u) {
        ctx->pc = 0x21D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7FCu;
        // 0x21d800: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D804u;
        goto label_21d804;
    }
    ctx->pc = 0x21D7FCu;
    {
        const bool branch_taken_0x21d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d7fc) {
            ctx->pc = 0x21D800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D7FCu;
            // 0x21d800: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D804u;
label_21d804:
    // 0x21d804: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_21d808:
    if (ctx->pc == 0x21D808u) {
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D80Cu;
        goto label_21d80c;
    }
    ctx->pc = 0x21D804u;
    {
        const bool branch_taken_0x21d804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d804) {
            ctx->pc = 0x21D828u;
            goto label_21d828;
        }
    }
    ctx->pc = 0x21D80Cu;
label_21d80c:
    // 0x21d80c: 0xc088edc  jal         func_223B70
label_21d810:
    if (ctx->pc == 0x21D810u) {
        ctx->pc = 0x21D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D80Cu;
        // 0x21d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D814u;
        goto label_21d814;
    }
    ctx->pc = 0x21D80Cu;
    SET_GPR_U32(ctx, 31, 0x21D814u);
    ctx->pc = 0x21D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D80Cu;
    // 0x21d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x21D80Cu, 0x21D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D814u;
label_21d814:
    // 0x21d814: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21d818:
    if (ctx->pc == 0x21D818u) {
        ctx->pc = 0x21D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D814u;
        // 0x21d818: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D81Cu;
        goto label_21d81c;
    }
    ctx->pc = 0x21D814u;
    {
        const bool branch_taken_0x21d814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D814u;
        // 0x21d818: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d814) {
            ctx->pc = 0x21D828u;
            goto label_21d828;
        }
    }
    ctx->pc = 0x21D81Cu;
label_21d81c:
    // 0x21d81c: 0xc093390  jal         func_24CE40
label_21d820:
    if (ctx->pc == 0x21D820u) {
        ctx->pc = 0x21D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D81Cu;
        // 0x21d820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D824u;
        goto label_21d824;
    }
    ctx->pc = 0x21D81Cu;
    SET_GPR_U32(ctx, 31, 0x21D824u);
    ctx->pc = 0x21D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D81Cu;
    // 0x21d820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x21D81Cu, 0x21D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D824u;
label_21d824:
    // 0x21d824: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x21d824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21d828:
    // 0x21d828: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x21d828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21d82c:
    // 0x21d82c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x21d82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21d830:
    // 0x21d830: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21d830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21d834:
    // 0x21d834: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21d834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21d838:
    // 0x21d838: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x21d838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21d83c:
    // 0x21d83c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21d840:
    // 0x21d840: 0x3e00008  jr          $ra
label_21d844:
    if (ctx->pc == 0x21D844u) {
        ctx->pc = 0x21D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D840u;
        // 0x21d844: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D848u;
        goto label_fallthrough_0x21d840;
    }
    ctx->pc = 0x21D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D840u;
        // 0x21d844: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21d840:
    ctx->pc = 0x21D848u;
}
