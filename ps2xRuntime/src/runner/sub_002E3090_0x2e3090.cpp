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

// Function: sub_002E3090
// Address: 0x2e3090 - 0x2e3180
void sub_002E3090_0x2e3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3090_0x2e3090");
#endif

    switch (ctx->pc) {
        case 0x2e30e4u: goto label_2e30e4;
        case 0x2e30ecu: goto label_2e30ec;
        case 0x2e30fcu: goto label_2e30fc;
        case 0x2e3104u: goto label_2e3104;
        case 0x2e3140u: goto label_2e3140;
        case 0x2e314cu: goto label_2e314c;
        default: break;
    }

    ctx->pc = 0x2e3090u;

    // 0x2e3090: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e3090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e3094: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e3094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e3098: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e309c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e30a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e30a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e30ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e30acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30b0: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x2e30b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e30b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e30b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30b8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2e30b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e30bc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2e30bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2e30c0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2e30c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e30c4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2e30c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2e30c8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2e30c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e30cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e30ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e30d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e30d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e30d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e30d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e30d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e30d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e30dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E30DCu;
    SET_GPR_U32(ctx, 31, 0x2E30E4u);
    ctx->pc = 0x2E30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30DCu;
    // 0x2e30e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E30DCu, 0x2E30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30E4u;
label_2e30e4:
    // 0x2e30e4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E30E4u;
    SET_GPR_U32(ctx, 31, 0x2E30ECu);
    ctx->pc = 0x2E30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30E4u;
    // 0x2e30e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E30E4u, 0x2E30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30ECu;
label_2e30ec:
    // 0x2e30ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E30ECu;
    {
        const bool branch_taken_0x2e30ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30ECu;
        // 0x2e30f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30ec) {
            ctx->pc = 0x2E3150u;
            goto label_2e3150;
        }
    }
    ctx->pc = 0x2E30F4u;
    // 0x2e30f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E30F4u;
    SET_GPR_U32(ctx, 31, 0x2E30FCu);
    ctx->pc = 0x2E30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30F4u;
    // 0x2e30f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E30F4u, 0x2E30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30FCu;
label_2e30fc:
    // 0x2e30fc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E30FCu;
    SET_GPR_U32(ctx, 31, 0x2E3104u);
    ctx->pc = 0x2E3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30FCu;
    // 0x2e3100: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E30FCu, 0x2E3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3104u;
label_2e3104:
    // 0x2e3104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3108: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E3108u;
    {
        const bool branch_taken_0x2e3108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3108u;
        // 0x2e310c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3108) {
            ctx->pc = 0x2E3140u;
            goto label_2e3140;
        }
    }
    ctx->pc = 0x2E3110u;
    // 0x2e3110: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e3110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e3114: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e3114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e3118: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e3118u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e311c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x2e311cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x2e3120: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x2e3120u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x2e3124: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e3124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3128: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2e3128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e312c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e3130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3134: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3138: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2E3138u;
    SET_GPR_U32(ctx, 31, 0x2E3140u);
    ctx->pc = 0x2E313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3138u;
    // 0x2e313c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2E3138u, 0x2E3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3140u;
label_2e3140:
    // 0x2e3140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3144: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E3144u;
    SET_GPR_U32(ctx, 31, 0x2E314Cu);
    ctx->pc = 0x2E3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3144u;
    // 0x2e3148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E3144u, 0x2E314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E314Cu;
label_2e314c:
    // 0x2e314c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e314cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e3150:
    // 0x2e3150: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e3150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3154: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e3154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e315c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e315cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3164: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x2e3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e3168: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2e3168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e316c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2e316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e3170: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2e3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3174: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3174u;
        // 0x2e3178: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E317Cu;
    // 0x2e317c: 0x0  nop
    ctx->pc = 0x2e317cu;
    // NOP
    ctx->pc = 0x2e3180u;
}
