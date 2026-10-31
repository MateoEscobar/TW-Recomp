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

// Function: sub_001D3C40
// Address: 0x1d3c40 - 0x1d3c90
void sub_001D3C40_0x1d3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3C40_0x1d3c40");
#endif

    switch (ctx->pc) {
        case 0x1d3c40u: goto label_1d3c40;
        case 0x1d3c44u: goto label_1d3c44;
        case 0x1d3c48u: goto label_1d3c48;
        case 0x1d3c4cu: goto label_1d3c4c;
        case 0x1d3c50u: goto label_1d3c50;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c58u: goto label_1d3c58;
        case 0x1d3c5cu: goto label_1d3c5c;
        case 0x1d3c60u: goto label_1d3c60;
        case 0x1d3c64u: goto label_1d3c64;
        case 0x1d3c68u: goto label_1d3c68;
        case 0x1d3c6cu: goto label_1d3c6c;
        case 0x1d3c70u: goto label_1d3c70;
        case 0x1d3c74u: goto label_1d3c74;
        case 0x1d3c78u: goto label_1d3c78;
        case 0x1d3c7cu: goto label_1d3c7c;
        case 0x1d3c80u: goto label_1d3c80;
        case 0x1d3c84u: goto label_1d3c84;
        case 0x1d3c88u: goto label_1d3c88;
        case 0x1d3c8cu: goto label_1d3c8c;
        default: break;
    }

    ctx->pc = 0x1d3c40u;

label_1d3c40:
    // 0x1d3c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3c44:
    // 0x1d3c44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d3c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3c48:
    // 0x1d3c48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d3c4c:
    // 0x1d3c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d3c50:
    // 0x1d3c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3c54:
    // 0x1d3c54: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1d3c58:
    if (ctx->pc == 0x1D3C58u) {
        ctx->pc = 0x1D3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C54u;
        // 0x1d3c58: 0xae060050  sw          $a2, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C5Cu;
        goto label_1d3c5c;
    }
    ctx->pc = 0x1D3C54u;
    {
        const bool branch_taken_0x1d3c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C54u;
        // 0x1d3c58: 0xae060050  sw          $a2, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c54) {
            ctx->pc = 0x1D3C7Cu;
            goto label_1d3c7c;
        }
    }
    ctx->pc = 0x1D3C5Cu;
label_1d3c5c:
    // 0x1d3c5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d3c60:
    // 0x1d3c60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d3c64:
    // 0x1d3c64: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1d3c64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d3c68:
    // 0x1d3c68: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d3c6c:
    // 0x1d3c6c: 0x60f809  jalr        $v1
label_1d3c70:
    if (ctx->pc == 0x1D3C70u) {
        ctx->pc = 0x1D3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C6Cu;
        // 0x1d3c70: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C74u;
        goto label_1d3c74;
    }
    ctx->pc = 0x1D3C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3C74u);
        ctx->pc = 0x1D3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C6Cu;
        // 0x1d3c70: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C6Cu, 0x1D3C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3C74u;
label_1d3c74:
    // 0x1d3c74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1d3c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3c78:
    // 0x1d3c78: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1d3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_1d3c7c:
    // 0x1d3c7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3c80:
    // 0x1d3c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3c84:
    // 0x1d3c84: 0x3e00008  jr          $ra
label_1d3c88:
    if (ctx->pc == 0x1D3C88u) {
        ctx->pc = 0x1D3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C84u;
        // 0x1d3c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C8Cu;
        goto label_1d3c8c;
    }
    ctx->pc = 0x1D3C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C84u;
        // 0x1d3c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C8Cu;
label_1d3c8c:
    // 0x1d3c8c: 0x0  nop
    ctx->pc = 0x1d3c8cu;
    // NOP
    ctx->pc = 0x1d3c90u;
}
