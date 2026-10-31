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

// Function: sub_0030AD20
// Address: 0x30ad20 - 0x30ad58
void sub_0030AD20_0x30ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AD20_0x30ad20");
#endif

    switch (ctx->pc) {
        case 0x30ad34u: goto label_30ad34;
        case 0x30ad3cu: goto label_30ad3c;
        case 0x30ad44u: goto label_30ad44;
        default: break;
    }

    ctx->pc = 0x30ad20u;

    // 0x30ad20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ad24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30ad28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ad2c: 0xc0c2aac  jal         func_30AAB0
    ctx->pc = 0x30AD2Cu;
    SET_GPR_U32(ctx, 31, 0x30AD34u);
    ctx->pc = 0x30AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD2Cu;
    // 0x30ad30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AAB0u, 0x30AD2Cu, 0x30AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD34u;
label_30ad34:
    // 0x30ad34: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30AD34u;
    SET_GPR_U32(ctx, 31, 0x30AD3Cu);
    ctx->pc = 0x30AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD34u;
    // 0x30ad38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30AD34u, 0x30AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD3Cu;
label_30ad3c:
    // 0x30ad3c: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30AD3Cu;
    SET_GPR_U32(ctx, 31, 0x30AD44u);
    ctx->pc = 0x30AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD3Cu;
    // 0x30ad40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30AD3Cu, 0x30AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD44u;
label_30ad44:
    // 0x30ad44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30ad44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ad48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD4Cu;
        // 0x30ad50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AD54u;
    // 0x30ad54: 0x0  nop
    ctx->pc = 0x30ad54u;
    // NOP
    ctx->pc = 0x30ad58u;
}
