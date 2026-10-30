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

// Function: sub_004D3698
// Address: 0x4d3698 - 0x4d38b8
void sub_004D3698_0x4d3698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3698_0x4d3698");
#endif

    switch (ctx->pc) {
        case 0x4d3708u: goto label_4d3708;
        case 0x4d3734u: goto label_4d3734;
        case 0x4d3750u: goto label_4d3750;
        case 0x4d3778u: goto label_4d3778;
        case 0x4d3794u: goto label_4d3794;
        case 0x4d37a0u: goto label_4d37a0;
        case 0x4d37b4u: goto label_4d37b4;
        case 0x4d37c0u: goto label_4d37c0;
        case 0x4d37e8u: goto label_4d37e8;
        case 0x4d3848u: goto label_4d3848;
        default: break;
    }

    ctx->pc = 0x4d3698u;

    // 0x4d3698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d3698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d369c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d36a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d36a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d36a4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x4d36a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4d36a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d36a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d36ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4d36acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d36b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d36b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d36b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d36b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d36bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d36bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d36c0: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x4d36c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d36c4: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x4d36c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d36c8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x4d36c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d36cc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x4d36ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d36d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x4d36d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d36d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4d36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4d36d8: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x4D36D8u;
    {
        const bool branch_taken_0x4d36d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D36D8u;
        // 0x4d36dc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d36d8) {
            ctx->pc = 0x4D3884u;
            goto label_4d3884;
        }
    }
    ctx->pc = 0x4D36E0u;
    // 0x4d36e0: 0x49043  sra         $s2, $a0, 1
    ctx->pc = 0x4d36e0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d36e4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x4d36e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x4d36e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4d36e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4d36ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4d36ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d36f0: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x4d36f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d36f4: 0x0  nop
    ctx->pc = 0x4d36f4u;
    // NOP
    // 0x4d36f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d36f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d36fc: 0x460c0583  div.s       $f22, $f0, $f12
    ctx->pc = 0x4d36fcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x4d3700: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D3700u;
    SET_GPR_U32(ctx, 31, 0x4D3708u);
    ctx->pc = 0x4D3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3700u;
    // 0x4d3704: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D3700u, 0x4D3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3708u;
label_4d3708:
    // 0x4d3708: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4d3708u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x4d370c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x4d370cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d3710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4d3710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4d3714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4d3714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d3718: 0xe6770004  swc1        $f23, 0x4($s3)
    ctx->pc = 0x4d3718u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x4d371c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D371Cu;
    {
        const bool branch_taken_0x4d371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D371Cu;
        // 0x4d3720: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d371c) {
            ctx->pc = 0x4D3758u;
            goto label_4d3758;
        }
    }
    ctx->pc = 0x4D3724u;
    // 0x4d3724: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4d3724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4d3728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4d3728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4d372c: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D372Cu;
    SET_GPR_U32(ctx, 31, 0x4D3734u);
    ctx->pc = 0x4D3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D372Cu;
    // 0x4d3730: 0x4616b300  add.s       $f12, $f22, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D372Cu, 0x4D3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3734u;
label_4d3734:
    // 0x4d3734: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x4d3734u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x4d3738: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x4d3738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x4d373c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4d373cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d3740: 0x0  nop
    ctx->pc = 0x4d3740u;
    // NOP
    // 0x4d3744: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x4d3744u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x4d3748: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D3748u;
    SET_GPR_U32(ctx, 31, 0x4D3750u);
    ctx->pc = 0x4D374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3748u;
    // 0x4d374c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D3748u, 0x4D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3750u;
label_4d3750:
    // 0x4d3750: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x4d3750u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x4d3754: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x4d3754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_4d3758:
    // 0x4d3758: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x4d3758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d375c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x4d375cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4d3760: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D3760u;
    {
        const bool branch_taken_0x4d3760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3760u;
        // 0x4d3764: 0x2a540003  slti        $s4, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3760) {
            ctx->pc = 0x4D37D0u;
            goto label_4d37d0;
        }
    }
    ctx->pc = 0x4D3768u;
    // 0x4d3768: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x4d3768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x4d376c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4d376cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x4d3770: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x4d3770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4d3774: 0x0  nop
    ctx->pc = 0x4d3774u;
    // NOP
label_4d3778:
    // 0x4d3778: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x4d3778u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4d377c: 0x0  nop
    ctx->pc = 0x4d377cu;
    // NOP
    // 0x4d3780: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x4d3780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x4d3784: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d3784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4d3788: 0x4614b542  mul.s       $f21, $f22, $f20
    ctx->pc = 0x4d3788u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x4d378c: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D378Cu;
    SET_GPR_U32(ctx, 31, 0x4D3794u);
    ctx->pc = 0x4D3790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D378Cu;
    // 0x4d3790: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D378Cu, 0x4D3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3794u;
