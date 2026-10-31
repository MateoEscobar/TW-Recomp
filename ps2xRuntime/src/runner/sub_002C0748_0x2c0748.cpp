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

// Function: sub_002C0748
// Address: 0x2c0748 - 0x2c0910
void sub_002C0748_0x2c0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0748_0x2c0748");
#endif

    switch (ctx->pc) {
        case 0x2c0748u: goto label_2c0748;
        case 0x2c074cu: goto label_2c074c;
        case 0x2c0750u: goto label_2c0750;
        case 0x2c0754u: goto label_2c0754;
        case 0x2c0758u: goto label_2c0758;
        case 0x2c075cu: goto label_2c075c;
        case 0x2c0760u: goto label_2c0760;
        case 0x2c0764u: goto label_2c0764;
        case 0x2c0768u: goto label_2c0768;
        case 0x2c076cu: goto label_2c076c;
        case 0x2c0770u: goto label_2c0770;
        case 0x2c0774u: goto label_2c0774;
        case 0x2c0778u: goto label_2c0778;
        case 0x2c077cu: goto label_2c077c;
        case 0x2c0780u: goto label_2c0780;
        case 0x2c0784u: goto label_2c0784;
        case 0x2c0788u: goto label_2c0788;
        case 0x2c078cu: goto label_2c078c;
        case 0x2c0790u: goto label_2c0790;
        case 0x2c0794u: goto label_2c0794;
        case 0x2c0798u: goto label_2c0798;
        case 0x2c079cu: goto label_2c079c;
        case 0x2c07a0u: goto label_2c07a0;
        case 0x2c07a4u: goto label_2c07a4;
        case 0x2c07a8u: goto label_2c07a8;
        case 0x2c07acu: goto label_2c07ac;
        case 0x2c07b0u: goto label_2c07b0;
        case 0x2c07b4u: goto label_2c07b4;
        case 0x2c07b8u: goto label_2c07b8;
        case 0x2c07bcu: goto label_2c07bc;
        case 0x2c07c0u: goto label_2c07c0;
        case 0x2c07c4u: goto label_2c07c4;
        case 0x2c07c8u: goto label_2c07c8;
        case 0x2c07ccu: goto label_2c07cc;
        case 0x2c07d0u: goto label_2c07d0;
        case 0x2c07d4u: goto label_2c07d4;
        case 0x2c07d8u: goto label_2c07d8;
        case 0x2c07dcu: goto label_2c07dc;
        case 0x2c07e0u: goto label_2c07e0;
        case 0x2c07e4u: goto label_2c07e4;
        case 0x2c07e8u: goto label_2c07e8;
        case 0x2c07ecu: goto label_2c07ec;
        case 0x2c07f0u: goto label_2c07f0;
        case 0x2c07f4u: goto label_2c07f4;
        case 0x2c07f8u: goto label_2c07f8;
        case 0x2c07fcu: goto label_2c07fc;
        case 0x2c0800u: goto label_2c0800;
        case 0x2c0804u: goto label_2c0804;
        case 0x2c0808u: goto label_2c0808;
        case 0x2c080cu: goto label_2c080c;
        case 0x2c0810u: goto label_2c0810;
        case 0x2c0814u: goto label_2c0814;
        case 0x2c0818u: goto label_2c0818;
        case 0x2c081cu: goto label_2c081c;
        case 0x2c0820u: goto label_2c0820;
        case 0x2c0824u: goto label_2c0824;
        case 0x2c0828u: goto label_2c0828;
        case 0x2c082cu: goto label_2c082c;
        case 0x2c0830u: goto label_2c0830;
        case 0x2c0834u: goto label_2c0834;
        case 0x2c0838u: goto label_2c0838;
        case 0x2c083cu: goto label_2c083c;
        case 0x2c0840u: goto label_2c0840;
        case 0x2c0844u: goto label_2c0844;
        case 0x2c0848u: goto label_2c0848;
        case 0x2c084cu: goto label_2c084c;
        case 0x2c0850u: goto label_2c0850;
        case 0x2c0854u: goto label_2c0854;
        case 0x2c0858u: goto label_2c0858;
        case 0x2c085cu: goto label_2c085c;
        case 0x2c0860u: goto label_2c0860;
        case 0x2c0864u: goto label_2c0864;
        case 0x2c0868u: goto label_2c0868;
        case 0x2c086cu: goto label_2c086c;
        case 0x2c0870u: goto label_2c0870;
        case 0x2c0874u: goto label_2c0874;
        case 0x2c0878u: goto label_2c0878;
        case 0x2c087cu: goto label_2c087c;
        case 0x2c0880u: goto label_2c0880;
        case 0x2c0884u: goto label_2c0884;
        case 0x2c0888u: goto label_2c0888;
        case 0x2c088cu: goto label_2c088c;
        case 0x2c0890u: goto label_2c0890;
        case 0x2c0894u: goto label_2c0894;
        case 0x2c0898u: goto label_2c0898;
        case 0x2c089cu: goto label_2c089c;
        case 0x2c08a0u: goto label_2c08a0;
        case 0x2c08a4u: goto label_2c08a4;
        case 0x2c08a8u: goto label_2c08a8;
        case 0x2c08acu: goto label_2c08ac;
        case 0x2c08b0u: goto label_2c08b0;
        case 0x2c08b4u: goto label_2c08b4;
        case 0x2c08b8u: goto label_2c08b8;
        case 0x2c08bcu: goto label_2c08bc;
        case 0x2c08c0u: goto label_2c08c0;
        case 0x2c08c4u: goto label_2c08c4;
        case 0x2c08c8u: goto label_2c08c8;
        case 0x2c08ccu: goto label_2c08cc;
        case 0x2c08d0u: goto label_2c08d0;
        case 0x2c08d4u: goto label_2c08d4;
        case 0x2c08d8u: goto label_2c08d8;
        case 0x2c08dcu: goto label_2c08dc;
        case 0x2c08e0u: goto label_2c08e0;
        case 0x2c08e4u: goto label_2c08e4;
        case 0x2c08e8u: goto label_2c08e8;
        case 0x2c08ecu: goto label_2c08ec;
        case 0x2c08f0u: goto label_2c08f0;
        case 0x2c08f4u: goto label_2c08f4;
        case 0x2c08f8u: goto label_2c08f8;
        case 0x2c08fcu: goto label_2c08fc;
        case 0x2c0900u: goto label_2c0900;
        case 0x2c0904u: goto label_2c0904;
        case 0x2c0908u: goto label_2c0908;
        case 0x2c090cu: goto label_2c090c;
        default: break;
    }

    ctx->pc = 0x2c0748u;

