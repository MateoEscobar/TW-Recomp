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

// Function: sub_00341E40
// Address: 0x341e40 - 0x341e98
void sub_00341E40_0x341e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341E40_0x341e40");
#endif

    switch (ctx->pc) {
        case 0x341e40u: goto label_341e40;
        case 0x341e44u: goto label_341e44;
        case 0x341e48u: goto label_341e48;
        case 0x341e4cu: goto label_341e4c;
        case 0x341e50u: goto label_341e50;
        case 0x341e54u: goto label_341e54;
        case 0x341e58u: goto label_341e58;
        case 0x341e5cu: goto label_341e5c;
        case 0x341e60u: goto label_341e60;
        case 0x341e64u: goto label_341e64;
        case 0x341e68u: goto label_341e68;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e70u: goto label_341e70;
        case 0x341e74u: goto label_341e74;
        case 0x341e78u: goto label_341e78;
        case 0x341e7cu: goto label_341e7c;
        case 0x341e80u: goto label_341e80;
        case 0x341e84u: goto label_341e84;
        case 0x341e88u: goto label_341e88;
        case 0x341e8cu: goto label_341e8c;
        case 0x341e90u: goto label_341e90;
        case 0x341e94u: goto label_341e94;
        default: break;
    }

    ctx->pc = 0x341e40u;

label_341e40:
    // 0x341e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341e44:
    // 0x341e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_341e48:
    // 0x341e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_341e4c:
    // 0x341e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341e50:
    // 0x341e50: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x341e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_341e54:
    // 0x341e54: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x341e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_341e58:
    // 0x341e58: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x341e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_341e5c:
    // 0x341e5c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x341e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_341e60:
    // 0x341e60: 0x60f809  jalr        $v1
label_341e64:
    if (ctx->pc == 0x341E64u) {
        ctx->pc = 0x341E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E60u;
        // 0x341e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E68u;
        goto label_341e68;
    }
    ctx->pc = 0x341E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341E68u);
        ctx->pc = 0x341E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E60u;
        // 0x341e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E60u, 0x341E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341E68u;
label_341e68:
    // 0x341e68: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x341e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_341e6c:
    // 0x341e6c: 0xc0d058e  jal         func_341638
label_341e70:
    if (ctx->pc == 0x341E70u) {
        ctx->pc = 0x341E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E6Cu;
        // 0x341e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E74u;
        goto label_341e74;
    }
    ctx->pc = 0x341E6Cu;
    SET_GPR_U32(ctx, 31, 0x341E74u);
    ctx->pc = 0x341E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E6Cu;
    // 0x341e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x341E6Cu, 0x341E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E74u;
label_341e74:
    // 0x341e74: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x341e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_341e78:
    // 0x341e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341e7c:
    // 0x341e7c: 0xc0d018a  jal         func_340628
label_341e80:
    if (ctx->pc == 0x341E80u) {
        ctx->pc = 0x341E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E7Cu;
        // 0x341e80: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E84u;
        goto label_341e84;
    }
    ctx->pc = 0x341E7Cu;
    SET_GPR_U32(ctx, 31, 0x341E84u);
    ctx->pc = 0x341E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E7Cu;
    // 0x341e80: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340628u, 0x341E7Cu, 0x341E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E84u;
label_341e84:
    // 0x341e84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x341e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341e88:
    // 0x341e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341e8c:
    // 0x341e8c: 0x3e00008  jr          $ra
label_341e90:
    if (ctx->pc == 0x341E90u) {
        ctx->pc = 0x341E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E8Cu;
        // 0x341e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E94u;
        goto label_341e94;
    }
    ctx->pc = 0x341E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E8Cu;
        // 0x341e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341E94u;
label_341e94:
    // 0x341e94: 0x0  nop
    ctx->pc = 0x341e94u;
    // NOP
    ctx->pc = 0x341e98u;
}
