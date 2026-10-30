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

// Function: sub_001FEA48
// Address: 0x1fea48 - 0x1fea90
void sub_001FEA48_0x1fea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEA48_0x1fea48");
#endif

    switch (ctx->pc) {
        case 0x1fea48u: goto label_1fea48;
        case 0x1fea4cu: goto label_1fea4c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1fea54u: goto label_1fea54;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea64u: goto label_1fea64;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea6cu: goto label_1fea6c;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea74u: goto label_1fea74;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea7cu: goto label_1fea7c;
        case 0x1fea80u: goto label_1fea80;
        case 0x1fea84u: goto label_1fea84;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea8cu: goto label_1fea8c;
        default: break;
    }

    ctx->pc = 0x1fea48u;

label_1fea48:
    // 0x1fea48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fea4c:
    // 0x1fea4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fea50:
    // 0x1fea50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fea54:
    // 0x1fea54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fea58:
    // 0x1fea58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fea58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fea5c:
    // 0x1fea5c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1fea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1fea60:
    // 0x1fea60: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fea64:
    // 0x1fea64: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fea64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fea68:
    // 0x1fea68: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fea6c:
    // 0x1fea6c: 0x40f809  jalr        $v0
label_1fea70:
    if (ctx->pc == 0x1FEA70u) {
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA74u;
        goto label_1fea74;
    }
    ctx->pc = 0x1FEA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEA74u);
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA6Cu, 0x1FEA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEA74u;
label_1fea74:
    // 0x1fea74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fea78:
    // 0x1fea78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fea7c:
    // 0x1fea7c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1fea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_1fea80:
    // 0x1fea80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fea80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fea84:
    // 0x1fea84: 0x3e00008  jr          $ra
label_1fea88:
    if (ctx->pc == 0x1FEA88u) {
        ctx->pc = 0x1FEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA84u;
        // 0x1fea88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA8Cu;
        goto label_1fea8c;
    }
    ctx->pc = 0x1FEA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA84u;
        // 0x1fea88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA8Cu;
label_1fea8c:
    // 0x1fea8c: 0x0  nop
    ctx->pc = 0x1fea8cu;
    // NOP
    ctx->pc = 0x1fea90u;
}
