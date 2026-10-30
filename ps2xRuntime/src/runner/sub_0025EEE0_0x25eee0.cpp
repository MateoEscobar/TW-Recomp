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

// Function: sub_0025EEE0
// Address: 0x25eee0 - 0x25ef58
void sub_0025EEE0_0x25eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EEE0_0x25eee0");
#endif

    switch (ctx->pc) {
        case 0x25eee0u: goto label_25eee0;
        case 0x25eee4u: goto label_25eee4;
        case 0x25eee8u: goto label_25eee8;
        case 0x25eeecu: goto label_25eeec;
        case 0x25eef0u: goto label_25eef0;
        case 0x25eef4u: goto label_25eef4;
        case 0x25eef8u: goto label_25eef8;
        case 0x25eefcu: goto label_25eefc;
        case 0x25ef00u: goto label_25ef00;
        case 0x25ef04u: goto label_25ef04;
        case 0x25ef08u: goto label_25ef08;
        case 0x25ef0cu: goto label_25ef0c;
        case 0x25ef10u: goto label_25ef10;
        case 0x25ef14u: goto label_25ef14;
        case 0x25ef18u: goto label_25ef18;
        case 0x25ef1cu: goto label_25ef1c;
        case 0x25ef20u: goto label_25ef20;
        case 0x25ef24u: goto label_25ef24;
        case 0x25ef28u: goto label_25ef28;
        case 0x25ef2cu: goto label_25ef2c;
        case 0x25ef30u: goto label_25ef30;
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef38u: goto label_25ef38;
        case 0x25ef3cu: goto label_25ef3c;
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef48u: goto label_25ef48;
        case 0x25ef4cu: goto label_25ef4c;
        case 0x25ef50u: goto label_25ef50;
        case 0x25ef54u: goto label_25ef54;
        default: break;
    }

    ctx->pc = 0x25eee0u;

label_25eee0:
    // 0x25eee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25eee4:
    // 0x25eee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25eee8:
    // 0x25eee8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25eee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25eeec:
    // 0x25eeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25eef0:
    // 0x25eef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25eef4:
    // 0x25eef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25eef8:
    // 0x25eef8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x25eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25eefc:
    // 0x25eefc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_25ef00:
    if (ctx->pc == 0x25EF00u) {
        ctx->pc = 0x25EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEFCu;
        // 0x25ef00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF04u;
        goto label_25ef04;
    }
    ctx->pc = 0x25EEFCu;
    {
        const bool branch_taken_0x25eefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEFCu;
        // 0x25ef00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eefc) {
            ctx->pc = 0x25EF3Cu;
            goto label_25ef3c;
        }
    }
    ctx->pc = 0x25EF04u;
label_25ef04:
    // 0x25ef04: 0xc05d484  jal         func_175210
label_25ef08:
    if (ctx->pc == 0x25EF08u) {
        ctx->pc = 0x25EF0Cu;
        goto label_25ef0c;
    }
    ctx->pc = 0x25EF04u;
    SET_GPR_U32(ctx, 31, 0x25EF0Cu);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25EF04u, 0x25EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF0Cu;
label_25ef0c:
    // 0x25ef0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ef10:
    // 0x25ef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ef14:
    // 0x25ef14: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ef18:
    // 0x25ef18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ef18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25ef1c:
    // 0x25ef1c: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x25ef1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_25ef20:
    // 0x25ef20: 0x261000a8  addiu       $s0, $s0, 0xA8
    ctx->pc = 0x25ef20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_25ef24:
    // 0x25ef24: 0xc097b0a  jal         func_25EC28
label_25ef28:
    if (ctx->pc == 0x25EF28u) {
        ctx->pc = 0x25EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF24u;
        // 0x25ef28: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF2Cu;
        goto label_25ef2c;
    }
    ctx->pc = 0x25EF24u;
    SET_GPR_U32(ctx, 31, 0x25EF2Cu);
    ctx->pc = 0x25EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF24u;
    // 0x25ef28: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EC28u, 0x25EF24u, 0x25EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF2Cu;
label_25ef2c:
    // 0x25ef2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ef30:
    // 0x25ef30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ef34:
    // 0x25ef34: 0x40f809  jalr        $v0
label_25ef38:
    if (ctx->pc == 0x25EF38u) {
        ctx->pc = 0x25EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF34u;
        // 0x25ef38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF3Cu;
        goto label_25ef3c;
    }
    ctx->pc = 0x25EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25EF3Cu);
        ctx->pc = 0x25EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF34u;
        // 0x25ef38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF34u, 0x25EF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EF3Cu;
label_25ef3c:
    // 0x25ef3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25ef3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25ef40:
    // 0x25ef40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ef40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25ef44:
    // 0x25ef44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ef44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ef48:
    // 0x25ef48: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25ef4c:
    // 0x25ef4c: 0x3e00008  jr          $ra
label_25ef50:
    if (ctx->pc == 0x25EF50u) {
        ctx->pc = 0x25EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF4Cu;
        // 0x25ef50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF54u;
        goto label_25ef54;
    }
    ctx->pc = 0x25EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF4Cu;
        // 0x25ef50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EF54u;
label_25ef54:
    // 0x25ef54: 0x0  nop
    ctx->pc = 0x25ef54u;
    // NOP
    ctx->pc = 0x25ef58u;
}