label_2c0748:
    // 0x2c0748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c074c:
    // 0x2c074c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2c0750:
    // 0x2c0750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c0754:
    // 0x2c0754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0758:
    // 0x2c0758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c075c:
    // 0x2c075c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2c0760:
    // 0x2c0760: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c0760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0764:
    // 0x2c0764: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2c0764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2c0768:
    // 0x2c0768: 0xc0e409a  jal         func_390268
label_2c076c:
    if (ctx->pc == 0x2C076Cu) {
        ctx->pc = 0x2C076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0768u;
        // 0x2c076c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0770u;
        goto label_2c0770;
    }
    ctx->pc = 0x2C0768u;
    SET_GPR_U32(ctx, 31, 0x2C0770u);
    ctx->pc = 0x2C076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0768u;
    // 0x2c076c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0768u, 0x2C0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0770u;
label_2c0770:
    // 0x2c0770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0774:
    // 0x2c0774: 0xc0a34d6  jal         func_28D358
label_2c0778:
    if (ctx->pc == 0x2C0778u) {
        ctx->pc = 0x2C0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0774u;
        // 0x2c0778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C077Cu;
        goto label_2c077c;
    }
    ctx->pc = 0x2C0774u;
    SET_GPR_U32(ctx, 31, 0x2C077Cu);
    ctx->pc = 0x2C0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0774u;
    // 0x2c0778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C0774u, 0x2C077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C077Cu;
