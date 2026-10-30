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

// Function: sub_003F8048
// Address: 0x3f8048 - 0x3f80f0
void sub_003F8048_0x3f8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8048_0x3f8048");
#endif

    switch (ctx->pc) {
        case 0x3f8048u: goto label_3f8048;
        case 0x3f804cu: goto label_3f804c;
        case 0x3f8050u: goto label_3f8050;
        case 0x3f8054u: goto label_3f8054;
        case 0x3f8058u: goto label_3f8058;
        case 0x3f805cu: goto label_3f805c;
        case 0x3f8060u: goto label_3f8060;
        case 0x3f8064u: goto label_3f8064;
        case 0x3f8068u: goto label_3f8068;
        case 0x3f806cu: goto label_3f806c;
        case 0x3f8070u: goto label_3f8070;
        case 0x3f8074u: goto label_3f8074;
        case 0x3f8078u: goto label_3f8078;
        case 0x3f807cu: goto label_3f807c;
        case 0x3f8080u: goto label_3f8080;
        case 0x3f8084u: goto label_3f8084;
        case 0x3f8088u: goto label_3f8088;
        case 0x3f808cu: goto label_3f808c;
        case 0x3f8090u: goto label_3f8090;
        case 0x3f8094u: goto label_3f8094;
        case 0x3f8098u: goto label_3f8098;
        case 0x3f809cu: goto label_3f809c;
        case 0x3f80a0u: goto label_3f80a0;
        case 0x3f80a4u: goto label_3f80a4;
        case 0x3f80a8u: goto label_3f80a8;
        case 0x3f80acu: goto label_3f80ac;
        case 0x3f80b0u: goto label_3f80b0;
        case 0x3f80b4u: goto label_3f80b4;
        case 0x3f80b8u: goto label_3f80b8;
        case 0x3f80bcu: goto label_3f80bc;
        case 0x3f80c0u: goto label_3f80c0;
        case 0x3f80c4u: goto label_3f80c4;
        case 0x3f80c8u: goto label_3f80c8;
        case 0x3f80ccu: goto label_3f80cc;
        case 0x3f80d0u: goto label_3f80d0;
        case 0x3f80d4u: goto label_3f80d4;
        case 0x3f80d8u: goto label_3f80d8;
        case 0x3f80dcu: goto label_3f80dc;
        case 0x3f80e0u: goto label_3f80e0;
        case 0x3f80e4u: goto label_3f80e4;
        case 0x3f80e8u: goto label_3f80e8;
        case 0x3f80ecu: goto label_3f80ec;
        default: break;
    }

    ctx->pc = 0x3f8048u;

label_3f8048:
    // 0x3f8048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f804c:
    // 0x3f804c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3f804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3f8050:
    // 0x3f8050: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f8050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3f8054:
    // 0x3f8054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f8058:
    // 0x3f8058: 0xc0e4060  jal         func_390180
label_3f805c:
    if (ctx->pc == 0x3F805Cu) {
        ctx->pc = 0x3F805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8058u;
        // 0x3f805c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F8060u;
        goto label_3f8060;
    }
    ctx->pc = 0x3F8058u;
    SET_GPR_U32(ctx, 31, 0x3F8060u);
    ctx->pc = 0x3F805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8058u;
    // 0x3f805c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3F8058u, 0x3F8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8060u;
label_3f8060:
    // 0x3f8060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f8060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8064:
    // 0x3f8064: 0xc0e57ce  jal         func_395F38
label_3f8068:
    if (ctx->pc == 0x3F8068u) {
        ctx->pc = 0x3F8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8064u;
        // 0x3f8068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F806Cu;
        goto label_3f806c;
    }
    ctx->pc = 0x3F8064u;
    SET_GPR_U32(ctx, 31, 0x3F806Cu);
    ctx->pc = 0x3F8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8064u;
    // 0x3f8068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3F8064u, 0x3F806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F806Cu;
label_3f806c:
    // 0x3f806c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8070:
    // 0x3f8070: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_3f8074:
    if (ctx->pc == 0x3F8074u) {
        ctx->pc = 0x3F8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8070u;
        // 0x3f8074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F8078u;
        goto label_3f8078;
    }
    ctx->pc = 0x3F8070u;
    {
        const bool branch_taken_0x3f8070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8070u;
        // 0x3f8074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8070) {
            ctx->pc = 0x3F80DCu;
            goto label_3f80dc;
        }
    }
    ctx->pc = 0x3F8078u;
