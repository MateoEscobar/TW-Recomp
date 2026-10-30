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

// Function: sub_0043DB40
// Address: 0x43db40 - 0x43dba8
void sub_0043DB40_0x43db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DB40_0x43db40");
#endif

    switch (ctx->pc) {
        case 0x43db70u: goto label_43db70;
        case 0x43db78u: goto label_43db78;
        case 0x43db90u: goto label_43db90;
        default: break;
    }

    ctx->pc = 0x43db40u;

    // 0x43db40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43db44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43db48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43db4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43db4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43db50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43db54: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43db54u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43db58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43db5c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43db5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43db60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DB60u;
    {
        const bool branch_taken_0x43db60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db60) {
            ctx->pc = 0x43DB70u;
            goto label_43db70;
        }
    }
    ctx->pc = 0x43DB68u;
    // 0x43db68: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43DB68u;
    SET_GPR_U32(ctx, 31, 0x43DB70u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43DB68u, 0x43DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB70u;
label_43db70:
    // 0x43db70: 0xc10f378  jal         func_43CDE0
    ctx->pc = 0x43DB70u;
    SET_GPR_U32(ctx, 31, 0x43DB78u);
    ctx->pc = 0x43DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DB70u;
    // 0x43db74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDE0u, 0x43DB70u, 0x43DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB78u;
label_43db78:
    // 0x43db78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43db78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43db7c: 0xf  sync
    ctx->pc = 0x43db7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43db80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DB80u;
    {
        const bool branch_taken_0x43db80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB80u;
        // 0x43db84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db80) {
            ctx->pc = 0x43DB94u;
            goto label_43db94;
        }
    }
    ctx->pc = 0x43DB88u;
    // 0x43db88: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43DB88u;
    SET_GPR_U32(ctx, 31, 0x43DB90u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43DB88u, 0x43DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DB90u;
label_43db90:
    // 0x43db90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43db90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43db94:
    // 0x43db94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43db94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43db98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43db98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43db9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43db9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x43DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DBA0u;
        // 0x43dba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DBA8u;
}
