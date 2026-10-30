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

// Function: sub_004B96F8
// Address: 0x4b96f8 - 0x4b9870
void sub_004B96F8_0x4b96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B96F8_0x4b96f8");
#endif

    switch (ctx->pc) {
        case 0x4b971cu: goto label_4b971c;
        case 0x4b9734u: goto label_4b9734;
        case 0x4b9774u: goto label_4b9774;
        case 0x4b97e8u: goto label_4b97e8;
        case 0x4b9808u: goto label_4b9808;
        case 0x4b9818u: goto label_4b9818;
        case 0x4b9834u: goto label_4b9834;
        case 0x4b9844u: goto label_4b9844;
        default: break;
    }

    ctx->pc = 0x4b96f8u;

    // 0x4b96f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b96f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b96fc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x4b96fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b9700: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4b9700u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4b9704: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b9708: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b970c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x4b970cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b9710: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b9710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b9714: 0xc12efa8  jal         func_4BBEA0
    ctx->pc = 0x4B9714u;
    SET_GPR_U32(ctx, 31, 0x4B971Cu);
    ctx->pc = 0x4B9718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9714u;
    // 0x4b9718: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BBEA0u, 0x4B9714u, 0x4B971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B971Cu;
label_4b971c:
    // 0x4b971c: 0x8e301974  lw          $s0, 0x1974($s1)
    ctx->pc = 0x4b971cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b9720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b9724: 0x1202004a  beq         $s0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4B9724u;
    {
        const bool branch_taken_0x4b9724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9724u;
        // 0x4b9728: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9724) {
            ctx->pc = 0x4B9850u;
            goto label_4b9850;
        }
    }
    ctx->pc = 0x4B972Cu;
    // 0x4b972c: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B972Cu;
    SET_GPR_U32(ctx, 31, 0x4B9734u);
    ctx->pc = 0x4B9730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B972Cu;
    // 0x4b9730: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B972Cu, 0x4B9734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9734u;
label_4b9734:
    // 0x4b9734: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4B9734u;
    {
        const bool branch_taken_0x4b9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9734u;
        // 0x4b9738: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9734) {
            ctx->pc = 0x4B9850u;
            goto label_4b9850;
        }
    }
    ctx->pc = 0x4B973Cu;
    // 0x4b973c: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x4b973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x4b9740: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4b9740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4b9744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b9744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b9748: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4b9748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b974c: 0x0  nop
    ctx->pc = 0x4b974cu;
    // NOP
    // 0x4b9750: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x4B9750u;
    {
        const bool branch_taken_0x4b9750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9750u;
        // 0x4b9754: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9750) {
            ctx->pc = 0x4B97B4u;
            goto label_4b97b4;
        }
    }
    ctx->pc = 0x4B9758u;
    // 0x4b9758: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b975c: 0x24420fa8  addiu       $v0, $v0, 0xFA8
    ctx->pc = 0x4b975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x4b9760: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9764: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b976c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B976Cu;
    SET_GPR_U32(ctx, 31, 0x4B9774u);
    ctx->pc = 0x4B9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B976Cu;
    // 0x4b9770: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B976Cu, 0x4B9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9774u;
label_4b9774:
    // 0x4b9774: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4b9774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4b9778: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9778u;
    {
        const bool branch_taken_0x4b9778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9778u;
        // 0x4b977c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9778) {
            ctx->pc = 0x4B9790u;
            goto label_4b9790;
        }
    }
    ctx->pc = 0x4B9780u;
    // 0x4b9780: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b9780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b9784: 0xdc220fb0  ld          $v0, 0xFB0($at)
    ctx->pc = 0x4b9784u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590FB0u));
    // 0x4b9788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9788u;
    {
        const bool branch_taken_0x4b9788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9788u;
        // 0x4b978c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9788) {
            ctx->pc = 0x4B979Cu;
            goto label_4b979c;
        }
    }
    ctx->pc = 0x4B9790u;
