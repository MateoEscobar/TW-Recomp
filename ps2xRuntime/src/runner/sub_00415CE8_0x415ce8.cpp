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

// Function: sub_00415CE8
// Address: 0x415ce8 - 0x415d30
void sub_00415CE8_0x415ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415CE8_0x415ce8");
#endif

    switch (ctx->pc) {
        case 0x415d04u: goto label_415d04;
        case 0x415d0cu: goto label_415d0c;
        case 0x415d1cu: goto label_415d1c;
        default: break;
    }

    ctx->pc = 0x415ce8u;

    // 0x415ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x415cec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x415cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x415cf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x415cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x415cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x415cfc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x415CFCu;
    SET_GPR_U32(ctx, 31, 0x415D04u);
    ctx->pc = 0x415D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415CFCu;
    // 0x415d00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x415CFCu, 0x415D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415D04u;
label_415d04:
    // 0x415d04: 0xc105e98  jal         func_417A60
    ctx->pc = 0x415D04u;
    SET_GPR_U32(ctx, 31, 0x415D0Cu);
    ctx->pc = 0x415D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415D04u;
    // 0x415d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x415D04u, 0x415D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415D0Cu;
label_415d0c:
    // 0x415d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x415D0Cu;
    {
        const bool branch_taken_0x415d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D0Cu;
        // 0x415d10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415d0c) {
            ctx->pc = 0x415D1Cu;
            goto label_415d1c;
        }
    }
    ctx->pc = 0x415D14u;
    // 0x415d14: 0xc105772  jal         func_415DC8
    ctx->pc = 0x415D14u;
    SET_GPR_U32(ctx, 31, 0x415D1Cu);
    ctx->pc = 0x415D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415D14u;
    // 0x415d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DC8u, 0x415D14u, 0x415D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415D1Cu;
label_415d1c:
    // 0x415d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415d24: 0x3e00008  jr          $ra
    ctx->pc = 0x415D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D24u;
        // 0x415d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415D2Cu;
    // 0x415d2c: 0x0  nop
    ctx->pc = 0x415d2cu;
    // NOP
    ctx->pc = 0x415d30u;
}
