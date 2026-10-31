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

// Function: sub_001BB390
// Address: 0x1bb390 - 0x1bb440
void sub_001BB390_0x1bb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB390_0x1bb390");
#endif

    switch (ctx->pc) {
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb400u: goto label_1bb400;
        case 0x1bb414u: goto label_1bb414;
        default: break;
    }

    ctx->pc = 0x1bb390u;

    // 0x1bb390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bb390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bb394: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bb398: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bb398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bb39c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3a0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1bb3a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1bb3a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bb3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb3ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb3b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb3b4: 0x8e500068  lw          $s0, 0x68($s2)
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1bb3b8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB3B8u;
    {
        const bool branch_taken_0x1bb3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3B8u;
        // 0x1bb3bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b8) {
            ctx->pc = 0x1BB41Cu;
            goto label_1bb41c;
        }
    }
    ctx->pc = 0x1BB3C0u;
    // 0x1bb3c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bb3c4: 0x2451dc19  addiu       $s1, $v0, -0x23E7
    ctx->pc = 0x1bb3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958105));
    // 0x1bb3c8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB3C8u;
    SET_GPR_U32(ctx, 31, 0x1BB3D0u);
    ctx->pc = 0x1BB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3C8u;
    // 0x1bb3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB3C8u, 0x1BB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3D0u;
label_1bb3d0:
    // 0x1bb3d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3d8: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1BB3D8u;
    SET_GPR_U32(ctx, 31, 0x1BB3E0u);
    ctx->pc = 0x1BB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3D8u;
    // 0x1bb3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1BB3D8u, 0x1BB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3E0u;
label_1bb3e0:
    // 0x1bb3e0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB3E0u;
    {
        const bool branch_taken_0x1bb3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3e0) {
            ctx->pc = 0x1BB3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB3E0u;
            // 0x1bb3e4: 0xe65401d4  swc1        $f20, 0x1D4($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB41Cu;
            goto label_1bb41c;
        }
    }
    ctx->pc = 0x1BB3E8u;
    // 0x1bb3e8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB3E8u;
    {
        const bool branch_taken_0x1bb3e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3e8) {
            ctx->pc = 0x1BB3F8u;
            goto label_1bb3f8;
        }
    }
    ctx->pc = 0x1BB3F0u;
    // 0x1bb3f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BB3F0u;
    {
        const bool branch_taken_0x1bb3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3F0u;
        // 0x1bb3f4: 0xe65401d4  swc1        $f20, 0x1D4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3f0) {
            ctx->pc = 0x1BB41Cu;
            goto label_1bb41c;
        }
    }
    ctx->pc = 0x1BB3F8u;
label_1bb3f8:
    // 0x1bb3f8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB3F8u;
    SET_GPR_U32(ctx, 31, 0x1BB400u);
    ctx->pc = 0x1BB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3F8u;
    // 0x1bb3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB3F8u, 0x1BB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB400u;
label_1bb400:
    // 0x1bb400: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bb400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1bb404: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1bb404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bb408: 0x24a549a8  addiu       $a1, $a1, 0x49A8
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18856));
    // 0x1bb40c: 0xc10ca4a  jal         func_432928
    ctx->pc = 0x1BB40Cu;
    SET_GPR_U32(ctx, 31, 0x1BB414u);
    ctx->pc = 0x1BB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB40Cu;
    // 0x1bb410: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1BB40Cu, 0x1BB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB414u;
label_1bb414:
    // 0x1bb414: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bb414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb418: 0xe64001d4  swc1        $f0, 0x1D4($s2)
    ctx->pc = 0x1bb418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
label_1bb41c:
    // 0x1bb41c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bb41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb420: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bb420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb424: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bb424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb428: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bb428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb430: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1bb430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb434: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB434u;
        // 0x1bb438: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB43Cu;
    // 0x1bb43c: 0x0  nop
    ctx->pc = 0x1bb43cu;
    // NOP
    ctx->pc = 0x1bb440u;
}
