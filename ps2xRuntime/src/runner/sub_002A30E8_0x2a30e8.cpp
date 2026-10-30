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

// Function: sub_002A30E8
// Address: 0x2a30e8 - 0x2a31f0
void sub_002A30E8_0x2a30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A30E8_0x2a30e8");
#endif

    switch (ctx->pc) {
        case 0x2a313cu: goto label_2a313c;
        case 0x2a3144u: goto label_2a3144;
        case 0x2a3158u: goto label_2a3158;
        case 0x2a3164u: goto label_2a3164;
        case 0x2a3174u: goto label_2a3174;
        case 0x2a31b4u: goto label_2a31b4;
        case 0x2a31c0u: goto label_2a31c0;
        default: break;
    }

    ctx->pc = 0x2a30e8u;

    // 0x2a30e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a30ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a30ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a30f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2a30f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2a30f4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a30f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a30f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a30fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a30fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3100: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a3100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a3104: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a3104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3108: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2a3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2a310c: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x2a310cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a3110: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a3110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a3114: 0x6ac03  sra         $s5, $a2, 16
    ctx->pc = 0x2a3114u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a3118: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a3118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a311c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2a311cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2a3120: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a3124: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a3124u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3128: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a3128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2a312c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2a312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2a3130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3134: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2A3134u;
    SET_GPR_U32(ctx, 31, 0x2A313Cu);
    ctx->pc = 0x2A3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3134u;
    // 0x2a3138: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A3134u, 0x2A313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A313Cu;
label_2a313c:
    // 0x2a313c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2A313Cu;
    SET_GPR_U32(ctx, 31, 0x2A3144u);
    ctx->pc = 0x2A3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A313Cu;
    // 0x2a3140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A313Cu, 0x2A3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3144u;
label_2a3144:
    // 0x2a3144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3148: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3148u;
    {
        const bool branch_taken_0x2a3148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3148) {
            ctx->pc = 0x2A314Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3148u;
            // 0x2a314c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A31C4u;
            goto label_2a31c4;
        }
    }
    ctx->pc = 0x2A3150u;
    // 0x2a3150: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A3150u;
    SET_GPR_U32(ctx, 31, 0x2A3158u);
    ctx->pc = 0x2A3154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3150u;
    // 0x2a3154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A3150u, 0x2A3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3158u;
label_2a3158:
    // 0x2a3158: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a315c: 0xc08bfb4  jal         func_22FED0
    ctx->pc = 0x2A315Cu;
    SET_GPR_U32(ctx, 31, 0x2A3164u);
    ctx->pc = 0x2A3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A315Cu;
    // 0x2a3160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A315Cu, 0x2A3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3164u;
label_2a3164:
    // 0x2a3164: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x2a3164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x2a3168: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x2a3168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x2a316c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A316Cu;
    SET_GPR_U32(ctx, 31, 0x2A3174u);
    ctx->pc = 0x2A3170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A316Cu;
    // 0x2a3170: 0xa2320265  sb          $s2, 0x265($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 613), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A316Cu, 0x2A3174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3174u;
label_2a3174:
    // 0x2a3174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3178: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A3178u;
    {
        const bool branch_taken_0x2a3178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3178u;
        // 0x2a317c: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3178) {
            ctx->pc = 0x2A31B4u;
            goto label_2a31b4;
        }
    }
    ctx->pc = 0x2A3180u;
    // 0x2a3180: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2a3180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2a3184: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a3184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2a3188: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a3188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a318c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a318cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a3190: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2a3190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2a3194: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a3194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3198: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a3198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a319c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a319cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a31a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a31a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31a8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a31ac: 0xc0a8cc8  jal         func_2A3320
    ctx->pc = 0x2A31ACu;
    SET_GPR_U32(ctx, 31, 0x2A31B4u);
    ctx->pc = 0x2A31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31ACu;
    // 0x2a31b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A31ACu, 0x2A31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31B4u;
label_2a31b4:
    // 0x2a31b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a31b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31b8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A31B8u;
    SET_GPR_U32(ctx, 31, 0x2A31C0u);
    ctx->pc = 0x2A31BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31B8u;
    // 0x2a31bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A31B8u, 0x2A31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31C0u;
label_2a31c0:
    // 0x2a31c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a31c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a31c4:
    // 0x2a31c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2a31c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a31c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2a31c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a31cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a31ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a31d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a31d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a31d4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2a31d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a31d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a31d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a31dc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a31e0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a31e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31E4u;
        // 0x2a31e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A31E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A31ECu;
    // 0x2a31ec: 0x0  nop
    ctx->pc = 0x2a31ecu;
    // NOP
    ctx->pc = 0x2a31f0u;
}
