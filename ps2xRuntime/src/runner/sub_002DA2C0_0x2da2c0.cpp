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

// Function: sub_002DA2C0
// Address: 0x2da2c0 - 0x2da3b0
void sub_002DA2C0_0x2da2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA2C0_0x2da2c0");
#endif

    switch (ctx->pc) {
        case 0x2da31cu: goto label_2da31c;
        case 0x2da324u: goto label_2da324;
        case 0x2da334u: goto label_2da334;
        case 0x2da33cu: goto label_2da33c;
        case 0x2da370u: goto label_2da370;
        case 0x2da37cu: goto label_2da37c;
        default: break;
    }

    ctx->pc = 0x2da2c0u;

    // 0x2da2c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2da2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2da2c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2da2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2da2c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2da2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2da2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2da2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2da2d4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2da2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2da2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2da2dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2da2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2da2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2da2e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2da2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2e8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2da2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2da2ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2da2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2f0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2da2f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2da2f4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2da2f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2f8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2da2f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2da2fc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2da2fcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2da300: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2da300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2da304: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2da304u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2da308: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2da308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2da30c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2da30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2da310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2da310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2da314: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DA314u;
    SET_GPR_U32(ctx, 31, 0x2DA31Cu);
    ctx->pc = 0x2DA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA314u;
    // 0x2da318: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DA314u, 0x2DA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA31Cu;
label_2da31c:
    // 0x2da31c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DA31Cu;
    SET_GPR_U32(ctx, 31, 0x2DA324u);
    ctx->pc = 0x2DA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA31Cu;
    // 0x2da320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DA31Cu, 0x2DA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA324u;
label_2da324:
    // 0x2da324: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DA324u;
    {
        const bool branch_taken_0x2da324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA324u;
        // 0x2da328: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da324) {
            ctx->pc = 0x2DA380u;
            goto label_2da380;
        }
    }
    ctx->pc = 0x2DA32Cu;
    // 0x2da32c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DA32Cu;
    SET_GPR_U32(ctx, 31, 0x2DA334u);
    ctx->pc = 0x2DA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA32Cu;
    // 0x2da330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DA32Cu, 0x2DA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA334u;
label_2da334:
    // 0x2da334: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DA334u;
    SET_GPR_U32(ctx, 31, 0x2DA33Cu);
    ctx->pc = 0x2DA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA334u;
    // 0x2da338: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DA334u, 0x2DA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA33Cu;
label_2da33c:
    // 0x2da33c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da340: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA340u;
    {
        const bool branch_taken_0x2da340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA340u;
        // 0x2da344: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da340) {
            ctx->pc = 0x2DA370u;
            goto label_2da370;
        }
    }
    ctx->pc = 0x2DA348u;
    // 0x2da348: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2da348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2da34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2da350: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2da350u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2da354: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2da354u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2da358: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2da358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da35c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2da35cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da360: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2da360u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da368: 0xc0b68ec  jal         func_2DA3B0
    ctx->pc = 0x2DA368u;
    SET_GPR_U32(ctx, 31, 0x2DA370u);
    ctx->pc = 0x2DA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA368u;
    // 0x2da36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA3B0u, 0x2DA368u, 0x2DA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA370u;
label_2da370:
    // 0x2da370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da374: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DA374u;
    SET_GPR_U32(ctx, 31, 0x2DA37Cu);
    ctx->pc = 0x2DA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA374u;
    // 0x2da378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DA374u, 0x2DA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA37Cu;
label_2da37c:
    // 0x2da37c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2da37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2da380:
    // 0x2da380: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2da380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da384: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2da384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da388: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2da388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da38c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2da38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da390: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2da390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da394: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2da394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da39c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2da39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da3a0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2da3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da3a4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2da3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A8u;
        // 0x2da3ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA3B0u;
}
