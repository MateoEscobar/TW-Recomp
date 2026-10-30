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

// Function: sub_0043DEE0
// Address: 0x43dee0 - 0x43dfa8
void sub_0043DEE0_0x43dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DEE0_0x43dee0");
#endif

    switch (ctx->pc) {
        case 0x43df30u: goto label_43df30;
        case 0x43df50u: goto label_43df50;
        case 0x43df64u: goto label_43df64;
        case 0x43df78u: goto label_43df78;
        case 0x43df88u: goto label_43df88;
        case 0x43df90u: goto label_43df90;
        default: break;
    }

    ctx->pc = 0x43dee0u;

    // 0x43dee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43dee4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x43dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x43dee8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x43deec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43deecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43def0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x43def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x43def4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x43def4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x43def8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x43def8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x43defc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x43defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x43df00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DF00u;
    {
        const bool branch_taken_0x43df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43df00) {
            ctx->pc = 0x43DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43DF00u;
            // 0x43df04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DF14u;
            goto label_43df14;
        }
    }
    ctx->pc = 0x43DF08u;
    // 0x43df08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x43df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x43df0c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x43DF0Cu;
    {
        const bool branch_taken_0x43df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DF0Cu;
        // 0x43df10: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df0c) {
            ctx->pc = 0x43DF94u;
            goto label_43df94;
        }
    }
    ctx->pc = 0x43DF14u;
label_43df14:
    // 0x43df14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43df18: 0x2442d850  addiu       $v0, $v0, -0x27B0
    ctx->pc = 0x43df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957136));
    // 0x43df1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x43df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x43df20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x43df20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x43df24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df28: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x43DF28u;
    SET_GPR_U32(ctx, 31, 0x43DF30u);
    ctx->pc = 0x43DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF28u;
    // 0x43df2c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x43DF28u, 0x43DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF30u;
label_43df30:
    // 0x43df30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43df30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df34: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DF34u;
    {
        const bool branch_taken_0x43df34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x43DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DF34u;
        // 0x43df38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df34) {
            ctx->pc = 0x43DF48u;
            goto label_43df48;
        }
    }
    ctx->pc = 0x43DF3Cu;
    // 0x43df3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x43df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x43df40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x43DF40u;
    {
        const bool branch_taken_0x43df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DF40u;
        // 0x43df44: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df40) {
            ctx->pc = 0x43DF94u;
            goto label_43df94;
        }
    }
    ctx->pc = 0x43DF48u;
label_43df48:
    // 0x43df48: 0xc111102  jal         func_444408
    ctx->pc = 0x43DF48u;
    SET_GPR_U32(ctx, 31, 0x43DF50u);
    ctx->pc = 0x43DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF48u;
    // 0x43df4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444408u, 0x43DF48u, 0x43DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF50u;
label_43df50:
    // 0x43df50: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43df54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df58: 0x24a5e120  addiu       $a1, $a1, -0x1EE0
    ctx->pc = 0x43df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    // 0x43df5c: 0xc11114e  jal         func_444538
    ctx->pc = 0x43DF5Cu;
    SET_GPR_U32(ctx, 31, 0x43DF64u);
    ctx->pc = 0x43DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF5Cu;
    // 0x43df60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444538u, 0x43DF5Cu, 0x43DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF64u;
label_43df64:
    // 0x43df64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43df64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df68: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43DF68u;
    {
        const bool branch_taken_0x43df68 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x43df68) {
            ctx->pc = 0x43DF80u;
            goto label_43df80;
        }
    }
    ctx->pc = 0x43DF70u;
    // 0x43df70: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43DF70u;
    SET_GPR_U32(ctx, 31, 0x43DF78u);
    ctx->pc = 0x43DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF70u;
    // 0x43df74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43DF70u, 0x43DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF78u;
label_43df78:
    // 0x43df78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x43DF78u;
    {
        const bool branch_taken_0x43df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DF78u;
        // 0x43df7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df78) {
            ctx->pc = 0x43DF94u;
            goto label_43df94;
        }
    }
    ctx->pc = 0x43DF80u;
label_43df80:
    // 0x43df80: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x43DF80u;
    SET_GPR_U32(ctx, 31, 0x43DF88u);
    ctx->pc = 0x43DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF80u;
    // 0x43df84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x43DF80u, 0x43DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF88u;
label_43df88:
    // 0x43df88: 0xc10f42c  jal         func_43D0B0
    ctx->pc = 0x43DF88u;
    SET_GPR_U32(ctx, 31, 0x43DF90u);
    ctx->pc = 0x43DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF88u;
    // 0x43df8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0B0u, 0x43DF88u, 0x43DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF90u;
label_43df90:
    // 0x43df90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43df90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43df94:
    // 0x43df94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43df94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43df98: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x43df98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43df9c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x43df9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x43DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DFA0u;
        // 0x43dfa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DFA8u;
}
