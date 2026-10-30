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

// Function: sub_00113840
// Address: 0x113840 - 0x113920
void sub_00113840_0x113840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113840_0x113840");
#endif

    switch (ctx->pc) {
        case 0x1138acu: goto label_1138ac;
        case 0x1138ecu: goto label_1138ec;
        default: break;
    }

    ctx->pc = 0x113840u;

    // 0x113840: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x113844: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x113844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x113848: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x113848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11384c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11384cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113850: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x113850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x113854: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x113854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113858: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x113858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11385c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x11385cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113860: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x113860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x113864: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x113864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x113868: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x113868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11386c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x11386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x113870: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x113870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113874: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x113874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x113878: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x113878u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11387c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x11387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x113880: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x113880u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113884: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x113884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x113888: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x113888u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11388c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113890: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x113890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x113894: 0x93b100d0  lbu         $s1, 0xD0($sp)
    ctx->pc = 0x113894u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x113898: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113898u;
    {
        const bool branch_taken_0x113898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113898u;
        // 0x11389c: 0x83b200d8  lb          $s2, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113898) {
            ctx->pc = 0x1138B4u;
            goto label_1138b4;
        }
    }
    ctx->pc = 0x1138A0u;
    // 0x1138a0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1138a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1138a4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1138A4u;
    SET_GPR_U32(ctx, 31, 0x1138ACu);
    ctx->pc = 0x1138A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138A4u;
    // 0x1138a8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1138A4u, 0x1138ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138ACu;
label_1138ac:
    // 0x1138ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1138ACu;
    {
        const bool branch_taken_0x1138ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138ACu;
        // 0x1138b0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138ac) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x1138B4u;
label_1138b4:
    // 0x1138b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1138b8:
    // 0x1138b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1138b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1138bc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1138bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1138c0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1138c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1138c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138c8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1138c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1138cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1138ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138d0: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1138d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1138d4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1138d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138d8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1138d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1138dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1138e0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1138e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138e4: 0xc044396  jal         func_110E58
    ctx->pc = 0x1138E4u;
    SET_GPR_U32(ctx, 31, 0x1138ECu);
    ctx->pc = 0x1138E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E4u;
    // 0x1138e8: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E58u, 0x1138E4u, 0x1138ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138ECu;
label_1138ec:
    // 0x1138ec: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1138ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1138f0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1138f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1138f4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1138f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1138f8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1138f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1138fc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1138fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113900: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x113900u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113904: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x113904u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113908: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x113908u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11390c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x11390cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113914: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x113914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113918: 0x3e00008  jr          $ra
    ctx->pc = 0x113918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113918u;
        // 0x11391c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113920u;
}
