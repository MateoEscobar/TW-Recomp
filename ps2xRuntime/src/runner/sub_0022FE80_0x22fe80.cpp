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

// Function: sub_0022FE80
// Address: 0x22fe80 - 0x22fed0
void sub_0022FE80_0x22fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE80_0x22fe80");
#endif

    switch (ctx->pc) {
        case 0x22fe94u: goto label_22fe94;
        case 0x22fea4u: goto label_22fea4;
        case 0x22feb4u: goto label_22feb4;
        case 0x22fec0u: goto label_22fec0;
        default: break;
    }

    ctx->pc = 0x22fe80u;

    // 0x22fe80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fe84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fe88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fe8c: 0xc089f66  jal         func_227D98
    ctx->pc = 0x22FE8Cu;
    SET_GPR_U32(ctx, 31, 0x22FE94u);
    ctx->pc = 0x22FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE8Cu;
    // 0x22fe90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x22FE8Cu, 0x22FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE94u;
label_22fe94:
    // 0x22fe94: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22FE94u;
    {
        const bool branch_taken_0x22fe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fe94) {
            ctx->pc = 0x22FE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FE94u;
            // 0x22fe98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FEC4u;
            goto label_22fec4;
        }
    }
    ctx->pc = 0x22FE9Cu;
    // 0x22fe9c: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x22FE9Cu;
    SET_GPR_U32(ctx, 31, 0x22FEA4u);
    ctx->pc = 0x22FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE9Cu;
    // 0x22fea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x22FE9Cu, 0x22FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEA4u;
label_22fea4:
    // 0x22fea4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FEA4u;
    {
        const bool branch_taken_0x22fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fea4) {
            ctx->pc = 0x22FEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FEA4u;
            // 0x22fea8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FEC4u;
            goto label_22fec4;
        }
    }
    ctx->pc = 0x22FEACu;
    // 0x22feac: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x22FEACu;
    SET_GPR_U32(ctx, 31, 0x22FEB4u);
    ctx->pc = 0x22FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEACu;
    // 0x22feb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x22FEACu, 0x22FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEB4u;
label_22feb4:
    // 0x22feb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22feb8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22FEB8u;
    SET_GPR_U32(ctx, 31, 0x22FEC0u);
    ctx->pc = 0x22FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEB8u;
    // 0x22febc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22FEB8u, 0x22FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEC0u;
label_22fec0:
    // 0x22fec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22fec4:
    // 0x22fec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fec8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEC8u;
        // 0x22fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FED0u;
}
