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

// Function: sub_0030C2A8
// Address: 0x30c2a8 - 0x30c398
void sub_0030C2A8_0x30c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C2A8_0x30c2a8");
#endif

    switch (ctx->pc) {
        case 0x30c308u: goto label_30c308;
        case 0x30c320u: goto label_30c320;
        case 0x30c358u: goto label_30c358;
        case 0x30c364u: goto label_30c364;
        default: break;
    }

    ctx->pc = 0x30c2a8u;

    // 0x30c2a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30c2ac: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x30c2acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x30c2b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30c2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c2b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30c2bc: 0x30f2ffff  andi        $s2, $a3, 0xFFFF
    ctx->pc = 0x30c2bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x30c2c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30c2c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30c2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c2c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x30c2cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30c2ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c2d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x30c2d4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x30c2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c2d8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x30c2d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30c2dc: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x30c2e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x30c2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30c2e4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30c2e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30c2e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30c2ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30c2ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30c2f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30c2f4: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30C2F4u;
    {
        const bool branch_taken_0x30c2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2F4u;
        // 0x30c2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2f4) {
            ctx->pc = 0x30C364u;
            goto label_30c364;
        }
    }
    ctx->pc = 0x30C2FCu;
    // 0x30c2fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30c300: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30C300u;
    SET_GPR_U32(ctx, 31, 0x30C308u);
    ctx->pc = 0x30C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C300u;
    // 0x30c304: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30C300u, 0x30C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C308u;
label_30c308:
    // 0x30c308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30c308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c30c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30c310: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30C310u;
    {
        const bool branch_taken_0x30c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C310u;
        // 0x30c314: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c310) {
            ctx->pc = 0x30C368u;
            goto label_30c368;
        }
    }
    ctx->pc = 0x30C318u;
    // 0x30c318: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30C318u;
    SET_GPR_U32(ctx, 31, 0x30C320u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30C318u, 0x30C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C320u;
label_30c320:
    // 0x30c320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c324: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C324u;
    {
        const bool branch_taken_0x30c324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C324u;
        // 0x30c328: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c324) {
            ctx->pc = 0x30C358u;
            goto label_30c358;
        }
    }
    ctx->pc = 0x30C32Cu;
    // 0x30c32c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x30c32cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x30c330: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x30c330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c334: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30c334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30c338: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x30c338u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x30c33c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x30c33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c340: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x30c340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c344: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x30c344u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c350: 0xc0c30e6  jal         func_30C398
    ctx->pc = 0x30C350u;
    SET_GPR_U32(ctx, 31, 0x30C358u);
    ctx->pc = 0x30C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C350u;
    // 0x30c354: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C398u, 0x30C350u, 0x30C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C358u;
label_30c358:
    // 0x30c358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c35c: 0xc059590  jal         func_165640
    ctx->pc = 0x30C35Cu;
    SET_GPR_U32(ctx, 31, 0x30C364u);
    ctx->pc = 0x30C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C35Cu;
    // 0x30c360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30C35Cu, 0x30C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C364u;
label_30c364:
    // 0x30c364: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30c364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30c368:
    // 0x30c368: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30c368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30c36c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30c36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c370: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30c370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c374: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30c374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c378: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30c378u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c37c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30c37cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c384: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x30c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30c388: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x30c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c38c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C38Cu;
        // 0x30c390: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C394u;
    // 0x30c394: 0x0  nop
    ctx->pc = 0x30c394u;
    // NOP
    ctx->pc = 0x30c398u;
}
