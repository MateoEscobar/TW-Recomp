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

// Function: sub_002FDAE8
// Address: 0x2fdae8 - 0x2fdb28
void sub_002FDAE8_0x2fdae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDAE8_0x2fdae8");
#endif

    switch (ctx->pc) {
        case 0x2fdb08u: goto label_2fdb08;
        default: break;
    }

    ctx->pc = 0x2fdae8u;

    // 0x2fdae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdaec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FDAECu;
    {
        const bool branch_taken_0x2fdaec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAECu;
        // 0x2fdaf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdaec) {
            ctx->pc = 0x2FDB18u;
            goto label_2fdb18;
        }
    }
    ctx->pc = 0x2FDAF4u;
    // 0x2fdaf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdaf8: 0x3c0505c0  lui         $a1, 0x5C0
    ctx->pc = 0x2fdaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
    // 0x2fdafc: 0x34a5221f  ori         $a1, $a1, 0x221F
    ctx->pc = 0x2fdafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    // 0x2fdb00: 0xc089998  jal         func_226660
    ctx->pc = 0x2FDB00u;
    SET_GPR_U32(ctx, 31, 0x2FDB08u);
    ctx->pc = 0x2FDB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB00u;
    // 0x2fdb04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FDB00u, 0x2FDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB08u;
label_2fdb08:
    // 0x2fdb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fdb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdb0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdb10: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDB10u;
    {
        const bool branch_taken_0x2fdb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB10u;
        // 0x2fdb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb10) {
            ctx->pc = 0x2FDB1Cu;
            goto label_2fdb1c;
        }
    }
    ctx->pc = 0x2FDB18u;
label_2fdb18:
    // 0x2fdb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdb1c:
    // 0x2fdb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdb20: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB20u;
        // 0x2fdb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB28u;
}
