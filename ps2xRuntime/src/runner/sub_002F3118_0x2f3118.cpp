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

// Function: sub_002F3118
// Address: 0x2f3118 - 0x2f3220
void sub_002F3118_0x2f3118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3118_0x2f3118");
#endif

    switch (ctx->pc) {
        case 0x2f3180u: goto label_2f3180;
        case 0x2f3188u: goto label_2f3188;
        case 0x2f3198u: goto label_2f3198;
        case 0x2f31a0u: goto label_2f31a0;
        case 0x2f31d8u: goto label_2f31d8;
        case 0x2f31e4u: goto label_2f31e4;
        default: break;
    }

    ctx->pc = 0x2f3118u;

    // 0x2f3118: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f311c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2f311cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2f3120: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2f3120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2f3124: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2f3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2f3128: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f3128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f312c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2f312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2f3130: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2f3130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3134: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2f3134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2f3138: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x2f3138u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2f313c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2f3140: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f3140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3144: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2f3144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2f3148: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2f3148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f314c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2f314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2f3150: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2f3150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3154: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2f3154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2f3158: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2f3158u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f315c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2f315cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2f3160: 0x7f403  sra         $fp, $a3, 16
    ctx->pc = 0x2f3160u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2f3164: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f3164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2f3168: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2f3168u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2f316c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2f316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2f3170: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2f3170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2f3174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f3178: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2F3178u;
    SET_GPR_U32(ctx, 31, 0x2F3180u);
    ctx->pc = 0x2F317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3178u;
    // 0x2f317c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2F3178u, 0x2F3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3180u;
label_2f3180:
    // 0x2f3180: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2F3180u;
    SET_GPR_U32(ctx, 31, 0x2F3188u);
    ctx->pc = 0x2F3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3180u;
    // 0x2f3184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2F3180u, 0x2F3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3188u;
label_2f3188:
    // 0x2f3188: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F3188u;
    {
        const bool branch_taken_0x2f3188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3188u;
        // 0x2f318c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3188) {
            ctx->pc = 0x2F31E8u;
            goto label_2f31e8;
        }
    }
    ctx->pc = 0x2F3190u;
    // 0x2f3190: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F3190u;
    SET_GPR_U32(ctx, 31, 0x2F3198u);
    ctx->pc = 0x2F3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3190u;
    // 0x2f3194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F3190u, 0x2F3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3198u;
label_2f3198:
    // 0x2f3198: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2F3198u;
    SET_GPR_U32(ctx, 31, 0x2F31A0u);
    ctx->pc = 0x2F319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3198u;
    // 0x2f319c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F3198u, 0x2F31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31A0u;
label_2f31a0:
    // 0x2f31a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f31a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31a4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F31A4u;
    {
        const bool branch_taken_0x2f31a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31A4u;
        // 0x2f31a8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31a4) {
            ctx->pc = 0x2F31D8u;
            goto label_2f31d8;
        }
    }
    ctx->pc = 0x2F31ACu;
    // 0x2f31ac: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2f31acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2f31b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f31b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f31b4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f31b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2f31b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f31b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31bc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2f31bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31c0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2f31c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31c4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2f31c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31c8: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2f31c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f31ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31d0: 0xc0bcc88  jal         func_2F3220
    ctx->pc = 0x2F31D0u;
    SET_GPR_U32(ctx, 31, 0x2F31D8u);
    ctx->pc = 0x2F31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31D0u;
    // 0x2f31d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3220u, 0x2F31D0u, 0x2F31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31D8u;
label_2f31d8:
    // 0x2f31d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31dc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2F31DCu;
    SET_GPR_U32(ctx, 31, 0x2F31E4u);
    ctx->pc = 0x2F31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31DCu;
    // 0x2f31e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F31DCu, 0x2F31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31E4u;
label_2f31e4:
    // 0x2f31e4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2f31e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f31e8:
    // 0x2f31e8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2f31e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f31ec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2f31ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f31f0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2f31f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f31f4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2f31f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f31f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f31f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f31fc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2f31fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3200: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2f3200u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3204: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2f3204u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f320c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2f320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f3210: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3214: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3214u;
        // 0x2f3218: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F321Cu;
    // 0x2f321c: 0x0  nop
    ctx->pc = 0x2f321cu;
    // NOP
    ctx->pc = 0x2f3220u;
}
