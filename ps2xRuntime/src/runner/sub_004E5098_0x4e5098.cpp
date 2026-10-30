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

// Function: sub_004E5098
// Address: 0x4e5098 - 0x4e51a8
void sub_004E5098_0x4e5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5098_0x4e5098");
#endif

    switch (ctx->pc) {
        case 0x4e50f0u: goto label_4e50f0;
        case 0x4e5138u: goto label_4e5138;
        case 0x4e5148u: goto label_4e5148;
        default: break;
    }

    ctx->pc = 0x4e5098u;

    // 0x4e5098: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4e509c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4e50a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e50a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e50a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e50a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e50a8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x4e50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4e50ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e50acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4e50b0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e50b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e50b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4e50b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4e50bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e50c0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x4e50c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e50c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e50c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4e50cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4e50ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e50d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4e50d4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4e50d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e50d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e50d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e50dc: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x4e50dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x4e50e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x4e50e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4e50e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4E50E4u;
    {
        const bool branch_taken_0x4e50e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E50E4u;
        // 0x4e50e8: 0x29843  sra         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e50e4) {
            ctx->pc = 0x4E5110u;
            goto label_4e5110;
        }
    }
    ctx->pc = 0x4E50ECu;
    // 0x4e50ec: 0x0  nop
    ctx->pc = 0x4e50ecu;
    // NOP
label_4e50f0:
    // 0x4e50f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e50f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4e50f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e50f8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x4e50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4e50fc: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x4e50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4e5100: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e5100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4e5104: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4e5104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4e5108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e5108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e510c: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x4e510cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_4e5110:
    // 0x4e5110: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x4e5110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4e5114: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E5114u;
    {
        const bool branch_taken_0x4e5114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5114u;
        // 0x4e5118: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5114) {
            ctx->pc = 0x4E5168u;
            goto label_4e5168;
        }
    }
    ctx->pc = 0x4E511Cu;
    // 0x4e511c: 0x8ef0489c  lw          $s0, 0x489C($s7)
    ctx->pc = 0x4e511cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x4e5120: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x4e5120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5124: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e5124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5128: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e512c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5130: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5130u;
    SET_GPR_U32(ctx, 31, 0x4E5138u);
    ctx->pc = 0x4E5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5130u;
    // 0x4e5134: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5130u, 0x4E5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5138u;
label_4e5138:
    // 0x4e5138: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e5138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e513c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5140: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5140u;
    SET_GPR_U32(ctx, 31, 0x4E5148u);
    ctx->pc = 0x4E5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5140u;
    // 0x4e5144: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5140u, 0x4E5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5148u;
label_4e5148:
    // 0x4e5148: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e514c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e514cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5150: 0x0  nop
    ctx->pc = 0x4e5150u;
    // NOP
    // 0x4e5154: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E5154u;
    {
        const bool branch_taken_0x4e5154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5154u;
        // 0x4e5158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5154) {
            ctx->pc = 0x4E5160u;
            goto label_4e5160;
        }
    }
    ctx->pc = 0x4E515Cu;
    // 0x4e515c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e515cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5160:
    // 0x4e5160: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4E5160u;
    {
        const bool branch_taken_0x4e5160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5160u;
        // 0x4e5164: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5160) {
            ctx->pc = 0x4E50F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e50f0;
        }
    }
    ctx->pc = 0x4E5168u;
label_4e5168:
    // 0x4e5168: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4e5168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4e516c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e516cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e5170: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5174: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e5174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e5178: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x4e5178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x4e517c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e517cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5180: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e5180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e5184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5188: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e5188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e518c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e518cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5190: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e5190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5198: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x4e5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e519c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E519Cu;
        // 0x4e51a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E519Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E51A4u;
    // 0x4e51a4: 0x0  nop
    ctx->pc = 0x4e51a4u;
    // NOP
    ctx->pc = 0x4e51a8u;
}
