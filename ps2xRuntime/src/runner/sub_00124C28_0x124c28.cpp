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

// Function: sub_00124C28
// Address: 0x124c28 - 0x124d00
void sub_00124C28_0x124c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124C28_0x124c28");
#endif

    switch (ctx->pc) {
        case 0x124c28u: goto label_124c28;
        case 0x124c2cu: goto label_124c2c;
        case 0x124c30u: goto label_124c30;
        case 0x124c34u: goto label_124c34;
        case 0x124c38u: goto label_124c38;
        case 0x124c3cu: goto label_124c3c;
        case 0x124c40u: goto label_124c40;
        case 0x124c44u: goto label_124c44;
        case 0x124c48u: goto label_124c48;
        case 0x124c4cu: goto label_124c4c;
        case 0x124c50u: goto label_124c50;
        case 0x124c54u: goto label_124c54;
        case 0x124c58u: goto label_124c58;
        case 0x124c5cu: goto label_124c5c;
        case 0x124c60u: goto label_124c60;
        case 0x124c64u: goto label_124c64;
        case 0x124c68u: goto label_124c68;
        case 0x124c6cu: goto label_124c6c;
        case 0x124c70u: goto label_124c70;
        case 0x124c74u: goto label_124c74;
        case 0x124c78u: goto label_124c78;
        case 0x124c7cu: goto label_124c7c;
        case 0x124c80u: goto label_124c80;
        case 0x124c84u: goto label_124c84;
        case 0x124c88u: goto label_124c88;
        case 0x124c8cu: goto label_124c8c;
        case 0x124c90u: goto label_124c90;
        case 0x124c94u: goto label_124c94;
        case 0x124c98u: goto label_124c98;
        case 0x124c9cu: goto label_124c9c;
        case 0x124ca0u: goto label_124ca0;
        case 0x124ca4u: goto label_124ca4;
        case 0x124ca8u: goto label_124ca8;
        case 0x124cacu: goto label_124cac;
        case 0x124cb0u: goto label_124cb0;
        case 0x124cb4u: goto label_124cb4;
        case 0x124cb8u: goto label_124cb8;
        case 0x124cbcu: goto label_124cbc;
        case 0x124cc0u: goto label_124cc0;
        case 0x124cc4u: goto label_124cc4;
        case 0x124cc8u: goto label_124cc8;
        case 0x124cccu: goto label_124ccc;
        case 0x124cd0u: goto label_124cd0;
        case 0x124cd4u: goto label_124cd4;
        case 0x124cd8u: goto label_124cd8;
        case 0x124cdcu: goto label_124cdc;
        case 0x124ce0u: goto label_124ce0;
        case 0x124ce4u: goto label_124ce4;
        case 0x124ce8u: goto label_124ce8;
        case 0x124cecu: goto label_124cec;
        case 0x124cf0u: goto label_124cf0;
        case 0x124cf4u: goto label_124cf4;
        case 0x124cf8u: goto label_124cf8;
        case 0x124cfcu: goto label_124cfc;
        default: break;
    }

    ctx->pc = 0x124c28u;

label_124c28:
    // 0x124c28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_124c2c:
    // 0x124c2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x124c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_124c30:
    // 0x124c30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x124c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_124c34:
    // 0x124c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_124c38:
    // 0x124c38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124c3c:
    // 0x124c3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x124c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_124c40:
    // 0x124c40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x124c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124c44:
    // 0x124c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124c48:
    // 0x124c48: 0xc04967a  jal         func_1259E8
label_124c4c:
    if (ctx->pc == 0x124C4Cu) {
        ctx->pc = 0x124C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C48u;
        // 0x124c4c: 0xc64c0300  lwc1        $f12, 0x300($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C50u;
        goto label_124c50;
    }
    ctx->pc = 0x124C48u;
    SET_GPR_U32(ctx, 31, 0x124C50u);
    ctx->pc = 0x124C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C48u;
    // 0x124c4c: 0xc64c0300  lwc1        $f12, 0x300($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1259E8u, 0x124C48u, 0x124C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C50u;
label_124c50:
    // 0x124c50: 0xc64c0304  lwc1        $f12, 0x304($s2)
    ctx->pc = 0x124c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_124c54:
    // 0x124c54: 0xc049690  jal         func_125A40
label_124c58:
    if (ctx->pc == 0x124C58u) {
        ctx->pc = 0x124C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C54u;
        // 0x124c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C5Cu;
        goto label_124c5c;
    }
    ctx->pc = 0x124C54u;
    SET_GPR_U32(ctx, 31, 0x124C5Cu);
    ctx->pc = 0x124C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C54u;
    // 0x124c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A40u, 0x124C54u, 0x124C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C5Cu;
