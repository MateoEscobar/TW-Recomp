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

// Function: sub_00248DF0
// Address: 0x248df0 - 0x249050
void sub_00248DF0_0x248df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248DF0_0x248df0");
#endif

    switch (ctx->pc) {
        case 0x248e18u: goto label_248e18;
        case 0x248e2cu: goto label_248e2c;
        default: break;
    }

    ctx->pc = 0x248df0u;

    // 0x248df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x248df8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x248df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x248dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248e04: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x248e08: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x248E08u;
    {
        const bool branch_taken_0x248e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E08u;
        // 0x248e0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e08) {
            ctx->pc = 0x249038u;
            goto label_249038;
        }
    }
    ctx->pc = 0x248E10u;
    // 0x248e10: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x248E10u;
    SET_GPR_U32(ctx, 31, 0x248E18u);
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x248E10u, 0x248E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E18u;
label_248e18:
    // 0x248e18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248E18u;
    {
        const bool branch_taken_0x248e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E18u;
        // 0x248e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e18) {
            ctx->pc = 0x248E34u;
            goto label_248e34;
        }
    }
    ctx->pc = 0x248E20u;
    // 0x248e20: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x248e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
    // 0x248e24: 0xc089998  jal         func_226660
    ctx->pc = 0x248E24u;
    SET_GPR_U32(ctx, 31, 0x248E2Cu);
    ctx->pc = 0x248E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E24u;
    // 0x248e28: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x248E24u, 0x248E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E2Cu;
label_248e2c:
    // 0x248e2c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x248E2Cu;
    {
        const bool branch_taken_0x248e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e2c) {
            ctx->pc = 0x248E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248E2Cu;
            // 0x248e30: 0xc60101ac  lwc1        $f1, 0x1AC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x248E3Cu;
            goto label_248e3c;
        }
    }
    ctx->pc = 0x248E34u;
label_248e34:
    // 0x248e34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x248e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248e38: 0xc60101ac  lwc1        $f1, 0x1AC($s0)
    ctx->pc = 0x248e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248e3c:
    // 0x248e3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x248e40: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x248e44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x248e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x248e48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e4c: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x248e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x248e50: 0x3c013d0e  lui         $at, 0x3D0E
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15630 << 16));
    // 0x248e54: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x248e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x248e58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x248e5c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x248e60: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x248e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x248e64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x248e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x248e68: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x248E68u;
    {
        const bool branch_taken_0x248e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E68u;
        // 0x248e6c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e68) {
            ctx->pc = 0x248EE0u;
            goto label_248ee0;
        }
    }
    ctx->pc = 0x248E70u;
    // 0x248e70: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x248e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x248e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248E74u;
    {
        const bool branch_taken_0x248e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e74) {
            ctx->pc = 0x248E8Cu;
            goto label_248e8c;
        }
    }
    ctx->pc = 0x248E7Cu;
    // 0x248e7c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x248E7Cu;
    {
        const bool branch_taken_0x248e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x248e7c) {
            ctx->pc = 0x248F00u;
            goto label_248f00;
        }
    }
    ctx->pc = 0x248E84u;
    // 0x248e84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x248E84u;
    {
        const bool branch_taken_0x248e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e84) {
            ctx->pc = 0x248F10u;
            goto label_248f10;
        }
    }
    ctx->pc = 0x248E8Cu;
label_248e8c:
    // 0x248e8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x248e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x248e90: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248E90u;
    {
        const bool branch_taken_0x248e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E90u;
        // 0x248e94: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e90) {
            ctx->pc = 0x248EC0u;
            goto label_248ec0;
        }
    }
    ctx->pc = 0x248E98u;
    // 0x248e98: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x248E98u;
    {
        const bool branch_taken_0x248e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248e98) {
            ctx->pc = 0x248F10u;
            goto label_248f10;
        }
    }
    ctx->pc = 0x248EA0u;
    // 0x248ea0: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x248ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x248ea4: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x248ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
    // 0x248ea8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x248eac: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x248eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x248eb0: 0x3421adfd  ori         $at, $at, 0xADFD
    ctx->pc = 0x248eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44541);
    // 0x248eb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x248eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x248eb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x248EB8u;
    {
        const bool branch_taken_0x248eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248eb8) {
            ctx->pc = 0x248F14u;
            goto label_248f14;
        }
    }
    ctx->pc = 0x248EC0u;
