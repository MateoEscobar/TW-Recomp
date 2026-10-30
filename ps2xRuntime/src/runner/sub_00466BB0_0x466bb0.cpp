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

// Function: sub_00466BB0
// Address: 0x466bb0 - 0x466c38
void sub_00466BB0_0x466bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466BB0_0x466bb0");
#endif

    switch (ctx->pc) {
        case 0x466bf8u: goto label_466bf8;
        case 0x466c10u: goto label_466c10;
        default: break;
    }

    ctx->pc = 0x466bb0u;

    // 0x466bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466bb4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466bb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x466bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x466bbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x466bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x466bc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x466bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466bc4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x466bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x466bc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x466bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466bd0: 0x2452e680  addiu       $s2, $v0, -0x1980
    ctx->pc = 0x466bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
    // 0x466bd4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x466bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E688u));
    // 0x466bd8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x466bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x466bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x466bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x466be0: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x466BE0u;
    {
        const bool branch_taken_0x466be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x466be0) {
            ctx->pc = 0x466BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466BE0u;
            // 0x466be4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466C20u;
            goto label_466c20;
        }
    }
    ctx->pc = 0x466BE8u;
    // 0x466be8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x466BE8u;
    {
        const bool branch_taken_0x466be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466be8) {
            ctx->pc = 0x466BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466BE8u;
            // 0x466bec: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466BFCu;
            goto label_466bfc;
        }
    }
    ctx->pc = 0x466BF0u;
    // 0x466bf0: 0xc119dc2  jal         func_467708
    ctx->pc = 0x466BF0u;
    SET_GPR_U32(ctx, 31, 0x466BF8u);
    ctx->pc = 0x467708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467708u, 0x466BF0u, 0x466BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466BF8u;
label_466bf8:
    // 0x466bf8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x466bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_466bfc:
    // 0x466bfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x466bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x466c00: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x466C00u;
    {
        const bool branch_taken_0x466c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x466C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C00u;
        // 0x466c04: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c00) {
            ctx->pc = 0x466C1Cu;
            goto label_466c1c;
        }
    }
    ctx->pc = 0x466C08u;
    // 0x466c08: 0xc119c50  jal         func_467140
    ctx->pc = 0x466C08u;
    SET_GPR_U32(ctx, 31, 0x466C10u);
    ctx->pc = 0x466C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466C08u;
    // 0x466c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467140u, 0x466C08u, 0x466C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466C10u;
label_466c10:
    // 0x466c10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x466c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466c14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x466C14u;
    {
        const bool branch_taken_0x466c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C14u;
        // 0x466c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c14) {
            ctx->pc = 0x466C20u;
            goto label_466c20;
        }
    }
    ctx->pc = 0x466C1Cu;
label_466c1c:
    // 0x466c1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x466c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466c20:
    // 0x466c20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x466c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x466c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466c28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x466c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466c30: 0x3e00008  jr          $ra
    ctx->pc = 0x466C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C30u;
        // 0x466c34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466C38u;
}
