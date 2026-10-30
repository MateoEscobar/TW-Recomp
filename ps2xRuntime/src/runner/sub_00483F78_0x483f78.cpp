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

// Function: sub_00483F78
// Address: 0x483f78 - 0x484098
void sub_00483F78_0x483f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483F78_0x483f78");
#endif

    switch (ctx->pc) {
        case 0x483fa8u: goto label_483fa8;
        case 0x483fd0u: goto label_483fd0;
        case 0x483fd8u: goto label_483fd8;
        default: break;
    }

    ctx->pc = 0x483f78u;

    // 0x483f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x483f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x483f7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x483f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x483f80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x483f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x483f84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x483f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483f88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x483f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x483f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x483f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483f94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x483f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x483f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x483F98u;
    {
        const bool branch_taken_0x483f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x483F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483F98u;
        // 0x483f9c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483f98) {
            ctx->pc = 0x483FA8u;
            goto label_483fa8;
        }
    }
    ctx->pc = 0x483FA0u;
    // 0x483fa0: 0xc120f9c  jal         func_483E70
    ctx->pc = 0x483FA0u;
    SET_GPR_U32(ctx, 31, 0x483FA8u);
    ctx->pc = 0x483FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483FA0u;
    // 0x483fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E70u, 0x483FA0u, 0x483FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483FA8u;
label_483fa8:
    // 0x483fa8: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x483fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x483fac: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x483facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x483fb0: 0xae710098  sw          $s1, 0x98($s3)
    ctx->pc = 0x483fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
    // 0x483fb4: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x483fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x483fb8: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x483fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x483fbc: 0x8e7200a0  lw          $s2, 0xA0($s3)
    ctx->pc = 0x483fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x483fc0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x483FC0u;
    {
        const bool branch_taken_0x483fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483FC0u;
        // 0x483fc4: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483fc0) {
            ctx->pc = 0x483FE4u;
            goto label_483fe4;
        }
    }
    ctx->pc = 0x483FC8u;
    // 0x483fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483fcc: 0x0  nop
    ctx->pc = 0x483fccu;
    // NOP
label_483fd0:
    // 0x483fd0: 0xc12114e  jal         func_484538
    ctx->pc = 0x483FD0u;
    SET_GPR_U32(ctx, 31, 0x483FD8u);
    ctx->pc = 0x483FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483FD0u;
    // 0x483fd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484538u, 0x483FD0u, 0x483FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483FD8u;
label_483fd8:
    // 0x483fd8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x483fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x483fdc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x483FDCu;
    {
        const bool branch_taken_0x483fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483FDCu;
        // 0x483fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483fdc) {
            ctx->pc = 0x483FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483fd0;
        }
    }
    ctx->pc = 0x483FE4u;
label_483fe4:
    // 0x483fe4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x483fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x483fe8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x483fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x483fec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x483FECu;
    {
        const bool branch_taken_0x483fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483fec) {
            ctx->pc = 0x483FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483FECu;
            // 0x483ff0: 0x8e2600a0  lw          $a2, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48401Cu;
            goto label_48401c;
        }
    }
    ctx->pc = 0x483FF4u;
    // 0x483ff4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x483ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x483ff8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x483ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x483ffc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x483ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x484000: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x484000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x484004: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x484004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x484008: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x484008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x48400c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x48400cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x484010: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x484010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x484014: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x484014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x484018: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x484018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_48401c:
    // 0x48401c: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x48401cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x484020: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x484020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x484024: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x484024u;
    {
        const bool branch_taken_0x484024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484024) {
            ctx->pc = 0x484028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484024u;
            // 0x484028: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484064u;
            goto label_484064;
        }
    }
    ctx->pc = 0x48402Cu;
    // 0x48402c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x48402cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x484030: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x484030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x484034: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x484034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x484038: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x484038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x48403c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x48403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x484040: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x484040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x484044: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x484044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x484048: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x484048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x48404c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x48404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x484050: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x484050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x484054: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x484054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x484058: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x484058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48405c: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x48405cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x484060: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x484060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_484064:
    // 0x484064: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x484064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x484068: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x484068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48406c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48406cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x484070: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x484070u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x484074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x484078: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x484078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x48407c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x48407cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484080: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x484080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x484084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484088: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x484088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x48408c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x48408cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x484090: 0x3e00008  jr          $ra
    ctx->pc = 0x484090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484090u;
        // 0x484094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484098u;
}