label_3f8078:
    // 0x3f8078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3f8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f807c:
    // 0x3f807c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3f807cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3f8080:
    // 0x3f8080: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3f8080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f8084:
    // 0x3f8084: 0x40f809  jalr        $v0
label_3f8088:
    if (ctx->pc == 0x3F8088u) {
        ctx->pc = 0x3F8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8084u;
        // 0x3f8088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F808Cu;
        goto label_3f808c;
    }
    ctx->pc = 0x3F8084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F808Cu);
        ctx->pc = 0x3F8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8084u;
        // 0x3f8088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F8084u, 0x3F808Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F808Cu;
label_3f808c:
    // 0x3f808c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f808cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f8090:
    // 0x3f8090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f8090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8094:
    // 0x3f8094: 0xc10c313  jal         func_430C4C
label_3f8098:
    if (ctx->pc == 0x3F8098u) {
        ctx->pc = 0x3F8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8094u;
        // 0x3f8098: 0x24a56920  addiu       $a1, $a1, 0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F809Cu;
        goto label_3f809c;
    }
    ctx->pc = 0x3F8094u;
    SET_GPR_U32(ctx, 31, 0x3F809Cu);
    ctx->pc = 0x3F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8094u;
    // 0x3f8098: 0x24a56920  addiu       $a1, $a1, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F8094u, 0x3F809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F809Cu;
label_3f809c:
    // 0x3f809c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3f80a0:
    if (ctx->pc == 0x3F80A0u) {
        ctx->pc = 0x3F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F809Cu;
        // 0x3f80a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F80A4u;
        goto label_3f80a4;
    }
    ctx->pc = 0x3F809Cu;
    {
        const bool branch_taken_0x3f809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f809c) {
            ctx->pc = 0x3F80A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F809Cu;
            // 0x3f80a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F80DCu;
            goto label_3f80dc;
        }
    }
    ctx->pc = 0x3F80A4u;
label_3f80a4:
    // 0x3f80a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f80a8:
    // 0x3f80a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f80a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f80ac:
    // 0x3f80ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f80b0:
    // 0x3f80b0: 0x40f809  jalr        $v0
label_3f80b4:
    if (ctx->pc == 0x3F80B4u) {
        ctx->pc = 0x3F80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80B0u;
        // 0x3f80b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F80B8u;
        goto label_3f80b8;
    }
    ctx->pc = 0x3F80B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F80B8u);
        ctx->pc = 0x3F80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80B0u;
        // 0x3f80b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F80B0u, 0x3F80B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F80B8u;
label_3f80b8:
    // 0x3f80b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f80b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f80bc:
    // 0x3f80bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f80c0:
    // 0x3f80c0: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x3f80c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_3f80c4:
    // 0x3f80c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f80c8:
    // 0x3f80c8: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x3f80c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_3f80cc:
    // 0x3f80cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f80ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f80d0:
    // 0x3f80d0: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
label_3f80d4:
    if (ctx->pc == 0x3F80D4u) {
        ctx->pc = 0x3F80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80D0u;
        // 0x3f80d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F80D8u;
        goto label_3f80d8;
    }
    ctx->pc = 0x3F80D0u;
    {
        const bool branch_taken_0x3f80d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3F80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80D0u;
        // 0x3f80d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80d0) {
            ctx->pc = 0x3F80DCu;
            goto label_3f80dc;
        }
    }
    ctx->pc = 0x3F80D8u;
label_3f80d8:
    // 0x3f80d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f80d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f80dc:
    // 0x3f80dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f80dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f80e0:
    // 0x3f80e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f80e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f80e4:
    // 0x3f80e4: 0x3e00008  jr          $ra
label_3f80e8:
    if (ctx->pc == 0x3F80E8u) {
        ctx->pc = 0x3F80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80E4u;
        // 0x3f80e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F80ECu;
        goto label_3f80ec;
    }
    ctx->pc = 0x3F80E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80E4u;
        // 0x3f80e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F80E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F80ECu;
label_3f80ec:
    // 0x3f80ec: 0x0  nop
    ctx->pc = 0x3f80ecu;
    // NOP
    ctx->pc = 0x3f80f0u;
}
