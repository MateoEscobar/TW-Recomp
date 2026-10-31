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

// Function: sub_002D6DB0
// Address: 0x2d6db0 - 0x2d6e10
void sub_002D6DB0_0x2d6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6DB0_0x2d6db0");
#endif

    switch (ctx->pc) {
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6db4u: goto label_2d6db4;
        case 0x2d6db8u: goto label_2d6db8;
        case 0x2d6dbcu: goto label_2d6dbc;
        case 0x2d6dc0u: goto label_2d6dc0;
        case 0x2d6dc4u: goto label_2d6dc4;
        case 0x2d6dc8u: goto label_2d6dc8;
        case 0x2d6dccu: goto label_2d6dcc;
        case 0x2d6dd0u: goto label_2d6dd0;
        case 0x2d6dd4u: goto label_2d6dd4;
        case 0x2d6dd8u: goto label_2d6dd8;
        case 0x2d6ddcu: goto label_2d6ddc;
        case 0x2d6de0u: goto label_2d6de0;
        case 0x2d6de4u: goto label_2d6de4;
        case 0x2d6de8u: goto label_2d6de8;
        case 0x2d6decu: goto label_2d6dec;
        case 0x2d6df0u: goto label_2d6df0;
        case 0x2d6df4u: goto label_2d6df4;
        case 0x2d6df8u: goto label_2d6df8;
        case 0x2d6dfcu: goto label_2d6dfc;
        case 0x2d6e00u: goto label_2d6e00;
        case 0x2d6e04u: goto label_2d6e04;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e0cu: goto label_2d6e0c;
        default: break;
    }

    ctx->pc = 0x2d6db0u;

label_2d6db0:
    // 0x2d6db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6db4:
    // 0x2d6db4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d6db8:
    // 0x2d6db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6dbc:
    // 0x2d6dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6dc0:
    // 0x2d6dc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d6dc4:
    // 0x2d6dc4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2d6dc8:
    // 0x2d6dc8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2d6dcc:
    // 0x2d6dcc: 0x60f809  jalr        $v1
label_2d6dd0:
    if (ctx->pc == 0x2D6DD0u) {
        ctx->pc = 0x2D6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DCCu;
        // 0x2d6dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DD4u;
        goto label_2d6dd4;
    }
    ctx->pc = 0x2D6DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D6DD4u);
        ctx->pc = 0x2D6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DCCu;
        // 0x2d6dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DCCu, 0x2D6DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6DD4u;
label_2d6dd4:
    // 0x2d6dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6dd8:
    // 0x2d6dd8: 0xc0b5c00  jal         func_2D7000
label_2d6ddc:
    if (ctx->pc == 0x2D6DDCu) {
        ctx->pc = 0x2D6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DD8u;
        // 0x2d6ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DE0u;
        goto label_2d6de0;
    }
    ctx->pc = 0x2D6DD8u;
    SET_GPR_U32(ctx, 31, 0x2D6DE0u);
    ctx->pc = 0x2D6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6DD8u;
    // 0x2d6ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7000u, 0x2D6DD8u, 0x2D6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DE0u;
label_2d6de0:
    // 0x2d6de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6de4:
    // 0x2d6de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6de8:
    // 0x2d6de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6dec:
    // 0x2d6dec: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2d6decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2d6df0:
    // 0x2d6df0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6df4:
    // 0x2d6df4: 0x9062028d  lbu         $v0, 0x28D($v1)
    ctx->pc = 0x2d6df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 653)));
label_2d6df8:
    // 0x2d6df8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d6df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6dfc:
    // 0x2d6dfc: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x2d6dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
label_2d6e00:
    // 0x2d6e00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6e04:
    // 0x2d6e04: 0xa064028d  sb          $a0, 0x28D($v1)
    ctx->pc = 0x2d6e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 4));
label_2d6e08:
    // 0x2d6e08: 0x3e00008  jr          $ra
label_2d6e0c:
    if (ctx->pc == 0x2D6E0Cu) {
        ctx->pc = 0x2D6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E08u;
        // 0x2d6e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E10u;
        goto label_fallthrough_0x2d6e08;
    }
    ctx->pc = 0x2D6E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E08u;
        // 0x2d6e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6e08:
    ctx->pc = 0x2D6E10u;
}
