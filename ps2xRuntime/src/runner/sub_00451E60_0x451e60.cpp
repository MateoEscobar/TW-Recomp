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

// Function: sub_00451E60
// Address: 0x451e60 - 0x452060
void sub_00451E60_0x451e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451E60_0x451e60");
#endif

    switch (ctx->pc) {
        case 0x451ee0u: goto label_451ee0;
        case 0x451f38u: goto label_451f38;
        case 0x451fb4u: goto label_451fb4;
        default: break;
    }

    ctx->pc = 0x451e60u;

    // 0x451e60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x451e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x451e64: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x451e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x451e68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x451e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x451e6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x451e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x451e70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x451e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x451e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x451e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x451e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x451e7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x451e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x451e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x451e84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x451e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x451e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x451e8c: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x451e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x451e90: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x451e90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x451e94: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x451e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x451e98: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x451e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x451e9c: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x451e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x451ea0: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x451ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x451ea4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x451ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x451ea8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x451ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x451eac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x451eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x451eb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x451EB0u;
    {
        const bool branch_taken_0x451eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x451EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451EB0u;
        // 0x451eb4: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451eb0) {
            ctx->pc = 0x451ED0u;
            goto label_451ed0;
        }
    }
    ctx->pc = 0x451EB8u;
    // 0x451eb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x451eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x451ebc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x451ebcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x451ec0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x451EC0u;
    {
        const bool branch_taken_0x451ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x451EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451EC0u;
        // 0x451ec4: 0x8f848910  lw          $a0, -0x76F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451ec0) {
            ctx->pc = 0x451ED4u;
            goto label_451ed4;
        }
    }
    ctx->pc = 0x451EC8u;
    // 0x451ec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x451EC8u;
    {
        const bool branch_taken_0x451ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451EC8u;
        // 0x451ecc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451ec8) {
            ctx->pc = 0x451EE4u;
            goto label_451ee4;
        }
    }
    ctx->pc = 0x451ED0u;
label_451ed0:
    // 0x451ed0: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x451ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_451ed4:
    // 0x451ed4: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x451ed4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x451ed8: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x451ED8u;
    SET_GPR_U32(ctx, 31, 0x451EE0u);
    ctx->pc = 0x451EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451ED8u;
    // 0x451edc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x451ED8u, 0x451EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451EE0u;
label_451ee0:
    // 0x451ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x451ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451ee4:
    // 0x451ee4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x451ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x451ee8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x451ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x451eec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x451eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x451ef0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x451ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x451ef4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x451ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x451ef8: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x451ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x451efc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x451efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x451f00: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x451f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x451f04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x451f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x451f08: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x451f08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x451f0c: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x451f0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x451f10: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x451f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x451f14: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x451f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x451f18: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x451f18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x451f1c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x451f1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x451f20: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x451f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x451f24: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x451f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x451f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x451f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x451f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f30: 0xc11a45e  jal         func_469178
    ctx->pc = 0x451F30u;
    SET_GPR_U32(ctx, 31, 0x451F38u);
    ctx->pc = 0x451F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451F30u;
    // 0x451f34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x451F30u, 0x451F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F38u;
label_451f38:
    // 0x451f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x451f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f3c: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x451f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x451f40: 0x8e82ad18  lw          $v0, -0x52E8($s4)
    ctx->pc = 0x451f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946072)));
    // 0x451f44: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x451f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x451f48: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x451f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x451f4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x451f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x451f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x451f54: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x451f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x451f58: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x451f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x451f5c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x451f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x451f60: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x451f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x451f64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x451f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x451f68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x451f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x451f6c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x451f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x451f70: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x451f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x451f74: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x451f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x451f78: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x451f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x451f7c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x451f7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x451f80: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x451f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x451f84: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x451f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x451f88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x451f88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x451f8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x451f8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x451f90: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x451f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x451f94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x451f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x451f98: 0x0  nop
    ctx->pc = 0x451f98u;
    // NOP
    // 0x451f9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x451F9Cu;
    {
        const bool branch_taken_0x451f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x451FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451F9Cu;
        // 0x451fa0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451f9c) {
            ctx->pc = 0x451FB0u;
            goto label_451fb0;
        }
    }
    ctx->pc = 0x451FA4u;
    // 0x451fa4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x451FA4u;
    {
        const bool branch_taken_0x451fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451FA4u;
        // 0x451fa8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451fa4) {
            ctx->pc = 0x45200Cu;
            goto label_45200c;
        }
    }
    ctx->pc = 0x451FACu;
    // 0x451fac: 0x0  nop
    ctx->pc = 0x451facu;
    // NOP
label_451fb0:
    // 0x451fb0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x451fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_451fb4:
    // 0x451fb4: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x451FB4u;
    {
        const bool branch_taken_0x451fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x451FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451FB4u;
        // 0x451fb8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451fb4) {
            ctx->pc = 0x45200Cu;
            goto label_45200c;
        }
    }
    ctx->pc = 0x451FBCu;
    // 0x451fbc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x451fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x451fc0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x451fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x451fc4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x451fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x451fc8: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x451fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x451fcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x451fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x451fd0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x451fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x451fd4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x451fd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x451fd8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x451fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x451fdc: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x451fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x451fe0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x451fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x451fe4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x451fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x451fe8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x451fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x451fec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x451fecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x451ff0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x451ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x451ff4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x451ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x451ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x451ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x451ffc: 0x0  nop
    ctx->pc = 0x451ffcu;
    // NOP
    // 0x452000: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x452000u;
    {
        const bool branch_taken_0x452000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x452000) {
            ctx->pc = 0x452004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x452000u;
            // 0x452004: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451fb4;
        }
    }
    ctx->pc = 0x452008u;
    // 0x452008: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x452008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_45200c:
    // 0x45200c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x452010: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x452010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452014: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x452014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x452018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x452018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45201c: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x45201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x452020: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x452020u;
    {
        const bool branch_taken_0x452020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x452024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452020u;
        // 0x452024: 0xa2220028  sb          $v0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452020) {
            ctx->pc = 0x452030u;
            goto label_452030;
        }
    }
    ctx->pc = 0x452028u;
    // 0x452028: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x452028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x45202c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x45202cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_452030:
    // 0x452030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x452030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452034: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x452034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x452038: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x452038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x45203c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452040: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x452040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x452044: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x452044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452048: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x452048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45204c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x45204cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x452050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452054: 0x3e00008  jr          $ra
    ctx->pc = 0x452054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452054u;
        // 0x452058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45205Cu;
    // 0x45205c: 0x0  nop
    ctx->pc = 0x45205cu;
    // NOP
    ctx->pc = 0x452060u;
}
