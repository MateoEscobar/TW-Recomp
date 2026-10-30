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

// Function: sub_00417480
// Address: 0x417480 - 0x417540
void sub_00417480_0x417480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417480_0x417480");
#endif

    switch (ctx->pc) {
        case 0x4174b8u: goto label_4174b8;
        case 0x4174c0u: goto label_4174c0;
        case 0x4174e4u: goto label_4174e4;
        case 0x4174f0u: goto label_4174f0;
        case 0x417508u: goto label_417508;
        case 0x417510u: goto label_417510;
        default: break;
    }

    ctx->pc = 0x417480u;

    // 0x417480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x417480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x417484: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x417484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x417488: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x417488u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x41748c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x417490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x417490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x417494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x417494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417498: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x417498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x41749c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x41749cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4174a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4174a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4174a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4174a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4174ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4174acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4174B0u;
    {
        const bool branch_taken_0x4174b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4174B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4174B0u;
        // 0x4174b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4174b0) {
            ctx->pc = 0x417508u;
            goto label_417508;
        }
    }
    ctx->pc = 0x4174B8u;
label_4174b8:
    // 0x4174b8: 0xc105774  jal         func_415DD0
    ctx->pc = 0x4174B8u;
    SET_GPR_U32(ctx, 31, 0x4174C0u);
    ctx->pc = 0x4174BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4174B8u;
    // 0x4174bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x4174B8u, 0x4174C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4174C0u;
label_4174c0:
    // 0x4174c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4174c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174c4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x4174c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x4174c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4174C8u;
    {
        const bool branch_taken_0x4174c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4174c8) {
            ctx->pc = 0x417508u;
            goto label_417508;
        }
    }
    ctx->pc = 0x4174D0u;
    // 0x4174d0: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x4174d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x4174d4: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x4174D4u;
    {
        const bool branch_taken_0x4174d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x4174D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4174D4u;
        // 0x4174d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4174d4) {
            ctx->pc = 0x417508u;
            goto label_417508;
        }
    }
    ctx->pc = 0x4174DCu;
    // 0x4174dc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x4174DCu;
    SET_GPR_U32(ctx, 31, 0x4174E4u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x4174DCu, 0x4174E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4174E4u;
label_4174e4:
    // 0x4174e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4174e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174e8: 0xc0cdb26  jal         func_336C98
    ctx->pc = 0x4174E8u;
    SET_GPR_U32(ctx, 31, 0x4174F0u);
    ctx->pc = 0x4174ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4174E8u;
    // 0x4174ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x4174E8u, 0x4174F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4174F0u;
label_4174f0:
    // 0x4174f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4174f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4174f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4174f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4174F8u;
    {
        const bool branch_taken_0x4174f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4174F8u;
        // 0x4174fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4174f8) {
            ctx->pc = 0x417508u;
            goto label_417508;
        }
    }
    ctx->pc = 0x417500u;
    // 0x417500: 0xc105772  jal         func_415DC8
    ctx->pc = 0x417500u;
    SET_GPR_U32(ctx, 31, 0x417508u);
    ctx->pc = 0x415DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DC8u, 0x417500u, 0x417508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417508u;
label_417508:
    // 0x417508: 0xc10574c  jal         func_415D30
    ctx->pc = 0x417508u;
    SET_GPR_U32(ctx, 31, 0x417510u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x417508u, 0x417510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417510u;
label_417510:
    // 0x417510: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x417510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x417514: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x417514u;
    {
        const bool branch_taken_0x417514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417514u;
        // 0x417518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417514) {
            ctx->pc = 0x4174B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4174b8;
        }
    }
    ctx->pc = 0x41751Cu;
    // 0x41751c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41751cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x417520: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x417520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417524: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x417524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x417528: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x417528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41752c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41752cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417534: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x417534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x417538: 0x3e00008  jr          $ra
    ctx->pc = 0x417538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417538u;
        // 0x41753c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417540u;
}
