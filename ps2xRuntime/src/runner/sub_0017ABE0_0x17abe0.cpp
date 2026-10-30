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

// Function: sub_0017ABE0
// Address: 0x17abe0 - 0x17aca8
void sub_0017ABE0_0x17abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ABE0_0x17abe0");
#endif

    switch (ctx->pc) {
        case 0x17ac24u: goto label_17ac24;
        case 0x17ac28u: goto label_17ac28;
        case 0x17ac38u: goto label_17ac38;
        case 0x17ac44u: goto label_17ac44;
        default: break;
    }

    ctx->pc = 0x17abe0u;

    // 0x17abe0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x17abe4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x17abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x17abe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17abe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abec: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x17abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x17abf0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x17abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x17abf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x17abf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x17abfc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x17abfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ac00: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x17ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x17ac04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17ac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac08: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x17ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x17ac0c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x17ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x17ac10: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x17ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x17ac14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17ac18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17ac18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ac1c: 0xc0ce05e  jal         func_338178
    ctx->pc = 0x17AC1Cu;
    SET_GPR_U32(ctx, 31, 0x17AC24u);
    ctx->pc = 0x17AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC1Cu;
    // 0x17ac20: 0x24160008  addiu       $s6, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338178u, 0x17AC1Cu, 0x17AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC24u;
label_17ac24:
    // 0x17ac24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17ac24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ac28:
    // 0x17ac28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac2c: 0x149900  sll         $s3, $s4, 4
    ctx->pc = 0x17ac2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x17ac30: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x17ac30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac34: 0x0  nop
    ctx->pc = 0x17ac34u;
    // NOP
label_17ac38:
    // 0x17ac38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac3c: 0xc05ea2a  jal         func_17A8A8
    ctx->pc = 0x17AC3Cu;
    SET_GPR_U32(ctx, 31, 0x17AC44u);
    ctx->pc = 0x17AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC3Cu;
    // 0x17ac40: 0x2b32821  addu        $a1, $s5, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8A8u, 0x17AC3Cu, 0x17AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC44u;
label_17ac44:
    // 0x17ac44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ac44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac48: 0x0  nop
    ctx->pc = 0x17ac48u;
    // NOP
    // 0x17ac4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17AC4Cu;
    {
        const bool branch_taken_0x17ac4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac4c) {
            ctx->pc = 0x17AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AC4Cu;
            // 0x17ac50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AC54u;
            goto label_17ac54;
        }
    }
    ctx->pc = 0x17AC54u;
label_17ac54:
    // 0x17ac54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17ac54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17ac58: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x17ac58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17ac5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17AC5Cu;
    {
        const bool branch_taken_0x17ac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC5Cu;
        // 0x17ac60: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac5c) {
            ctx->pc = 0x17AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac38;
        }
    }
    ctx->pc = 0x17AC64u;
    // 0x17ac64: 0x16560005  bne         $s2, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AC64u;
    {
        const bool branch_taken_0x17ac64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x17AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC64u;
        // 0x17ac68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac64) {
            ctx->pc = 0x17AC7Cu;
            goto label_17ac7c;
        }
    }
    ctx->pc = 0x17AC6Cu;
    // 0x17ac6c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x17ac6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x17ac70: 0x681ffed  bgez        $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17AC70u;
    {
        const bool branch_taken_0x17ac70 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x17AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC70u;
        // 0x17ac74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac70) {
            ctx->pc = 0x17AC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac28;
        }
    }
    ctx->pc = 0x17AC78u;
    // 0x17ac78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ac7c:
    // 0x17ac7c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x17ac7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17ac80: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x17ac80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17ac84: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x17ac84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17ac88: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x17ac88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ac8c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x17ac8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ac90: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x17ac90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ac94: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x17ac94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ac98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ac9c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x17ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACA0u;
        // 0x17aca4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ACA8u;
}
