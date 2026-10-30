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

// Function: sub_00112EE0
// Address: 0x112ee0 - 0x113000
void sub_00112EE0_0x112ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112EE0_0x112ee0");
#endif

    switch (ctx->pc) {
        case 0x112efcu: goto label_112efc;
        case 0x112f24u: goto label_112f24;
        case 0x112f30u: goto label_112f30;
        default: break;
    }

    ctx->pc = 0x112ee0u;

    // 0x112ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112ee4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x112ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x112ee8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x112ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x112eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x112ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112ef4: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x112EF4u;
    SET_GPR_U32(ctx, 31, 0x112EFCu);
    ctx->pc = 0x112EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EF4u;
    // 0x112ef8: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112EF4u, 0x112EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EFCu;
label_112efc:
    // 0x112efc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112f00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x112f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x112f04: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x112f08: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x112F08u;
    {
        const bool branch_taken_0x112f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F08u;
        // 0x112f0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f08) {
            ctx->pc = 0x112FE8u;
            goto label_112fe8;
        }
    }
    ctx->pc = 0x112F10u;
    // 0x112f10: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x112f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x112f14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x112f18: 0x2610b8b0  addiu       $s0, $s0, -0x4750
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949040));
    // 0x112f1c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x112F1Cu;
    SET_GPR_U32(ctx, 31, 0x112F24u);
    ctx->pc = 0x112F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F1Cu;
    // 0x112f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x112F1Cu, 0x112F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F24u;
label_112f24:
    // 0x112f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f28: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x112F28u;
    SET_GPR_U32(ctx, 31, 0x112F30u);
    ctx->pc = 0x112F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F28u;
    // 0x112f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x112F28u, 0x112F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F30u;
label_112f30:
    // 0x112f30: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x112f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x112f34: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x112f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x112f38: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x112F38u;
    {
        const bool branch_taken_0x112f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f38) {
            ctx->pc = 0x112F94u;
            goto label_112f94;
        }
    }
    ctx->pc = 0x112F40u;
    // 0x112f40: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112F40u;
    {
        const bool branch_taken_0x112f40 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f40) {
            ctx->pc = 0x112F5Cu;
            goto label_112f5c;
        }
    }
    ctx->pc = 0x112F48u;
    // 0x112f48: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x112f48u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112f4c: 0x0  nop
    ctx->pc = 0x112f4cu;
    // NOP
    // 0x112f50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x112f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x112f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x112F54u;
    {
        const bool branch_taken_0x112f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f54) {
            ctx->pc = 0x112F74u;
            goto label_112f74;
        }
    }
    ctx->pc = 0x112F5Cu;
label_112f5c:
    // 0x112f5c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x112f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x112f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x112f64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x112f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112f68: 0x0  nop
    ctx->pc = 0x112f68u;
    // NOP
    // 0x112f6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x112f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x112f70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x112f70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_112f74:
    // 0x112f74: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x112f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x112f78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x112f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x112f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112f80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112f88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x112f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x112f8c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x112F8Cu;
    {
        const bool branch_taken_0x112f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F8Cu;
        // 0x112f90: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f8c) {
            ctx->pc = 0x112FE4u;
            goto label_112fe4;
        }
    }
    ctx->pc = 0x112F94u;
label_112f94:
    // 0x112f94: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112F94u;
    {
        const bool branch_taken_0x112f94 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f94) {
            ctx->pc = 0x112FB0u;
            goto label_112fb0;
        }
    }
    ctx->pc = 0x112F9Cu;
    // 0x112f9c: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x112f9cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112fa0: 0x0  nop
    ctx->pc = 0x112fa0u;
    // NOP
    // 0x112fa4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x112fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x112fa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x112FA8u;
    {
        const bool branch_taken_0x112fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112fa8) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112FB0u;
label_112fb0:
    // 0x112fb0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x112fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x112fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x112fb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x112fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112fbc: 0x0  nop
    ctx->pc = 0x112fbcu;
    // NOP
    // 0x112fc0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x112fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x112fc4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x112fc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_112fc8:
    // 0x112fc8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x112fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x112fcc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x112fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x112fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112fd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112fdc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x112fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x112fe0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x112fe0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_112fe4:
    // 0x112fe4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x112fe4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_112fe8:
    // 0x112fe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x112fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112ff4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x112ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x112FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FF8u;
        // 0x112ffc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113000u;
}
