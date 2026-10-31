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

// Function: sub_00408D20
// Address: 0x408d20 - 0x408d90
void sub_00408D20_0x408d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408D20_0x408d20");
#endif

    switch (ctx->pc) {
        case 0x408d38u: goto label_408d38;
        case 0x408d50u: goto label_408d50;
        case 0x408d64u: goto label_408d64;
        case 0x408d70u: goto label_408d70;
        case 0x408d7cu: goto label_408d7c;
        default: break;
    }

    ctx->pc = 0x408d20u;

    // 0x408d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x408d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408d28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x408d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408d30: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408D30u;
    SET_GPR_U32(ctx, 31, 0x408D38u);
    ctx->pc = 0x408D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D30u;
    // 0x408d34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408D30u, 0x408D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D38u;
label_408d38:
    // 0x408d38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x408D38u;
    {
        const bool branch_taken_0x408d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D38u;
        // 0x408d3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408d38) {
            ctx->pc = 0x408D58u;
            goto label_408d58;
        }
    }
    ctx->pc = 0x408D40u;
    // 0x408d40: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408d48: 0xc10241a  jal         func_409068
    ctx->pc = 0x408D48u;
    SET_GPR_U32(ctx, 31, 0x408D50u);
    ctx->pc = 0x408D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D48u;
    // 0x408d4c: 0x24a57e40  addiu       $a1, $a1, 0x7E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408D48u, 0x408D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D50u;
label_408d50:
    // 0x408d50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x408D50u;
    {
        const bool branch_taken_0x408d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D50u;
        // 0x408d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408d50) {
            ctx->pc = 0x408D80u;
            goto label_408d80;
        }
    }
    ctx->pc = 0x408D58u;
label_408d58:
    // 0x408d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408d5c: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408D5Cu;
    SET_GPR_U32(ctx, 31, 0x408D64u);
    ctx->pc = 0x408D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D5Cu;
    // 0x408d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408D5Cu, 0x408D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D64u;
label_408d64:
    // 0x408d64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408d68: 0xc1026ba  jal         func_409AE8
    ctx->pc = 0x408D68u;
    SET_GPR_U32(ctx, 31, 0x408D70u);
    ctx->pc = 0x408D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D68u;
    // 0x408d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AE8u, 0x408D68u, 0x408D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D70u;
label_408d70:
    // 0x408d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408d74: 0xc10255a  jal         func_409568
    ctx->pc = 0x408D74u;
    SET_GPR_U32(ctx, 31, 0x408D7Cu);
    ctx->pc = 0x408D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D74u;
    // 0x408d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409568u, 0x408D74u, 0x408D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D7Cu;
label_408d7c:
    // 0x408d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x408d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408d80:
    // 0x408d80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408d88: 0x3e00008  jr          $ra
    ctx->pc = 0x408D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D88u;
        // 0x408d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408D90u;
}
