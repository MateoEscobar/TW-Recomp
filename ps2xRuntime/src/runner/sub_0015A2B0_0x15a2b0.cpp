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

// Function: sub_0015A2B0
// Address: 0x15a2b0 - 0x15a328
void sub_0015A2B0_0x15a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A2B0_0x15a2b0");
#endif

    switch (ctx->pc) {
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a2b4u: goto label_15a2b4;
        case 0x15a2b8u: goto label_15a2b8;
        case 0x15a2bcu: goto label_15a2bc;
        case 0x15a2c0u: goto label_15a2c0;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2c8u: goto label_15a2c8;
        case 0x15a2ccu: goto label_15a2cc;
        case 0x15a2d0u: goto label_15a2d0;
        case 0x15a2d4u: goto label_15a2d4;
        case 0x15a2d8u: goto label_15a2d8;
        case 0x15a2dcu: goto label_15a2dc;
        case 0x15a2e0u: goto label_15a2e0;
        case 0x15a2e4u: goto label_15a2e4;
        case 0x15a2e8u: goto label_15a2e8;
        case 0x15a2ecu: goto label_15a2ec;
        case 0x15a2f0u: goto label_15a2f0;
        case 0x15a2f4u: goto label_15a2f4;
        case 0x15a2f8u: goto label_15a2f8;
        case 0x15a2fcu: goto label_15a2fc;
        case 0x15a300u: goto label_15a300;
        case 0x15a304u: goto label_15a304;
        case 0x15a308u: goto label_15a308;
        case 0x15a30cu: goto label_15a30c;
        case 0x15a310u: goto label_15a310;
        case 0x15a314u: goto label_15a314;
        case 0x15a318u: goto label_15a318;
        case 0x15a31cu: goto label_15a31c;
        case 0x15a320u: goto label_15a320;
        case 0x15a324u: goto label_15a324;
        default: break;
    }

    ctx->pc = 0x15a2b0u;

label_15a2b0:
    // 0x15a2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15a2b4:
    // 0x15a2b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a2b8:
    // 0x15a2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15a2bc:
    // 0x15a2bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a2c0:
    // 0x15a2c0: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15a2c4:
    // 0x15a2c4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_15a2c8:
    // 0x15a2c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a2cc:
    // 0x15a2cc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x15a2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_15a2d0:
    // 0x15a2d0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15a2d4:
    // 0x15a2d4: 0xac46c718  sw          $a2, -0x38E8($v0)
    ctx->pc = 0x15a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952728), GPR_U32(ctx, 6));
label_15a2d8:
    // 0x15a2d8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_15a2dc:
    // 0x15a2dc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_15a2e0:
    // 0x15a2e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15a2e4:
    // 0x15a2e4: 0xace0c70c  sw          $zero, -0x38F4($a3)
    ctx->pc = 0x15a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952716), GPR_U32(ctx, 0));
label_15a2e8:
    // 0x15a2e8: 0x40f809  jalr        $v0
label_15a2ec:
    if (ctx->pc == 0x15A2ECu) {
        ctx->pc = 0x15A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2E8u;
        // 0x15a2ec: 0xad06c714  sw          $a2, -0x38EC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294952724), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A2F0u;
        goto label_15a2f0;
    }
    ctx->pc = 0x15A2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A2F0u);
        ctx->pc = 0x15A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2E8u;
        // 0x15a2ec: 0xad06c714  sw          $a2, -0x38EC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294952724), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A2E8u, 0x15A2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A2F0u;
label_15a2f0:
    // 0x15a2f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a2f4:
    // 0x15a2f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a2f8:
    // 0x15a2f8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_15a2fc:
    // 0x15a2fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_15a300:
    // 0x15a300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a304:
    // 0x15a304: 0xac60c6f4  sw          $zero, -0x390C($v1)
    ctx->pc = 0x15a304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952692), GPR_U32(ctx, 0));
label_15a308:
    // 0x15a308: 0xac40c724  sw          $zero, -0x38DC($v0)
    ctx->pc = 0x15a308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952740), GPR_U32(ctx, 0));
label_15a30c:
    // 0x15a30c: 0xac80c730  sw          $zero, -0x38D0($a0)
    ctx->pc = 0x15a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952752), GPR_U32(ctx, 0));
label_15a310:
    // 0x15a310: 0xaca0c734  sw          $zero, -0x38CC($a1)
    ctx->pc = 0x15a310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952756), GPR_U32(ctx, 0));
label_15a314:
    // 0x15a314: 0x3e00008  jr          $ra
label_15a318:
    if (ctx->pc == 0x15A318u) {
        ctx->pc = 0x15A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A314u;
        // 0x15a318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A31Cu;
        goto label_15a31c;
    }
    ctx->pc = 0x15A314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A314u;
        // 0x15a318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A31Cu;
label_15a31c:
    // 0x15a31c: 0x0  nop
    ctx->pc = 0x15a31cu;
    // NOP
label_15a320:
    // 0x15a320: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15a324:
    // 0x15a324: 0x0  nop
    ctx->pc = 0x15a324u;
    // NOP
    ctx->pc = 0x15a328u;
}
