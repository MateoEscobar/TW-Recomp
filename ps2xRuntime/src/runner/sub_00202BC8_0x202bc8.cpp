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

// Function: sub_00202BC8
// Address: 0x202bc8 - 0x202c28
void sub_00202BC8_0x202bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202BC8_0x202bc8");
#endif

    switch (ctx->pc) {
        case 0x202be8u: goto label_202be8;
        case 0x202bf0u: goto label_202bf0;
        default: break;
    }

    ctx->pc = 0x202bc8u;

    // 0x202bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202be4: 0x0  nop
    ctx->pc = 0x202be4u;
    // NOP
label_202be8:
    // 0x202be8: 0xc080ad4  jal         func_202B50
    ctx->pc = 0x202BE8u;
    SET_GPR_U32(ctx, 31, 0x202BF0u);
    ctx->pc = 0x202BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BE8u;
    // 0x202bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x202BE8u, 0x202BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BF0u;
label_202bf0:
    // 0x202bf0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x202BF0u;
    {
        const bool branch_taken_0x202bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202bf0) {
            ctx->pc = 0x202BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BF0u;
            // 0x202bf4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C00u;
            goto label_202c00;
        }
    }
    ctx->pc = 0x202BF8u;
    // 0x202bf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202BF8u;
    {
        const bool branch_taken_0x202bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BF8u;
        // 0x202bfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf8) {
            ctx->pc = 0x202C10u;
            goto label_202c10;
        }
    }
    ctx->pc = 0x202C00u;
label_202c00:
    // 0x202c00: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x202c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202c04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202C04u;
    {
        const bool branch_taken_0x202c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C04u;
        // 0x202c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c04) {
            ctx->pc = 0x202BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202be8;
        }
    }
    ctx->pc = 0x202C0Cu;
    // 0x202c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202c10:
    // 0x202c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x202C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C1Cu;
        // 0x202c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C24u;
    // 0x202c24: 0x0  nop
    ctx->pc = 0x202c24u;
    // NOP
    ctx->pc = 0x202c28u;
}
