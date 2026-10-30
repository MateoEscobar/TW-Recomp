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

// Function: sub_001CF358
// Address: 0x1cf358 - 0x1cf3a8
void sub_001CF358_0x1cf358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF358_0x1cf358");
#endif

    switch (ctx->pc) {
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf37cu: goto label_1cf37c;
        default: break;
    }

    ctx->pc = 0x1cf358u;

    // 0x1cf358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf35c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cf360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf364: 0xc074712  jal         func_1D1C48
    ctx->pc = 0x1CF364u;
    SET_GPR_U32(ctx, 31, 0x1CF36Cu);
    ctx->pc = 0x1CF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF364u;
    // 0x1cf368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C48u, 0x1CF364u, 0x1CF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF36Cu;
label_1cf36c:
    // 0x1cf36c: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1CF36Cu;
    SET_GPR_U32(ctx, 31, 0x1CF374u);
    ctx->pc = 0x1CF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF36Cu;
    // 0x1cf370: 0x260407c0  addiu       $a0, $s0, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1CF36Cu, 0x1CF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF374u;
label_1cf374:
    // 0x1cf374: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1CF374u;
    SET_GPR_U32(ctx, 31, 0x1CF37Cu);
    ctx->pc = 0x1CF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF374u;
    // 0x1cf378: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1CF374u, 0x1CF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF37Cu;
label_1cf37c:
    // 0x1cf37c: 0x8e0307b4  lw          $v1, 0x7B4($s0)
    ctx->pc = 0x1cf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    // 0x1cf380: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF380u;
    {
        const bool branch_taken_0x1cf380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf380) {
            ctx->pc = 0x1CF394u;
            goto label_1cf394;
        }
    }
    ctx->pc = 0x1CF388u;
    // 0x1cf388: 0xa062001b  sb          $v0, 0x1B($v1)
    ctx->pc = 0x1cf388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf38c: 0x8e0307b4  lw          $v1, 0x7B4($s0)
    ctx->pc = 0x1cf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    // 0x1cf390: 0xa060001e  sb          $zero, 0x1E($v1)
    ctx->pc = 0x1cf390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 0));
label_1cf394:
    // 0x1cf394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF39Cu;
        // 0x1cf3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF3A4u;
    // 0x1cf3a4: 0x0  nop
    ctx->pc = 0x1cf3a4u;
    // NOP
    ctx->pc = 0x1cf3a8u;
}
