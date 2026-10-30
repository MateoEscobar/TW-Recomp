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

// Function: sub_0043DAD8
// Address: 0x43dad8 - 0x43db40
void sub_0043DAD8_0x43dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DAD8_0x43dad8");
#endif

    switch (ctx->pc) {
        case 0x43db08u: goto label_43db08;
        case 0x43db10u: goto label_43db10;
        case 0x43db28u: goto label_43db28;
        default: break;
    }

    ctx->pc = 0x43dad8u;

    // 0x43dad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43dadc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43dae0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43dae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43dae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43daec: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43daecu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43daf0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43daf4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43daf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43daf8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DAF8u;
    {
        const bool branch_taken_0x43daf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43daf8) {
            ctx->pc = 0x43DB08u;
            goto label_43db08;
        }
    }
    ctx->pc = 0x43DB00u;
    // 0x43db00: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43DB00u;
    SET_GPR_U32(ctx, 31, 0x43DB08u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43DB00u, 0x43DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB08u;
label_43db08:
    // 0x43db08: 0xc10f37c  jal         func_43CDF0
    ctx->pc = 0x43DB08u;
    SET_GPR_U32(ctx, 31, 0x43DB10u);
    ctx->pc = 0x43DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DB08u;
    // 0x43db0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDF0u, 0x43DB08u, 0x43DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB10u;
label_43db10:
    // 0x43db10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43db10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43db14: 0xf  sync
    ctx->pc = 0x43db14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43db18: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DB18u;
    {
        const bool branch_taken_0x43db18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB18u;
        // 0x43db1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db18) {
            ctx->pc = 0x43DB2Cu;
            goto label_43db2c;
        }
    }
    ctx->pc = 0x43DB20u;
    // 0x43db20: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43DB20u;
    SET_GPR_U32(ctx, 31, 0x43DB28u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43DB20u, 0x43DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB28u;
label_43db28:
    // 0x43db28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43db28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43db2c:
    // 0x43db2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43db30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43db30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43db34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43db34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43db38: 0x3e00008  jr          $ra
    ctx->pc = 0x43DB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB38u;
        // 0x43db3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DB40u;
}
