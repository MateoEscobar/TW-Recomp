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

// Function: sub_002FB050
// Address: 0x2fb050 - 0x2fb0a8
void sub_002FB050_0x2fb050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB050_0x2fb050");
#endif

    switch (ctx->pc) {
        case 0x2fb070u: goto label_2fb070;
        case 0x2fb090u: goto label_2fb090;
        default: break;
    }

    ctx->pc = 0x2fb050u;

    // 0x2fb050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb054: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb05c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb060: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB060u;
    {
        const bool branch_taken_0x2fb060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB060u;
        // 0x2fb064: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb060) {
            ctx->pc = 0x2FB084u;
            goto label_2fb084;
        }
    }
    ctx->pc = 0x2FB068u;
    // 0x2fb068: 0xc08a102  jal         func_228408
    ctx->pc = 0x2FB068u;
    SET_GPR_U32(ctx, 31, 0x2FB070u);
    ctx->pc = 0x2FB06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB068u;
    // 0x2fb06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x2FB068u, 0x2FB070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB070u;
label_2fb070:
    // 0x2fb070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb074: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB074u;
    {
        const bool branch_taken_0x2fb074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB074u;
        // 0x2fb078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb074) {
            ctx->pc = 0x2FB088u;
            goto label_2fb088;
        }
    }
    ctx->pc = 0x2FB07Cu;
    // 0x2fb07c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB07Cu;
    {
        const bool branch_taken_0x2fb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB07Cu;
        // 0x2fb080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb07c) {
            ctx->pc = 0x2FB094u;
            goto label_2fb094;
        }
    }
    ctx->pc = 0x2FB084u;
label_2fb084:
    // 0x2fb084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb088:
    // 0x2fb088: 0xc089c20  jal         func_227080
    ctx->pc = 0x2FB088u;
    SET_GPR_U32(ctx, 31, 0x2FB090u);
    ctx->pc = 0x2FB08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB088u;
    // 0x2fb08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x2FB088u, 0x2FB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB090u;
label_2fb090:
    // 0x2fb090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb094:
    // 0x2fb094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB09Cu;
        // 0x2fb0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0A4u;
    // 0x2fb0a4: 0x0  nop
    ctx->pc = 0x2fb0a4u;
    // NOP
    ctx->pc = 0x2fb0a8u;
}
