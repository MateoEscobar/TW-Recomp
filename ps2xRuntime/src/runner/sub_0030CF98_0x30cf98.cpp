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

// Function: sub_0030CF98
// Address: 0x30cf98 - 0x30d078
void sub_0030CF98_0x30cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CF98_0x30cf98");
#endif

    switch (ctx->pc) {
        case 0x30cfd8u: goto label_30cfd8;
        case 0x30cfe0u: goto label_30cfe0;
        case 0x30cfe8u: goto label_30cfe8;
        case 0x30d018u: goto label_30d018;
        case 0x30d038u: goto label_30d038;
        default: break;
    }

    ctx->pc = 0x30cf98u;

    // 0x30cf98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30cf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30cf9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30cfa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30cfa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30cfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30cfac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30cfacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfb0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30cfb4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x30cfb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30cfb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30cfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cfbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30cfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30cfc4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30cfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x30cfc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30cfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30cfcc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30cfd0: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x30cfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30cfd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30cfd8:
    // 0x30cfd8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30CFD8u;
    SET_GPR_U32(ctx, 31, 0x30CFE0u);
    ctx->pc = 0x30CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFD8u;
    // 0x30cfdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30CFD8u, 0x30CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFE0u;
label_30cfe0:
    // 0x30cfe0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30CFE0u;
    SET_GPR_U32(ctx, 31, 0x30CFE8u);
    ctx->pc = 0x30CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFE0u;
    // 0x30cfe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30CFE0u, 0x30CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFE8u;
label_30cfe8:
    // 0x30cfe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30cfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfec: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x30CFECu;
    {
        const bool branch_taken_0x30cfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cfec) {
            ctx->pc = 0x30CFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CFECu;
            // 0x30cff0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D040u;
            goto label_30d040;
        }
    }
    ctx->pc = 0x30CFF4u;
    // 0x30cff4: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30cff8: 0x38420062  xori        $v0, $v0, 0x62
    ctx->pc = 0x30cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)98);
    // 0x30cffc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30CFFCu;
    {
        const bool branch_taken_0x30cffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cffc) {
            ctx->pc = 0x30D000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CFFCu;
            // 0x30d000: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D040u;
            goto label_30d040;
        }
    }
    ctx->pc = 0x30D004u;
    // 0x30d004: 0x9242003d  lbu         $v0, 0x3D($s2)
    ctx->pc = 0x30d004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x30d008: 0x5454000d  bnel        $v0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x30D008u;
    {
        const bool branch_taken_0x30d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30d008) {
            ctx->pc = 0x30D00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D008u;
            // 0x30d00c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D040u;
            goto label_30d040;
        }
    }
    ctx->pc = 0x30D010u;
    // 0x30d010: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x30D010u;
    SET_GPR_U32(ctx, 31, 0x30D018u);
    ctx->pc = 0x30D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D010u;
    // 0x30d014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30D010u, 0x30D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D018u;
label_30d018:
    // 0x30d018: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x30d018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d01c: 0x0  nop
    ctx->pc = 0x30d01cu;
    // NOP
    // 0x30d020: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x30D020u;
    {
        const bool branch_taken_0x30d020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D020u;
        // 0x30d024: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d020) {
            ctx->pc = 0x30D040u;
            goto label_30d040;
        }
    }
    ctx->pc = 0x30D028u;
    // 0x30d028: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30d028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x30d02c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d030: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x30D030u;
    SET_GPR_U32(ctx, 31, 0x30D038u);
    ctx->pc = 0x30D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D030u;
    // 0x30d034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30D030u, 0x30D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D038u;
label_30d038:
    // 0x30d038: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D038u;
    {
        const bool branch_taken_0x30d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D038u;
        // 0x30d03c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d038) {
            ctx->pc = 0x30D050u;
            goto label_30d050;
        }
    }
    ctx->pc = 0x30D040u;
label_30d040:
    // 0x30d040: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30d040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30d044: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30D044u;
    {
        const bool branch_taken_0x30d044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D044u;
        // 0x30d048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d044) {
            ctx->pc = 0x30CFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cfd8;
        }
    }
    ctx->pc = 0x30D04Cu;
    // 0x30d04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d050:
    // 0x30d050: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30d050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d054: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30d054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d058: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d05c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30d05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d060: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30d060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d068: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x30d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D06Cu;
        // 0x30d070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D074u;
    // 0x30d074: 0x0  nop
    ctx->pc = 0x30d074u;
    // NOP
    ctx->pc = 0x30d078u;
}
