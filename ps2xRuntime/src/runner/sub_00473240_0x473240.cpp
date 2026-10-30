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

// Function: sub_00473240
// Address: 0x473240 - 0x4732a8
void sub_00473240_0x473240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473240_0x473240");
#endif

    switch (ctx->pc) {
        case 0x473240u: goto label_473240;
        case 0x473244u: goto label_473244;
        case 0x473248u: goto label_473248;
        case 0x47324cu: goto label_47324c;
        case 0x473250u: goto label_473250;
        case 0x473254u: goto label_473254;
        case 0x473258u: goto label_473258;
        case 0x47325cu: goto label_47325c;
        case 0x473260u: goto label_473260;
        case 0x473264u: goto label_473264;
        case 0x473268u: goto label_473268;
        case 0x47326cu: goto label_47326c;
        case 0x473270u: goto label_473270;
        case 0x473274u: goto label_473274;
        case 0x473278u: goto label_473278;
        case 0x47327cu: goto label_47327c;
        case 0x473280u: goto label_473280;
        case 0x473284u: goto label_473284;
        case 0x473288u: goto label_473288;
        case 0x47328cu: goto label_47328c;
        case 0x473290u: goto label_473290;
        case 0x473294u: goto label_473294;
        case 0x473298u: goto label_473298;
        case 0x47329cu: goto label_47329c;
        case 0x4732a0u: goto label_4732a0;
        case 0x4732a4u: goto label_4732a4;
        default: break;
    }

    ctx->pc = 0x473240u;

label_473240:
    // 0x473240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_473244:
    // 0x473244: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x473244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_473248:
    // 0x473248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47324c:
    // 0x47324c: 0x2508ad18  addiu       $t0, $t0, -0x52E8
    ctx->pc = 0x47324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946072));
label_473250:
    // 0x473250: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x473250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473254:
    // 0x473254: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x473254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_473258:
    // 0x473258: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x473258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_47325c:
    // 0x47325c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x47325cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_473260:
    // 0x473260: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x473260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_473264:
    // 0x473264: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x473264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_473268:
    // 0x473268: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x473268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_47326c:
    // 0x47326c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x47326cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_473270:
    // 0x473270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x473270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473274:
    // 0x473274: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x473274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_473278:
    // 0x473278: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x473278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47327c:
    // 0x47327c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x47327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_473280:
    // 0x473280: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x473280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_473284:
    // 0x473284: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_473288:
    // 0x473288: 0x8d02011c  lw          $v0, 0x11C($t0)
    ctx->pc = 0x473288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 284)));
label_47328c:
    // 0x47328c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x47328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_473290:
    // 0x473290: 0x40f809  jalr        $v0
label_473294:
    if (ctx->pc == 0x473294u) {
        ctx->pc = 0x473294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473290u;
        // 0x473294: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473298u;
        goto label_473298;
    }
    ctx->pc = 0x473290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473298u);
        ctx->pc = 0x473294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473290u;
        // 0x473294: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473290u, 0x473298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473298u;
label_473298:
    // 0x473298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47329c:
    // 0x47329c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4732a0:
    // 0x4732a0: 0x3e00008  jr          $ra
label_4732a4:
    if (ctx->pc == 0x4732A4u) {
        ctx->pc = 0x4732A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4732A0u;
        // 0x4732a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4732A8u;
        goto label_fallthrough_0x4732a0;
    }
    ctx->pc = 0x4732A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4732A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4732A0u;
        // 0x4732a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4732A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4732a0:
    ctx->pc = 0x4732A8u;
}
