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

// Function: sub_00311C78
// Address: 0x311c78 - 0x311d98
void sub_00311C78_0x311c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311C78_0x311c78");
#endif

    switch (ctx->pc) {
        case 0x311ca4u: goto label_311ca4;
        case 0x311cb4u: goto label_311cb4;
        case 0x311cc0u: goto label_311cc0;
        case 0x311d28u: goto label_311d28;
        case 0x311d30u: goto label_311d30;
        case 0x311d38u: goto label_311d38;
        case 0x311d60u: goto label_311d60;
        default: break;
    }

    ctx->pc = 0x311c78u;

    // 0x311c78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x311c7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x311c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x311c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x311c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x311c84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x311c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x311c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x311c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311c94: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x311c94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311c98: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x311c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311c9c: 0xc05959e  jal         func_165678
    ctx->pc = 0x311C9Cu;
    SET_GPR_U32(ctx, 31, 0x311CA4u);
    ctx->pc = 0x311CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C9Cu;
    // 0x311ca0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x311C9Cu, 0x311CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CA4u;
label_311ca4:
    // 0x311ca4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x311CA4u;
    {
        const bool branch_taken_0x311ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CA4u;
        // 0x311ca8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ca4) {
            ctx->pc = 0x311D78u;
            goto label_311d78;
        }
    }
    ctx->pc = 0x311CACu;
    // 0x311cac: 0xc087502  jal         func_21D408
    ctx->pc = 0x311CACu;
    SET_GPR_U32(ctx, 31, 0x311CB4u);
    ctx->pc = 0x311CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311CACu;
    // 0x311cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311CACu, 0x311CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CB4u;
label_311cb4:
    // 0x311cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cb8: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x311CB8u;
    SET_GPR_U32(ctx, 31, 0x311CC0u);
    ctx->pc = 0x311CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311CB8u;
    // 0x311cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x311CB8u, 0x311CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CC0u;
label_311cc0:
    // 0x311cc0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x311cc0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x311cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311cc8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x311CC8u;
    {
        const bool branch_taken_0x311cc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x311CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CC8u;
        // 0x311ccc: 0xc614012c  lwc1        $f20, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cc8) {
            ctx->pc = 0x311CF0u;
            goto label_311cf0;
        }
    }
    ctx->pc = 0x311CD0u;
    // 0x311cd0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x311cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x311cd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311cd8: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x311cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x311cdc: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x311cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x311ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311ce4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x311ce4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x311ce8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x311CE8u;
    {
        const bool branch_taken_0x311ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CE8u;
        // 0x311cec: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ce8) {
            ctx->pc = 0x311D10u;
            goto label_311d10;
        }
    }
    ctx->pc = 0x311CF0u;
label_311cf0:
    // 0x311cf0: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x311cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x311cf4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x311cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x311cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311cfc: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x311cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x311d00: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x311d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x311d04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311d08: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x311d08u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x311d0c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x311d0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_311d10:
    // 0x311d10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x311d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311d14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x311d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d18: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x311d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311d1c: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x311d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x311d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d24: 0x0  nop
    ctx->pc = 0x311d24u;
    // NOP
label_311d28:
    // 0x311d28: 0xc137826  jal         func_4DE098
    ctx->pc = 0x311D28u;
    SET_GPR_U32(ctx, 31, 0x311D30u);
    ctx->pc = 0x311D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311D28u;
    // 0x311d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x311D28u, 0x311D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D30u;
label_311d30:
    // 0x311d30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x311D30u;
    SET_GPR_U32(ctx, 31, 0x311D38u);
    ctx->pc = 0x311D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311D30u;
    // 0x311d34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x311D30u, 0x311D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D38u;
label_311d38:
    // 0x311d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d3c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x311D3Cu;
    {
        const bool branch_taken_0x311d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D3Cu;
        // 0x311d40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d3c) {
            ctx->pc = 0x311D68u;
            goto label_311d68;
        }
    }
    ctx->pc = 0x311D44u;
    // 0x311d44: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x311d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x311d48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x311d48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x311d4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x311d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311d50: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x311D50u;
    {
        const bool branch_taken_0x311d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x311d50) {
            ctx->pc = 0x311D68u;
            goto label_311d68;
        }
    }
    ctx->pc = 0x311D58u;
    // 0x311d58: 0xc087502  jal         func_21D408
    ctx->pc = 0x311D58u;
    SET_GPR_U32(ctx, 31, 0x311D60u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311D58u, 0x311D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D60u;
label_311d60:
    // 0x311d60: 0xe454012c  swc1        $f20, 0x12C($v0)
    ctx->pc = 0x311d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x311d64: 0xe4550130  swc1        $f21, 0x130($v0)
    ctx->pc = 0x311d64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
label_311d68:
    // 0x311d68: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x311d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x311d6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x311D6Cu;
    {
        const bool branch_taken_0x311d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D6Cu;
        // 0x311d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d6c) {
            ctx->pc = 0x311D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311d28;
        }
    }
    ctx->pc = 0x311D74u;
    // 0x311d74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x311d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311d78:
    // 0x311d78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x311d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311d7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x311d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311d84: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x311d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x311d88: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x311d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x311D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D8Cu;
        // 0x311d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311D94u;
    // 0x311d94: 0x0  nop
    ctx->pc = 0x311d94u;
    // NOP
    ctx->pc = 0x311d98u;
}
