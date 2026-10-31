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

// Function: sub_00307460
// Address: 0x307460 - 0x307520
void sub_00307460_0x307460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307460_0x307460");
#endif

    switch (ctx->pc) {
        case 0x307460u: goto label_307460;
        case 0x307464u: goto label_307464;
        case 0x307468u: goto label_307468;
        case 0x30746cu: goto label_30746c;
        case 0x307470u: goto label_307470;
        case 0x307474u: goto label_307474;
        case 0x307478u: goto label_307478;
        case 0x30747cu: goto label_30747c;
        case 0x307480u: goto label_307480;
        case 0x307484u: goto label_307484;
        case 0x307488u: goto label_307488;
        case 0x30748cu: goto label_30748c;
        case 0x307490u: goto label_307490;
        case 0x307494u: goto label_307494;
        case 0x307498u: goto label_307498;
        case 0x30749cu: goto label_30749c;
        case 0x3074a0u: goto label_3074a0;
        case 0x3074a4u: goto label_3074a4;
        case 0x3074a8u: goto label_3074a8;
        case 0x3074acu: goto label_3074ac;
        case 0x3074b0u: goto label_3074b0;
        case 0x3074b4u: goto label_3074b4;
        case 0x3074b8u: goto label_3074b8;
        case 0x3074bcu: goto label_3074bc;
        case 0x3074c0u: goto label_3074c0;
        case 0x3074c4u: goto label_3074c4;
        case 0x3074c8u: goto label_3074c8;
        case 0x3074ccu: goto label_3074cc;
        case 0x3074d0u: goto label_3074d0;
        case 0x3074d4u: goto label_3074d4;
        case 0x3074d8u: goto label_3074d8;
        case 0x3074dcu: goto label_3074dc;
        case 0x3074e0u: goto label_3074e0;
        case 0x3074e4u: goto label_3074e4;
        case 0x3074e8u: goto label_3074e8;
        case 0x3074ecu: goto label_3074ec;
        case 0x3074f0u: goto label_3074f0;
        case 0x3074f4u: goto label_3074f4;
        case 0x3074f8u: goto label_3074f8;
        case 0x3074fcu: goto label_3074fc;
        case 0x307500u: goto label_307500;
        case 0x307504u: goto label_307504;
        case 0x307508u: goto label_307508;
        case 0x30750cu: goto label_30750c;
        case 0x307510u: goto label_307510;
        case 0x307514u: goto label_307514;
        case 0x307518u: goto label_307518;
        case 0x30751cu: goto label_30751c;
        default: break;
    }

    ctx->pc = 0x307460u;

label_307460:
    // 0x307460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_307464:
    // 0x307464: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x307464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_307468:
    // 0x307468: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x307468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_30746c:
    // 0x30746c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_307470:
    // 0x307470: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x307470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_307474:
    // 0x307474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307478:
    // 0x307478: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x307478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30747c:
    // 0x30747c: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x30747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_307480:
    // 0x307480: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_307484:
    if (ctx->pc == 0x307484u) {
        ctx->pc = 0x307484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307480u;
        // 0x307484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307488u;
        goto label_307488;
    }
    ctx->pc = 0x307480u;
    {
        const bool branch_taken_0x307480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307480u;
        // 0x307484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307480) {
            ctx->pc = 0x307528u;
            return;
        }
    }
    ctx->pc = 0x307488u;
label_307488:
    // 0x307488: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x307488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_30748c:
    // 0x30748c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30748cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_307490:
    // 0x307490: 0x2442a750  addiu       $v0, $v0, -0x58B0
    ctx->pc = 0x307490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944592));
label_307494:
    // 0x307494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_307498:
    // 0x307498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30749c:
    // 0x30749c: 0x800008  jr          $a0
label_3074a0:
    if (ctx->pc == 0x3074A0u) {
        ctx->pc = 0x3074A4u;
        goto label_3074a4;
    }
    ctx->pc = 0x30749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3074A4u: goto label_3074a4;
            case 0x3074B0u: goto label_3074b0;
            case 0x3074BCu: goto label_3074bc;
            case 0x3074CCu: goto label_3074cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30749Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3074A4u;
label_3074a4:
    // 0x3074a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3074a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3074a8:
    // 0x3074a8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3074ac:
    if (ctx->pc == 0x3074ACu) {
        ctx->pc = 0x3074ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074A8u;
        // 0x3074ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074B0u;
        goto label_3074b0;
    }
    ctx->pc = 0x3074A8u;
    {
        const bool branch_taken_0x3074a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074A8u;
        // 0x3074ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074a8) {
            ctx->pc = 0x307508u;
            goto label_307508;
        }
    }
    ctx->pc = 0x3074B0u;
label_3074b0:
    // 0x3074b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3074b4:
    // 0x3074b4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3074b8:
    if (ctx->pc == 0x3074B8u) {
        ctx->pc = 0x3074B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074B4u;
        // 0x3074b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074BCu;
        goto label_3074bc;
    }
    ctx->pc = 0x3074B4u;
    {
        const bool branch_taken_0x3074b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074B4u;
        // 0x3074b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074b4) {
            ctx->pc = 0x307508u;
            goto label_307508;
        }
    }
    ctx->pc = 0x3074BCu;
label_3074bc:
    // 0x3074bc: 0xc0c1b74  jal         func_306DD0
