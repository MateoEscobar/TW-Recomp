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

// Function: sub_001E3070
// Address: 0x1e3070 - 0x1e3140
void sub_001E3070_0x1e3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3070_0x1e3070");
#endif

    switch (ctx->pc) {
        case 0x1e30a0u: goto label_1e30a0;
        case 0x1e30c0u: goto label_1e30c0;
        case 0x1e30f4u: goto label_1e30f4;
        case 0x1e3100u: goto label_1e3100;
        case 0x1e3110u: goto label_1e3110;
        default: break;
    }

    ctx->pc = 0x1e3070u;

    // 0x1e3070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e3074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3078: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e307c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e3080: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e3080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e3084: 0x26510070  addiu       $s1, $s2, 0x70
    ctx->pc = 0x1e3084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1e3088: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e3088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e308c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3094: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e3094u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e3098: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E3098u;
    SET_GPR_U32(ctx, 31, 0x1E30A0u);
    ctx->pc = 0x1E309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3098u;
    // 0x1e309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E3098u, 0x1E30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30A0u;
label_1e30a0:
    // 0x1e30a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E30A0u;
    {
        const bool branch_taken_0x1e30a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30A0u;
        // 0x1e30a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30a0) {
            ctx->pc = 0x1E30C8u;
            goto label_1e30c8;
        }
    }
    ctx->pc = 0x1E30A8u;
    // 0x1e30a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30ac: 0xae2201b8  sw          $v0, 0x1B8($s1)
    ctx->pc = 0x1e30acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 2));
    // 0x1e30b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e30b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e30b4: 0xae220188  sw          $v0, 0x188($s1)
    ctx->pc = 0x1e30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 2));
    // 0x1e30b8: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1E30B8u;
    SET_GPR_U32(ctx, 31, 0x1E30C0u);
    ctx->pc = 0x1E30BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30B8u;
    // 0x1e30bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1E30B8u, 0x1E30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30C0u;
label_1e30c0:
    // 0x1e30c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E30C0u;
    {
        const bool branch_taken_0x1e30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30C0u;
        // 0x1e30c4: 0x26500070  addiu       $s0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30c0) {
            ctx->pc = 0x1E30F8u;
            goto label_1e30f8;
        }
    }
    ctx->pc = 0x1E30C8u;
label_1e30c8:
    // 0x1e30c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e30c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e30cc: 0x0  nop
    ctx->pc = 0x1e30ccu;
    // NOP
    // 0x1e30d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e30d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e30d4: 0x0  nop
    ctx->pc = 0x1e30d4u;
    // NOP
    // 0x1e30d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E30D8u;
    {
        const bool branch_taken_0x1e30d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30D8u;
        // 0x1e30dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30d8) {
            ctx->pc = 0x1E30F4u;
            goto label_1e30f4;
        }
    }
    ctx->pc = 0x1E30E0u;
    // 0x1e30e0: 0xae2201b8  sw          $v0, 0x1B8($s1)
    ctx->pc = 0x1e30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 2));
    // 0x1e30e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e30e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e30e8: 0xae220188  sw          $v0, 0x188($s1)
    ctx->pc = 0x1e30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 2));
    // 0x1e30ec: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1E30ECu;
    SET_GPR_U32(ctx, 31, 0x1E30F4u);
    ctx->pc = 0x1E30F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30ECu;
    // 0x1e30f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1E30ECu, 0x1E30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30F4u;
label_1e30f4:
    // 0x1e30f4: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x1e30f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1e30f8:
    // 0x1e30f8: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1E30F8u;
    SET_GPR_U32(ctx, 31, 0x1E3100u);
    ctx->pc = 0x1E30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30F8u;
    // 0x1e30fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E30F8u, 0x1E3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3100u;
label_1e3100:
    // 0x1e3100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3108: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1E3108u;
    SET_GPR_U32(ctx, 31, 0x1E3110u);
    ctx->pc = 0x1E310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3108u;
    // 0x1e310c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E3108u, 0x1E3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3110u;
label_1e3110:
    // 0x1e3110: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1e3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3114: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e3114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3118: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e3118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e311c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e311cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3120: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e3120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3128: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e312c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1e312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1e3130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3134: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3134u;
        // 0x1e3138: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E313Cu;
    // 0x1e313c: 0x0  nop
    ctx->pc = 0x1e313cu;
    // NOP
    ctx->pc = 0x1e3140u;
}
