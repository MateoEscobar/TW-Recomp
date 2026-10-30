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

// Function: sub_001A9480
// Address: 0x1a9480 - 0x1a94e8
void sub_001A9480_0x1a9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9480_0x1a9480");
#endif

    switch (ctx->pc) {
        case 0x1a9480u: goto label_1a9480;
        case 0x1a9484u: goto label_1a9484;
        case 0x1a9488u: goto label_1a9488;
        case 0x1a948cu: goto label_1a948c;
        case 0x1a9490u: goto label_1a9490;
        case 0x1a9494u: goto label_1a9494;
        case 0x1a9498u: goto label_1a9498;
        case 0x1a949cu: goto label_1a949c;
        case 0x1a94a0u: goto label_1a94a0;
        case 0x1a94a4u: goto label_1a94a4;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94acu: goto label_1a94ac;
        case 0x1a94b0u: goto label_1a94b0;
        case 0x1a94b4u: goto label_1a94b4;
        case 0x1a94b8u: goto label_1a94b8;
        case 0x1a94bcu: goto label_1a94bc;
        case 0x1a94c0u: goto label_1a94c0;
        case 0x1a94c4u: goto label_1a94c4;
        case 0x1a94c8u: goto label_1a94c8;
        case 0x1a94ccu: goto label_1a94cc;
        case 0x1a94d0u: goto label_1a94d0;
        case 0x1a94d4u: goto label_1a94d4;
        case 0x1a94d8u: goto label_1a94d8;
        case 0x1a94dcu: goto label_1a94dc;
        case 0x1a94e0u: goto label_1a94e0;
        case 0x1a94e4u: goto label_1a94e4;
        default: break;
    }

    ctx->pc = 0x1a9480u;

label_1a9480:
    // 0x1a9480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a9484:
    // 0x1a9484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a9488:
    // 0x1a9488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a948c:
    // 0x1a948c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a948cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9490:
    // 0x1a9490: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1a9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1a9494:
    // 0x1a9494: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1a9498:
    if (ctx->pc == 0x1A9498u) {
        ctx->pc = 0x1A9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9494u;
        // 0x1a9498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A949Cu;
        goto label_1a949c;
    }
    ctx->pc = 0x1A9494u;
    {
        const bool branch_taken_0x1a9494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9494) {
            ctx->pc = 0x1A9498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9494u;
            // 0x1a9498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94D8u;
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A949Cu;
label_1a949c:
    // 0x1a949c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a94a0:
    // 0x1a94a0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1a94a4:
    if (ctx->pc == 0x1A94A4u) {
        ctx->pc = 0x1A94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94A0u;
        // 0x1a94a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94A8u;
        goto label_1a94a8;
    }
    ctx->pc = 0x1A94A0u;
    {
        const bool branch_taken_0x1a94a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a94a0) {
            ctx->pc = 0x1A94A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A94A0u;
            // 0x1a94a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94D8u;
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A94A8u;
label_1a94a8:
    // 0x1a94a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a94ac:
    // 0x1a94ac: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1a94acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1a94b0:
    // 0x1a94b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a94b4:
    // 0x1a94b4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a94b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a94b8:
    // 0x1a94b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a94bc:
    // 0x1a94bc: 0x40f809  jalr        $v0
label_1a94c0:
    if (ctx->pc == 0x1A94C0u) {
        ctx->pc = 0x1A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94BCu;
        // 0x1a94c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94C4u;
        goto label_1a94c4;
    }
    ctx->pc = 0x1A94BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A94C4u);
        ctx->pc = 0x1A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94BCu;
        // 0x1a94c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94BCu, 0x1A94C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A94C4u;
label_1a94c4:
    // 0x1a94c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a94c8:
    // 0x1a94c8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x1a94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_1a94cc:
    // 0x1a94cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a94d0:
    // 0x1a94d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1a94d4:
    // 0x1a94d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a94d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a94d8:
    // 0x1a94d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a94d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a94dc:
    // 0x1a94dc: 0x3e00008  jr          $ra
label_1a94e0:
    if (ctx->pc == 0x1A94E0u) {
        ctx->pc = 0x1A94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94DCu;
        // 0x1a94e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94E4u;
        goto label_1a94e4;
    }
    ctx->pc = 0x1A94DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94DCu;
        // 0x1a94e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A94E4u;
label_1a94e4:
    // 0x1a94e4: 0x0  nop
    ctx->pc = 0x1a94e4u;
    // NOP
    ctx->pc = 0x1a94e8u;
}