label_3074c0:
    if (ctx->pc == 0x3074C0u) {
        ctx->pc = 0x3074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074BCu;
        // 0x3074c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074C4u;
        goto label_3074c4;
    }
    ctx->pc = 0x3074BCu;
    SET_GPR_U32(ctx, 31, 0x3074C4u);
    ctx->pc = 0x3074C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074BCu;
    // 0x3074c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306DD0u, 0x3074BCu, 0x3074C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074C4u;
label_3074c4:
    // 0x3074c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3074c8:
    if (ctx->pc == 0x3074C8u) {
        ctx->pc = 0x3074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074C4u;
        // 0x3074c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074CCu;
        goto label_3074cc;
    }
    ctx->pc = 0x3074C4u;
    {
        const bool branch_taken_0x3074c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074C4u;
        // 0x3074c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074c4) {
            ctx->pc = 0x30752Cu;
            return;
        }
    }
    ctx->pc = 0x3074CCu;
label_3074cc:
    // 0x3074cc: 0xc05959e  jal         func_165678
label_3074d0:
    if (ctx->pc == 0x3074D0u) {
        ctx->pc = 0x3074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074CCu;
        // 0x3074d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074D4u;
        goto label_3074d4;
    }
    ctx->pc = 0x3074CCu;
    SET_GPR_U32(ctx, 31, 0x3074D4u);
    ctx->pc = 0x3074D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074CCu;
    // 0x3074d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3074CCu, 0x3074D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074D4u;
label_3074d4:
    // 0x3074d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3074d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3074d8:
    // 0x3074d8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3074dc:
    if (ctx->pc == 0x3074DCu) {
        ctx->pc = 0x3074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074D8u;
        // 0x3074dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074E0u;
        goto label_3074e0;
    }
    ctx->pc = 0x3074D8u;
    {
        const bool branch_taken_0x3074d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074D8u;
        // 0x3074dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074d8) {
            ctx->pc = 0x30752Cu;
            return;
        }
    }
    ctx->pc = 0x3074E0u;
label_3074e0:
    // 0x3074e0: 0xc08a61a  jal         func_229868
label_3074e4:
    if (ctx->pc == 0x3074E4u) {
        ctx->pc = 0x3074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074E0u;
        // 0x3074e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074E8u;
        goto label_3074e8;
    }
    ctx->pc = 0x3074E0u;
    SET_GPR_U32(ctx, 31, 0x3074E8u);
    ctx->pc = 0x3074E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074E0u;
    // 0x3074e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3074E0u, 0x3074E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074E8u;
label_3074e8:
    // 0x3074e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3074ec:
    if (ctx->pc == 0x3074ECu) {
        ctx->pc = 0x3074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074E8u;
        // 0x3074ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074F0u;
        goto label_3074f0;
    }
    ctx->pc = 0x3074E8u;
    {
        const bool branch_taken_0x3074e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3074e8) {
            ctx->pc = 0x3074ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3074E8u;
            // 0x3074ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30752Cu;
            return;
        }
    }
    ctx->pc = 0x3074F0u;
label_3074f0:
    // 0x3074f0: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
label_3074f4:
    if (ctx->pc == 0x3074F4u) {
        ctx->pc = 0x3074F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074F0u;
        // 0x3074f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3074F8u;
        goto label_3074f8;
    }
    ctx->pc = 0x3074F0u;
    {
        const bool branch_taken_0x3074f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3074F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074F0u;
        // 0x3074f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074f0) {
            ctx->pc = 0x30752Cu;
            return;
        }
    }
    ctx->pc = 0x3074F8u;
label_3074f8:
    // 0x3074f8: 0xc0c1bb0  jal         func_306EC0
label_3074fc:
    if (ctx->pc == 0x3074FCu) {
        ctx->pc = 0x3074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074F8u;
        // 0x3074fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307500u;
        goto label_307500;
    }
    ctx->pc = 0x3074F8u;
    SET_GPR_U32(ctx, 31, 0x307500u);
    ctx->pc = 0x3074FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074F8u;
    // 0x3074fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306EC0u, 0x3074F8u, 0x307500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307500u;
label_307500:
    // 0x307500: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_307504:
    // 0x307504: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_307508:
    // 0x307508: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x307508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30750c:
    // 0x30750c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_307510:
    // 0x307510: 0x60f809  jalr        $v1
label_307514:
    if (ctx->pc == 0x307514u) {
        ctx->pc = 0x307514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307510u;
        // 0x307514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307518u;
        goto label_307518;
    }
    ctx->pc = 0x307510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x307518u);
        ctx->pc = 0x307514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307510u;
        // 0x307514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307510u, 0x307518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307518u;
label_307518:
    // 0x307518: 0x10000004  b           . + 4 + (0x4 << 2)
label_30751c:
    if (ctx->pc == 0x30751Cu) {
        ctx->pc = 0x30751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307518u;
        // 0x30751c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307520u;
        goto label_fallthrough_0x307518;
    }
    ctx->pc = 0x307518u;
    {
        const bool branch_taken_0x307518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307518u;
        // 0x30751c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307518) {
            ctx->pc = 0x30752Cu;
            return;
        }
    }
label_fallthrough_0x307518:
    ctx->pc = 0x307520u;
}
