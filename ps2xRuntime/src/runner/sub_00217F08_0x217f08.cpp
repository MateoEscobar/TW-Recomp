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

// Function: sub_00217F08
// Address: 0x217f08 - 0x217f68
void sub_00217F08_0x217f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F08_0x217f08");
#endif

    switch (ctx->pc) {
        case 0x217f1cu: goto label_217f1c;
        case 0x217f44u: goto label_217f44;
        default: break;
    }

    ctx->pc = 0x217f08u;

    // 0x217f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x217f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x217f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217f14: 0xc0e3fa2  jal         func_38FE88
    ctx->pc = 0x217F14u;
    SET_GPR_U32(ctx, 31, 0x217F1Cu);
    ctx->pc = 0x38FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE88u, 0x217F14u, 0x217F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F1Cu;
label_217f1c:
    // 0x217f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x217f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217f24: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x217F24u;
    {
        const bool branch_taken_0x217f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x217F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F24u;
        // 0x217f28: 0x241006d0  addiu       $s0, $zero, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f24) {
            ctx->pc = 0x217F50u;
            goto label_217f50;
        }
    }
    ctx->pc = 0x217F2Cu;
    // 0x217f2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x217f30: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x217f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x217f34: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x217f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x217f38: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x217f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x217f3c: 0xc0e3ff4  jal         func_38FFD0
    ctx->pc = 0x217F3Cu;
    SET_GPR_U32(ctx, 31, 0x217F44u);
    ctx->pc = 0x217F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F3Cu;
    // 0x217f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x217F3Cu, 0x217F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F44u;
label_217f44:
    // 0x217f44: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x217f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x217f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217F48u;
    {
        const bool branch_taken_0x217f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F48u;
        // 0x217f4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f48) {
            ctx->pc = 0x217F54u;
            goto label_217f54;
        }
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f54:
    // 0x217f54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x217F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F5Cu;
        // 0x217f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217F64u;
    // 0x217f64: 0x0  nop
    ctx->pc = 0x217f64u;
    // NOP
    ctx->pc = 0x217f68u;
}
