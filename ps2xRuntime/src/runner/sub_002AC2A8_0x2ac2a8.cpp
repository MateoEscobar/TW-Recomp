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

// Function: sub_002AC2A8
// Address: 0x2ac2a8 - 0x2ac330
void sub_002AC2A8_0x2ac2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC2A8_0x2ac2a8");
#endif

    switch (ctx->pc) {
        case 0x2ac2a8u: goto label_2ac2a8;
        case 0x2ac2acu: goto label_2ac2ac;
        case 0x2ac2b0u: goto label_2ac2b0;
        case 0x2ac2b4u: goto label_2ac2b4;
        case 0x2ac2b8u: goto label_2ac2b8;
        case 0x2ac2bcu: goto label_2ac2bc;
        case 0x2ac2c0u: goto label_2ac2c0;
        case 0x2ac2c4u: goto label_2ac2c4;
        case 0x2ac2c8u: goto label_2ac2c8;
        case 0x2ac2ccu: goto label_2ac2cc;
        case 0x2ac2d0u: goto label_2ac2d0;
        case 0x2ac2d4u: goto label_2ac2d4;
        case 0x2ac2d8u: goto label_2ac2d8;
        case 0x2ac2dcu: goto label_2ac2dc;
        case 0x2ac2e0u: goto label_2ac2e0;
        case 0x2ac2e4u: goto label_2ac2e4;
        case 0x2ac2e8u: goto label_2ac2e8;
        case 0x2ac2ecu: goto label_2ac2ec;
        case 0x2ac2f0u: goto label_2ac2f0;
        case 0x2ac2f4u: goto label_2ac2f4;
        case 0x2ac2f8u: goto label_2ac2f8;
        case 0x2ac2fcu: goto label_2ac2fc;
        case 0x2ac300u: goto label_2ac300;
        case 0x2ac304u: goto label_2ac304;
        case 0x2ac308u: goto label_2ac308;
        case 0x2ac30cu: goto label_2ac30c;
        case 0x2ac310u: goto label_2ac310;
        case 0x2ac314u: goto label_2ac314;
        case 0x2ac318u: goto label_2ac318;
        case 0x2ac31cu: goto label_2ac31c;
        case 0x2ac320u: goto label_2ac320;
        case 0x2ac324u: goto label_2ac324;
        case 0x2ac328u: goto label_2ac328;
        case 0x2ac32cu: goto label_2ac32c;
        default: break;
    }

    ctx->pc = 0x2ac2a8u;

label_2ac2a8:
    // 0x2ac2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ac2ac:
    // 0x2ac2ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ac2b0:
    // 0x2ac2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ac2b4:
    // 0x2ac2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac2b8:
    // 0x2ac2b8: 0x92040031  lbu         $a0, 0x31($s0)
    ctx->pc = 0x2ac2b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
label_2ac2bc:
    // 0x2ac2bc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ac2c0:
    // 0x2ac2c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ac2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ac2c4:
    // 0x2ac2c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ac2c8:
    if (ctx->pc == 0x2AC2C8u) {
        ctx->pc = 0x2AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C4u;
        // 0x2ac2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2CCu;
        goto label_2ac2cc;
    }
    ctx->pc = 0x2AC2C4u;
    {
        const bool branch_taken_0x2ac2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C4u;
        // 0x2ac2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2c4) {
            ctx->pc = 0x2AC304u;
            goto label_2ac304;
        }
    }
    ctx->pc = 0x2AC2CCu;
label_2ac2cc:
    // 0x2ac2cc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ac2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ac2d0:
    // 0x2ac2d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac2d4:
    // 0x2ac2d4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_2ac2d8:
    if (ctx->pc == 0x2AC2D8u) {
        ctx->pc = 0x2AC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2D4u;
        // 0x2ac2d8: 0xa2020035  sb          $v0, 0x35($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2DCu;
        goto label_2ac2dc;
    }
    ctx->pc = 0x2AC2D4u;
    {
        const bool branch_taken_0x2ac2d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2D4u;
        // 0x2ac2d8: 0xa2020035  sb          $v0, 0x35($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2d4) {
            ctx->pc = 0x2AC304u;
            goto label_2ac304;
        }
    }
    ctx->pc = 0x2AC2DCu;
label_2ac2dc:
    // 0x2ac2dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac2e0:
    // 0x2ac2e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ac2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac2e4:
    // 0x2ac2e4: 0xa06001b2  sb          $zero, 0x1B2($v1)
    ctx->pc = 0x2ac2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 434), (uint8_t)GPR_U32(ctx, 0));
label_2ac2e8:
    // 0x2ac2e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac2ec:
    // 0x2ac2ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac2f0:
    // 0x2ac2f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ac2f4:
    // 0x2ac2f4: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_2ac2f8:
    // 0x2ac2f8: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x2ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_2ac2fc:
    // 0x2ac2fc: 0x40f809  jalr        $v0
label_2ac300:
    if (ctx->pc == 0x2AC300u) {
        ctx->pc = 0x2AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2FCu;
        // 0x2ac300: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC304u;
        goto label_2ac304;
    }
    ctx->pc = 0x2AC2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC304u);
        ctx->pc = 0x2AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2FCu;
        // 0x2ac300: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC2FCu, 0x2AC304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC304u;
label_2ac304:
    // 0x2ac304: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac308:
    // 0x2ac308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac30c:
    // 0x2ac30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac310:
    // 0x2ac310: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac314:
    // 0x2ac314: 0xc087612  jal         func_21D848
label_2ac318:
    if (ctx->pc == 0x2AC318u) {
        ctx->pc = 0x2AC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC314u;
        // 0x2ac318: 0xa0830284  sb          $v1, 0x284($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 644), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC31Cu;
        goto label_2ac31c;
    }
    ctx->pc = 0x2AC314u;
    SET_GPR_U32(ctx, 31, 0x2AC31Cu);
    ctx->pc = 0x2AC318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC314u;
    // 0x2ac318: 0xa0830284  sb          $v1, 0x284($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 644), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2AC314u, 0x2AC31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC31Cu;
label_2ac31c:
    // 0x2ac31c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac320:
    // 0x2ac320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac324:
    // 0x2ac324: 0x3e00008  jr          $ra
label_2ac328:
    if (ctx->pc == 0x2AC328u) {
        ctx->pc = 0x2AC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC324u;
        // 0x2ac328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC32Cu;
        goto label_2ac32c;
    }
    ctx->pc = 0x2AC324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC324u;
        // 0x2ac328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC32Cu;
label_2ac32c:
    // 0x2ac32c: 0x0  nop
    ctx->pc = 0x2ac32cu;
    // NOP
    ctx->pc = 0x2ac330u;
}