label_2c077c:
    // 0x2c077c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c077cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0780:
    // 0x2c0780: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2c0780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c0784:
    // 0x2c0784: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c0784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2c0788:
    // 0x2c0788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c0788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2c078c:
    // 0x2c078c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2c0790:
    if (ctx->pc == 0x2C0790u) {
        ctx->pc = 0x2C0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C078Cu;
        // 0x2c0790: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0794u;
        goto label_2c0794;
    }
    ctx->pc = 0x2C078Cu;
    {
        const bool branch_taken_0x2c078c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C078Cu;
        // 0x2c0790: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c078c) {
            ctx->pc = 0x2C07ACu;
            goto label_2c07ac;
        }
    }
    ctx->pc = 0x2C0794u;
label_2c0794:
    // 0x2c0794: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c0798:
    // 0x2c0798: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2c0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2c079c:
    // 0x2c079c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c07a0:
    // 0x2c07a0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c07a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c07a4:
    // 0x2c07a4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_2c07a8:
    if (ctx->pc == 0x2C07A8u) {
        ctx->pc = 0x2C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07A4u;
        // 0x2c07a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07ACu;
        goto label_2c07ac;
    }
    ctx->pc = 0x2C07A4u;
    {
        const bool branch_taken_0x2c07a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07A4u;
        // 0x2c07a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07a4) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C07ACu;
label_2c07ac:
    // 0x2c07ac: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_2c07b0:
    if (ctx->pc == 0x2C07B0u) {
        ctx->pc = 0x2C07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07ACu;
        // 0x2c07b0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07B4u;
        goto label_2c07b4;
    }
    ctx->pc = 0x2C07ACu;
    {
        const bool branch_taken_0x2c07ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07ACu;
        // 0x2c07b0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07ac) {
            ctx->pc = 0x2C07CCu;
            goto label_2c07cc;
        }
    }
    ctx->pc = 0x2C07B4u;
label_2c07b4:
    // 0x2c07b4: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2c07b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c07b8:
    // 0x2c07b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c07b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c07bc:
    // 0x2c07bc: 0xc0a34ba  jal         func_28D2E8
label_2c07c0:
    if (ctx->pc == 0x2C07C0u) {
        ctx->pc = 0x2C07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07BCu;
        // 0x2c07c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07C4u;
        goto label_2c07c4;
    }
    ctx->pc = 0x2C07BCu;
    SET_GPR_U32(ctx, 31, 0x2C07C4u);
    ctx->pc = 0x2C07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07BCu;
    // 0x2c07c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2C07BCu, 0x2C07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07C4u;
label_2c07c4:
    // 0x2c07c4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2c07c8:
    if (ctx->pc == 0x2C07C8u) {
        ctx->pc = 0x2C07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07C4u;
        // 0x2c07c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07CCu;
        goto label_2c07cc;
    }
    ctx->pc = 0x2C07C4u;
    {
        const bool branch_taken_0x2c07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07C4u;
        // 0x2c07c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07c4) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C07CCu;
label_2c07cc:
    // 0x2c07cc: 0xc08bfb4  jal         func_22FED0
label_2c07d0:
    if (ctx->pc == 0x2C07D0u) {
        ctx->pc = 0x2C07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07CCu;
        // 0x2c07d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07D4u;
        goto label_2c07d4;
    }
    ctx->pc = 0x2C07CCu;
    SET_GPR_U32(ctx, 31, 0x2C07D4u);
    ctx->pc = 0x2C07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07CCu;
    // 0x2c07d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2C07CCu, 0x2C07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07D4u;
label_2c07d4:
    // 0x2c07d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c07d8:
    // 0x2c07d8: 0x9082028d  lbu         $v0, 0x28D($a0)
    ctx->pc = 0x2c07d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 653)));
label_2c07dc:
    // 0x2c07dc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2c07e0:
    if (ctx->pc == 0x2C07E0u) {
        ctx->pc = 0x2C07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07DCu;
        // 0x2c07e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07E4u;
        goto label_2c07e4;
    }
    ctx->pc = 0x2C07DCu;
    {
        const bool branch_taken_0x2c07dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07DCu;
        // 0x2c07e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07dc) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C07E4u;
label_2c07e4:
    // 0x2c07e4: 0x80840264  lb          $a0, 0x264($a0)
    ctx->pc = 0x2c07e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 612)));