label_124c5c:
    // 0x124c5c: 0xc64c0308  lwc1        $f12, 0x308($s2)
    ctx->pc = 0x124c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_124c60:
    // 0x124c60: 0xc0496b2  jal         func_125AC8
label_124c64:
    if (ctx->pc == 0x124C64u) {
        ctx->pc = 0x124C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C60u;
        // 0x124c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C68u;
        goto label_124c68;
    }
    ctx->pc = 0x124C60u;
    SET_GPR_U32(ctx, 31, 0x124C68u);
    ctx->pc = 0x124C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C60u;
    // 0x124c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125AC8u, 0x124C60u, 0x124C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C68u;
label_124c68:
    // 0x124c68: 0xc640030c  lwc1        $f0, 0x30C($s2)
    ctx->pc = 0x124c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124c6c:
    // 0x124c6c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x124c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_124c70:
    // 0x124c70: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x124c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_124c74:
    // 0x124c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_124c78:
    // 0x124c78: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x124c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_124c7c:
    // 0x124c7c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x124c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_124c80:
    // 0x124c80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x124c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_124c84:
    // 0x124c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x124c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_124c88:
    // 0x124c88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124c8c:
    // 0x124c8c: 0x247301a0  addiu       $s3, $v1, 0x1A0
    ctx->pc = 0x124c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
label_124c90:
    // 0x124c90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x124c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_124c94:
    // 0x124c94: 0xe62003b4  swc1        $f0, 0x3B4($s1)
    ctx->pc = 0x124c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
label_124c98:
    // 0x124c98: 0xe620030c  swc1        $f0, 0x30C($s1)
    ctx->pc = 0x124c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 780), bits); }
label_124c9c:
    // 0x124c9c: 0xc6410310  lwc1        $f1, 0x310($s2)
    ctx->pc = 0x124c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124ca0:
    // 0x124ca0: 0xe6210394  swc1        $f1, 0x394($s1)
    ctx->pc = 0x124ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
label_124ca4:
    // 0x124ca4: 0xe6210310  swc1        $f1, 0x310($s1)
    ctx->pc = 0x124ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
label_124ca8:
    // 0x124ca8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x124ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_124cac:
    // 0x124cac: 0x847001a0  lh          $s0, 0x1A0($v1)
    ctx->pc = 0x124cacu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_124cb0:
    // 0x124cb0: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_124cb4:
    // 0x124cb4: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x124cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_124cb8:
    // 0x124cb8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x124cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_124cbc:
    // 0x124cbc: 0x60f809  jalr        $v1
label_124cc0:
    if (ctx->pc == 0x124CC0u) {
        ctx->pc = 0x124CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CBCu;
        // 0x124cc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CC4u;
        goto label_124cc4;
    }
    ctx->pc = 0x124CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124CC4u);
        ctx->pc = 0x124CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CBCu;
        // 0x124cc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CBCu, 0x124CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124CC4u;
label_124cc4:
    // 0x124cc4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x124cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_124cc8:
    // 0x124cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ccc:
    // 0x124ccc: 0xa0f809  jalr        $a1
label_124cd0:
    if (ctx->pc == 0x124CD0u) {
        ctx->pc = 0x124CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CCCu;
        // 0x124cd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CD4u;
        goto label_124cd4;
    }
    ctx->pc = 0x124CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x124CD4u);
        ctx->pc = 0x124CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CCCu;
        // 0x124cd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CCCu, 0x124CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124CD4u;
label_124cd4:
    // 0x124cd4: 0x7a420210  lq          $v0, 0x210($s2)
    ctx->pc = 0x124cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 528)));
label_124cd8:
    // 0x124cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124cdc:
    // 0x124cdc: 0xc049622  jal         func_125888
label_124ce0:
    if (ctx->pc == 0x124CE0u) {
        ctx->pc = 0x124CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CDCu;
        // 0x124ce0: 0x7e220210  sq          $v0, 0x210($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CE4u;
        goto label_124ce4;
    }
    ctx->pc = 0x124CDCu;
    SET_GPR_U32(ctx, 31, 0x124CE4u);
    ctx->pc = 0x124CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CDCu;
    // 0x124ce0: 0x7e220210  sq          $v0, 0x210($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x124CDCu, 0x124CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CE4u;
label_124ce4:
    // 0x124ce4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x124ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124ce8:
    // 0x124ce8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x124ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124cec:
    // 0x124cec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124cf0:
    // 0x124cf0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x124cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124cf4:
    // 0x124cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124cf8:
    // 0x124cf8: 0x3e00008  jr          $ra
label_124cfc:
    if (ctx->pc == 0x124CFCu) {
        ctx->pc = 0x124CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CF8u;
        // 0x124cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D00u;
        goto label_fallthrough_0x124cf8;
    }
    ctx->pc = 0x124CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CF8u;
        // 0x124cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124cf8:
    ctx->pc = 0x124D00u;
}
