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

// Function: sub_0043DBA8
// Address: 0x43dba8 - 0x43dc10
void sub_0043DBA8_0x43dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DBA8_0x43dba8");
#endif

    switch (ctx->pc) {
        case 0x43dbd8u: goto label_43dbd8;
        case 0x43dbe0u: goto label_43dbe0;
        case 0x43dbf8u: goto label_43dbf8;
        default: break;
    }

    ctx->pc = 0x43dba8u;

    // 0x43dba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43dbac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43dbb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43dbb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43dbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43dbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43dbbc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43dbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43dbc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43dbc4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43dbc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43dbc8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DBC8u;
    {
        const bool branch_taken_0x43dbc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dbc8) {
            ctx->pc = 0x43DBD8u;
            goto label_43dbd8;
        }
    }
    ctx->pc = 0x43DBD0u;
    // 0x43dbd0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43DBD0u;
    SET_GPR_U32(ctx, 31, 0x43DBD8u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43DBD0u, 0x43DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DBD8u;
label_43dbd8:
    // 0x43dbd8: 0xc10f384  jal         func_43CE10
    ctx->pc = 0x43DBD8u;
    SET_GPR_U32(ctx, 31, 0x43DBE0u);
    ctx->pc = 0x43DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DBD8u;
    // 0x43dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CE10u, 0x43DBD8u, 0x43DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DBE0u;
label_43dbe0:
    // 0x43dbe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43dbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dbe4: 0xf  sync
    ctx->pc = 0x43dbe4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43dbe8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DBE8u;
    {
        const bool branch_taken_0x43dbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DBE8u;
        // 0x43dbec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dbe8) {
            ctx->pc = 0x43DBFCu;
            goto label_43dbfc;
        }
    }
    ctx->pc = 0x43DBF0u;
    // 0x43dbf0: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43DBF0u;
    SET_GPR_U32(ctx, 31, 0x43DBF8u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43DBF0u, 0x43DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DBF8u;
label_43dbf8:
    // 0x43dbf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43dbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43dbfc:
    // 0x43dbfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43dbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dc00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43dc00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dc04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43dc04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x43DC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC08u;
        // 0x43dc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DC10u;
}
