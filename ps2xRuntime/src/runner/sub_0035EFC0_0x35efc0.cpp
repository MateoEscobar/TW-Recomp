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

// Function: sub_0035EFC0
// Address: 0x35efc0 - 0x35f050
void sub_0035EFC0_0x35efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EFC0_0x35efc0");
#endif

    switch (ctx->pc) {
        case 0x35efe4u: goto label_35efe4;
        case 0x35efecu: goto label_35efec;
        case 0x35f000u: goto label_35f000;
        case 0x35f018u: goto label_35f018;
        case 0x35f020u: goto label_35f020;
        case 0x35f030u: goto label_35f030;
        default: break;
    }

    ctx->pc = 0x35efc0u;

    // 0x35efc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35efc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35efc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35efcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35efccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35efd4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35efd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35efdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EFDCu;
    SET_GPR_U32(ctx, 31, 0x35EFE4u);
    ctx->pc = 0x35EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFDCu;
    // 0x35efe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EFDCu, 0x35EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFE4u;
label_35efe4:
    // 0x35efe4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EFE4u;
    SET_GPR_U32(ctx, 31, 0x35EFECu);
    ctx->pc = 0x35EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFE4u;
    // 0x35efe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EFE4u, 0x35EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFECu;
label_35efec:
    // 0x35efec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35efecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35eff8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35EFF8u;
    SET_GPR_U32(ctx, 31, 0x35F000u);
    ctx->pc = 0x35EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFF8u;
    // 0x35effc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35EFF8u, 0x35F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F000u;
label_35f000:
    // 0x35f000: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x35f000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x35f004: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x35f004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x35f008: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x35f008u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f010: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F010u;
    SET_GPR_U32(ctx, 31, 0x35F018u);
    ctx->pc = 0x35F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F010u;
    // 0x35f014: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F010u, 0x35F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F018u;
label_35f018:
    // 0x35f018: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F018u;
    SET_GPR_U32(ctx, 31, 0x35F020u);
    ctx->pc = 0x35F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F018u;
    // 0x35f01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F018u, 0x35F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F020u;
label_35f020:
    // 0x35f020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35f020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f028: 0xc0a4b04  jal         func_292C10
    ctx->pc = 0x35F028u;
    SET_GPR_U32(ctx, 31, 0x35F030u);
    ctx->pc = 0x35F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F028u;
    // 0x35f02c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C10u, 0x35F028u, 0x35F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F030u;
label_35f030:
    // 0x35f030: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f03c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f044: 0x3e00008  jr          $ra
    ctx->pc = 0x35F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F044u;
        // 0x35f048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F04Cu;
    // 0x35f04c: 0x0  nop
    ctx->pc = 0x35f04cu;
    // NOP
    ctx->pc = 0x35f050u;
}
