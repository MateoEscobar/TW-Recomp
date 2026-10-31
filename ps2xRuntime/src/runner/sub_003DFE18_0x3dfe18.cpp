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

// Function: sub_003DFE18
// Address: 0x3dfe18 - 0x3dfee0
void sub_003DFE18_0x3dfe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFE18_0x3dfe18");
#endif

    switch (ctx->pc) {
        case 0x3dfe18u: goto label_3dfe18;
        case 0x3dfe1cu: goto label_3dfe1c;
        case 0x3dfe20u: goto label_3dfe20;
        case 0x3dfe24u: goto label_3dfe24;
        case 0x3dfe28u: goto label_3dfe28;
        case 0x3dfe2cu: goto label_3dfe2c;
        case 0x3dfe30u: goto label_3dfe30;
        case 0x3dfe34u: goto label_3dfe34;
        case 0x3dfe38u: goto label_3dfe38;
        case 0x3dfe3cu: goto label_3dfe3c;
        case 0x3dfe40u: goto label_3dfe40;
        case 0x3dfe44u: goto label_3dfe44;
        case 0x3dfe48u: goto label_3dfe48;
        case 0x3dfe4cu: goto label_3dfe4c;
        case 0x3dfe50u: goto label_3dfe50;
        case 0x3dfe54u: goto label_3dfe54;
        case 0x3dfe58u: goto label_3dfe58;
        case 0x3dfe5cu: goto label_3dfe5c;
        case 0x3dfe60u: goto label_3dfe60;
        case 0x3dfe64u: goto label_3dfe64;
        case 0x3dfe68u: goto label_3dfe68;
        case 0x3dfe6cu: goto label_3dfe6c;
        case 0x3dfe70u: goto label_3dfe70;
        case 0x3dfe74u: goto label_3dfe74;
        case 0x3dfe78u: goto label_3dfe78;
        case 0x3dfe7cu: goto label_3dfe7c;
        case 0x3dfe80u: goto label_3dfe80;
        case 0x3dfe84u: goto label_3dfe84;
        case 0x3dfe88u: goto label_3dfe88;
        case 0x3dfe8cu: goto label_3dfe8c;
        case 0x3dfe90u: goto label_3dfe90;
        case 0x3dfe94u: goto label_3dfe94;
        case 0x3dfe98u: goto label_3dfe98;
        case 0x3dfe9cu: goto label_3dfe9c;
        case 0x3dfea0u: goto label_3dfea0;
        case 0x3dfea4u: goto label_3dfea4;
        case 0x3dfea8u: goto label_3dfea8;
        case 0x3dfeacu: goto label_3dfeac;
        case 0x3dfeb0u: goto label_3dfeb0;
        case 0x3dfeb4u: goto label_3dfeb4;
        case 0x3dfeb8u: goto label_3dfeb8;
        case 0x3dfebcu: goto label_3dfebc;
        case 0x3dfec0u: goto label_3dfec0;
        case 0x3dfec4u: goto label_3dfec4;
        case 0x3dfec8u: goto label_3dfec8;
        case 0x3dfeccu: goto label_3dfecc;
        case 0x3dfed0u: goto label_3dfed0;
        case 0x3dfed4u: goto label_3dfed4;
        case 0x3dfed8u: goto label_3dfed8;
        case 0x3dfedcu: goto label_3dfedc;
        default: break;
    }

    ctx->pc = 0x3dfe18u;

label_3dfe18:
    // 0x3dfe18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dfe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3dfe1c:
    // 0x3dfe1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3dfe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3dfe20:
    // 0x3dfe20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3dfe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3dfe24:
    // 0x3dfe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dfe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe28:
    // 0x3dfe28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dfe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dfe2c:
    // 0x3dfe2c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3dfe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3dfe30:
    // 0x3dfe30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dfe30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe34:
    // 0x3dfe34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dfe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dfe38:
    // 0x3dfe38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3dfe38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe3c:
    // 0x3dfe3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dfe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dfe40:
    // 0x3dfe40: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dfe40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dfe44:
    // 0x3dfe44: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dfe48:
    // 0x3dfe48: 0x40f809  jalr        $v0
label_3dfe4c:
    if (ctx->pc == 0x3DFE4Cu) {
        ctx->pc = 0x3DFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE48u;
        // 0x3dfe4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE50u;
        goto label_3dfe50;
    }
    ctx->pc = 0x3DFE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DFE50u);
        ctx->pc = 0x3DFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE48u;
        // 0x3dfe4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFE48u, 0x3DFE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DFE50u;
label_3dfe50:
    // 0x3dfe50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dfe50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe54:
    // 0x3dfe54: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3dfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dfe58:
    // 0x3dfe58: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3dfe5c:
    if (ctx->pc == 0x3DFE5Cu) {
        ctx->pc = 0x3DFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE58u;
        // 0x3dfe5c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE60u;
        goto label_3dfe60;
    }
    ctx->pc = 0x3DFE58u;
    {
        const bool branch_taken_0x3dfe58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE58u;
        // 0x3dfe5c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe58) {
            ctx->pc = 0x3DFE70u;
            goto label_3dfe70;
        }
    }
    ctx->pc = 0x3DFE60u;