label_4d3794:
    // 0x4d3794: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4d3794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4d3798: 0xc133942  jal         func_4CE508
    ctx->pc = 0x4D3798u;
    SET_GPR_U32(ctx, 31, 0x4D37A0u);
    ctx->pc = 0x4D379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3798u;
    // 0x4d379c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE508u, 0x4D3798u, 0x4D37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D37A0u;
label_4d37a0:
    // 0x4d37a0: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x4d37a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x4d37a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x4d37a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4d37a8: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x4d37a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x4d37ac: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D37ACu;
    SET_GPR_U32(ctx, 31, 0x4D37B4u);
    ctx->pc = 0x4D37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D37ACu;
    // 0x4d37b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D37ACu, 0x4D37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D37B4u;
label_4d37b4:
    // 0x4d37b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x4d37b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4d37b8: 0xc133942  jal         func_4CE508
    ctx->pc = 0x4D37B8u;
    SET_GPR_U32(ctx, 31, 0x4D37C0u);
    ctx->pc = 0x4D37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D37B8u;
    // 0x4d37bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE508u, 0x4D37B8u, 0x4D37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D37C0u;
label_4d37c0:
    // 0x4d37c0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x4d37c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4d37c4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x4d37c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4d37c8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4D37C8u;
    {
        const bool branch_taken_0x4d37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D37C8u;
        // 0x4d37cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d37c8) {
            ctx->pc = 0x4D3778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3778;
        }
    }
    ctx->pc = 0x4D37D0u;
label_4d37d0:
    // 0x4d37d0: 0x1680002c  bnez        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x4D37D0u;
    {
        const bool branch_taken_0x4d37d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D37D0u;
        // 0x4d37d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d37d0) {
            ctx->pc = 0x4D3884u;
            goto label_4d3884;
        }
    }
    ctx->pc = 0x4D37D8u;
    // 0x4d37d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4d37d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4d37dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4d37dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4d37e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4d37e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4d37e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4d37e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4d37e8:
    // 0x4d37e8: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x4d37e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x4d37ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d37f0: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x4d37f0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x4d37f4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x4d37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4d37f8: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x4d37f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d37fc: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x4d37fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3800: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D3800u;
    {
        const bool branch_taken_0x4d3800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3800u;
        // 0x4d3804: 0xe4970004  swc1        $f23, 0x4($a0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3800) {
            ctx->pc = 0x4D3828u;
            goto label_4d3828;
        }
    }
    ctx->pc = 0x4D3808u;
    // 0x4d3808: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d3808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d380c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4d380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4d3810: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4d3810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3814: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x4d3814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3818: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x4d3818u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x4d381c: 0x46032043  div.s       $f1, $f4, $f3
    ctx->pc = 0x4d381cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x4d3820: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4d3820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d3824: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4d3824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_4d3828:
    // 0x4d3828: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x4d3828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d382c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x4d382cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4d3830: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D3830u;
    {
        const bool branch_taken_0x4d3830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3830u;
        // 0x4d3834: 0x2a540003  slti        $s4, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3830) {
            ctx->pc = 0x4D387Cu;
            goto label_4d387c;
        }
    }
    ctx->pc = 0x4D3838u;
    // 0x4d3838: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d3838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d383c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4d383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4d3840: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4d3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4d3844: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x4d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_4d3848:
    // 0x4d3848: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x4d3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d384c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d384cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4d3850: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3854: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x4d3854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4d3858: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4d3858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d385c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x4d385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3860: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d3860u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3864: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4d3864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4d3868: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d386c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x4d386cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d3870: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d3870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d3874: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D3874u;
    {
        const bool branch_taken_0x4d3874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3874u;
        // 0x4d3878: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3874) {
            ctx->pc = 0x4D3848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3848;
        }
    }
    ctx->pc = 0x4D387Cu;
label_4d387c:
    // 0x4d387c: 0x1280ffda  beqz        $s4, . + 4 + (-0x26 << 2)
    ctx->pc = 0x4D387Cu;
    {
        const bool branch_taken_0x4d387c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D387Cu;
        // 0x4d3880: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d387c) {
            ctx->pc = 0x4D37E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d37e8;
        }
    }
    ctx->pc = 0x4D3884u;
label_4d3884:
    // 0x4d3884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d3888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d388c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d388cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3890: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3894: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d3898: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d3898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d389c: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x4d389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d38a0: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x4d38a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d38a4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x4d38a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d38a8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x4d38a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d38ac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x4d38acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d38b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D38B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38B0u;
        // 0x4d38b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D38B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D38B8u;
}
