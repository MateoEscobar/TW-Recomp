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

// Function: sub_0016C978
// Address: 0x16c978 - 0x16ca50
void sub_0016C978_0x16c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C978_0x16c978");
#endif

    switch (ctx->pc) {
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9f8u: goto label_16c9f8;
        default: break;
    }

    ctx->pc = 0x16c978u;

    // 0x16c978: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16c97c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x16c97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x16c980: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x16c980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x16c984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c988: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16c98c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16c990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16c998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c99c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16c9a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16c9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16c9a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16c9a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c9b0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x16c9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16c9b4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x16c9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x16c9b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16c9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16c9bc: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_16c9c0:
    // 0x16c9c0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C9C0u;
    SET_GPR_U32(ctx, 31, 0x16C9C8u);
    ctx->pc = 0x16C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9C0u;
    // 0x16c9c4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C9C0u, 0x16C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9C8u;
label_16c9c8:
    // 0x16c9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c9d0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16C9D0u;
    {
        const bool branch_taken_0x16c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c9d0) {
            ctx->pc = 0x16C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C9D0u;
            // 0x16c9d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CA1Cu;
            goto label_16ca1c;
        }
    }
    ctx->pc = 0x16C9D8u;
    // 0x16c9d8: 0x52130010  beql        $s0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x16C9D8u;
    {
        const bool branch_taken_0x16c9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x16c9d8) {
            ctx->pc = 0x16C9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C9D8u;
            // 0x16c9dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CA1Cu;
            goto label_16ca1c;
        }
    }
    ctx->pc = 0x16C9E0u;
    // 0x16c9e0: 0xc05a596  jal         func_169658
    ctx->pc = 0x16C9E0u;
    SET_GPR_U32(ctx, 31, 0x16C9E8u);
    ctx->pc = 0x16C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9E0u;
    // 0x16c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x16C9E0u, 0x16C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9E8u;
label_16c9e8:
    // 0x16c9e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16C9E8u;
    {
        const bool branch_taken_0x16c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9E8u;
        // 0x16c9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9e8) {
            ctx->pc = 0x16CA18u;
            goto label_16ca18;
        }
    }
    ctx->pc = 0x16C9F0u;
    // 0x16c9f0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x16C9F0u;
    SET_GPR_U32(ctx, 31, 0x16C9F8u);
    ctx->pc = 0x16C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9F0u;
    // 0x16c9f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16C9F0u, 0x16C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9F8u;
label_16c9f8:
    // 0x16c9f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16c9f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x16c9fc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x16c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ca00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ca00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ca04: 0x0  nop
    ctx->pc = 0x16ca04u;
    // NOP
    // 0x16ca08: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x16CA08u;
    {
        const bool branch_taken_0x16ca08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ca08) {
            ctx->pc = 0x16CA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CA08u;
            // 0x16ca0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CA1Cu;
            goto label_16ca1c;
        }
    }
    ctx->pc = 0x16CA10u;
    // 0x16ca10: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x16ca10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x16ca14: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x16ca14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ca18:
    // 0x16ca18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16ca18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16ca1c:
    // 0x16ca1c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x16ca1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16ca20: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16CA20u;
    {
        const bool branch_taken_0x16ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA20u;
        // 0x16ca24: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca20) {
            ctx->pc = 0x16C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c9c0;
        }
    }
    ctx->pc = 0x16CA28u;
    // 0x16ca28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x16ca28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16ca2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ca30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16ca30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ca34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16ca34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ca38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16ca38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ca3c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16ca3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ca40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x16CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA44u;
        // 0x16ca48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CA4Cu;
    // 0x16ca4c: 0x0  nop
    ctx->pc = 0x16ca4cu;
    // NOP
    ctx->pc = 0x16ca50u;
}
