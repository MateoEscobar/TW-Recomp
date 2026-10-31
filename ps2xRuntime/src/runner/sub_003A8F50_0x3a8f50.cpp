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

// Function: sub_003A8F50
// Address: 0x3a8f50 - 0x3a9090
void sub_003A8F50_0x3a8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8F50_0x3a8f50");
#endif

    switch (ctx->pc) {
        case 0x3a8f50u: goto label_3a8f50;
        case 0x3a8f54u: goto label_3a8f54;
        case 0x3a8f58u: goto label_3a8f58;
        case 0x3a8f5cu: goto label_3a8f5c;
        case 0x3a8f60u: goto label_3a8f60;
        case 0x3a8f64u: goto label_3a8f64;
        case 0x3a8f68u: goto label_3a8f68;
        case 0x3a8f6cu: goto label_3a8f6c;
        case 0x3a8f70u: goto label_3a8f70;
        case 0x3a8f74u: goto label_3a8f74;
        case 0x3a8f78u: goto label_3a8f78;
        case 0x3a8f7cu: goto label_3a8f7c;
        case 0x3a8f80u: goto label_3a8f80;
        case 0x3a8f84u: goto label_3a8f84;
        case 0x3a8f88u: goto label_3a8f88;
        case 0x3a8f8cu: goto label_3a8f8c;
        case 0x3a8f90u: goto label_3a8f90;
        case 0x3a8f94u: goto label_3a8f94;
        case 0x3a8f98u: goto label_3a8f98;
        case 0x3a8f9cu: goto label_3a8f9c;
        case 0x3a8fa0u: goto label_3a8fa0;
        case 0x3a8fa4u: goto label_3a8fa4;
        case 0x3a8fa8u: goto label_3a8fa8;
        case 0x3a8facu: goto label_3a8fac;
        case 0x3a8fb0u: goto label_3a8fb0;
        case 0x3a8fb4u: goto label_3a8fb4;
        case 0x3a8fb8u: goto label_3a8fb8;
        case 0x3a8fbcu: goto label_3a8fbc;
        case 0x3a8fc0u: goto label_3a8fc0;
        case 0x3a8fc4u: goto label_3a8fc4;
        case 0x3a8fc8u: goto label_3a8fc8;
        case 0x3a8fccu: goto label_3a8fcc;
        case 0x3a8fd0u: goto label_3a8fd0;
        case 0x3a8fd4u: goto label_3a8fd4;
        case 0x3a8fd8u: goto label_3a8fd8;
        case 0x3a8fdcu: goto label_3a8fdc;
        case 0x3a8fe0u: goto label_3a8fe0;
        case 0x3a8fe4u: goto label_3a8fe4;
        case 0x3a8fe8u: goto label_3a8fe8;
        case 0x3a8fecu: goto label_3a8fec;
        case 0x3a8ff0u: goto label_3a8ff0;
        case 0x3a8ff4u: goto label_3a8ff4;
        case 0x3a8ff8u: goto label_3a8ff8;
        case 0x3a8ffcu: goto label_3a8ffc;
        case 0x3a9000u: goto label_3a9000;
        case 0x3a9004u: goto label_3a9004;
        case 0x3a9008u: goto label_3a9008;
        case 0x3a900cu: goto label_3a900c;
        case 0x3a9010u: goto label_3a9010;
        case 0x3a9014u: goto label_3a9014;
        case 0x3a9018u: goto label_3a9018;
        case 0x3a901cu: goto label_3a901c;
        case 0x3a9020u: goto label_3a9020;
        case 0x3a9024u: goto label_3a9024;
        case 0x3a9028u: goto label_3a9028;
        case 0x3a902cu: goto label_3a902c;
        case 0x3a9030u: goto label_3a9030;
        case 0x3a9034u: goto label_3a9034;
        case 0x3a9038u: goto label_3a9038;
        case 0x3a903cu: goto label_3a903c;
        case 0x3a9040u: goto label_3a9040;
        case 0x3a9044u: goto label_3a9044;
        case 0x3a9048u: goto label_3a9048;
        case 0x3a904cu: goto label_3a904c;
        case 0x3a9050u: goto label_3a9050;
        case 0x3a9054u: goto label_3a9054;
        case 0x3a9058u: goto label_3a9058;
        case 0x3a905cu: goto label_3a905c;
        case 0x3a9060u: goto label_3a9060;
        case 0x3a9064u: goto label_3a9064;
        case 0x3a9068u: goto label_3a9068;
        case 0x3a906cu: goto label_3a906c;
        case 0x3a9070u: goto label_3a9070;
        case 0x3a9074u: goto label_3a9074;
        case 0x3a9078u: goto label_3a9078;
        case 0x3a907cu: goto label_3a907c;
        case 0x3a9080u: goto label_3a9080;
        case 0x3a9084u: goto label_3a9084;
        case 0x3a9088u: goto label_3a9088;
        case 0x3a908cu: goto label_3a908c;
        default: break;
    }

    ctx->pc = 0x3a8f50u;

