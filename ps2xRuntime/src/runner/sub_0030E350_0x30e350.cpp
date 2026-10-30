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

// Function: sub_0030E350
// Address: 0x30e350 - 0x30e438
void sub_0030E350_0x30e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E350_0x30e350");
#endif

    switch (ctx->pc) {
        case 0x30e398u: goto label_30e398;
        case 0x30e3a0u: goto label_30e3a0;
        case 0x30e3a8u: goto label_30e3a8;
        case 0x30e3c8u: goto label_30e3c8;
        case 0x30e3f4u: goto label_30e3f4;
        default: break;
    }

    ctx->pc = 0x30e350u;

    // 0x30e350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30e354: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30e354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30e358: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30e35c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30e35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30e360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30e364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30e364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e368: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30e368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30e36c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30e370: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30e370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e374: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x30e374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30e378: 0x24150087  addiu       $s5, $zero, 0x87
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x30e37c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30e380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e384: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x30e384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x30e388: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30e388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30e38c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30e390: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x30e390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30e394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30e394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30e398:
    // 0x30e398: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30E398u;
    SET_GPR_U32(ctx, 31, 0x30E3A0u);
    ctx->pc = 0x30E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E398u;
    // 0x30e39c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30E398u, 0x30E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3A0u;
label_30e3a0:
    // 0x30e3a0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30E3A0u;
    SET_GPR_U32(ctx, 31, 0x30E3A8u);
    ctx->pc = 0x30E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E3A0u;
    // 0x30e3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30E3A0u, 0x30E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3A8u;
label_30e3a8:
    // 0x30e3a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3ac: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E3ACu;
    {
        const bool branch_taken_0x30e3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e3ac) {
            ctx->pc = 0x30E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E3ACu;
            // 0x30e3b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E3FCu;
            goto label_30e3fc;
        }
    }
    ctx->pc = 0x30E3B4u;
    // 0x30e3b4: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30e3b8: 0x54550010  bnel        $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x30E3B8u;
    {
        const bool branch_taken_0x30e3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x30e3b8) {
            ctx->pc = 0x30E3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E3B8u;
            // 0x30e3bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E3FCu;
            goto label_30e3fc;
        }
    }
    ctx->pc = 0x30E3C0u;
    // 0x30e3c0: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x30E3C0u;
    SET_GPR_U32(ctx, 31, 0x30E3C8u);
    ctx->pc = 0x30E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E3C0u;
    // 0x30e3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30E3C0u, 0x30E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3C8u;
label_30e3c8:
    // 0x30e3c8: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x30e3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30e3cc: 0x1454000b  bne         $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x30E3CCu;
    {
        const bool branch_taken_0x30e3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3CCu;
        // 0x30e3d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3cc) {
            ctx->pc = 0x30E3FCu;
            goto label_30e3fc;
        }
    }
    ctx->pc = 0x30E3D4u;
    // 0x30e3d4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x30e3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e3d8: 0x0  nop
    ctx->pc = 0x30e3d8u;
    // NOP
    // 0x30e3dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30E3DCu;
    {
        const bool branch_taken_0x30e3dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3DCu;
        // 0x30e3e0: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3dc) {
            ctx->pc = 0x30E400u;
            goto label_30e400;
        }
    }
    ctx->pc = 0x30E3E4u;
    // 0x30e3e4: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x30e3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x30e3e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30e3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e3ec: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x30E3ECu;
    SET_GPR_U32(ctx, 31, 0x30E3F4u);
    ctx->pc = 0x30E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E3ECu;
    // 0x30e3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30E3ECu, 0x30E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3F4u;
label_30e3f4:
    // 0x30e3f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30E3F4u;
    {
        const bool branch_taken_0x30e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3F4u;
        // 0x30e3f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3f4) {
            ctx->pc = 0x30E40Cu;
            goto label_30e40c;
        }
    }
    ctx->pc = 0x30E3FCu;
label_30e3fc:
    // 0x30e3fc: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30e3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30e400:
    // 0x30e400: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x30E400u;
    {
        const bool branch_taken_0x30e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E400u;
        // 0x30e404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e400) {
            ctx->pc = 0x30E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e398;
        }
    }
    ctx->pc = 0x30E408u;
    // 0x30e408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30e408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e40c:
    // 0x30e40c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30e40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30e410: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30e410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e414: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30e414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30e418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e41c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30e41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e420: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30e420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e428: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x30e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E42Cu;
        // 0x30e430: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E434u;
    // 0x30e434: 0x0  nop
    ctx->pc = 0x30e434u;
    // NOP
    ctx->pc = 0x30e438u;
}
