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

// Function: sub_00424EF8
// Address: 0x424ef8 - 0x424f68
void sub_00424EF8_0x424ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424EF8_0x424ef8");
#endif

    switch (ctx->pc) {
        case 0x424f14u: goto label_424f14;
        case 0x424f1cu: goto label_424f1c;
        case 0x424f28u: goto label_424f28;
        default: break;
    }

    ctx->pc = 0x424ef8u;

    // 0x424ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x424ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x424efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x424efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x424f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x424f04: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x424f04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x424f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x424f0c: 0xc10942a  jal         func_4250A8
    ctx->pc = 0x424F0Cu;
    SET_GPR_U32(ctx, 31, 0x424F14u);
    ctx->pc = 0x424F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424F0Cu;
    // 0x424f10: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4250A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4250A8u, 0x424F0Cu, 0x424F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424F14u;
label_424f14:
    // 0x424f14: 0xc109890  jal         func_426240
    ctx->pc = 0x424F14u;
    SET_GPR_U32(ctx, 31, 0x424F1Cu);
    ctx->pc = 0x424F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424F14u;
    // 0x424f18: 0xae025068  sw          $v0, 0x5068($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426240u, 0x424F14u, 0x424F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424F1Cu;
label_424f1c:
    // 0x424f1c: 0x8e045068  lw          $a0, 0x5068($s0)
    ctx->pc = 0x424f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20584)));
    // 0x424f20: 0xc1093f4  jal         func_424FD0
    ctx->pc = 0x424F20u;
    SET_GPR_U32(ctx, 31, 0x424F28u);
    ctx->pc = 0x424F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424F20u;
    // 0x424f24: 0xae225064  sw          $v0, 0x5064($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424FD0u, 0x424F20u, 0x424F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424F28u;
label_424f28:
    // 0x424f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f2c: 0x8e035068  lw          $v1, 0x5068($s0)
    ctx->pc = 0x424f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20584)));
    // 0x424f30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x424f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x424f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x424F38u;
    {
        const bool branch_taken_0x424f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x424F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F38u;
        // 0x424f3c: 0xac44506c  sw          $a0, 0x506C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f38) {
            ctx->pc = 0x424F4Cu;
            goto label_424f4c;
        }
    }
    ctx->pc = 0x424F40u;
    // 0x424f40: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x424F40u;
    {
        const bool branch_taken_0x424f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x424F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F40u;
        // 0x424f44: 0x8e225064  lw          $v0, 0x5064($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f40) {
            ctx->pc = 0x424F4Cu;
            goto label_424f4c;
        }
    }
    ctx->pc = 0x424F48u;
    // 0x424f48: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x424f48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_424f4c:
    // 0x424f4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x424f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x424f50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x424f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x424F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F5Cu;
        // 0x424f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424F64u;
    // 0x424f64: 0x0  nop
    ctx->pc = 0x424f64u;
    // NOP
    ctx->pc = 0x424f68u;
}
