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

// Function: sub_00299470
// Address: 0x299470 - 0x2994b8
void sub_00299470_0x299470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299470_0x299470");
#endif

    switch (ctx->pc) {
        case 0x299490u: goto label_299490;
        case 0x299498u: goto label_299498;
        default: break;
    }

    ctx->pc = 0x299470u;

    // 0x299470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299474: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x299474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x299478: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x299478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29947c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x299480: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x299484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299488: 0xc0e4060  jal         func_390180
    ctx->pc = 0x299488u;
    SET_GPR_U32(ctx, 31, 0x299490u);
    ctx->pc = 0x29948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299488u;
    // 0x29948c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x299488u, 0x299490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299490u;
label_299490:
    // 0x299490: 0xc08a61a  jal         func_229868
    ctx->pc = 0x299490u;
    SET_GPR_U32(ctx, 31, 0x299498u);
    ctx->pc = 0x299494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299490u;
    // 0x299494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x299490u, 0x299498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299498u;
label_299498:
    // 0x299498: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29949c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29949Cu;
    {
        const bool branch_taken_0x29949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29949Cu;
        // 0x2994a0: 0x36020080  ori         $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29949c) {
            ctx->pc = 0x2994A8u;
            goto label_2994a8;
        }
    }
    ctx->pc = 0x2994A4u;
    // 0x2994a4: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x2994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
label_2994a8:
    // 0x2994a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2994a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2994ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2994acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2994b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2994B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994B0u;
        // 0x2994b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2994B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2994B8u;
}