label_3a8f50:
    // 0x3a8f50: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3a8f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3a8f54:
    // 0x3a8f54: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3a8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3a8f58:
    // 0x3a8f58: 0x7fb30450  sq          $s3, 0x450($sp)
    ctx->pc = 0x3a8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 19));
label_3a8f5c:
    // 0x3a8f5c: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3a8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3a8f60:
    // 0x3a8f60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a8f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f64:
    // 0x3a8f64: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3a8f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3a8f68:
    // 0x3a8f68: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3a8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3a8f6c:
    // 0x3a8f6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3a8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a8f70:
    // 0x3a8f70: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a8f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a8f74:
    // 0x3a8f74: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a8f78:
    // 0x3a8f78: 0x40f809  jalr        $v0
label_3a8f7c:
    if (ctx->pc == 0x3A8F7Cu) {
        ctx->pc = 0x3A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F78u;
        // 0x3a8f7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F80u;
        goto label_3a8f80;
    }
    ctx->pc = 0x3A8F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8F80u);
        ctx->pc = 0x3A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F78u;
        // 0x3a8f7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8F78u, 0x3A8F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8F80u;
label_3a8f80:
    // 0x3a8f80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f84:
    // 0x3a8f84: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3a8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a8f88:
    // 0x3a8f88: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a8f8c:
    // 0x3a8f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a8f90:
    // 0x3a8f90: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_3a8f94:
    if (ctx->pc == 0x3A8F94u) {
        ctx->pc = 0x3A8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F90u;
        // 0x3a8f94: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F98u;
        goto label_3a8f98;
    }
    ctx->pc = 0x3A8F90u;
    {
        const bool branch_taken_0x3a8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F90u;
        // 0x3a8f94: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f90) {
            ctx->pc = 0x3A8FD4u;
            goto label_3a8fd4;
        }
    }
    ctx->pc = 0x3A8F98u;
label_3a8f98:
    // 0x3a8f98: 0xc0e9694  jal         func_3A5A50
label_3a8f9c:
    if (ctx->pc == 0x3A8F9Cu) {
        ctx->pc = 0x3A8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F98u;
        // 0x3a8f9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FA0u;
        goto label_3a8fa0;
    }
    ctx->pc = 0x3A8F98u;
    SET_GPR_U32(ctx, 31, 0x3A8FA0u);
    ctx->pc = 0x3A8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F98u;
    // 0x3a8f9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A8F98u, 0x3A8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FA0u;
label_3a8fa0:
    // 0x3a8fa0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3a8fa4:
    if (ctx->pc == 0x3A8FA4u) {
        ctx->pc = 0x3A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FA0u;
        // 0x3a8fa4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FA8u;
        goto label_3a8fa8;
    }
    ctx->pc = 0x3A8FA0u;
    {
        const bool branch_taken_0x3a8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8fa0) {
            ctx->pc = 0x3A8FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8FA0u;
            // 0x3a8fa4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8FD8u;
            goto label_3a8fd8;
        }
    }
    ctx->pc = 0x3A8FA8u;
label_3a8fa8:
    // 0x3a8fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a8fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a8fac:
    // 0x3a8fac: 0xc0e90ca  jal         func_3A4328