label_2c07e8:
    // 0x2c07e8: 0x4800044  bltz        $a0, . + 4 + (0x44 << 2)
label_2c07ec:
    if (ctx->pc == 0x2C07ECu) {
        ctx->pc = 0x2C07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07E8u;
        // 0x2c07ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07F0u;
        goto label_2c07f0;
    }
    ctx->pc = 0x2C07E8u;
    {
        const bool branch_taken_0x2c07e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2C07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07E8u;
        // 0x2c07ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07e8) {
            ctx->pc = 0x2C08FCu;
            goto label_2c08fc;
        }
    }
    ctx->pc = 0x2C07F0u;
label_2c07f0:
    // 0x2c07f0: 0xc05b0e2  jal         func_16C388
label_2c07f4:
    if (ctx->pc == 0x2C07F4u) {
        ctx->pc = 0x2C07F8u;
        goto label_2c07f8;
    }
    ctx->pc = 0x2C07F0u;
    SET_GPR_U32(ctx, 31, 0x2C07F8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2C07F0u, 0x2C07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07F8u;
label_2c07f8:
    // 0x2c07f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c07f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c07fc:
    // 0x2c07fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0800:
    // 0x2c0800: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2c0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2c0804:
    // 0x2c0804: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
label_2c0808:
    if (ctx->pc == 0x2C0808u) {
        ctx->pc = 0x2C0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0804u;
        // 0x2c0808: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C080Cu;
        goto label_2c080c;
    }
    ctx->pc = 0x2C0804u;
    {
        const bool branch_taken_0x2c0804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0804u;
        // 0x2c0808: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0804) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C080Cu;
label_2c080c:
    // 0x2c080c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c080cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0810:
    // 0x2c0810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c0810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c0814:
    // 0x2c0814: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x2c0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_2c0818:
    // 0x2c0818: 0xc0e409a  jal         func_390268
label_2c081c:
    if (ctx->pc == 0x2C081Cu) {
        ctx->pc = 0x2C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0818u;
        // 0x2c081c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0820u;
        goto label_2c0820;
    }
    ctx->pc = 0x2C0818u;
    SET_GPR_U32(ctx, 31, 0x2C0820u);
    ctx->pc = 0x2C081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0818u;
    // 0x2c081c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0818u, 0x2C0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0820u;
label_2c0820:
    // 0x2c0820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0824:
    // 0x2c0824: 0xc0a34d6  jal         func_28D358
label_2c0828:
    if (ctx->pc == 0x2C0828u) {
        ctx->pc = 0x2C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0824u;
        // 0x2c0828: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C082Cu;
        goto label_2c082c;
    }
    ctx->pc = 0x2C0824u;
    SET_GPR_U32(ctx, 31, 0x2C082Cu);
    ctx->pc = 0x2C0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0824u;
    // 0x2c0828: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C0824u, 0x2C082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C082Cu;
label_2c082c:
    // 0x2c082c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c082cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0830:
    // 0x2c0830: 0x56000016  bnel        $s0, $zero, . + 4 + (0x16 << 2)
label_2c0834:
    if (ctx->pc == 0x2C0834u) {
        ctx->pc = 0x2C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0830u;
        // 0x2c0834: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0838u;
        goto label_2c0838;
    }
    ctx->pc = 0x2C0830u;
    {
        const bool branch_taken_0x2c0830 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0830) {
            ctx->pc = 0x2C0834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0830u;
            // 0x2c0834: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C088Cu;
            goto label_2c088c;
        }
    }
    ctx->pc = 0x2C0838u;
label_2c0838:
    // 0x2c0838: 0xc05959e  jal         func_165678
label_2c083c:
    if (ctx->pc == 0x2C083Cu) {
        ctx->pc = 0x2C083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0838u;
        // 0x2c083c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0840u;
        goto label_2c0840;
    }
    ctx->pc = 0x2C0838u;
    SET_GPR_U32(ctx, 31, 0x2C0840u);
    ctx->pc = 0x2C083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0838u;
    // 0x2c083c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2C0838u, 0x2C0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0840u;
label_2c0840:
    // 0x2c0840: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2c0844:
    if (ctx->pc == 0x2C0844u) {
        ctx->pc = 0x2C0848u;
        goto label_2c0848;
    }
    ctx->pc = 0x2C0840u;
    {
        const bool branch_taken_0x2c0840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0840) {
            ctx->pc = 0x2C0880u;
            goto label_2c0880;
        }
    }
    ctx->pc = 0x2C0848u;
