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

// Function: sub_0036CDC0
// Address: 0x36cdc0 - 0x36ce58
void sub_0036CDC0_0x36cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CDC0_0x36cdc0");
#endif

    switch (ctx->pc) {
        case 0x36cde8u: goto label_36cde8;
        case 0x36cdf0u: goto label_36cdf0;
        case 0x36ce04u: goto label_36ce04;
        case 0x36ce0cu: goto label_36ce0c;
        case 0x36ce24u: goto label_36ce24;
        case 0x36ce2cu: goto label_36ce2c;
        case 0x36ce3cu: goto label_36ce3c;
        default: break;
    }

    ctx->pc = 0x36cdc0u;

    // 0x36cdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36cdc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cdc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36cdcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36cdd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cdd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36cdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cdd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36cddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cde0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CDE0u;
    SET_GPR_U32(ctx, 31, 0x36CDE8u);
    ctx->pc = 0x36CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CDE0u;
    // 0x36cde4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CDE0u, 0x36CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CDE8u;
label_36cde8:
    // 0x36cde8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CDE8u;
    SET_GPR_U32(ctx, 31, 0x36CDF0u);
    ctx->pc = 0x36CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CDE8u;
    // 0x36cdec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CDE8u, 0x36CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CDF0u;
label_36cdf0:
    // 0x36cdf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cdf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36cdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cdf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cdfc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CDFCu;
    SET_GPR_U32(ctx, 31, 0x36CE04u);
    ctx->pc = 0x36CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CDFCu;
    // 0x36ce00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CDFCu, 0x36CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE04u;
label_36ce04:
    // 0x36ce04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CE04u;
    SET_GPR_U32(ctx, 31, 0x36CE0Cu);
    ctx->pc = 0x36CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE04u;
    // 0x36ce08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CE04u, 0x36CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE0Cu;
label_36ce0c:
    // 0x36ce0c: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x36ce0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x36ce10: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x36ce10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x36ce14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ce14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ce18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CE1Cu;
    SET_GPR_U32(ctx, 31, 0x36CE24u);
    ctx->pc = 0x36CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE1Cu;
    // 0x36ce20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CE1Cu, 0x36CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE24u;
label_36ce24:
    // 0x36ce24: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36CE24u;
    SET_GPR_U32(ctx, 31, 0x36CE2Cu);
    ctx->pc = 0x36CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE24u;
    // 0x36ce28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36CE24u, 0x36CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE2Cu;
label_36ce2c:
    // 0x36ce2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36ce2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce34: 0xc0e176c  jal         func_385DB0
    ctx->pc = 0x36CE34u;
    SET_GPR_U32(ctx, 31, 0x36CE3Cu);
    ctx->pc = 0x36CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE34u;
    // 0x36ce38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385DB0u, 0x36CE34u, 0x36CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE3Cu;
label_36ce3c:
    // 0x36ce3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36ce3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ce40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ce40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36ce44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ce48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36ce48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ce4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x36CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE50u;
        // 0x36ce54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CE58u;
}
