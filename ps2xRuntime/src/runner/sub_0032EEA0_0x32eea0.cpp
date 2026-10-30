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

// Function: sub_0032EEA0
// Address: 0x32eea0 - 0x32ef48
void sub_0032EEA0_0x32eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EEA0_0x32eea0");
#endif

    switch (ctx->pc) {
        case 0x32eec0u: goto label_32eec0;
        case 0x32eec8u: goto label_32eec8;
        case 0x32eed0u: goto label_32eed0;
        case 0x32eee4u: goto label_32eee4;
        case 0x32eef8u: goto label_32eef8;
        case 0x32ef08u: goto label_32ef08;
        case 0x32ef20u: goto label_32ef20;
        case 0x32ef2cu: goto label_32ef2c;
        default: break;
    }

    ctx->pc = 0x32eea0u;

    // 0x32eea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32eea4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32eea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32eeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32eeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eeb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32eeb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32eeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eeb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32eebc: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x32eebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_32eec0:
    // 0x32eec0: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32EEC0u;
    SET_GPR_U32(ctx, 31, 0x32EEC8u);
    ctx->pc = 0x32EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EEC0u;
    // 0x32eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32EEC0u, 0x32EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EEC8u;
label_32eec8:
    // 0x32eec8: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32EEC8u;
    SET_GPR_U32(ctx, 31, 0x32EED0u);
    ctx->pc = 0x32EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EEC8u;
    // 0x32eecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32EEC8u, 0x32EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EED0u;
label_32eed0:
    // 0x32eed0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32eed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32eed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eedc: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32EEDCu;
    SET_GPR_U32(ctx, 31, 0x32EEE4u);
    ctx->pc = 0x32EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EEDCu;
    // 0x32eee0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32EEDCu, 0x32EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EEE4u;
label_32eee4:
    // 0x32eee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32eee8: 0x1052fff5  beq         $v0, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x32EEE8u;
    {
        const bool branch_taken_0x32eee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x32EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEE8u;
        // 0x32eeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eee8) {
            ctx->pc = 0x32EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32eec0;
        }
    }
    ctx->pc = 0x32EEF0u;
    // 0x32eef0: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32EEF0u;
    SET_GPR_U32(ctx, 31, 0x32EEF8u);
    ctx->pc = 0x32EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EEF0u;
    // 0x32eef4: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32EEF0u, 0x32EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EEF8u;
label_32eef8:
    // 0x32eef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32EEF8u;
    {
        const bool branch_taken_0x32eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEF8u;
        // 0x32eefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eef8) {
            ctx->pc = 0x32EF10u;
            goto label_32ef10;
        }
    }
    ctx->pc = 0x32EF00u;
    // 0x32ef00: 0xc0cb62e  jal         func_32D8B8
    ctx->pc = 0x32EF00u;
    SET_GPR_U32(ctx, 31, 0x32EF08u);
    ctx->pc = 0x32EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF00u;
    // 0x32ef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8B8u, 0x32EF00u, 0x32EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF08u;
label_32ef08:
    // 0x32ef08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32EF08u;
    {
        const bool branch_taken_0x32ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF08u;
        // 0x32ef0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef08) {
            ctx->pc = 0x32EF14u;
            goto label_32ef14;
        }
    }
    ctx->pc = 0x32EF10u;
label_32ef10:
    // 0x32ef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ef14:
    // 0x32ef14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef18: 0xc0cb500  jal         func_32D400
    ctx->pc = 0x32EF18u;
    SET_GPR_U32(ctx, 31, 0x32EF20u);
    ctx->pc = 0x32EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF18u;
    // 0x32ef1c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D400u, 0x32EF18u, 0x32EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF20u;
label_32ef20:
    // 0x32ef20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef24: 0xc0cb41e  jal         func_32D078
    ctx->pc = 0x32EF24u;
    SET_GPR_U32(ctx, 31, 0x32EF2Cu);
    ctx->pc = 0x32EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF24u;
    // 0x32ef28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D078u, 0x32EF24u, 0x32EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF2Cu;
label_32ef2c:
    // 0x32ef2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32ef2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ef30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ef30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ef34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32ef34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ef38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF3Cu;
        // 0x32ef40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF44u;
    // 0x32ef44: 0x0  nop
    ctx->pc = 0x32ef44u;
    // NOP
    ctx->pc = 0x32ef48u;
}