label_3a8fb0:
    if (ctx->pc == 0x3A8FB0u) {
        ctx->pc = 0x3A8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FACu;
        // 0x3a8fb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FB4u;
        goto label_3a8fb4;
    }
    ctx->pc = 0x3A8FACu;
    SET_GPR_U32(ctx, 31, 0x3A8FB4u);
    ctx->pc = 0x3A8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FACu;
    // 0x3a8fb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A8FACu, 0x3A8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FB4u;
label_3a8fb4:
    // 0x3a8fb4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a8fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3a8fb8:
    // 0x3a8fb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a8fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a8fbc:
    // 0x3a8fbc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3a8fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3a8fc0:
    // 0x3a8fc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a8fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a8fc4:
    // 0x3a8fc4: 0xc0e9f56  jal         func_3A7D58
label_3a8fc8:
    if (ctx->pc == 0x3A8FC8u) {
        ctx->pc = 0x3A8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FC4u;
        // 0x3a8fc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FCCu;
        goto label_3a8fcc;
    }
    ctx->pc = 0x3A8FC4u;
    SET_GPR_U32(ctx, 31, 0x3A8FCCu);
    ctx->pc = 0x3A8FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FC4u;
    // 0x3a8fc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3A8FC4u, 0x3A8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FCCu;
label_3a8fcc:
    // 0x3a8fcc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3a8fd0:
    if (ctx->pc == 0x3A8FD0u) {
        ctx->pc = 0x3A8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FCCu;
        // 0x3a8fd0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FD4u;
        goto label_3a8fd4;
    }
    ctx->pc = 0x3A8FCCu;
    {
        const bool branch_taken_0x3a8fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8fcc) {
            ctx->pc = 0x3A8FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8FCCu;
            // 0x3a8fd0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8FFCu;
            goto label_3a8ffc;
        }
    }
    ctx->pc = 0x3A8FD4u;
label_3a8fd4:
    // 0x3a8fd4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3a8fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a8fd8:
    // 0x3a8fd8: 0x50a00026  beql        $a1, $zero, . + 4 + (0x26 << 2)
label_3a8fdc:
    if (ctx->pc == 0x3A8FDCu) {
        ctx->pc = 0x3A8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FD8u;
        // 0x3a8fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FE0u;
        goto label_3a8fe0;
    }
    ctx->pc = 0x3A8FD8u;
    {
        const bool branch_taken_0x3a8fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8fd8) {
            ctx->pc = 0x3A8FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8FD8u;
            // 0x3a8fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9074u;
            goto label_3a9074;
        }
    }
    ctx->pc = 0x3A8FE0u;
label_3a8fe0:
    // 0x3a8fe0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a8fe4:
    // 0x3a8fe4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3a8fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3a8fe8:
    // 0x3a8fe8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3a8fec:
    // 0x3a8fec: 0x60f809  jalr        $v1
label_3a8ff0:
    if (ctx->pc == 0x3A8FF0u) {
        ctx->pc = 0x3A8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FECu;
        // 0x3a8ff0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FF4u;
        goto label_3a8ff4;
    }
    ctx->pc = 0x3A8FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A8FF4u);
        ctx->pc = 0x3A8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FECu;
        // 0x3a8ff0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8FECu, 0x3A8FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8FF4u;
label_3a8ff4:
    // 0x3a8ff4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3a8ff8:
    if (ctx->pc == 0x3A8FF8u) {
        ctx->pc = 0x3A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FF4u;
        // 0x3a8ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FFCu;
        goto label_3a8ffc;
    }
    ctx->pc = 0x3A8FF4u;
    {
        const bool branch_taken_0x3a8ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FF4u;
        // 0x3a8ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ff4) {
            ctx->pc = 0x3A9074u;
            goto label_3a9074;
        }
    }
    ctx->pc = 0x3A8FFCu;
