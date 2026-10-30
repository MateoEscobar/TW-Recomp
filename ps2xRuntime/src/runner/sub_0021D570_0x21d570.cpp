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

// Function: sub_0021D570
// Address: 0x21d570 - 0x21d5c0
void sub_0021D570_0x21d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D570_0x21d570");
#endif

    switch (ctx->pc) {
        case 0x21d570u: goto label_21d570;
        case 0x21d574u: goto label_21d574;
        case 0x21d578u: goto label_21d578;
        case 0x21d57cu: goto label_21d57c;
        case 0x21d580u: goto label_21d580;
        case 0x21d584u: goto label_21d584;
        case 0x21d588u: goto label_21d588;
        case 0x21d58cu: goto label_21d58c;
        case 0x21d590u: goto label_21d590;
        case 0x21d594u: goto label_21d594;
        case 0x21d598u: goto label_21d598;
        case 0x21d59cu: goto label_21d59c;
        case 0x21d5a0u: goto label_21d5a0;
        case 0x21d5a4u: goto label_21d5a4;
        case 0x21d5a8u: goto label_21d5a8;
        case 0x21d5acu: goto label_21d5ac;
        case 0x21d5b0u: goto label_21d5b0;
        case 0x21d5b4u: goto label_21d5b4;
        case 0x21d5b8u: goto label_21d5b8;
        case 0x21d5bcu: goto label_21d5bc;
        default: break;
    }

    ctx->pc = 0x21d570u;

label_21d570:
    // 0x21d570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21d574:
    // 0x21d574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d578:
    // 0x21d578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21d57c:
    // 0x21d57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d580:
    // 0x21d580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d584:
    // 0x21d584: 0x260600e8  addiu       $a2, $s0, 0xE8
    ctx->pc = 0x21d584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_21d588:
    // 0x21d588: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x21d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_21d58c:
    // 0x21d58c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_21d590:
    // 0x21d590: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x21d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_21d594:
    // 0x21d594: 0x40f809  jalr        $v0
label_21d598:
    if (ctx->pc == 0x21D598u) {
        ctx->pc = 0x21D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D594u;
        // 0x21d598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D59Cu;
        goto label_21d59c;
    }
    ctx->pc = 0x21D594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D59Cu);
        ctx->pc = 0x21D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D594u;
        // 0x21d598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D594u, 0x21D59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D59Cu;
label_21d59c:
    // 0x21d59c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21d5a0:
    if (ctx->pc == 0x21D5A0u) {
        ctx->pc = 0x21D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D59Cu;
        // 0x21d5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5A4u;
        goto label_21d5a4;
    }
    ctx->pc = 0x21D59Cu;
    {
        const bool branch_taken_0x21d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d59c) {
            ctx->pc = 0x21D5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D59Cu;
            // 0x21d5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D5ACu;
            goto label_21d5ac;
        }
    }
    ctx->pc = 0x21D5A4u;
label_21d5a4:
    // 0x21d5a4: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x21d5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
label_21d5a8:
    // 0x21d5a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21d5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21d5ac:
    // 0x21d5ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d5b0:
    // 0x21d5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d5b4:
    // 0x21d5b4: 0x3e00008  jr          $ra
label_21d5b8:
    if (ctx->pc == 0x21D5B8u) {
        ctx->pc = 0x21D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5B4u;
        // 0x21d5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5BCu;
        goto label_21d5bc;
    }
    ctx->pc = 0x21D5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5B4u;
        // 0x21d5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D5BCu;
label_21d5bc:
    // 0x21d5bc: 0x0  nop
    ctx->pc = 0x21d5bcu;
    // NOP
    ctx->pc = 0x21d5c0u;
}
