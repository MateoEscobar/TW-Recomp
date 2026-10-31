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

// Function: sub_0016C730
// Address: 0x16c730 - 0x16c808
void sub_0016C730_0x16c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C730_0x16c730");
#endif

    switch (ctx->pc) {
        case 0x16c778u: goto label_16c778;
        case 0x16c780u: goto label_16c780;
        case 0x16c7a0u: goto label_16c7a0;
        case 0x16c7b0u: goto label_16c7b0;
        default: break;
    }

    ctx->pc = 0x16c730u;

    // 0x16c730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16c734: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x16c734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x16c738: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x16c738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x16c73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c740: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16c744: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16c748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c74c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16c750: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c754: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16c754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16c758: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16c758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c75c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16c760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16c760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c768: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x16c768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16c76c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x16c76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x16c770: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16c774: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x16c774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_16c778:
    // 0x16c778: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C778u;
    SET_GPR_U32(ctx, 31, 0x16C780u);
    ctx->pc = 0x16C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C778u;
    // 0x16c77c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C778u, 0x16C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C780u;
label_16c780:
    // 0x16c780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c784: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c788: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16C788u;
    {
        const bool branch_taken_0x16c788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c788) {
            ctx->pc = 0x16C78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C788u;
            // 0x16c78c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C7D4u;
            goto label_16c7d4;
        }
    }
    ctx->pc = 0x16C790u;
    // 0x16c790: 0x1213000f  beq         $s0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x16C790u;
    {
        const bool branch_taken_0x16c790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x16C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C790u;
        // 0x16c794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c790) {
            ctx->pc = 0x16C7D0u;
            goto label_16c7d0;
        }
    }
    ctx->pc = 0x16C798u;
    // 0x16c798: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x16C798u;
    SET_GPR_U32(ctx, 31, 0x16C7A0u);
    ctx->pc = 0x16C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C798u;
    // 0x16c79c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x16C798u, 0x16C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7A0u;
label_16c7a0:
    // 0x16c7a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16C7A0u;
    {
        const bool branch_taken_0x16c7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7A0u;
        // 0x16c7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7a0) {
            ctx->pc = 0x16C7D0u;
            goto label_16c7d0;
        }
    }
    ctx->pc = 0x16C7A8u;
    // 0x16c7a8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x16C7A8u;
    SET_GPR_U32(ctx, 31, 0x16C7B0u);
    ctx->pc = 0x16C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7A8u;
    // 0x16c7ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16C7A8u, 0x16C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7B0u;
label_16c7b0:
    // 0x16c7b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16c7b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x16c7b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x16c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c7b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c7bc: 0x0  nop
    ctx->pc = 0x16c7bcu;
    // NOP
    // 0x16c7c0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x16C7C0u;
    {
        const bool branch_taken_0x16c7c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c7c0) {
            ctx->pc = 0x16C7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C7C0u;
            // 0x16c7c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C7D4u;
            goto label_16c7d4;
        }
    }
    ctx->pc = 0x16C7C8u;
    // 0x16c7c8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x16c7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x16c7cc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x16c7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c7d0:
    // 0x16c7d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c7d4:
    // 0x16c7d4: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x16c7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c7d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16C7D8u;
    {
        const bool branch_taken_0x16c7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7D8u;
        // 0x16c7dc: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7d8) {
            ctx->pc = 0x16C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c778;
        }
    }
    ctx->pc = 0x16C7E0u;
    // 0x16c7e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x16c7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16c7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c7e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16c7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c7ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16c7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c7f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c7f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c7f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16c7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7FCu;
        // 0x16c800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C804u;
    // 0x16c804: 0x0  nop
    ctx->pc = 0x16c804u;
    // NOP
    ctx->pc = 0x16c808u;
}
