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

// Function: sub_003A25B8
// Address: 0x3a25b8 - 0x3a2600
void sub_003A25B8_0x3a25b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A25B8_0x3a25b8");
#endif

    switch (ctx->pc) {
        case 0x3a25b8u: goto label_3a25b8;
        case 0x3a25bcu: goto label_3a25bc;
        case 0x3a25c0u: goto label_3a25c0;
        case 0x3a25c4u: goto label_3a25c4;
        case 0x3a25c8u: goto label_3a25c8;
        case 0x3a25ccu: goto label_3a25cc;
        case 0x3a25d0u: goto label_3a25d0;
        case 0x3a25d4u: goto label_3a25d4;
        case 0x3a25d8u: goto label_3a25d8;
        case 0x3a25dcu: goto label_3a25dc;
        case 0x3a25e0u: goto label_3a25e0;
        case 0x3a25e4u: goto label_3a25e4;
        case 0x3a25e8u: goto label_3a25e8;
        case 0x3a25ecu: goto label_3a25ec;
        case 0x3a25f0u: goto label_3a25f0;
        case 0x3a25f4u: goto label_3a25f4;
        case 0x3a25f8u: goto label_3a25f8;
        case 0x3a25fcu: goto label_3a25fc;
        default: break;
    }

    ctx->pc = 0x3a25b8u;

label_3a25b8:
    // 0x3a25b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a25b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a25bc:
    // 0x3a25bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a25bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a25c0:
    // 0x3a25c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a25c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a25c4:
    // 0x3a25c4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3a25c8:
    if (ctx->pc == 0x3A25C8u) {
        ctx->pc = 0x3A25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25C4u;
        // 0x3a25c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A25CCu;
        goto label_3a25cc;
    }
    ctx->pc = 0x3A25C4u;
    {
        const bool branch_taken_0x3a25c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25C4u;
        // 0x3a25c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25c4) {
            ctx->pc = 0x3A25ECu;
            goto label_3a25ec;
        }
    }
    ctx->pc = 0x3A25CCu;
label_3a25cc:
    // 0x3a25cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a25d0:
    // 0x3a25d0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a25d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a25d4:
    // 0x3a25d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a25d8:
    // 0x3a25d8: 0x40f809  jalr        $v0
label_3a25dc:
    if (ctx->pc == 0x3A25DCu) {
        ctx->pc = 0x3A25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25D8u;
        // 0x3a25dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A25E0u;
        goto label_3a25e0;
    }
    ctx->pc = 0x3A25D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A25E0u);
        ctx->pc = 0x3A25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25D8u;
        // 0x3a25dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A25D8u, 0x3A25E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A25E0u;
label_3a25e0:
    // 0x3a25e0: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x3a25e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a25e4:
    // 0x3a25e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3a25e8:
    if (ctx->pc == 0x3A25E8u) {
        ctx->pc = 0x3A25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25E4u;
        // 0x3a25e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A25ECu;
        goto label_3a25ec;
    }
    ctx->pc = 0x3A25E4u;
    {
        const bool branch_taken_0x3a25e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25E4u;
        // 0x3a25e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25e4) {
            ctx->pc = 0x3A25F0u;
            goto label_3a25f0;
        }
    }
    ctx->pc = 0x3A25ECu;
label_3a25ec:
    // 0x3a25ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a25ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a25f0:
    // 0x3a25f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a25f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a25f4:
    // 0x3a25f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a25f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a25f8:
    // 0x3a25f8: 0x3e00008  jr          $ra
label_3a25fc:
    if (ctx->pc == 0x3A25FCu) {
        ctx->pc = 0x3A25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25F8u;
        // 0x3a25fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2600u;
        goto label_fallthrough_0x3a25f8;
    }
    ctx->pc = 0x3A25F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25F8u;
        // 0x3a25fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A25F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a25f8:
    ctx->pc = 0x3A2600u;
}
