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

// Function: sub_002058B0
// Address: 0x2058b0 - 0x205950
void sub_002058B0_0x2058b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002058B0_0x2058b0");
#endif

    switch (ctx->pc) {
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        default: break;
    }

    ctx->pc = 0x2058b0u;

label_2058b0:
    // 0x2058b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2058b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2058b4:
    // 0x2058b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2058b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2058b8:
    // 0x2058b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2058b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2058bc:
    // 0x2058bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2058bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2058c0:
    // 0x2058c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2058c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2058c4:
    // 0x2058c4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2058c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2058c8:
    // 0x2058c8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2058cc:
    // 0x2058cc: 0x40f809  jalr        $v0
label_2058d0:
    if (ctx->pc == 0x2058D0u) {
        ctx->pc = 0x2058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058CCu;
        // 0x2058d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058D4u;
        goto label_2058d4;
    }
    ctx->pc = 0x2058CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2058D4u);
        ctx->pc = 0x2058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058CCu;
        // 0x2058d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058CCu, 0x2058D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2058D4u;
label_2058d4:
    // 0x2058d4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2058d8:
    if (ctx->pc == 0x2058D8u) {
        ctx->pc = 0x2058D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D4u;
        // 0x2058d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058DCu;
        goto label_2058dc;
    }
    ctx->pc = 0x2058D4u;
    {
        const bool branch_taken_0x2058d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058d4) {
            ctx->pc = 0x2058D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058D4u;
            // 0x2058d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205944u;
            goto label_205944;
        }
    }
    ctx->pc = 0x2058DCu;
label_2058dc:
    // 0x2058dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2058dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2058e0:
    // 0x2058e0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2058e4:
    // 0x2058e4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2058e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2058e8:
    // 0x2058e8: 0x40f809  jalr        $v0
label_2058ec:
    if (ctx->pc == 0x2058ECu) {
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058F0u;
        goto label_2058f0;
    }
    ctx->pc = 0x2058E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2058F0u);
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058E8u, 0x2058F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2058F0u;
label_2058f0:
    // 0x2058f0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2058f4:
    if (ctx->pc == 0x2058F4u) {
        ctx->pc = 0x2058F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058F0u;
        // 0x2058f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058F8u;
        goto label_2058f8;
    }
    ctx->pc = 0x2058F0u;
    {
        const bool branch_taken_0x2058f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058f0) {
            ctx->pc = 0x2058F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058F0u;
            // 0x2058f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205944u;
            goto label_205944;
        }
    }
    ctx->pc = 0x2058F8u;
label_2058f8:
    // 0x2058f8: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2058f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2058fc:
    // 0x2058fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2058fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205900:
    // 0x205900: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_205904:
    // 0x205904: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x205904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_205908:
    // 0x205908: 0x60f809  jalr        $v1
label_20590c:
    if (ctx->pc == 0x20590Cu) {
        ctx->pc = 0x20590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205908u;
        // 0x20590c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205910u;
        goto label_205910;
    }
    ctx->pc = 0x205908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205910u);
        ctx->pc = 0x20590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205908u;
        // 0x20590c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205908u, 0x205910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205910u;
label_205910:
    // 0x205910: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_205914:
    // 0x205914: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205918:
    // 0x205918: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x205918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20591c:
    // 0x20591c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_205920:
    // 0x205920: 0x60f809  jalr        $v1
label_205924:
    if (ctx->pc == 0x205924u) {
        ctx->pc = 0x205924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205920u;
        // 0x205924: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205928u;
        goto label_205928;
    }
    ctx->pc = 0x205920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205928u);
        ctx->pc = 0x205924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205920u;
        // 0x205924: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205920u, 0x205928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205928u;
label_205928:
    // 0x205928: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x205928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20592c:
    // 0x20592c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205930:
    // 0x205930: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_205934:
    // 0x205934: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_205938:
    // 0x205938: 0x60f809  jalr        $v1
label_20593c:
    if (ctx->pc == 0x20593Cu) {
        ctx->pc = 0x20593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205938u;
        // 0x20593c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205940u;
        goto label_205940;
    }
    ctx->pc = 0x205938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205940u);
        ctx->pc = 0x20593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205938u;
        // 0x20593c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205938u, 0x205940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205940u;
label_205940:
    // 0x205940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x205940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205944:
    // 0x205944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205948:
    // 0x205948: 0x3e00008  jr          $ra
label_20594c:
    if (ctx->pc == 0x20594Cu) {
        ctx->pc = 0x20594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205948u;
        // 0x20594c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205950u;
        goto label_fallthrough_0x205948;
    }
    ctx->pc = 0x205948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205948u;
        // 0x20594c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205948:
    ctx->pc = 0x205950u;
}