label_2c0848:
    // 0x2c0848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c084c:
    // 0x2c084c: 0xc0874fa  jal         func_21D3E8
label_2c0850:
    if (ctx->pc == 0x2C0850u) {
        ctx->pc = 0x2C0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C084Cu;
        // 0x2c0850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0854u;
        goto label_2c0854;
    }
    ctx->pc = 0x2C084Cu;
    SET_GPR_U32(ctx, 31, 0x2C0854u);
    ctx->pc = 0x2C0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C084Cu;
    // 0x2c0850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2C084Cu, 0x2C0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0854u;
label_2c0854:
    // 0x2c0854: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2c0854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2c0858:
    // 0x2c0858: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c085c:
    if (ctx->pc == 0x2C085Cu) {
        ctx->pc = 0x2C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0858u;
        // 0x2c085c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0860u;
        goto label_2c0860;
    }
    ctx->pc = 0x2C0858u;
    {
        const bool branch_taken_0x2c0858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0858u;
        // 0x2c085c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0858) {
            ctx->pc = 0x2C0880u;
            goto label_2c0880;
        }
    }
    ctx->pc = 0x2C0860u;
label_2c0860:
    // 0x2c0860: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c0860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c0864:
    // 0x2c0864: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x2c0864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2c0868:
    // 0x2c0868: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2c0868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c086c:
    // 0x2c086c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2c0870:
    if (ctx->pc == 0x2C0870u) {
        ctx->pc = 0x2C0874u;
        goto label_2c0874;
    }
    ctx->pc = 0x2C086Cu;
    {
        const bool branch_taken_0x2c086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c086c) {
            ctx->pc = 0x2C0880u;
            goto label_2c0880;
        }
    }
    ctx->pc = 0x2C0874u;
label_2c0874:
    // 0x2c0874: 0xc0b0168  jal         func_2C05A0
label_2c0878:
    if (ctx->pc == 0x2C0878u) {
        ctx->pc = 0x2C0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0874u;
        // 0x2c0878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C087Cu;
        goto label_2c087c;
    }
    ctx->pc = 0x2C0874u;
    SET_GPR_U32(ctx, 31, 0x2C087Cu);
    ctx->pc = 0x2C0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0874u;
    // 0x2c0878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05A0u, 0x2C0874u, 0x2C087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C087Cu;