label_3dfe60:
    // 0x3dfe60: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_3dfe64:
    if (ctx->pc == 0x3DFE64u) {
        ctx->pc = 0x3DFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE60u;
        // 0x3dfe64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE68u;
        goto label_3dfe68;
    }
    ctx->pc = 0x3DFE60u;
    {
        const bool branch_taken_0x3dfe60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE60u;
        // 0x3dfe64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe60) {
            ctx->pc = 0x3DFEACu;
            goto label_3dfeac;
        }
    }
    ctx->pc = 0x3DFE68u;
label_3dfe68:
    // 0x3dfe68: 0x10000018  b           . + 4 + (0x18 << 2)
label_3dfe6c:
    if (ctx->pc == 0x3DFE6Cu) {
        ctx->pc = 0x3DFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE68u;
        // 0x3dfe6c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE70u;
        goto label_3dfe70;
    }
    ctx->pc = 0x3DFE68u;
    {
        const bool branch_taken_0x3dfe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE68u;
        // 0x3dfe6c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe68) {
            ctx->pc = 0x3DFECCu;
            goto label_3dfecc;
        }
    }
    ctx->pc = 0x3DFE70u;
label_3dfe70:
    // 0x3dfe70: 0xc0ea146  jal         func_3A8518
label_3dfe74:
    if (ctx->pc == 0x3DFE74u) {
        ctx->pc = 0x3DFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE70u;
        // 0x3dfe74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE78u;
        goto label_3dfe78;
    }
    ctx->pc = 0x3DFE70u;
    SET_GPR_U32(ctx, 31, 0x3DFE78u);
    ctx->pc = 0x3DFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFE70u;
    // 0x3dfe74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DFE70u, 0x3DFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFE78u;
label_3dfe78:
    // 0x3dfe78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3dfe7c:
    if (ctx->pc == 0x3DFE7Cu) {
        ctx->pc = 0x3DFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE78u;
        // 0x3dfe7c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE80u;
        goto label_3dfe80;
    }
    ctx->pc = 0x3DFE78u;
    {
        const bool branch_taken_0x3dfe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe78) {
            ctx->pc = 0x3DFE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFE78u;
            // 0x3dfe7c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFE98u;
            goto label_3dfe98;
        }
    }
    ctx->pc = 0x3DFE80u;
label_3dfe80:
    // 0x3dfe80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dfe84:
    // 0x3dfe84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dfe84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dfe88:
    // 0x3dfe88: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3dfe8c:
    // 0x3dfe8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3dfe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3dfe90:
    // 0x3dfe90: 0x1000000c  b           . + 4 + (0xC << 2)
label_3dfe94:
    if (ctx->pc == 0x3DFE94u) {
        ctx->pc = 0x3DFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE90u;
        // 0x3dfe94: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE98u;
        goto label_3dfe98;
    }
    ctx->pc = 0x3DFE90u;
    {
        const bool branch_taken_0x3dfe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE90u;
        // 0x3dfe94: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe90) {
            ctx->pc = 0x3DFEC4u;
            goto label_3dfec4;
        }
    }
    ctx->pc = 0x3DFE98u;
label_3dfe98:
    // 0x3dfe98: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3dfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3dfe9c:
    // 0x3dfe9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3dfe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3dfea0:
    // 0x3dfea0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3dfea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3dfea4:
    // 0x3dfea4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3dfea8:
    if (ctx->pc == 0x3DFEA8u) {
        ctx->pc = 0x3DFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEA4u;
        // 0x3dfea8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEACu;
        goto label_3dfeac;
    }
    ctx->pc = 0x3DFEA4u;
    {
        const bool branch_taken_0x3dfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEA4u;
        // 0x3dfea8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfea4) {
            ctx->pc = 0x3DFEC4u;
            goto label_3dfec4;
        }
    }
    ctx->pc = 0x3DFEACu;
label_3dfeac:
    // 0x3dfeac: 0xc0ea146  jal         func_3A8518
label_3dfeb0:
    if (ctx->pc == 0x3DFEB0u) {
        ctx->pc = 0x3DFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEACu;
        // 0x3dfeb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEB4u;
        goto label_3dfeb4;
    }
    ctx->pc = 0x3DFEACu;
    SET_GPR_U32(ctx, 31, 0x3DFEB4u);
    ctx->pc = 0x3DFEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFEACu;
    // 0x3dfeb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DFEACu, 0x3DFEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFEB4u;
label_3dfeb4:
    // 0x3dfeb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dfeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfeb8:
    // 0x3dfeb8: 0x0  nop
    ctx->pc = 0x3dfeb8u;
    // NOP
label_3dfebc:
    // 0x3dfebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3dfebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3dfec0:
    // 0x3dfec0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3dfec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3dfec4:
    // 0x3dfec4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3dfec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfec8:
    // 0x3dfec8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3dfec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dfecc:
    // 0x3dfecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dfeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dfed0:
    // 0x3dfed0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3dfed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfed4:
    // 0x3dfed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dfed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfed8:
    // 0x3dfed8: 0x3e00008  jr          $ra
label_3dfedc:
    if (ctx->pc == 0x3DFEDCu) {
        ctx->pc = 0x3DFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFED8u;
        // 0x3dfedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEE0u;
        goto label_fallthrough_0x3dfed8;
    }
    ctx->pc = 0x3DFED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFED8u;
        // 0x3dfedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dfed8:
    ctx->pc = 0x3DFEE0u;
}