label_4b9790:
    // 0x4b9790: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9794: 0xdc430ed8  ld          $v1, 0xED8($v0)
    ctx->pc = 0x4b9794u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590ED8u));
    // 0x4b9798: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b979c:
    // 0x4b979c: 0x8e231974  lw          $v1, 0x1974($s1)
    ctx->pc = 0x4b979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b97a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b97a4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B97A4u;
    {
        const bool branch_taken_0x4b97a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b97a4) {
            ctx->pc = 0x4B9810u;
            goto label_4b9810;
        }
    }
    ctx->pc = 0x4B97ACu;
    // 0x4b97ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B97ACu;
    {
        const bool branch_taken_0x4b97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b97ac) {
            ctx->pc = 0x4B9800u;
            goto label_4b9800;
        }
    }
    ctx->pc = 0x4B97B4u;
label_4b97b4:
    // 0x4b97b4: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x4b97b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x4b97b8: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x4b97b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x4b97bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b97bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b97c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4b97c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b97c4: 0x0  nop
    ctx->pc = 0x4b97c4u;
    // NOP
    // 0x4b97c8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x4B97C8u;
    {
        const bool branch_taken_0x4b97c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B97C8u;
        // 0x4b97cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b97c8) {
            ctx->pc = 0x4B984Cu;
            goto label_4b984c;
        }
    }
    ctx->pc = 0x4B97D0u;
    // 0x4b97d0: 0x24420fa8  addiu       $v0, $v0, 0xFA8
    ctx->pc = 0x4b97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x4b97d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b97d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b97d8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b97dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b97dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b97e0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B97E0u;
    SET_GPR_U32(ctx, 31, 0x4B97E8u);
    ctx->pc = 0x4B97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B97E0u;
    // 0x4b97e4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B97E0u, 0x4B97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B97E8u;
label_4b97e8:
    // 0x4b97e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b97e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b97ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4b97ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4b97f0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b97f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4b97f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b97f8: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B97F8u;
    {
        const bool branch_taken_0x4b97f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B97F8u;
        // 0x4b97fc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b97f8) {
            ctx->pc = 0x4B9810u;
            goto label_4b9810;
        }
    }
    ctx->pc = 0x4B9800u;
label_4b9800:
    // 0x4b9800: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9800u;
    SET_GPR_U32(ctx, 31, 0x4B9808u);
    ctx->pc = 0x4B9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9800u;
    // 0x4b9804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9800u, 0x4B9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9808u;
label_4b9808:
    // 0x4b9808: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9808u;
    {
        const bool branch_taken_0x4b9808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9808u;
        // 0x4b980c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9808) {
            ctx->pc = 0x4B9824u;
            goto label_4b9824;
        }
    }
    ctx->pc = 0x4B9810u;
label_4b9810:
    // 0x4b9810: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9810u;
    SET_GPR_U32(ctx, 31, 0x4B9818u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9810u, 0x4B9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9818u;
label_4b9818:
    // 0x4b9818: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b9818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b981c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b981cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b9820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9824:
    // 0x4b9824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9824u;
    {
        const bool branch_taken_0x4b9824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9824) {
            ctx->pc = 0x4B983Cu;
            goto label_4b983c;
        }
    }
    ctx->pc = 0x4B982Cu;
    // 0x4b982c: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B982Cu;
    SET_GPR_U32(ctx, 31, 0x4B9834u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B982Cu, 0x4B9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9834u;
label_4b9834:
    // 0x4b9834: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9838: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b983c:
    // 0x4b983c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B983Cu;
    SET_GPR_U32(ctx, 31, 0x4B9844u);
    ctx->pc = 0x4B9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B983Cu;
    // 0x4b9840: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B983Cu, 0x4B9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9844u;
label_4b9844:
    // 0x4b9844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B9844u;
    {
        const bool branch_taken_0x4b9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9844u;
        // 0x4b9848: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9844) {
            ctx->pc = 0x4B9854u;
            goto label_4b9854;
        }
    }
    ctx->pc = 0x4B984Cu;
label_4b984c:
    // 0x4b984c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x4b984cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_4b9850:
    // 0x4b9850: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b9850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b9854:
    // 0x4b9854: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b9854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9858: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b9858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b985c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x4b985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b9860: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x4b9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b9864: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9864u;
        // 0x4b9868: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B986Cu;
    // 0x4b986c: 0x0  nop
    ctx->pc = 0x4b986cu;
    // NOP
    ctx->pc = 0x4b9870u;
}
