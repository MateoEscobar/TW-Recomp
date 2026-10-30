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

// Function: sub_00253F28
// Address: 0x253f28 - 0x253f78
void sub_00253F28_0x253f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F28_0x253f28");
#endif

    switch (ctx->pc) {
        case 0x253f68u: goto label_253f68;
        default: break;
    }

    ctx->pc = 0x253f28u;

    // 0x253f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253f2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x253f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253f34: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x253f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x253f38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x253f3c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253F3Cu;
    {
        const bool branch_taken_0x253f3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x253F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F3Cu;
        // 0x253f40: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f3c) {
            ctx->pc = 0x253F50u;
            goto label_253f50;
        }
    }
    ctx->pc = 0x253F44u;
    // 0x253f44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x253f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x253f48: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x253f48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x253f4c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x253f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_253f50:
    // 0x253f50: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x253f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x253f54: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x253f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x253f58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x253f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253f60: 0xc094da2  jal         func_253688
    ctx->pc = 0x253F60u;
    SET_GPR_U32(ctx, 31, 0x253F68u);
    ctx->pc = 0x253F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F60u;
    // 0x253f64: 0x90450010  lbu         $a1, 0x10($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253688u, 0x253F60u, 0x253F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F68u;
label_253f68:
    // 0x253f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x253F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F6Cu;
        // 0x253f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F74u;
    // 0x253f74: 0x0  nop
    ctx->pc = 0x253f74u;
    // NOP
    ctx->pc = 0x253f78u;
}
