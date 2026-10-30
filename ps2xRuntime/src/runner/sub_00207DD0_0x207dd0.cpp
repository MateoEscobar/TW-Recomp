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

// Function: sub_00207DD0
// Address: 0x207dd0 - 0x207e28
void sub_00207DD0_0x207dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207DD0_0x207dd0");
#endif

    switch (ctx->pc) {
        case 0x207dd0u: goto label_207dd0;
        case 0x207dd4u: goto label_207dd4;
        case 0x207dd8u: goto label_207dd8;
        case 0x207ddcu: goto label_207ddc;
        case 0x207de0u: goto label_207de0;
        case 0x207de4u: goto label_207de4;
        case 0x207de8u: goto label_207de8;
        case 0x207decu: goto label_207dec;
        case 0x207df0u: goto label_207df0;
        case 0x207df4u: goto label_207df4;
        case 0x207df8u: goto label_207df8;
        case 0x207dfcu: goto label_207dfc;
        case 0x207e00u: goto label_207e00;
        case 0x207e04u: goto label_207e04;
        case 0x207e08u: goto label_207e08;
        case 0x207e0cu: goto label_207e0c;
        case 0x207e10u: goto label_207e10;
        case 0x207e14u: goto label_207e14;
        case 0x207e18u: goto label_207e18;
        case 0x207e1cu: goto label_207e1c;
        case 0x207e20u: goto label_207e20;
        case 0x207e24u: goto label_207e24;
        default: break;
    }

    ctx->pc = 0x207dd0u;

label_207dd0:
    // 0x207dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207dd4:
    // 0x207dd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_207dd8:
    // 0x207dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207ddc:
    // 0x207ddc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x207ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_207de0:
    // 0x207de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207de4:
    // 0x207de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207de8:
    // 0x207de8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x207de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_207dec:
    // 0x207dec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207df0:
    // 0x207df0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207df4:
    // 0x207df4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207df8:
    // 0x207df8: 0xa0f809  jalr        $a1
label_207dfc:
    if (ctx->pc == 0x207DFCu) {
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF8u;
        // 0x207dfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E00u;
        goto label_207e00;
    }
    ctx->pc = 0x207DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x207E00u);
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF8u;
        // 0x207dfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DF8u, 0x207E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207E00u;
label_207e00:
    // 0x207e00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207e04:
    // 0x207e04: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_207e08:
    // 0x207e08: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_207e0c:
    // 0x207e0c: 0x60f809  jalr        $v1
label_207e10:
    if (ctx->pc == 0x207E10u) {
        ctx->pc = 0x207E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E0Cu;
        // 0x207e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E14u;
        goto label_207e14;
    }
    ctx->pc = 0x207E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207E14u);
        ctx->pc = 0x207E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E0Cu;
        // 0x207e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E0Cu, 0x207E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207E14u;
label_207e14:
    // 0x207e14: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_207e18:
    // 0x207e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x207e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207e1c:
    // 0x207e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207e20:
    // 0x207e20: 0x3e00008  jr          $ra
label_207e24:
    if (ctx->pc == 0x207E24u) {
        ctx->pc = 0x207E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E20u;
        // 0x207e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E28u;
        goto label_fallthrough_0x207e20;
    }
    ctx->pc = 0x207E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E20u;
        // 0x207e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207e20:
    ctx->pc = 0x207E28u;
}