label_248ec0:
    // 0x248ec0: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x248ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x248ec4: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x248ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x248ec8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x248ecc: 0x3c013cb9  lui         $at, 0x3CB9
    ctx->pc = 0x248eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15545 << 16));
    // 0x248ed0: 0x3421dede  ori         $at, $at, 0xDEDE
    ctx->pc = 0x248ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57054);
    // 0x248ed4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x248ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x248ed8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x248ED8u;
    {
        const bool branch_taken_0x248ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ed8) {
            ctx->pc = 0x248F14u;
            goto label_248f14;
        }
    }
    ctx->pc = 0x248EE0u;
label_248ee0:
    // 0x248ee0: 0x3c013d56  lui         $at, 0x3D56
    ctx->pc = 0x248ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15702 << 16));
    // 0x248ee4: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x248ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x248ee8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x248eec: 0x3c013cab  lui         $at, 0x3CAB
    ctx->pc = 0x248eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15531 << 16));
    // 0x248ef0: 0x342192a7  ori         $at, $at, 0x92A7
    ctx->pc = 0x248ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37543);
    // 0x248ef4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x248ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x248ef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248EF8u;
    {
        const bool branch_taken_0x248ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ef8) {
            ctx->pc = 0x248F14u;
            goto label_248f14;
        }
    }
    ctx->pc = 0x248F00u;
label_248f00:
    // 0x248f00: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x248f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x248f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248F08u;
    {
        const bool branch_taken_0x248f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F08u;
        // 0x248f0c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f08) {
            ctx->pc = 0x248F14u;
            goto label_248f14;
        }
    }
    ctx->pc = 0x248F10u;
label_248f10:
    // 0x248f10: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x248f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_248f14:
    // 0x248f14: 0x3c013a64  lui         $at, 0x3A64
    ctx->pc = 0x248f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14948 << 16));
    // 0x248f18: 0x3421c389  ori         $at, $at, 0xC389
    ctx->pc = 0x248f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50057);
    // 0x248f1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248f20: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x248f20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x248f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248f28: 0x0  nop
    ctx->pc = 0x248f28u;
    // NOP
    // 0x248f2c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x248F2Cu;
    {
        const bool branch_taken_0x248f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F2Cu;
        // 0x248f30: 0xe6140298  swc1        $f20, 0x298($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f2c) {
            ctx->pc = 0x248F4Cu;
            goto label_248f4c;
        }
    }
    ctx->pc = 0x248F34u;
    // 0x248f34: 0x460ca002  mul.s       $f0, $f20, $f12
    ctx->pc = 0x248f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x248f38: 0x460400a9  min.s       $f2, $f0, $f4
    ctx->pc = 0x248f38u;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[4]);
    // 0x248f3c: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x248f3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x248f40: 0x46011068  max.s       $f1, $f2, $f1
    ctx->pc = 0x248f40u;
    ctx->f[1] = std::max(ctx->f[2], ctx->f[1]);
    // 0x248f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248F44u;
    {
        const bool branch_taken_0x248f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F44u;
        // 0x248f48: 0xe6010298  swc1        $f1, 0x298($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f44) {
            ctx->pc = 0x248F50u;
            goto label_248f50;
        }
    }
    ctx->pc = 0x248F4Cu;
label_248f4c:
    // 0x248f4c: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x248f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
