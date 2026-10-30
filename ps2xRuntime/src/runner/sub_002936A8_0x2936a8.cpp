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

// Function: sub_002936A8
// Address: 0x2936a8 - 0x293768
void sub_002936A8_0x2936a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002936A8_0x2936a8");
#endif

    switch (ctx->pc) {
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        default: break;
    }

    ctx->pc = 0x2936a8u;

label_2936a8:
    // 0x2936a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2936a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2936ac:
    // 0x2936ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2936acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2936b0:
    // 0x2936b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2936b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2936b4:
    // 0x2936b4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2936b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2936b8:
    // 0x2936b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2936b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2936bc:
    // 0x2936bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2936bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2936c0:
    // 0x2936c0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2936c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2936c4:
    // 0x2936c4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2936c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2936c8:
    // 0x2936c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2936c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2936cc:
    // 0x2936cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2936ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2936d0:
    // 0x2936d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2936d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2936d4:
    // 0x2936d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2936d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2936d8:
    // 0x2936d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2936dc:
    if (ctx->pc == 0x2936DCu) {
        ctx->pc = 0x2936DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936D8u;
        // 0x2936dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2936E0u;
        goto label_2936e0;
    }
    ctx->pc = 0x2936D8u;
    {
        const bool branch_taken_0x2936d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2936DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936D8u;
        // 0x2936dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936d8) {
            ctx->pc = 0x2936F8u;
            goto label_2936f8;
        }
    }
    ctx->pc = 0x2936E0u;
label_2936e0:
    // 0x2936e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2936e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2936e4:
    // 0x2936e4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2936e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2936e8:
    // 0x2936e8: 0x8c43aa84  lw          $v1, -0x557C($v0)
    ctx->pc = 0x2936e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2936ec:
    // 0x2936ec: 0x34844280  ori         $a0, $a0, 0x4280
    ctx->pc = 0x2936ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17024);
label_2936f0:
    // 0x2936f0: 0xc042f90  jal         func_10BE40
label_2936f4:
    if (ctx->pc == 0x2936F4u) {
        ctx->pc = 0x2936F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936F0u;
        // 0x2936f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2936F8u;
        goto label_2936f8;
    }
    ctx->pc = 0x2936F0u;
    SET_GPR_U32(ctx, 31, 0x2936F8u);
    ctx->pc = 0x2936F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2936F0u;
    // 0x2936f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BE40u, 0x2936F0u, 0x2936F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936F8u;
label_2936f8:
    // 0x2936f8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2936f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_2936fc:
    // 0x2936fc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2936fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_293700:
    // 0x293700: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x293700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_293704:
    // 0x293704: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x293704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_293708:
    // 0x293708: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x293708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_29370c:
    // 0x29370c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293710:
    // 0x293710: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x293710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_293714:
    // 0x293714: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x293714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_293718:
    // 0x293718: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x293718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29371c:
    // 0x29371c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x29371cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_293720:
    // 0x293720: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x293720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_293724:
    // 0x293724: 0x60f809  jalr        $v1
label_293728:
    if (ctx->pc == 0x293728u) {
        ctx->pc = 0x293728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293724u;
        // 0x293728: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29372Cu;
        goto label_29372c;
    }
    ctx->pc = 0x293724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29372Cu);
        ctx->pc = 0x293728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293724u;
        // 0x293728: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293724u, 0x29372Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29372Cu;
label_29372c:
    // 0x29372c: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x29372cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_293730:
    // 0x293730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293734:
    // 0x293734: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293738:
    // 0x293738: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x293738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_29373c:
    // 0x29373c: 0x250835d8  addiu       $t0, $t0, 0x35D8
    ctx->pc = 0x29373cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13784));
label_293740:
    // 0x293740: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x293740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293744:
    // 0x293744: 0xc0a4dda  jal         func_293768
label_293748:
    if (ctx->pc == 0x293748u) {
        ctx->pc = 0x293748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293744u;
        // 0x293748: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29374Cu;
        goto label_29374c;
    }
    ctx->pc = 0x293744u;
    SET_GPR_U32(ctx, 31, 0x29374Cu);
    ctx->pc = 0x293748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293744u;
    // 0x293748: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293768u, 0x293744u, 0x29374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29374Cu;
label_29374c:
    // 0x29374c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x29374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_293750:
    // 0x293750: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x293750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_293754:
    // 0x293754: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x293754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_293758:
    // 0x293758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x293758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29375c:
    // 0x29375c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x29375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_293760:
    // 0x293760: 0x3e00008  jr          $ra
label_293764:
    if (ctx->pc == 0x293764u) {
        ctx->pc = 0x293764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293760u;
        // 0x293764: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293768u;
        goto label_fallthrough_0x293760;
    }
    ctx->pc = 0x293760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293760u;
        // 0x293764: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x293760:
    ctx->pc = 0x293768u;
}
