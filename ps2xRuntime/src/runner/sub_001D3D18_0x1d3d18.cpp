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

// Function: sub_001D3D18
// Address: 0x1d3d18 - 0x1d3d60
void sub_001D3D18_0x1d3d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3D18_0x1d3d18");
#endif

    switch (ctx->pc) {
        case 0x1d3d18u: goto label_1d3d18;
        case 0x1d3d1cu: goto label_1d3d1c;
        case 0x1d3d20u: goto label_1d3d20;
        case 0x1d3d24u: goto label_1d3d24;
        case 0x1d3d28u: goto label_1d3d28;
        case 0x1d3d2cu: goto label_1d3d2c;
        case 0x1d3d30u: goto label_1d3d30;
        case 0x1d3d34u: goto label_1d3d34;
        case 0x1d3d38u: goto label_1d3d38;
        case 0x1d3d3cu: goto label_1d3d3c;
        case 0x1d3d40u: goto label_1d3d40;
        case 0x1d3d44u: goto label_1d3d44;
        case 0x1d3d48u: goto label_1d3d48;
        case 0x1d3d4cu: goto label_1d3d4c;
        case 0x1d3d50u: goto label_1d3d50;
        case 0x1d3d54u: goto label_1d3d54;
        case 0x1d3d58u: goto label_1d3d58;
        case 0x1d3d5cu: goto label_1d3d5c;
        default: break;
    }

    ctx->pc = 0x1d3d18u;

label_1d3d18:
    // 0x1d3d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3d1c:
    // 0x1d3d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3d20:
    // 0x1d3d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3d24:
    // 0x1d3d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d28:
    // 0x1d3d28: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1d3d2c:
    // 0x1d3d2c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1d3d30:
    if (ctx->pc == 0x1D3D30u) {
        ctx->pc = 0x1D3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D2Cu;
        // 0x1d3d30: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D34u;
        goto label_1d3d34;
    }
    ctx->pc = 0x1D3D2Cu;
    {
        const bool branch_taken_0x1d3d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d2c) {
            ctx->pc = 0x1D3D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D2Cu;
            // 0x1d3d30: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D4Cu;
            goto label_1d3d4c;
        }
    }
    ctx->pc = 0x1D3D34u;
label_1d3d34:
    // 0x1d3d34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3d38:
    // 0x1d3d38: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d3d3c:
    // 0x1d3d3c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d3d40:
    // 0x1d3d40: 0x60f809  jalr        $v1
label_1d3d44:
    if (ctx->pc == 0x1D3D44u) {
        ctx->pc = 0x1D3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D40u;
        // 0x1d3d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D48u;
        goto label_1d3d48;
    }
    ctx->pc = 0x1D3D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3D48u);
        ctx->pc = 0x1D3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D40u;
        // 0x1d3d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D40u, 0x1D3D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3D48u;
label_1d3d48:
    // 0x1d3d48: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1d3d4c:
    // 0x1d3d4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3d50:
    // 0x1d3d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3d54:
    // 0x1d3d54: 0x3e00008  jr          $ra
label_1d3d58:
    if (ctx->pc == 0x1D3D58u) {
        ctx->pc = 0x1D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D54u;
        // 0x1d3d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D5Cu;
        goto label_1d3d5c;
    }
    ctx->pc = 0x1D3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D54u;
        // 0x1d3d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D5Cu;
label_1d3d5c:
    // 0x1d3d5c: 0x0  nop
    ctx->pc = 0x1d3d5cu;
    // NOP
    ctx->pc = 0x1d3d60u;
}
