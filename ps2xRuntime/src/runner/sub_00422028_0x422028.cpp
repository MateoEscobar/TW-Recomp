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

// Function: sub_00422028
// Address: 0x422028 - 0x4220f8
void sub_00422028_0x422028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422028_0x422028");
#endif

    switch (ctx->pc) {
        case 0x422028u: goto label_422028;
        case 0x42202cu: goto label_42202c;
        case 0x422030u: goto label_422030;
        case 0x422034u: goto label_422034;
        case 0x422038u: goto label_422038;
        case 0x42203cu: goto label_42203c;
        case 0x422040u: goto label_422040;
        case 0x422044u: goto label_422044;
        case 0x422048u: goto label_422048;
        case 0x42204cu: goto label_42204c;
        case 0x422050u: goto label_422050;
        case 0x422054u: goto label_422054;
        case 0x422058u: goto label_422058;
        case 0x42205cu: goto label_42205c;
        case 0x422060u: goto label_422060;
        case 0x422064u: goto label_422064;
        case 0x422068u: goto label_422068;
        case 0x42206cu: goto label_42206c;
        case 0x422070u: goto label_422070;
        case 0x422074u: goto label_422074;
        case 0x422078u: goto label_422078;
        case 0x42207cu: goto label_42207c;
        case 0x422080u: goto label_422080;
        case 0x422084u: goto label_422084;
        case 0x422088u: goto label_422088;
        case 0x42208cu: goto label_42208c;
        case 0x422090u: goto label_422090;
        case 0x422094u: goto label_422094;
        case 0x422098u: goto label_422098;
        case 0x42209cu: goto label_42209c;
        case 0x4220a0u: goto label_4220a0;
        case 0x4220a4u: goto label_4220a4;
        case 0x4220a8u: goto label_4220a8;
        case 0x4220acu: goto label_4220ac;
        case 0x4220b0u: goto label_4220b0;
        case 0x4220b4u: goto label_4220b4;
        case 0x4220b8u: goto label_4220b8;
        case 0x4220bcu: goto label_4220bc;
        case 0x4220c0u: goto label_4220c0;
        case 0x4220c4u: goto label_4220c4;
        case 0x4220c8u: goto label_4220c8;
        case 0x4220ccu: goto label_4220cc;
        case 0x4220d0u: goto label_4220d0;
        case 0x4220d4u: goto label_4220d4;
        case 0x4220d8u: goto label_4220d8;
        case 0x4220dcu: goto label_4220dc;
        case 0x4220e0u: goto label_4220e0;
        case 0x4220e4u: goto label_4220e4;
        case 0x4220e8u: goto label_4220e8;
        case 0x4220ecu: goto label_4220ec;
        case 0x4220f0u: goto label_4220f0;
        case 0x4220f4u: goto label_4220f4;
        default: break;
    }

    ctx->pc = 0x422028u;

label_422028:
    // 0x422028: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x422028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_42202c:
    // 0x42202c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x42202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_422030:
    // 0x422030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x422030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422034:
    // 0x422034: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x422034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_422038:
    // 0x422038: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x422038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_42203c:
    // 0x42203c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42203cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422040:
    // 0x422040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x422040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_422044:
    // 0x422044: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x422044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_422048:
    // 0x422048: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x422048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_42204c:
    // 0x42204c: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x42204cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_422050:
    // 0x422050: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x422050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_422054:
    // 0x422054: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x422054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_422058:
    // 0x422058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42205c:
    // 0x42205c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x42205cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422060:
    // 0x422060: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x422060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_422064:
    // 0x422064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422068:
    // 0x422068: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x422068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_42206c:
    // 0x42206c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x42206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_422070:
    // 0x422070: 0x40f809  jalr        $v0
label_422074:
    if (ctx->pc == 0x422074u) {
        ctx->pc = 0x422074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422070u;
        // 0x422074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422078u;
        goto label_422078;
    }
    ctx->pc = 0x422070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x422078u);
        ctx->pc = 0x422074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422070u;
        // 0x422074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422070u, 0x422078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x422078u;
