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

// Function: sub_00148460
// Address: 0x148460 - 0x1484d8
void sub_00148460_0x148460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148460_0x148460");
#endif

    switch (ctx->pc) {
        case 0x148460u: goto label_148460;
        case 0x148464u: goto label_148464;
        case 0x148468u: goto label_148468;
        case 0x14846cu: goto label_14846c;
        case 0x148470u: goto label_148470;
        case 0x148474u: goto label_148474;
        case 0x148478u: goto label_148478;
        case 0x14847cu: goto label_14847c;
        case 0x148480u: goto label_148480;
        case 0x148484u: goto label_148484;
        case 0x148488u: goto label_148488;
        case 0x14848cu: goto label_14848c;
        case 0x148490u: goto label_148490;
        case 0x148494u: goto label_148494;
        case 0x148498u: goto label_148498;
        case 0x14849cu: goto label_14849c;
        case 0x1484a0u: goto label_1484a0;
        case 0x1484a4u: goto label_1484a4;
        case 0x1484a8u: goto label_1484a8;
        case 0x1484acu: goto label_1484ac;
        case 0x1484b0u: goto label_1484b0;
        case 0x1484b4u: goto label_1484b4;
        case 0x1484b8u: goto label_1484b8;
        case 0x1484bcu: goto label_1484bc;
        case 0x1484c0u: goto label_1484c0;
        case 0x1484c4u: goto label_1484c4;
        case 0x1484c8u: goto label_1484c8;
        case 0x1484ccu: goto label_1484cc;
        case 0x1484d0u: goto label_1484d0;
        case 0x1484d4u: goto label_1484d4;
        default: break;
    }

    ctx->pc = 0x148460u;

label_148460:
    // 0x148460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x148460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_148464:
    // 0x148464: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_148468:
    // 0x148468: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x148468u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_14846c:
    // 0x14846c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14846cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_148470:
    // 0x148470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_148474:
    // 0x148474: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_148478:
    // 0x148478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14847c:
    // 0x14847c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14847cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148480:
    // 0x148480: 0x24a5a060  addiu       $a1, $a1, -0x5FA0
    ctx->pc = 0x148480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
label_148484:
    // 0x148484: 0x2508a0b8  addiu       $t0, $t0, -0x5F48
    ctx->pc = 0x148484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942904));
label_148488:
    // 0x148488: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_14848c:
    // 0x14848c: 0x24060204  addiu       $a2, $zero, 0x204
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_148490:
    // 0x148490: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x148490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_148494:
    // 0x148494: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x148494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_148498:
    // 0x148498: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14849c:
    // 0x14849c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14849cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1484a0:
    // 0x1484a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1484a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1484a4:
    // 0x1484a4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1484a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1484a8:
    // 0x1484a8: 0x40f809  jalr        $v0
label_1484ac:
    if (ctx->pc == 0x1484ACu) {
        ctx->pc = 0x1484ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484A8u;
        // 0x1484ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1484B0u;
        goto label_1484b0;
    }
    ctx->pc = 0x1484A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1484B0u);
        ctx->pc = 0x1484ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484A8u;
        // 0x1484ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1484A8u, 0x1484B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1484B0u;
label_1484b0:
    // 0x1484b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1484b4:
    if (ctx->pc == 0x1484B4u) {
        ctx->pc = 0x1484B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484B0u;
        // 0x1484b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1484B8u;
        goto label_1484b8;
    }
    ctx->pc = 0x1484B0u;
    {
        const bool branch_taken_0x1484b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484B0u;
        // 0x1484b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484b0) {
            ctx->pc = 0x1484C4u;
            goto label_1484c4;
        }
    }
    ctx->pc = 0x1484B8u;
label_1484b8:
    // 0x1484b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1484b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1484bc:
    // 0x1484bc: 0xc052172  jal         func_1485C8
label_1484c0:
    if (ctx->pc == 0x1484C0u) {
        ctx->pc = 0x1484C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484BCu;
        // 0x1484c0: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1484C4u;
        goto label_1484c4;
    }
    ctx->pc = 0x1484BCu;
    SET_GPR_U32(ctx, 31, 0x1484C4u);
    ctx->pc = 0x1484C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484BCu;
    // 0x1484c0: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1485C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1485C8u, 0x1484BCu, 0x1484C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484C4u;
label_1484c4:
    // 0x1484c4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1484c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_1484c8:
    // 0x1484c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1484c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1484cc:
    // 0x1484cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1484ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1484d0:
    // 0x1484d0: 0x3e00008  jr          $ra
label_1484d4:
    if (ctx->pc == 0x1484D4u) {
        ctx->pc = 0x1484D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484D0u;
        // 0x1484d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1484D8u;
        goto label_fallthrough_0x1484d0;
    }
    ctx->pc = 0x1484D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1484D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484D0u;
        // 0x1484d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1484D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1484d0:
    ctx->pc = 0x1484D8u;
}