label_3a8ffc:
    // 0x3a8ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9000:
    // 0x3a9000: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_3a9004:
    if (ctx->pc == 0x3A9004u) {
        ctx->pc = 0x3A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9000u;
        // 0x3a9004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9008u;
        goto label_3a9008;
    }
    ctx->pc = 0x3A9000u;
    {
        const bool branch_taken_0x3a9000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9000u;
        // 0x3a9004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9000) {
            ctx->pc = 0x3A9074u;
            goto label_3a9074;
        }
    }
    ctx->pc = 0x3A9008u;
label_3a9008:
    // 0x3a9008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a900c:
    // 0x3a900c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3a9010:
    // 0x3a9010: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a9014:
    // 0x3a9014: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3a9018:
    // 0x3a9018: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3a9018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3a901c:
    // 0x3a901c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a901cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3a9020:
    // 0x3a9020: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9024:
    // 0x3a9024: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a9024u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a9028:
    // 0x3a9028: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a9028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a902c:
    // 0x3a902c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a902cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3a9030:
    // 0x3a9030: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a9030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9034:
    // 0x3a9034: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a9034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a9038:
    // 0x3a9038: 0x26101c88  addiu       $s0, $s0, 0x1C88
    ctx->pc = 0x3a9038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7304));
label_3a903c:
    // 0x3a903c: 0xc0cd518  jal         func_335460
label_3a9040:
    if (ctx->pc == 0x3A9040u) {
        ctx->pc = 0x3A9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A903Cu;
        // 0x3a9040: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9044u;
        goto label_3a9044;
    }
    ctx->pc = 0x3A903Cu;
    SET_GPR_U32(ctx, 31, 0x3A9044u);
    ctx->pc = 0x3A9040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A903Cu;
    // 0x3a9040: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A903Cu, 0x3A9044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9044u;
label_3a9044:
    // 0x3a9044: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a9044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9048:
    // 0x3a9048: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3a9048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3a904c:
    // 0x3a904c: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3a904cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3a9050:
    // 0x3a9050: 0xe7a00420  swc1        $f0, 0x420($sp)
    ctx->pc = 0x3a9050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
label_3a9054:
    // 0x3a9054: 0xafb30430  sw          $s3, 0x430($sp)
    ctx->pc = 0x3a9054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 19));
label_3a9058:
    // 0x3a9058: 0xc0e9fa6  jal         func_3A7E98
label_3a905c:
    if (ctx->pc == 0x3A905Cu) {
        ctx->pc = 0x3A905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9058u;
        // 0x3a905c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9060u;
        goto label_3a9060;
    }
    ctx->pc = 0x3A9058u;
    SET_GPR_U32(ctx, 31, 0x3A9060u);
    ctx->pc = 0x3A905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9058u;
    // 0x3a905c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3A9058u, 0x3A9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9060u;
label_3a9060:
    // 0x3a9060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9064:
    // 0x3a9064: 0xc0f15bc  jal         func_3C56F0
label_3a9068:
    if (ctx->pc == 0x3A9068u) {
        ctx->pc = 0x3A9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9064u;
        // 0x3a9068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A906Cu;
        goto label_3a906c;
    }
    ctx->pc = 0x3A9064u;
    SET_GPR_U32(ctx, 31, 0x3A906Cu);
    ctx->pc = 0x3A9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9064u;
    // 0x3a9068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A9064u, 0x3A906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A906Cu;
label_3a906c:
    // 0x3a906c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a906cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a9070:
    // 0x3a9070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a9070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9074:
    // 0x3a9074: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3a9074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3a9078:
    // 0x3a9078: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3a9078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3a907c:
    // 0x3a907c: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3a907cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3a9080:
    // 0x3a9080: 0x7bb30450  lq          $s3, 0x450($sp)
    ctx->pc = 0x3a9080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3a9084:
    // 0x3a9084: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3a9084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3a9088:
    // 0x3a9088: 0x3e00008  jr          $ra
label_3a908c:
    if (ctx->pc == 0x3A908Cu) {
        ctx->pc = 0x3A908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9088u;
        // 0x3a908c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9090u;
        goto label_fallthrough_0x3a9088;
    }
    ctx->pc = 0x3A9088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9088u;
        // 0x3a908c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9088:
    ctx->pc = 0x3A9090u;
}
