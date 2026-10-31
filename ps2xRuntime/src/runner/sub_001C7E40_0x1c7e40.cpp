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

// Function: sub_001C7E40
// Address: 0x1c7e40 - 0x1c7e80
void sub_001C7E40_0x1c7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7E40_0x1c7e40");
#endif

    switch (ctx->pc) {
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e6cu: goto label_1c7e6c;
        default: break;
    }

    ctx->pc = 0x1c7e40u;

    // 0x1c7e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e50: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x1c7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1c7e54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7E54u;
    {
        const bool branch_taken_0x1c7e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e54) {
            ctx->pc = 0x1C7E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7E54u;
            // 0x1c7e58: 0xae000378  sw          $zero, 0x378($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7E5Cu;
            goto label_1c7e5c;
        }
    }
    ctx->pc = 0x1C7E5Cu;
label_1c7e5c:
    // 0x1c7e5c: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1C7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E64u);
    ctx->pc = 0x1C7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E5Cu;
    // 0x1c7e60: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1C7E5Cu, 0x1C7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E64u;
label_1c7e64:
    // 0x1c7e64: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1C7E64u;
    SET_GPR_U32(ctx, 31, 0x1C7E6Cu);
    ctx->pc = 0x1C7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E64u;
    // 0x1c7e68: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1C7E64u, 0x1C7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E6Cu;
label_1c7e6c:
    // 0x1c7e6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E74u;
        // 0x1c7e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7E7Cu;
    // 0x1c7e7c: 0x0  nop
    ctx->pc = 0x1c7e7cu;
    // NOP
    ctx->pc = 0x1c7e80u;
}
