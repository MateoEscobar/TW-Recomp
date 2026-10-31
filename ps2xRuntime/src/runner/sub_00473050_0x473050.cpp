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

// Function: sub_00473050
// Address: 0x473050 - 0x473130
void sub_00473050_0x473050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473050_0x473050");
#endif

    switch (ctx->pc) {
        case 0x473050u: goto label_473050;
        case 0x473054u: goto label_473054;
        case 0x473058u: goto label_473058;
        case 0x47305cu: goto label_47305c;
        case 0x473060u: goto label_473060;
        case 0x473064u: goto label_473064;
        case 0x473068u: goto label_473068;
        case 0x47306cu: goto label_47306c;
        case 0x473070u: goto label_473070;
        case 0x473074u: goto label_473074;
        case 0x473078u: goto label_473078;
        case 0x47307cu: goto label_47307c;
        case 0x473080u: goto label_473080;
        case 0x473084u: goto label_473084;
        case 0x473088u: goto label_473088;
        case 0x47308cu: goto label_47308c;
        case 0x473090u: goto label_473090;
        case 0x473094u: goto label_473094;
        case 0x473098u: goto label_473098;
        case 0x47309cu: goto label_47309c;
        case 0x4730a0u: goto label_4730a0;
        case 0x4730a4u: goto label_4730a4;
        case 0x4730a8u: goto label_4730a8;
        case 0x4730acu: goto label_4730ac;
        case 0x4730b0u: goto label_4730b0;
        case 0x4730b4u: goto label_4730b4;
        case 0x4730b8u: goto label_4730b8;
        case 0x4730bcu: goto label_4730bc;
        case 0x4730c0u: goto label_4730c0;
        case 0x4730c4u: goto label_4730c4;
        case 0x4730c8u: goto label_4730c8;
        case 0x4730ccu: goto label_4730cc;
        case 0x4730d0u: goto label_4730d0;
        case 0x4730d4u: goto label_4730d4;
        case 0x4730d8u: goto label_4730d8;
        case 0x4730dcu: goto label_4730dc;
        case 0x4730e0u: goto label_4730e0;
        case 0x4730e4u: goto label_4730e4;
        case 0x4730e8u: goto label_4730e8;
        case 0x4730ecu: goto label_4730ec;
        case 0x4730f0u: goto label_4730f0;
        case 0x4730f4u: goto label_4730f4;
        case 0x4730f8u: goto label_4730f8;
        case 0x4730fcu: goto label_4730fc;
        case 0x473100u: goto label_473100;
        case 0x473104u: goto label_473104;
        case 0x473108u: goto label_473108;
        case 0x47310cu: goto label_47310c;
        case 0x473110u: goto label_473110;
        case 0x473114u: goto label_473114;
        case 0x473118u: goto label_473118;
        case 0x47311cu: goto label_47311c;
        case 0x473120u: goto label_473120;
        case 0x473124u: goto label_473124;
        case 0x473128u: goto label_473128;
        case 0x47312cu: goto label_47312c;
        default: break;
    }

    ctx->pc = 0x473050u;

label_473050:
    // 0x473050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x473050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_473054:
    // 0x473054: 0x8f828524  lw          $v0, -0x7ADC($gp)
    ctx->pc = 0x473054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
label_473058:
    // 0x473058: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x473058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47305c:
    // 0x47305c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x47305cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_473060:
    // 0x473060: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x473060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_473064:
    // 0x473064: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x473064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_473068:
    // 0x473068: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x473068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47306c:
    // 0x47306c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_473070:
    // 0x473070: 0x2632002c  addiu       $s2, $s1, 0x2C
    ctx->pc = 0x473070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_473074:
    // 0x473074: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x473074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_473078:
    // 0x473078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47307c:
    // 0x47307c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47307cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_473080:
    // 0x473080: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x473080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_473084:
    // 0x473084: 0x12120019  beq         $s0, $s2, . + 4 + (0x19 << 2)
label_473088:
    if (ctx->pc == 0x473088u) {
        ctx->pc = 0x473088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473084u;
        // 0x473088: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47308Cu;
        goto label_47308c;
    }
    ctx->pc = 0x473084u;
    {
        const bool branch_taken_0x473084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x473088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473084u;
        // 0x473088: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473084) {
            ctx->pc = 0x4730ECu;
            goto label_4730ec;
        }
    }
    ctx->pc = 0x47308Cu;
label_47308c:
    // 0x47308c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_473090:
    // 0x473090: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x473090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_473094:
    // 0x473094: 0x2603fff4  addiu       $v1, $s0, -0xC
    ctx->pc = 0x473094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_473098:
    // 0x473098: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x473098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_47309c:
    // 0x47309c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x47309cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4730a0:
    // 0x4730a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4730a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4730a4:
    // 0x4730a4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4730a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4730a8:
    // 0x4730a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4730a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4730ac:
    // 0x4730ac: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4730acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4730b0:
    // 0x4730b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4730b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4730b4:
    // 0x4730b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4730b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4730b8:
    // 0x4730b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4730b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4730bc:
    // 0x4730bc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x4730bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4730c0:
    // 0x4730c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4730c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4730c4:
    // 0x4730c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4730c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4730c8:
    // 0x4730c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4730c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4730cc:
    // 0x4730cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4730ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4730d0:
    // 0x4730d0: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x4730d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_4730d4:
    // 0x4730d4: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x4730d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_4730d8:
    // 0x4730d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4730d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4730dc:
    // 0x4730dc: 0x40f809  jalr        $v0
label_4730e0:
    if (ctx->pc == 0x4730E0u) {
        ctx->pc = 0x4730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4730DCu;
        // 0x4730e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4730E4u;
        goto label_4730e4;
    }
    ctx->pc = 0x4730DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4730E4u);
        ctx->pc = 0x4730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4730DCu;
        // 0x4730e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4730DCu, 0x4730E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4730E4u;
label_4730e4:
    // 0x4730e4: 0x1612ffec  bne         $s0, $s2, . + 4 + (-0x14 << 2)
label_4730e8:
    if (ctx->pc == 0x4730E8u) {
        ctx->pc = 0x4730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4730E4u;
        // 0x4730e8: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4730ECu;
        goto label_4730ec;
    }
    ctx->pc = 0x4730E4u;
    {
        const bool branch_taken_0x4730e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x4730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4730E4u;
        // 0x4730e8: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4730e4) {
            ctx->pc = 0x473098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_473098;
        }
    }
    ctx->pc = 0x4730ECu;
label_4730ec:
    // 0x4730ec: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x4730ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_4730f0:
    // 0x4730f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4730f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4730f4:
    // 0x4730f4: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x4730f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4730f8:
    // 0x4730f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4730f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4730fc:
    // 0x4730fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4730fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_473100:
    // 0x473100: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x473100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473104:
    // 0x473104: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x473104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_473108:
    // 0x473108: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x473108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_47310c:
    // 0x47310c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47310cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_473110:
    // 0x473110: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x473110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473114:
    // 0x473114: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x473114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473118:
    // 0x473118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47311c:
    // 0x47311c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x47311cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_473120:
    // 0x473120: 0x3e00008  jr          $ra
label_473124:
    if (ctx->pc == 0x473124u) {
        ctx->pc = 0x473124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473120u;
        // 0x473124: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473128u;
        goto label_473128;
    }
    ctx->pc = 0x473120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473120u;
        // 0x473124: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473128u;
label_473128:
    // 0x473128: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x473128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_47312c:
    // 0x47312c: 0x0  nop
    ctx->pc = 0x47312cu;
    // NOP
    ctx->pc = 0x473130u;
}
