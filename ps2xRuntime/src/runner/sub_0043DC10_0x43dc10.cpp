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

// Function: sub_0043DC10
// Address: 0x43dc10 - 0x43dc78
void sub_0043DC10_0x43dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DC10_0x43dc10");
#endif

    switch (ctx->pc) {
        case 0x43dc40u: goto label_43dc40;
        case 0x43dc48u: goto label_43dc48;
        case 0x43dc60u: goto label_43dc60;
        default: break;
    }

    ctx->pc = 0x43dc10u;

    // 0x43dc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43dc14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43dc18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43dc1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43dc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43dc24: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43dc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43dc28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43dc2c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43dc2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43dc30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DC30u;
    {
        const bool branch_taken_0x43dc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dc30) {
            ctx->pc = 0x43DC40u;
            goto label_43dc40;
        }
    }
    ctx->pc = 0x43DC38u;
    // 0x43dc38: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43DC38u;
    SET_GPR_U32(ctx, 31, 0x43DC40u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43DC38u, 0x43DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DC40u;
label_43dc40:
    // 0x43dc40: 0xc10f380  jal         func_43CE00
    ctx->pc = 0x43DC40u;
    SET_GPR_U32(ctx, 31, 0x43DC48u);
    ctx->pc = 0x43DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DC40u;
    // 0x43dc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CE00u, 0x43DC40u, 0x43DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DC48u;
label_43dc48:
    // 0x43dc48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43dc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc4c: 0xf  sync
    ctx->pc = 0x43dc4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43dc50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DC50u;
    {
        const bool branch_taken_0x43dc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC50u;
        // 0x43dc54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dc50) {
            ctx->pc = 0x43DC64u;
            goto label_43dc64;
        }
    }
    ctx->pc = 0x43DC58u;
    // 0x43dc58: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43DC58u;
    SET_GPR_U32(ctx, 31, 0x43DC60u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43DC58u, 0x43DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DC60u;
label_43dc60:
    // 0x43dc60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43dc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43dc64:
    // 0x43dc64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43dc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dc68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43dc68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43dc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dc70: 0x3e00008  jr          $ra
    ctx->pc = 0x43DC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC70u;
        // 0x43dc74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DC78u;
}
