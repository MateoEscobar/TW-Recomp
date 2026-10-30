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

// Function: sub_001543E0
// Address: 0x1543e0 - 0x154438
void sub_001543E0_0x1543e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001543E0_0x1543e0");
#endif

    switch (ctx->pc) {
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        default: break;
    }

    ctx->pc = 0x1543e0u;

label_1543e0:
    // 0x1543e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1543e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1543e4:
    // 0x1543e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1543e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1543e8:
    // 0x1543e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1543e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1543ec:
    // 0x1543ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1543ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1543f0:
    // 0x1543f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1543f4:
    // 0x1543f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1543f8:
    if (ctx->pc == 0x1543F8u) {
        ctx->pc = 0x1543F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543F4u;
        // 0x1543f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543FCu;
        goto label_1543fc;
    }
    ctx->pc = 0x1543F4u;
    {
        const bool branch_taken_0x1543f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543F4u;
        // 0x1543f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543f4) {
            ctx->pc = 0x154424u;
            goto label_154424;
        }
    }
    ctx->pc = 0x1543FCu;
label_1543fc:
    // 0x1543fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_154400:
    // 0x154400: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_154404:
    // 0x154404: 0x24c6dc10  addiu       $a2, $a2, -0x23F0
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958096));
label_154408:
    // 0x154408: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x154408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15440c:
    // 0x15440c: 0x2407009b  addiu       $a3, $zero, 0x9B
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_154410:
    // 0x154410: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_154414:
    // 0x154414: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_154418:
    // 0x154418: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_15441c:
    // 0x15441c: 0x60f809  jalr        $v1
label_154420:
    if (ctx->pc == 0x154420u) {
        ctx->pc = 0x154420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15441Cu;
        // 0x154420: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154424u;
        goto label_154424;
    }
    ctx->pc = 0x15441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154424u);
        ctx->pc = 0x154420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15441Cu;
        // 0x154420: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15441Cu, 0x154424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154424u;
label_154424:
    // 0x154424: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x154424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_154428:
    // 0x154428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15442c:
    // 0x15442c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154430:
    // 0x154430: 0x3e00008  jr          $ra
label_154434:
    if (ctx->pc == 0x154434u) {
        ctx->pc = 0x154434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154430u;
        // 0x154434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154438u;
        goto label_fallthrough_0x154430;
    }
    ctx->pc = 0x154430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154430u;
        // 0x154434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154430:
    ctx->pc = 0x154438u;
}
