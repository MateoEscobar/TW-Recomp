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

// Function: sub_00237468
// Address: 0x237468 - 0x2374d8
void sub_00237468_0x237468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237468_0x237468");
#endif

    switch (ctx->pc) {
        case 0x237484u: goto label_237484;
        case 0x23748cu: goto label_23748c;
        default: break;
    }

    ctx->pc = 0x237468u;

    // 0x237468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23746c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237470: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23747c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23747Cu;
    SET_GPR_U32(ctx, 31, 0x237484u);
    ctx->pc = 0x237480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23747Cu;
    // 0x237480: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23747Cu, 0x237484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237484u;
label_237484:
    // 0x237484: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237484u;
    SET_GPR_U32(ctx, 31, 0x23748Cu);
    ctx->pc = 0x237488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237484u;
    // 0x237488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237484u, 0x23748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23748Cu;
label_23748c:
    // 0x23748c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237490: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237490u;
    {
        const bool branch_taken_0x237490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237490) {
            ctx->pc = 0x237494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237490u;
            // 0x237494: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2374CCu;
            goto label_2374cc;
        }
    }
    ctx->pc = 0x237498u;
    // 0x237498: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237498u;
    {
        const bool branch_taken_0x237498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237498u;
        // 0x23749c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237498) {
            ctx->pc = 0x2374B0u;
            goto label_2374b0;
        }
    }
    ctx->pc = 0x2374A0u;
    // 0x2374a0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2374a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2374a4: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x2374a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2374A8u;
    {
        const bool branch_taken_0x2374a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A8u;
        // 0x2374ac: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374a8) {
            ctx->pc = 0x2374C4u;
            goto label_2374c4;
        }
    }
    ctx->pc = 0x2374B0u;
label_2374b0:
    // 0x2374b0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2374b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2374b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2374b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2374b8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2374b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2374bc: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x2374c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2374c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2374c4:
    // 0x2374c4: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2374c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2374c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2374c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2374cc:
    // 0x2374cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2374ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2374d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2374D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2374D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374D0u;
        // 0x2374d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2374D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2374D8u;
}