label_422078:
    // 0x422078: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_42207c:
    if (ctx->pc == 0x42207Cu) {
        ctx->pc = 0x42207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422078u;
        // 0x42207c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422080u;
        goto label_422080;
    }
    ctx->pc = 0x422078u;
    {
        const bool branch_taken_0x422078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422078u;
        // 0x42207c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422078) {
            ctx->pc = 0x4220BCu;
            goto label_4220bc;
        }
    }
    ctx->pc = 0x422080u;
label_422080:
    // 0x422080: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x422080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_422084:
    // 0x422084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x422084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422088:
    // 0x422088: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x422088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_42208c:
    // 0x42208c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x42208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_422090:
    // 0x422090: 0x60f809  jalr        $v1
label_422094:
    if (ctx->pc == 0x422094u) {
        ctx->pc = 0x422094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422090u;
        // 0x422094: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422098u;
        goto label_422098;
    }
    ctx->pc = 0x422090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x422098u);
        ctx->pc = 0x422094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422090u;
        // 0x422094: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422090u, 0x422098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x422098u;
label_422098:
    // 0x422098: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x422098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_42209c:
    // 0x42209c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4220a0:
    // 0x4220a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4220a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4220a4:
    // 0x4220a4: 0xc10c4de  jal         func_431378
label_4220a8:
    if (ctx->pc == 0x4220A8u) {
        ctx->pc = 0x4220A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220A4u;
        // 0x4220a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220ACu;
        goto label_4220ac;
    }
    ctx->pc = 0x4220A4u;
    SET_GPR_U32(ctx, 31, 0x4220ACu);
    ctx->pc = 0x4220A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4220A4u;
    // 0x4220a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x4220A4u, 0x4220ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4220ACu;
label_4220ac:
    // 0x4220ac: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x4220acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_4220b0:
    // 0x4220b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4220b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4220b4:
    // 0x4220b4: 0xc10858e  jal         func_421638
label_4220b8:
    if (ctx->pc == 0x4220B8u) {
        ctx->pc = 0x4220B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220B4u;
        // 0x4220b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220BCu;
        goto label_4220bc;
    }
    ctx->pc = 0x4220B4u;
    SET_GPR_U32(ctx, 31, 0x4220BCu);
    ctx->pc = 0x4220B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4220B4u;
    // 0x4220b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421638u, 0x4220B4u, 0x4220BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4220BCu;
label_4220bc:
    // 0x4220bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4220bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4220c0:
    // 0x4220c0: 0x2694002c  addiu       $s4, $s4, 0x2C
    ctx->pc = 0x4220c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_4220c4:
    // 0x4220c4: 0x2673002c  addiu       $s3, $s3, 0x2C
    ctx->pc = 0x4220c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_4220c8:
    // 0x4220c8: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x4220c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4220cc:
    // 0x4220cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_4220d0:
    if (ctx->pc == 0x4220D0u) {
        ctx->pc = 0x4220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220CCu;
        // 0x4220d0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220D4u;
        goto label_4220d4;
    }
    ctx->pc = 0x4220CCu;
    {
        const bool branch_taken_0x4220cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220CCu;
        // 0x4220d0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220cc) {
            ctx->pc = 0x422060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422060;
        }
    }
    ctx->pc = 0x4220D4u;
label_4220d4:
    // 0x4220d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4220d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4220d8:
    // 0x4220d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4220d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4220dc:
    // 0x4220dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4220dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4220e0:
    // 0x4220e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4220e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4220e4:
    // 0x4220e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4220e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4220e8:
    // 0x4220e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4220e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4220ec:
    // 0x4220ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4220ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4220f0:
    // 0x4220f0: 0x3e00008  jr          $ra
label_4220f4:
    if (ctx->pc == 0x4220F4u) {
        ctx->pc = 0x4220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220F0u;
        // 0x4220f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220F8u;
        goto label_fallthrough_0x4220f0;
    }
    ctx->pc = 0x4220F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220F0u;
        // 0x4220f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4220F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4220f0:
    ctx->pc = 0x4220F8u;
}
