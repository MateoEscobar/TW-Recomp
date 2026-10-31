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

// Function: sub_00330040
// Address: 0x330040 - 0x330110
void sub_00330040_0x330040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330040_0x330040");
#endif

    switch (ctx->pc) {
        case 0x33006cu: goto label_33006c;
        case 0x33007cu: goto label_33007c;
        case 0x330090u: goto label_330090;
        case 0x3300a8u: goto label_3300a8;
        case 0x3300ecu: goto label_3300ec;
        default: break;
    }

    ctx->pc = 0x330040u;

    // 0x330040: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x330040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x330044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x330044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330048: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x330048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
    // 0x33004c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x330050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330054: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x330054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
    // 0x330058: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x330058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
    // 0x33005c: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x33005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
    // 0x330060: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x330060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x330064: 0xc0c9192  jal         func_324648
    ctx->pc = 0x330064u;
    SET_GPR_U32(ctx, 31, 0x33006Cu);
    ctx->pc = 0x330068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330064u;
    // 0x330068: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x330064u, 0x33006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33006Cu;
label_33006c:
    // 0x33006c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33006cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330074: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x330074u;
    SET_GPR_U32(ctx, 31, 0x33007Cu);
    ctx->pc = 0x330078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330074u;
    // 0x330078: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x330074u, 0x33007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33007Cu;
label_33007c:
    // 0x33007c: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x33007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x330080: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x330080u;
    {
        const bool branch_taken_0x330080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330080u;
        // 0x330084: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330080) {
            ctx->pc = 0x3300E4u;
            goto label_3300e4;
        }
    }
    ctx->pc = 0x330088u;
    // 0x330088: 0x27b0040c  addiu       $s0, $sp, 0x40C
    ctx->pc = 0x330088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
    // 0x33008c: 0x2453c531  addiu       $s3, $v0, -0x3ACF
    ctx->pc = 0x33008cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_330090:
    // 0x330090: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x330090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330094: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x330094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x330098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330098u;
    {
        const bool branch_taken_0x330098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330098u;
        // 0x33009c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330098) {
            ctx->pc = 0x3300ACu;
            goto label_3300ac;
        }
    }
    ctx->pc = 0x3300A0u;
    // 0x3300a0: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3300A0u;
    SET_GPR_U32(ctx, 31, 0x3300A8u);
    ctx->pc = 0x3300A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300A0u;
    // 0x3300a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3300A0u, 0x3300A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300A8u;
label_3300a8:
    // 0x3300a8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3300a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_3300ac:
    // 0x3300ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3300acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3300b0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3300b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3300b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3300b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3300b8: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x3300b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3300bc: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x3300bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x3300c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3300c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3300c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3300c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3300c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x3300c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3300cc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3300ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3300d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3300d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3300d4: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x3300d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x3300d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3300d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3300dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3300DCu;
    {
        const bool branch_taken_0x3300dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300DCu;
        // 0x3300e0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3300dc) {
            ctx->pc = 0x330090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330090;
        }
    }
    ctx->pc = 0x3300E4u;
label_3300e4:
    // 0x3300e4: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x3300E4u;
    SET_GPR_U32(ctx, 31, 0x3300ECu);
    ctx->pc = 0x3300E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300E4u;
    // 0x3300e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x3300E4u, 0x3300ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300ECu;
label_3300ec:
    // 0x3300ec: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3300ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x3300f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3300f4: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3300f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x3300f8: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3300f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x3300fc: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3300fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x330100: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x330100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x330104: 0x3e00008  jr          $ra
    ctx->pc = 0x330104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330104u;
        // 0x330108: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33010Cu;
    // 0x33010c: 0x0  nop
    ctx->pc = 0x33010cu;
    // NOP
    ctx->pc = 0x330110u;
}
