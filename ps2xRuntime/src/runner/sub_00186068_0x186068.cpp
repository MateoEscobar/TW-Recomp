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

// Function: sub_00186068
// Address: 0x186068 - 0x186110
void sub_00186068_0x186068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186068_0x186068");
#endif

    switch (ctx->pc) {
        case 0x186080u: goto label_186080;
        case 0x186094u: goto label_186094;
        case 0x1860ccu: goto label_1860cc;
        default: break;
    }

    ctx->pc = 0x186068u;

    // 0x186068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18606c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x186070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186074: 0x2490189c  addiu       $s0, $a0, 0x189C
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x186078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18607c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18607cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186080:
    // 0x186080: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x186080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x186084: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x186084u;
    {
        const bool branch_taken_0x186084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186084) {
            ctx->pc = 0x186088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186084u;
            // 0x186088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D8u;
            goto label_1860d8;
        }
    }
    ctx->pc = 0x18608Cu;
    // 0x18608c: 0xc060ad4  jal         func_182B50
    ctx->pc = 0x18608Cu;
    SET_GPR_U32(ctx, 31, 0x186094u);
    ctx->pc = 0x186090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18608Cu;
    // 0x186090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B50u, 0x18608Cu, 0x186094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186094u;
label_186094:
    // 0x186094: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x186094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x186098: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186098) {
            ctx->pc = 0x18609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186098u;
            // 0x18609c: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D4u;
            goto label_1860d4;
        }
    }
    ctx->pc = 0x1860A0u;
    // 0x1860a0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1860a4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1860A4u;
    {
        const bool branch_taken_0x1860a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1860a4) {
            ctx->pc = 0x1860A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860A4u;
            // 0x1860a8: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D4u;
            goto label_1860d4;
        }
    }
    ctx->pc = 0x1860ACu;
    // 0x1860ac: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x1860acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x1860b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1860B0u;
    {
        const bool branch_taken_0x1860b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1860b0) {
            ctx->pc = 0x1860B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860B0u;
            // 0x1860b4: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D4u;
            goto label_1860d4;
        }
    }
    ctx->pc = 0x1860B8u;
    // 0x1860b8: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x1860b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1860bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1860BCu;
    {
        const bool branch_taken_0x1860bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860bc) {
            ctx->pc = 0x1860C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860BCu;
            // 0x1860c0: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D4u;
            goto label_1860d4;
        }
    }
    ctx->pc = 0x1860C4u;
    // 0x1860c4: 0xc060a94  jal         func_182A50
    ctx->pc = 0x1860C4u;
    SET_GPR_U32(ctx, 31, 0x1860CCu);
    ctx->pc = 0x1860C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860C4u;
    // 0x1860c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A50u, 0x1860C4u, 0x1860CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860CCu;
label_1860cc:
    // 0x1860cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1860CCu;
    {
        const bool branch_taken_0x1860cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860CCu;
        // 0x1860d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860cc) {
            ctx->pc = 0x1860D8u;
            goto label_1860d8;
        }
    }
    ctx->pc = 0x1860D4u;
label_1860d4:
    // 0x1860d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1860d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1860d8:
    // 0x1860d8: 0x2e2200ff  sltiu       $v0, $s1, 0xFF
    ctx->pc = 0x1860d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1860dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1860E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860DCu;
        // 0x1860e0: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186080;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1860e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1860e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1860e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1860ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1860ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1860f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1860f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1860f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1860F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1860F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860F4u;
        // 0x1860f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1860F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1860FCu;
    // 0x1860fc: 0x0  nop
    ctx->pc = 0x1860fcu;
    // NOP
    // 0x186100: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x186100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186104: 0x0  nop
    ctx->pc = 0x186104u;
    // NOP
    // 0x186108: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x186108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18610c: 0x0  nop
    ctx->pc = 0x18610cu;
    // NOP
    ctx->pc = 0x186110u;
}
