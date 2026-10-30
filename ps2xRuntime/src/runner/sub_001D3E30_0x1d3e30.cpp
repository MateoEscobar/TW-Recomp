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

// Function: sub_001D3E30
// Address: 0x1d3e30 - 0x1d3e90
void sub_001D3E30_0x1d3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3E30_0x1d3e30");
#endif

    switch (ctx->pc) {
        case 0x1d3e30u: goto label_1d3e30;
        case 0x1d3e34u: goto label_1d3e34;
        case 0x1d3e38u: goto label_1d3e38;
        case 0x1d3e3cu: goto label_1d3e3c;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e44u: goto label_1d3e44;
        case 0x1d3e48u: goto label_1d3e48;
        case 0x1d3e4cu: goto label_1d3e4c;
        case 0x1d3e50u: goto label_1d3e50;
        case 0x1d3e54u: goto label_1d3e54;
        case 0x1d3e58u: goto label_1d3e58;
        case 0x1d3e5cu: goto label_1d3e5c;
        case 0x1d3e60u: goto label_1d3e60;
        case 0x1d3e64u: goto label_1d3e64;
        case 0x1d3e68u: goto label_1d3e68;
        case 0x1d3e6cu: goto label_1d3e6c;
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e74u: goto label_1d3e74;
        case 0x1d3e78u: goto label_1d3e78;
        case 0x1d3e7cu: goto label_1d3e7c;
        case 0x1d3e80u: goto label_1d3e80;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3e88u: goto label_1d3e88;
        case 0x1d3e8cu: goto label_1d3e8c;
        default: break;
    }

    ctx->pc = 0x1d3e30u;

label_1d3e30:
    // 0x1d3e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3e34:
    // 0x1d3e34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3e38:
    // 0x1d3e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3e3c:
    // 0x1d3e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e40:
    // 0x1d3e40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3e44:
    // 0x1d3e44: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d3e48:
    // 0x1d3e48: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d3e4c:
    // 0x1d3e4c: 0x40f809  jalr        $v0
label_1d3e50:
    if (ctx->pc == 0x1D3E50u) {
        ctx->pc = 0x1D3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E4Cu;
        // 0x1d3e50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E54u;
        goto label_1d3e54;
    }
    ctx->pc = 0x1D3E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3E54u);
        ctx->pc = 0x1D3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E4Cu;
        // 0x1d3e50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E4Cu, 0x1D3E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3E54u;
label_1d3e54:
    // 0x1d3e54: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1d3e58:
    if (ctx->pc == 0x1D3E58u) {
        ctx->pc = 0x1D3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E54u;
        // 0x1d3e58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E5Cu;
        goto label_1d3e5c;
    }
    ctx->pc = 0x1D3E54u;
    {
        const bool branch_taken_0x1d3e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e54) {
            ctx->pc = 0x1D3E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E54u;
            // 0x1d3e58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E80u;
            goto label_1d3e80;
        }
    }
    ctx->pc = 0x1D3E5Cu;
label_1d3e5c:
    // 0x1d3e5c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1d3e60:
    // 0x1d3e60: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d3e64:
    if (ctx->pc == 0x1D3E64u) {
        ctx->pc = 0x1D3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E60u;
        // 0x1d3e64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E68u;
        goto label_1d3e68;
    }
    ctx->pc = 0x1D3E60u;
    {
        const bool branch_taken_0x1d3e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E60u;
        // 0x1d3e64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e60) {
            ctx->pc = 0x1D3E80u;
            goto label_1d3e80;
        }
    }
    ctx->pc = 0x1D3E68u;
label_1d3e68:
    // 0x1d3e68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3e6c:
    // 0x1d3e6c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d3e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1d3e70:
    // 0x1d3e70: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1d3e74:
    // 0x1d3e74: 0x60f809  jalr        $v1
label_1d3e78:
    if (ctx->pc == 0x1D3E78u) {
        ctx->pc = 0x1D3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E74u;
        // 0x1d3e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E7Cu;
        goto label_1d3e7c;
    }
    ctx->pc = 0x1D3E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3E7Cu);
        ctx->pc = 0x1D3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E74u;
        // 0x1d3e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E74u, 0x1D3E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3E7Cu;
label_1d3e7c:
    // 0x1d3e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3e80:
    // 0x1d3e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3e84:
    // 0x1d3e84: 0x3e00008  jr          $ra
label_1d3e88:
    if (ctx->pc == 0x1D3E88u) {
        ctx->pc = 0x1D3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E84u;
        // 0x1d3e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E8Cu;
        goto label_1d3e8c;
    }
    ctx->pc = 0x1D3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E84u;
        // 0x1d3e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E8Cu;
label_1d3e8c:
    // 0x1d3e8c: 0x0  nop
    ctx->pc = 0x1d3e8cu;
    // NOP
    ctx->pc = 0x1d3e90u;
}
