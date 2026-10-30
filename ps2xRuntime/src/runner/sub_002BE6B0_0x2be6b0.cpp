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

// Function: sub_002BE6B0
// Address: 0x2be6b0 - 0x2be700
void sub_002BE6B0_0x2be6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE6B0_0x2be6b0");
#endif

    switch (ctx->pc) {
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6dcu: goto label_2be6dc;
        case 0x2be6f0u: goto label_2be6f0;
        default: break;
    }

    ctx->pc = 0x2be6b0u;

    // 0x2be6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be6b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2be6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2be6c4: 0xc05959e  jal         func_165678
    ctx->pc = 0x2BE6C4u;
    SET_GPR_U32(ctx, 31, 0x2BE6CCu);
    ctx->pc = 0x2BE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6C4u;
    // 0x2be6c8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BE6C4u, 0x2BE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6CCu;
label_2be6cc:
    // 0x2be6cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE6CCu;
    {
        const bool branch_taken_0x2be6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be6cc) {
            ctx->pc = 0x2BE6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6CCu;
            // 0x2be6d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6E8u;
            goto label_2be6e8;
        }
    }
    ctx->pc = 0x2BE6D4u;
    // 0x2be6d4: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2BE6D4u;
    SET_GPR_U32(ctx, 31, 0x2BE6DCu);
    ctx->pc = 0x2BE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6D4u;
    // 0x2be6d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2BE6D4u, 0x2BE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6DCu;
label_2be6dc:
    // 0x2be6dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE6DCu;
    {
        const bool branch_taken_0x2be6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be6dc) {
            ctx->pc = 0x2BE6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6DCu;
            // 0x2be6e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6F4u;
            goto label_2be6f4;
        }
    }
    ctx->pc = 0x2BE6E4u;
    // 0x2be6e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2be6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2be6e8:
    // 0x2be6e8: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2BE6E8u;
    SET_GPR_U32(ctx, 31, 0x2BE6F0u);
    ctx->pc = 0x2BE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6E8u;
    // 0x2be6ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2BE6E8u, 0x2BE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6F0u;
label_2be6f0:
    // 0x2be6f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be6f4:
    // 0x2be6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F8u;
        // 0x2be6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE700u;
}