label_248f50:
    // 0x248f50: 0xc6040298  lwc1        $f4, 0x298($s0)
    ctx->pc = 0x248f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x248f54: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x248f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x248f58: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x248f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x248f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248f60: 0x0  nop
    ctx->pc = 0x248f60u;
    // NOP
    // 0x248f64: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x248f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248f68: 0x0  nop
    ctx->pc = 0x248f68u;
    // NOP
    // 0x248f6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x248F6Cu;
    {
        const bool branch_taken_0x248f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248f6c) {
            ctx->pc = 0x248F98u;
            goto label_248f98;
        }
    }
    ctx->pc = 0x248F74u;
    // 0x248f74: 0xc600029c  lwc1        $f0, 0x29C($s0)
    ctx->pc = 0x248f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248f78: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x248f7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248f80: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x248f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x248f84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x248f88: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x248f88u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x248f8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248f90: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x248F90u;
    {
        const bool branch_taken_0x248f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F90u;
        // 0x248f94: 0xe600029c  swc1        $f0, 0x29C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f90) {
            ctx->pc = 0x249038u;
            goto label_249038;
        }
    }
    ctx->pc = 0x248F98u;
label_248f98:
    // 0x248f98: 0x3c01bc0e  lui         $at, 0xBC0E
    ctx->pc = 0x248f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48142 << 16));
    // 0x248f9c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x248fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fa4: 0x0  nop
    ctx->pc = 0x248fa4u;
    // NOP
    // 0x248fa8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x248fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248fac: 0x0  nop
    ctx->pc = 0x248facu;
    // NOP
    // 0x248fb0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x248FB0u;
    {
        const bool branch_taken_0x248fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248fb0) {
            ctx->pc = 0x248FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248FB0u;
            // 0x248fb4: 0xc602029c  lwc1        $f2, 0x29C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x248FE0u;
            goto label_248fe0;
        }
    }
    ctx->pc = 0x248FB8u;
    // 0x248fb8: 0xc601029c  lwc1        $f1, 0x29C($s0)
    ctx->pc = 0x248fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fbc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x248fbcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x248fc0: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x248fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x248fc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248fc8: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x248fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x248fcc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x248fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x248fd0: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x248fd0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x248fd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x248fd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248fd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x248FD8u;
    {
        const bool branch_taken_0x248fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FD8u;
        // 0x248fdc: 0xe601029c  swc1        $f1, 0x29C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fd8) {
            ctx->pc = 0x249038u;
            goto label_249038;
        }
    }
    ctx->pc = 0x248FE0u;
label_248fe0:
    // 0x248fe0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x248fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248fe4: 0x0  nop
    ctx->pc = 0x248fe4u;
    // NOP
    // 0x248fe8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x248FE8u;
    {
        const bool branch_taken_0x248fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FE8u;
        // 0x248fec: 0xae000298  sw          $zero, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fe8) {
            ctx->pc = 0x24900Cu;
            goto label_24900c;
        }
    }
    ctx->pc = 0x248FF0u;
    // 0x248ff0: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x248ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x248ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ff8: 0x0  nop
    ctx->pc = 0x248ff8u;
    // NOP
    // 0x248ffc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x248ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x249000: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x249000u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x249004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x249004u;
    {
        const bool branch_taken_0x249004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249004u;
        // 0x249008: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249004) {
            ctx->pc = 0x249034u;
            goto label_249034;
        }
    }
    ctx->pc = 0x24900Cu;
label_24900c:
    // 0x24900c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24900cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249010: 0x0  nop
    ctx->pc = 0x249010u;
    // NOP
    // 0x249014: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x249014u;
    {
        const bool branch_taken_0x249014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249014) {
            ctx->pc = 0x249018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249014u;
            // 0x249018: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249038u;
            goto label_249038;
        }
    }
    ctx->pc = 0x24901Cu;
    // 0x24901c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x249020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249024: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x249024u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x249028: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x249028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24902c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x24902cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x249030: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x249030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_249034:
    // 0x249034: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x249034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
label_249038:
    // 0x249038: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x249038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24903c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249040: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x249040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249044: 0x3e00008  jr          $ra
    ctx->pc = 0x249044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249044u;
        // 0x249048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24904Cu;
    // 0x24904c: 0x0  nop
    ctx->pc = 0x24904cu;
    // NOP
    ctx->pc = 0x249050u;
}
