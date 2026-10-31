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

// Function: sub_0017C690
// Address: 0x17c690 - 0x17c700
void sub_0017C690_0x17c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C690_0x17c690");
#endif

    switch (ctx->pc) {
        case 0x17c6c0u: goto label_17c6c0;
        case 0x17c6c8u: goto label_17c6c8;
        case 0x17c6d0u: goto label_17c6d0;
        case 0x17c6e4u: goto label_17c6e4;
        default: break;
    }

    ctx->pc = 0x17c690u;

    // 0x17c690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17c698: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17c69c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c6a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17c6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x17c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17c6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6b8: 0xc12247e  jal         func_4891F8
    ctx->pc = 0x17C6B8u;
    SET_GPR_U32(ctx, 31, 0x17C6C0u);
    ctx->pc = 0x17C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6B8u;
    // 0x17c6bc: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x17C6B8u, 0x17C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6C0u;
label_17c6c0:
    // 0x17c6c0: 0xc121090  jal         func_484240
    ctx->pc = 0x17C6C0u;
    SET_GPR_U32(ctx, 31, 0x17C6C8u);
    ctx->pc = 0x17C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6C0u;
    // 0x17c6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484240u, 0x17C6C0u, 0x17C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6C8u;
label_17c6c8:
    // 0x17c6c8: 0xc11b1ea  jal         func_46C7A8
    ctx->pc = 0x17C6C8u;
    SET_GPR_U32(ctx, 31, 0x17C6D0u);
    ctx->pc = 0x17C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6C8u;
    // 0x17c6cc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C7A8u, 0x17C6C8u, 0x17C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6D0u;
label_17c6d0:
    // 0x17c6d0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x17c6d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x17c6d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C6D4u;
    {
        const bool branch_taken_0x17c6d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6D4u;
        // 0x17c6d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6d4) {
            ctx->pc = 0x17C6E8u;
            goto label_17c6e8;
        }
    }
    ctx->pc = 0x17C6DCu;
    // 0x17c6dc: 0xc10b208  jal         func_42C820
    ctx->pc = 0x17C6DCu;
    SET_GPR_U32(ctx, 31, 0x17C6E4u);
    ctx->pc = 0x17C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6DCu;
    // 0x17c6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x17C6DCu, 0x17C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6E4u;
label_17c6e4:
    // 0x17c6e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17c6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c6e8:
    // 0x17c6e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c6ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17c6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6F4u;
        // 0x17c6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C6FCu;
    // 0x17c6fc: 0x0  nop
    ctx->pc = 0x17c6fcu;
    // NOP
    ctx->pc = 0x17c700u;
}
