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

// Function: sub_001D3D98
// Address: 0x1d3d98 - 0x1d3dd8
void sub_001D3D98_0x1d3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3D98_0x1d3d98");
#endif

    switch (ctx->pc) {
        case 0x1d3d98u: goto label_1d3d98;
        case 0x1d3d9cu: goto label_1d3d9c;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3da4u: goto label_1d3da4;
        case 0x1d3da8u: goto label_1d3da8;
        case 0x1d3dacu: goto label_1d3dac;
        case 0x1d3db0u: goto label_1d3db0;
        case 0x1d3db4u: goto label_1d3db4;
        case 0x1d3db8u: goto label_1d3db8;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3dc0u: goto label_1d3dc0;
        case 0x1d3dc4u: goto label_1d3dc4;
        case 0x1d3dc8u: goto label_1d3dc8;
        case 0x1d3dccu: goto label_1d3dcc;
        case 0x1d3dd0u: goto label_1d3dd0;
        case 0x1d3dd4u: goto label_1d3dd4;
        default: break;
    }

    ctx->pc = 0x1d3d98u;

label_1d3d98:
    // 0x1d3d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3d9c:
    // 0x1d3d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3da0:
    // 0x1d3da0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1d3da4:
    // 0x1d3da4: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_1d3da8:
    if (ctx->pc == 0x1D3DA8u) {
        ctx->pc = 0x1D3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA4u;
        // 0x1d3da8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DACu;
        goto label_1d3dac;
    }
    ctx->pc = 0x1D3DA4u;
    {
        const bool branch_taken_0x1d3da4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3da4) {
            ctx->pc = 0x1D3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3DA4u;
            // 0x1d3da8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DB8u;
            goto label_1d3db8;
        }
    }
    ctx->pc = 0x1D3DACu;
label_1d3dac:
    // 0x1d3dac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d3db0:
    // 0x1d3db0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d3db4:
    if (ctx->pc == 0x1D3DB4u) {
        ctx->pc = 0x1D3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DB0u;
        // 0x1d3db4: 0x8c62d310  lw          $v0, -0x2CF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DB8u;
        goto label_1d3db8;
    }
    ctx->pc = 0x1D3DB0u;
    {
        const bool branch_taken_0x1d3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DB0u;
        // 0x1d3db4: 0x8c62d310  lw          $v0, -0x2CF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db0) {
            ctx->pc = 0x1D3DC8u;
            goto label_1d3dc8;
        }
    }
    ctx->pc = 0x1D3DB8u;
label_1d3db8:
    // 0x1d3db8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1d3db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1d3dbc:
    // 0x1d3dbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1d3dc0:
    // 0x1d3dc0: 0x40f809  jalr        $v0
label_1d3dc4:
    if (ctx->pc == 0x1D3DC4u) {
        ctx->pc = 0x1D3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC0u;
        // 0x1d3dc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DC8u;
        goto label_1d3dc8;
    }
    ctx->pc = 0x1D3DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3DC8u);
        ctx->pc = 0x1D3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC0u;
        // 0x1d3dc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DC0u, 0x1D3DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3DC8u;
label_1d3dc8:
    // 0x1d3dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3dcc:
    // 0x1d3dcc: 0x3e00008  jr          $ra
label_1d3dd0:
    if (ctx->pc == 0x1D3DD0u) {
        ctx->pc = 0x1D3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DCCu;
        // 0x1d3dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DD4u;
        goto label_1d3dd4;
    }
    ctx->pc = 0x1D3DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DCCu;
        // 0x1d3dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DD4u;
label_1d3dd4:
    // 0x1d3dd4: 0x0  nop
    ctx->pc = 0x1d3dd4u;
    // NOP
    ctx->pc = 0x1d3dd8u;
}
