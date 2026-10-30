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

// Function: sub_0031A268
// Address: 0x31a268 - 0x31a340
void sub_0031A268_0x31a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A268_0x31a268");
#endif

    switch (ctx->pc) {
        case 0x31a2bcu: goto label_31a2bc;
        case 0x31a2d4u: goto label_31a2d4;
        case 0x31a308u: goto label_31a308;
        case 0x31a314u: goto label_31a314;
        default: break;
    }

    ctx->pc = 0x31a268u;

    // 0x31a268: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31a26c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a270: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31a274: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31a278: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31a278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a27c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31a280: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31a280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a284: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x31a284u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31a288: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31a288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a28c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x31a28cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a290: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x31a290u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x31a294: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x31a294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a298: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x31a298u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x31a29c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31a2a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31a2a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31a2a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31a2a8: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31A2A8u;
    {
        const bool branch_taken_0x31a2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2A8u;
        // 0x31a2ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2a8) {
            ctx->pc = 0x31A314u;
            goto label_31a314;
        }
    }
    ctx->pc = 0x31A2B0u;
    // 0x31a2b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x31a2b4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31A2B4u;
    SET_GPR_U32(ctx, 31, 0x31A2BCu);
    ctx->pc = 0x31A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2B4u;
    // 0x31a2b8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31A2B4u, 0x31A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2BCu;
label_31a2bc:
    // 0x31a2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x31a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x31a2c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31A2C4u;
    {
        const bool branch_taken_0x31a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2C4u;
        // 0x31a2c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2c4) {
            ctx->pc = 0x31A318u;
            goto label_31a318;
        }
    }
    ctx->pc = 0x31A2CCu;
    // 0x31a2cc: 0xc0c1956  jal         func_306558
    ctx->pc = 0x31A2CCu;
    SET_GPR_U32(ctx, 31, 0x31A2D4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x31A2CCu, 0x31A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2D4u;
label_31a2d4:
    // 0x31a2d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2d8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x31A2D8u;
    {
        const bool branch_taken_0x31a2d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2D8u;
        // 0x31a2dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2d8) {
            ctx->pc = 0x31A308u;
            goto label_31a308;
        }
    }
    ctx->pc = 0x31A2E0u;
    // 0x31a2e0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x31a2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x31a2e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31a2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31a2e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x31a2ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x31a2ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x31a2f0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x31a2f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x31a2f4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31a2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31a2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a300: 0xc0c690c  jal         func_31A430
    ctx->pc = 0x31A300u;
    SET_GPR_U32(ctx, 31, 0x31A308u);
    ctx->pc = 0x31A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A300u;
    // 0x31a304: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A430u, 0x31A300u, 0x31A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A308u;
label_31a308:
    // 0x31a308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a30c: 0xc059590  jal         func_165640
    ctx->pc = 0x31A30Cu;
    SET_GPR_U32(ctx, 31, 0x31A314u);
    ctx->pc = 0x31A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A30Cu;
    // 0x31a310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31A30Cu, 0x31A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A314u;
label_31a314:
    // 0x31a314: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31a314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31a318:
    // 0x31a318: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31a318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a31c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31a31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a320: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31a320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a324: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31a324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a32c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x31a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31a330: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x31a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31a334: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x31a334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a338: 0x3e00008  jr          $ra
    ctx->pc = 0x31A338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A338u;
        // 0x31a33c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A340u;
}
