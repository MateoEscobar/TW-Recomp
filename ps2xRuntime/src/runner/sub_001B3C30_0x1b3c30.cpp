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

// Function: sub_001B3C30
// Address: 0x1b3c30 - 0x1b3c78
void sub_001B3C30_0x1b3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C30_0x1b3c30");
#endif

    switch (ctx->pc) {
        case 0x1b3c30u: goto label_1b3c30;
        case 0x1b3c34u: goto label_1b3c34;
        case 0x1b3c38u: goto label_1b3c38;
        case 0x1b3c3cu: goto label_1b3c3c;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c44u: goto label_1b3c44;
        case 0x1b3c48u: goto label_1b3c48;
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c50u: goto label_1b3c50;
        case 0x1b3c54u: goto label_1b3c54;
        case 0x1b3c58u: goto label_1b3c58;
        case 0x1b3c5cu: goto label_1b3c5c;
        case 0x1b3c60u: goto label_1b3c60;
        case 0x1b3c64u: goto label_1b3c64;
        case 0x1b3c68u: goto label_1b3c68;
        case 0x1b3c6cu: goto label_1b3c6c;
        case 0x1b3c70u: goto label_1b3c70;
        case 0x1b3c74u: goto label_1b3c74;
        default: break;
    }

    ctx->pc = 0x1b3c30u;

label_1b3c30:
    // 0x1b3c30: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
label_1b3c34:
    // 0x1b3c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3c38:
    // 0x1b3c38: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1b3c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b3c3c:
    // 0x1b3c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3c40:
    // 0x1b3c40: 0x3403fea0  ori         $v1, $zero, 0xFEA0
    ctx->pc = 0x1b3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
label_1b3c44:
    // 0x1b3c44: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1b3c48:
    // 0x1b3c48: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3c4c:
    // 0x1b3c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b3c50:
    // 0x1b3c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3c54:
    // 0x1b3c54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b3c58:
    // 0x1b3c58: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x1b3c58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b3c5c:
    // 0x1b3c5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b3c60:
    // 0x1b3c60: 0x40f809  jalr        $v0
label_1b3c64:
    if (ctx->pc == 0x1B3C64u) {
        ctx->pc = 0x1B3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C60u;
        // 0x1b3c64: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3C68u;
        goto label_1b3c68;
    }
    ctx->pc = 0x1B3C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3C68u);
        ctx->pc = 0x1B3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C60u;
        // 0x1b3c64: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C60u, 0x1B3C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3C68u;
label_1b3c68:
    // 0x1b3c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3c6c:
    // 0x1b3c6c: 0x3e00008  jr          $ra
label_1b3c70:
    if (ctx->pc == 0x1B3C70u) {
        ctx->pc = 0x1B3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C6Cu;
        // 0x1b3c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3C74u;
        goto label_1b3c74;
    }
    ctx->pc = 0x1B3C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C6Cu;
        // 0x1b3c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3C74u;
label_1b3c74:
    // 0x1b3c74: 0x0  nop
    ctx->pc = 0x1b3c74u;
    // NOP
    ctx->pc = 0x1b3c78u;
}
