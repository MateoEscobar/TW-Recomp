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

// Function: sub_00169CC8
// Address: 0x169cc8 - 0x169d30
void sub_00169CC8_0x169cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169CC8_0x169cc8");
#endif

    switch (ctx->pc) {
        case 0x169ce8u: goto label_169ce8;
        case 0x169cf0u: goto label_169cf0;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d0cu: goto label_169d0c;
        default: break;
    }

    ctx->pc = 0x169cc8u;

    // 0x169cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169ccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169cd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ce4: 0x0  nop
    ctx->pc = 0x169ce4u;
    // NOP
label_169ce8:
    // 0x169ce8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x169CE8u;
    SET_GPR_U32(ctx, 31, 0x169CF0u);
    ctx->pc = 0x169CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CE8u;
    // 0x169cec: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169CE8u, 0x169CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CF0u;
label_169cf0:
    // 0x169cf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x169cf4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169CF4u;
    SET_GPR_U32(ctx, 31, 0x169CFCu);
    ctx->pc = 0x169CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF4u;
    // 0x169cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169CF4u, 0x169CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169CFCu;
    {
        const bool branch_taken_0x169cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CFCu;
        // 0x169d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cfc) {
            ctx->pc = 0x169D10u;
            goto label_169d10;
        }
    }
    ctx->pc = 0x169D04u;
    // 0x169d04: 0xc087502  jal         func_21D408
    ctx->pc = 0x169D04u;
    SET_GPR_U32(ctx, 31, 0x169D0Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169D04u, 0x169D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D0Cu;
label_169d0c:
    // 0x169d0c: 0xa0400290  sb          $zero, 0x290($v0)
    ctx->pc = 0x169d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 656), (uint8_t)GPR_U32(ctx, 0));
label_169d10:
    // 0x169d10: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x169d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x169d14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x169D14u;
    {
        const bool branch_taken_0x169d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D14u;
        // 0x169d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d14) {
            ctx->pc = 0x169CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169ce8;
        }
    }
    ctx->pc = 0x169D1Cu;
    // 0x169d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x169d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d28: 0x3e00008  jr          $ra
    ctx->pc = 0x169D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D28u;
        // 0x169d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169D30u;
}
