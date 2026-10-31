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

// Function: sub_001D3CD0
// Address: 0x1d3cd0 - 0x1d3d18
void sub_001D3CD0_0x1d3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3CD0_0x1d3cd0");
#endif

    switch (ctx->pc) {
        case 0x1d3cd0u: goto label_1d3cd0;
        case 0x1d3cd4u: goto label_1d3cd4;
        case 0x1d3cd8u: goto label_1d3cd8;
        case 0x1d3cdcu: goto label_1d3cdc;
        case 0x1d3ce0u: goto label_1d3ce0;
        case 0x1d3ce4u: goto label_1d3ce4;
        case 0x1d3ce8u: goto label_1d3ce8;
        case 0x1d3cecu: goto label_1d3cec;
        case 0x1d3cf0u: goto label_1d3cf0;
        case 0x1d3cf4u: goto label_1d3cf4;
        case 0x1d3cf8u: goto label_1d3cf8;
        case 0x1d3cfcu: goto label_1d3cfc;
        case 0x1d3d00u: goto label_1d3d00;
        case 0x1d3d04u: goto label_1d3d04;
        case 0x1d3d08u: goto label_1d3d08;
        case 0x1d3d0cu: goto label_1d3d0c;
        case 0x1d3d10u: goto label_1d3d10;
        case 0x1d3d14u: goto label_1d3d14;
        default: break;
    }

    ctx->pc = 0x1d3cd0u;

label_1d3cd0:
    // 0x1d3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3cd4:
    // 0x1d3cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3cd8:
    // 0x1d3cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3cdc:
    // 0x1d3cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ce0:
    // 0x1d3ce0: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1d3ce4:
    // 0x1d3ce4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d3ce8:
    if (ctx->pc == 0x1D3CE8u) {
        ctx->pc = 0x1D3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CE4u;
        // 0x1d3ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CECu;
        goto label_1d3cec;
    }
    ctx->pc = 0x1D3CE4u;
    {
        const bool branch_taken_0x1d3ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CE4u;
        // 0x1d3ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ce4) {
            ctx->pc = 0x1D3D04u;
            goto label_1d3d04;
        }
    }
    ctx->pc = 0x1D3CECu;
label_1d3cec:
    // 0x1d3cec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3cf0:
    // 0x1d3cf0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d3cf4:
    // 0x1d3cf4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d3cf8:
    // 0x1d3cf8: 0x60f809  jalr        $v1
label_1d3cfc:
    if (ctx->pc == 0x1D3CFCu) {
        ctx->pc = 0x1D3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF8u;
        // 0x1d3cfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D00u;
        goto label_1d3d00;
    }
    ctx->pc = 0x1D3CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3D00u);
        ctx->pc = 0x1D3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF8u;
        // 0x1d3cfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CF8u, 0x1D3D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3D00u;
label_1d3d00:
    // 0x1d3d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3d04:
    // 0x1d3d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3d08:
    // 0x1d3d08: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1d3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1d3d0c:
    // 0x1d3d0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3d10:
    // 0x1d3d10: 0x3e00008  jr          $ra
label_1d3d14:
    if (ctx->pc == 0x1D3D14u) {
        ctx->pc = 0x1D3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D10u;
        // 0x1d3d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D18u;
        goto label_fallthrough_0x1d3d10;
    }
    ctx->pc = 0x1D3D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D10u;
        // 0x1d3d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3d10:
    ctx->pc = 0x1D3D18u;
}
