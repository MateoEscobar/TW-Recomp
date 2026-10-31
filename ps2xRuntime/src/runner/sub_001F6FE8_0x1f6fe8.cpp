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

// Function: sub_001F6FE8
// Address: 0x1f6fe8 - 0x1f70c8
void sub_001F6FE8_0x1f6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6FE8_0x1f6fe8");
#endif

    switch (ctx->pc) {
        case 0x1f7018u: goto label_1f7018;
        case 0x1f7020u: goto label_1f7020;
        case 0x1f7030u: goto label_1f7030;
        case 0x1f7044u: goto label_1f7044;
        case 0x1f704cu: goto label_1f704c;
        case 0x1f705cu: goto label_1f705c;
        case 0x1f706cu: goto label_1f706c;
        case 0x1f7094u: goto label_1f7094;
        default: break;
    }

    ctx->pc = 0x1f6fe8u;

    // 0x1f6fe8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f6fec: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f6fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f6ff0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f6ff4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f6ff8: 0x249100d0  addiu       $s1, $a0, 0xD0
    ctx->pc = 0x1f6ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1f6ffc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f7000: 0x24920100  addiu       $s2, $a0, 0x100
    ctx->pc = 0x1f7000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1f7004: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f7008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f700c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7014: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f7014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f7018:
    // 0x1f7018: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1F7018u;
    SET_GPR_U32(ctx, 31, 0x1F7020u);
    ctx->pc = 0x1F701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7018u;
    // 0x1f701c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1F7018u, 0x1F7020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7020u;
label_1f7020:
    // 0x1f7020: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7020u;
    {
        const bool branch_taken_0x1f7020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7020) {
            ctx->pc = 0x1F7024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7020u;
            // 0x1f7024: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7098u;
            goto label_1f7098;
        }
    }
    ctx->pc = 0x1F7028u;
    // 0x1f7028: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1F7028u;
    SET_GPR_U32(ctx, 31, 0x1F7030u);
    ctx->pc = 0x1F702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7028u;
    // 0x1f702c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F7028u, 0x1F7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7030u;
label_1f7030:
    // 0x1f7030: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F7030u;
    {
        const bool branch_taken_0x1f7030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7030) {
            ctx->pc = 0x1F7034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7030u;
            // 0x1f7034: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7098u;
            goto label_1f7098;
        }
    }
    ctx->pc = 0x1F7038u;
    // 0x1f7038: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f703c: 0xc0a48cc  jal         func_292330
    ctx->pc = 0x1F703Cu;
    SET_GPR_U32(ctx, 31, 0x1F7044u);
    ctx->pc = 0x1F7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F703Cu;
    // 0x1f7040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x1F703Cu, 0x1F7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7044u;
label_1f7044:
    // 0x1f7044: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1F7044u;
    SET_GPR_U32(ctx, 31, 0x1F704Cu);
    ctx->pc = 0x1F7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7044u;
    // 0x1f7048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F7044u, 0x1F704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F704Cu;
label_1f704c:
    // 0x1f704c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7054: 0xc08d3be  jal         func_234EF8
    ctx->pc = 0x1F7054u;
    SET_GPR_U32(ctx, 31, 0x1F705Cu);
    ctx->pc = 0x1F7058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7054u;
    // 0x1f7058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x1F7054u, 0x1F705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F705Cu;
label_1f705c:
    // 0x1f705c: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x1f705cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7064: 0xc08e86c  jal         func_23A1B0
    ctx->pc = 0x1F7064u;
    SET_GPR_U32(ctx, 31, 0x1F706Cu);
    ctx->pc = 0x1F7068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7064u;
    // 0x1f7068: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x1F7064u, 0x1F706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F706Cu;
label_1f706c:
    // 0x1f706c: 0xc642fff8  lwc1        $f2, -0x8($s2)
    ctx->pc = 0x1f706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7074: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x1f7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7078: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f707c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7080: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f7080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f7084: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f7084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f7088: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f7088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f708c: 0xc086c2e  jal         func_21B0B8
    ctx->pc = 0x1F708Cu;
    SET_GPR_U32(ctx, 31, 0x1F7094u);
    ctx->pc = 0x1F7090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F708Cu;
    // 0x1f7090: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F708Cu, 0x1F7094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7094u;
label_1f7094:
    // 0x1f7094: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7098:
    // 0x1f7098: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1f709c: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x1f709cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f70a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F70A0u;
    {
        const bool branch_taken_0x1f70a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70A0u;
        // 0x1f70a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70a0) {
            ctx->pc = 0x1F7018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7018;
        }
    }
    ctx->pc = 0x1F70A8u;
    // 0x1f70a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f70a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f70ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f70acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f70b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f70b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f70b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f70b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f70b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f70b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f70bc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f70c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70C0u;
        // 0x1f70c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F70C8u;
}
