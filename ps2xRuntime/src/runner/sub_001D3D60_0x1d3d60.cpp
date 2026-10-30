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

// Function: sub_001D3D60
// Address: 0x1d3d60 - 0x1d3d98
void sub_001D3D60_0x1d3d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3D60_0x1d3d60");
#endif

    switch (ctx->pc) {
        case 0x1d3d60u: goto label_1d3d60;
        case 0x1d3d64u: goto label_1d3d64;
        case 0x1d3d68u: goto label_1d3d68;
        case 0x1d3d6cu: goto label_1d3d6c;
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d74u: goto label_1d3d74;
        case 0x1d3d78u: goto label_1d3d78;
        case 0x1d3d7cu: goto label_1d3d7c;
        case 0x1d3d80u: goto label_1d3d80;
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3d8cu: goto label_1d3d8c;
        case 0x1d3d90u: goto label_1d3d90;
        case 0x1d3d94u: goto label_1d3d94;
        default: break;
    }

    ctx->pc = 0x1d3d60u;

label_1d3d60:
    // 0x1d3d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3d64:
    // 0x1d3d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3d68:
    // 0x1d3d68: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x1d3d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1d3d6c:
    // 0x1d3d6c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d3d70:
    if (ctx->pc == 0x1D3D70u) {
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D74u;
        goto label_1d3d74;
    }
    ctx->pc = 0x1D3D6Cu;
    {
        const bool branch_taken_0x1d3d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6c) {
            ctx->pc = 0x1D3D8Cu;
            goto label_1d3d8c;
        }
    }
    ctx->pc = 0x1D3D74u;
label_1d3d74:
    // 0x1d3d74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d3d78:
    // 0x1d3d78: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1d3d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1d3d7c:
    // 0x1d3d7c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d3d80:
    // 0x1d3d80: 0x60f809  jalr        $v1
label_1d3d84:
    if (ctx->pc == 0x1D3D84u) {
        ctx->pc = 0x1D3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D80u;
        // 0x1d3d84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D88u;
        goto label_1d3d88;
    }
    ctx->pc = 0x1D3D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3D88u);
        ctx->pc = 0x1D3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D80u;
        // 0x1d3d84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D80u, 0x1D3D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3D88u;
label_1d3d88:
    // 0x1d3d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3d8c:
    // 0x1d3d8c: 0x3e00008  jr          $ra
label_1d3d90:
    if (ctx->pc == 0x1D3D90u) {
        ctx->pc = 0x1D3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D8Cu;
        // 0x1d3d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D94u;
        goto label_1d3d94;
    }
    ctx->pc = 0x1D3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D8Cu;
        // 0x1d3d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D94u;
label_1d3d94:
    // 0x1d3d94: 0x0  nop
    ctx->pc = 0x1d3d94u;
    // NOP
    ctx->pc = 0x1d3d98u;
}
