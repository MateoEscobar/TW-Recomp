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

// Function: sub_0038DAE0
// Address: 0x38dae0 - 0x38db40
void sub_0038DAE0_0x38dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DAE0_0x38dae0");
#endif

    switch (ctx->pc) {
        case 0x38db00u: goto label_38db00;
        case 0x38db0cu: goto label_38db0c;
        default: break;
    }

    ctx->pc = 0x38dae0u;

    // 0x38dae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38dae4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38dae8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38daec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38daecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38daf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38daf4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38daf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38dafc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38dafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38db00:
    // 0x38db00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38db00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db04: 0xc0e36a2  jal         func_38DA88
    ctx->pc = 0x38DB04u;
    SET_GPR_U32(ctx, 31, 0x38DB0Cu);
    ctx->pc = 0x38DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DB04u;
    // 0x38db08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA88u, 0x38DB04u, 0x38DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DB0Cu;
label_38db0c:
    // 0x38db0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38db0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38db10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x38db10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38db14: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x38db14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38db18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38DB18u;
    {
        const bool branch_taken_0x38db18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB18u;
        // 0x38db1c: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db18) {
            ctx->pc = 0x38DB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db00;
        }
    }
    ctx->pc = 0x38DB20u;
    // 0x38db20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38db20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38db24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38db28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38db28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38db2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38db2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38db30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38db30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38db34: 0x3e00008  jr          $ra
    ctx->pc = 0x38DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB34u;
        // 0x38db38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DB3Cu;
    // 0x38db3c: 0x0  nop
    ctx->pc = 0x38db3cu;
    // NOP
    ctx->pc = 0x38db40u;
}