label_2c087c:
    // 0x2c087c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c087cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0880:
    // 0x2c0880: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_2c0884:
    if (ctx->pc == 0x2C0884u) {
        ctx->pc = 0x2C0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0880u;
        // 0x2c0884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0888u;
        goto label_2c0888;
    }
    ctx->pc = 0x2C0880u;
    {
        const bool branch_taken_0x2c0880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0880u;
        // 0x2c0884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0880) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C0888u;
label_2c0888:
    // 0x2c0888: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c0888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c088c:
    // 0x2c088c: 0xc0a4162  jal         func_290588
label_2c0890:
    if (ctx->pc == 0x2C0890u) {
        ctx->pc = 0x2C0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C088Cu;
        // 0x2c0890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0894u;
        goto label_2c0894;
    }
    ctx->pc = 0x2C088Cu;
    SET_GPR_U32(ctx, 31, 0x2C0894u);
    ctx->pc = 0x2C0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C088Cu;
    // 0x2c0890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2C088Cu, 0x2C0894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0894u;
label_2c0894:
    // 0x2c0894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0898:
    // 0x2c0898: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_2c089c:
    if (ctx->pc == 0x2C089Cu) {
        ctx->pc = 0x2C089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0898u;
        // 0x2c089c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08A0u;
        goto label_2c08a0;
    }
    ctx->pc = 0x2C0898u;
    {
        const bool branch_taken_0x2c0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0898u;
        // 0x2c089c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0898) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C08A0u;
label_2c08a0:
    // 0x2c08a0: 0xc0a4e54  jal         func_293950
label_2c08a4:
    if (ctx->pc == 0x2C08A4u) {
        ctx->pc = 0x2C08A8u;
        goto label_2c08a8;
    }
    ctx->pc = 0x2C08A0u;
    SET_GPR_U32(ctx, 31, 0x2C08A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C08A0u, 0x2C08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08A8u;
label_2c08a8:
    // 0x2c08a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c08a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c08ac:
    // 0x2c08ac: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_2c08b0:
    if (ctx->pc == 0x2C08B0u) {
        ctx->pc = 0x2C08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08ACu;
        // 0x2c08b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08B4u;
        goto label_2c08b4;
    }
    ctx->pc = 0x2C08ACu;
    {
        const bool branch_taken_0x2c08ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c08ac) {
            ctx->pc = 0x2C08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C08ACu;
            // 0x2c08b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C08ECu;
            goto label_2c08ec;
        }
    }
    ctx->pc = 0x2C08B4u;
label_2c08b4:
    // 0x2c08b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c08b8:
    // 0x2c08b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c08b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c08bc:
    // 0x2c08bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c08c0:
    // 0x2c08c0: 0x40f809  jalr        $v0
label_2c08c4:
    if (ctx->pc == 0x2C08C4u) {
        ctx->pc = 0x2C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C0u;
        // 0x2c08c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08C8u;
        goto label_2c08c8;
    }
    ctx->pc = 0x2C08C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C08C8u);
        ctx->pc = 0x2C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C0u;
        // 0x2c08c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C08C0u, 0x2C08C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C08C8u;
label_2c08c8:
    // 0x2c08c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c08cc:
    // 0x2c08cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c08ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c08d0:
    // 0x2c08d0: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2c08d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c08d4:
    // 0x2c08d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c08d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c08d8:
    // 0x2c08d8: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x2c08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2c08dc:
    // 0x2c08dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c08dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c08e0:
    // 0x2c08e0: 0xc0ac13c  jal         func_2B04F0
label_2c08e4:
    if (ctx->pc == 0x2C08E4u) {
        ctx->pc = 0x2C08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08E0u;
        // 0x2c08e4: 0x8e280018  lw          $t0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08E8u;
        goto label_2c08e8;
    }
    ctx->pc = 0x2C08E0u;
    SET_GPR_U32(ctx, 31, 0x2C08E8u);
    ctx->pc = 0x2C08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08E0u;
    // 0x2c08e4: 0x8e280018  lw          $t0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x2C08E0u, 0x2C08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08E8u;
label_2c08e8:
    // 0x2c08e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c08ec:
    // 0x2c08ec: 0xc0a35d6  jal         func_28D758
label_2c08f0:
    if (ctx->pc == 0x2C08F0u) {
        ctx->pc = 0x2C08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08ECu;
        // 0x2c08f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08F4u;
        goto label_2c08f4;
    }
    ctx->pc = 0x2C08ECu;
    SET_GPR_U32(ctx, 31, 0x2C08F4u);
    ctx->pc = 0x2C08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08ECu;
    // 0x2c08f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C08ECu, 0x2C08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08F4u;
label_2c08f4:
    // 0x2c08f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c08f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c08f8:
    // 0x2c08f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c08f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c08fc:
    // 0x2c08fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c08fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0900:
    // 0x2c0900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0904:
    // 0x2c0904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0908:
    // 0x2c0908: 0x3e00008  jr          $ra
label_2c090c:
    if (ctx->pc == 0x2C090Cu) {
        ctx->pc = 0x2C090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0908u;
        // 0x2c090c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0910u;
        goto label_fallthrough_0x2c0908;
    }
    ctx->pc = 0x2C0908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0908u;
        // 0x2c090c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c0908:
    ctx->pc = 0x2C0910u;
}
