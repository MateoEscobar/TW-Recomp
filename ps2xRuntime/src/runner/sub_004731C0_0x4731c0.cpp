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

// Function: sub_004731C0
// Address: 0x4731c0 - 0x473240
void sub_004731C0_0x4731c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004731C0_0x4731c0");
#endif

    switch (ctx->pc) {
        case 0x4731c0u: goto label_4731c0;
        case 0x4731c4u: goto label_4731c4;
        case 0x4731c8u: goto label_4731c8;
        case 0x4731ccu: goto label_4731cc;
        case 0x4731d0u: goto label_4731d0;
        case 0x4731d4u: goto label_4731d4;
        case 0x4731d8u: goto label_4731d8;
        case 0x4731dcu: goto label_4731dc;
        case 0x4731e0u: goto label_4731e0;
        case 0x4731e4u: goto label_4731e4;
        case 0x4731e8u: goto label_4731e8;
        case 0x4731ecu: goto label_4731ec;
        case 0x4731f0u: goto label_4731f0;
        case 0x4731f4u: goto label_4731f4;
        case 0x4731f8u: goto label_4731f8;
        case 0x4731fcu: goto label_4731fc;
        case 0x473200u: goto label_473200;
        case 0x473204u: goto label_473204;
        case 0x473208u: goto label_473208;
        case 0x47320cu: goto label_47320c;
        case 0x473210u: goto label_473210;
        case 0x473214u: goto label_473214;
        case 0x473218u: goto label_473218;
        case 0x47321cu: goto label_47321c;
        case 0x473220u: goto label_473220;
        case 0x473224u: goto label_473224;
        case 0x473228u: goto label_473228;
        case 0x47322cu: goto label_47322c;
        case 0x473230u: goto label_473230;
        case 0x473234u: goto label_473234;
        case 0x473238u: goto label_473238;
        case 0x47323cu: goto label_47323c;
        default: break;
    }

    ctx->pc = 0x4731c0u;

label_4731c0:
    // 0x4731c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4731c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4731c4:
    // 0x4731c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4731c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4731c8:
    // 0x4731c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4731c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4731cc:
    // 0x4731cc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4731d0:
    // 0x4731d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4731d4:
    if (ctx->pc == 0x4731D4u) {
        ctx->pc = 0x4731D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731D0u;
        // 0x4731d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4731D8u;
        goto label_4731d8;
    }
    ctx->pc = 0x4731D0u;
    {
        const bool branch_taken_0x4731d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4731D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731D0u;
        // 0x4731d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4731d0) {
            ctx->pc = 0x473234u;
            goto label_473234;
        }
    }
    ctx->pc = 0x4731D8u;
label_4731d8:
    // 0x4731d8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x4731d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_4731dc:
    // 0x4731dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4731e0:
    if (ctx->pc == 0x4731E0u) {
        ctx->pc = 0x4731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731DCu;
        // 0x4731e0: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4731E4u;
        goto label_4731e4;
    }
    ctx->pc = 0x4731DCu;
    {
        const bool branch_taken_0x4731dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731DCu;
        // 0x4731e0: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4731dc) {
            ctx->pc = 0x473234u;
            goto label_473234;
        }
    }
    ctx->pc = 0x4731E4u;
label_4731e4:
    // 0x4731e4: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x4731e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_4731e8:
    // 0x4731e8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x4731e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4731ec:
    // 0x4731ec: 0x24e7ad18  addiu       $a3, $a3, -0x52E8
    ctx->pc = 0x4731ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946072));
label_4731f0:
    // 0x4731f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4731f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4731f4:
    // 0x4731f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4731f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4731f8:
    // 0x4731f8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4731f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4731fc:
    // 0x4731fc: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x4731fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_473200:
    // 0x473200: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x473200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_473204:
    // 0x473204: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x473204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_473208:
    // 0x473208: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x473208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_47320c:
    // 0x47320c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47320cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_473210:
    // 0x473210: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x473210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_473214:
    // 0x473214: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x473214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_473218:
    // 0x473218: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x473218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_47321c:
    // 0x47321c: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x47321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_473220:
    // 0x473220: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x473220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
label_473224:
    // 0x473224: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x473224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_473228:
    // 0x473228: 0x40f809  jalr        $v0
label_47322c:
    if (ctx->pc == 0x47322Cu) {
        ctx->pc = 0x47322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473228u;
        // 0x47322c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473230u;
        goto label_473230;
    }
    ctx->pc = 0x473228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473230u);
        ctx->pc = 0x47322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473228u;
        // 0x47322c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473228u, 0x473230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473230u;
label_473230:
    // 0x473230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473234:
    // 0x473234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x473234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_473238:
    // 0x473238: 0x3e00008  jr          $ra
label_47323c:
    if (ctx->pc == 0x47323Cu) {
        ctx->pc = 0x47323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473238u;
        // 0x47323c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473240u;
        goto label_fallthrough_0x473238;
    }
    ctx->pc = 0x473238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473238u;
        // 0x47323c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x473238:
    ctx->pc = 0x473240u;
}
