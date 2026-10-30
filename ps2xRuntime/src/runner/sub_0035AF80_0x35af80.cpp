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

// Function: sub_0035AF80
// Address: 0x35af80 - 0x35b028
void sub_0035AF80_0x35af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AF80_0x35af80");
#endif

    switch (ctx->pc) {
        case 0x35afa8u: goto label_35afa8;
        case 0x35afb0u: goto label_35afb0;
        case 0x35afc4u: goto label_35afc4;
        case 0x35afccu: goto label_35afcc;
        case 0x35aff4u: goto label_35aff4;
        case 0x35affcu: goto label_35affc;
        case 0x35b00cu: goto label_35b00c;
        default: break;
    }

    ctx->pc = 0x35af80u;

    // 0x35af80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35af84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35af88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35af8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35af90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35af90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35af94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35af9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35afa0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AFA0u;
    SET_GPR_U32(ctx, 31, 0x35AFA8u);
    ctx->pc = 0x35AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFA0u;
    // 0x35afa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AFA0u, 0x35AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFA8u;
label_35afa8:
    // 0x35afa8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AFA8u;
    SET_GPR_U32(ctx, 31, 0x35AFB0u);
    ctx->pc = 0x35AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFA8u;
    // 0x35afac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AFA8u, 0x35AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFB0u;
label_35afb0:
    // 0x35afb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35afb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35afb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35afbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AFBCu;
    SET_GPR_U32(ctx, 31, 0x35AFC4u);
    ctx->pc = 0x35AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFBCu;
    // 0x35afc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AFBCu, 0x35AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFC4u;
label_35afc4:
    // 0x35afc4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AFC4u;
    SET_GPR_U32(ctx, 31, 0x35AFCCu);
    ctx->pc = 0x35AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFC4u;
    // 0x35afc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AFC4u, 0x35AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFCCu;
label_35afcc:
    // 0x35afcc: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x35afccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x35afd0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35afd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35afd4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x35afd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x35afd8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35afd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35afdc: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x35afdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x35afe0: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x35afe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x35afe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35afe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AFECu;
    SET_GPR_U32(ctx, 31, 0x35AFF4u);
    ctx->pc = 0x35AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFECu;
    // 0x35aff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AFECu, 0x35AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFF4u;
label_35aff4:
    // 0x35aff4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AFF4u;
    SET_GPR_U32(ctx, 31, 0x35AFFCu);
    ctx->pc = 0x35AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFF4u;
    // 0x35aff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AFF4u, 0x35AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFFCu;
label_35affc:
    // 0x35affc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35affcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35b000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b004: 0xc08e2c6  jal         func_238B18
    ctx->pc = 0x35B004u;
    SET_GPR_U32(ctx, 31, 0x35B00Cu);
    ctx->pc = 0x35B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B004u;
    // 0x35b008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B18u, 0x35B004u, 0x35B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B00Cu;
label_35b00c:
    // 0x35b00c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35b00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b014: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b018: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35b018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b020: 0x3e00008  jr          $ra
    ctx->pc = 0x35B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B020u;
        // 0x35b024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B028u;
}
