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

// Function: sub_002340A8
// Address: 0x2340a8 - 0x234118
void sub_002340A8_0x2340a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002340A8_0x2340a8");
#endif

    switch (ctx->pc) {
        case 0x2340c4u: goto label_2340c4;
        case 0x2340ccu: goto label_2340cc;
        default: break;
    }

    ctx->pc = 0x2340a8u;

    // 0x2340a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2340a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2340ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2340acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2340b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2340b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2340b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2340b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2340b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2340bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2340BCu;
    SET_GPR_U32(ctx, 31, 0x2340C4u);
    ctx->pc = 0x2340C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340BCu;
    // 0x2340c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2340BCu, 0x2340C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340C4u;
label_2340c4:
    // 0x2340c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2340C4u;
    SET_GPR_U32(ctx, 31, 0x2340CCu);
    ctx->pc = 0x2340C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340C4u;
    // 0x2340c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2340C4u, 0x2340CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340CCu;
label_2340cc:
    // 0x2340cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340d0: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x2340D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340D0u;
            // 0x2340d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23410Cu;
            goto label_23410c;
        }
    }
    ctx->pc = 0x2340D8u;
    // 0x2340d8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2340D8u;
    {
        const bool branch_taken_0x2340d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340D8u;
        // 0x2340dc: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340d8) {
            ctx->pc = 0x2340F0u;
            goto label_2340f0;
        }
    }
    ctx->pc = 0x2340E0u;
    // 0x2340e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2340e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2340e4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2340e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2340e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2340E8u;
    {
        const bool branch_taken_0x2340e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340E8u;
        // 0x2340ec: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340e8) {
            ctx->pc = 0x234104u;
            goto label_234104;
        }
    }
    ctx->pc = 0x2340F0u;
label_2340f0:
    // 0x2340f0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2340f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2340f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2340f8: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x2340f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x2340fc: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x2340fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x234100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234104:
    // 0x234104: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x234104u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x234108: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23410c:
    // 0x23410c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234110: 0x3e00008  jr          $ra
    ctx->pc = 0x234110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234110u;
        // 0x234114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234118u;
}
