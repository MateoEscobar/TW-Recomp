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

// Function: sub_003A4B88
// Address: 0x3a4b88 - 0x3a4bd0
void sub_003A4B88_0x3a4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4B88_0x3a4b88");
#endif

    switch (ctx->pc) {
        case 0x3a4b9cu: goto label_3a4b9c;
        case 0x3a4bb4u: goto label_3a4bb4;
        default: break;
    }

    ctx->pc = 0x3a4b88u;

    // 0x3a4b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4b8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a4b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a4b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4b94: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A4B94u;
    SET_GPR_U32(ctx, 31, 0x3A4B9Cu);
    ctx->pc = 0x3A4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4B94u;
    // 0x3a4b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A4B94u, 0x3A4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B9Cu;
label_3a4b9c:
    // 0x3a4b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4B9Cu;
    {
        const bool branch_taken_0x3a4b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4b9c) {
            ctx->pc = 0x3A4BACu;
            goto label_3a4bac;
        }
    }
    ctx->pc = 0x3A4BA4u;
    // 0x3a4ba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4BA4u;
    {
        const bool branch_taken_0x3a4ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BA4u;
        // 0x3a4ba8: 0x8c4200f4  lw          $v0, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ba4) {
            ctx->pc = 0x3A4BC0u;
            goto label_3a4bc0;
        }
    }
    ctx->pc = 0x3A4BACu;
label_3a4bac:
    // 0x3a4bac: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x3A4BACu;
    SET_GPR_U32(ctx, 31, 0x3A4BB4u);
    ctx->pc = 0x3A4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BACu;
    // 0x3a4bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x3A4BACu, 0x3A4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BB4u;
label_3a4bb4:
    // 0x3a4bb4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4BB4u;
    {
        const bool branch_taken_0x3a4bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4bb4) {
            ctx->pc = 0x3A4BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4BB4u;
            // 0x3a4bb8: 0x944200d8  lhu         $v0, 0xD8($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4BC0u;
            goto label_3a4bc0;
        }
    }
    ctx->pc = 0x3A4BBCu;
    // 0x3a4bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4bc0:
    // 0x3a4bc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a4bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BC8u;
        // 0x3a4bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4BD0u;
}
