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

// Function: sub_0017F160
// Address: 0x17f160 - 0x17f1b8
void sub_0017F160_0x17f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F160_0x17f160");
#endif

    switch (ctx->pc) {
        case 0x17f18cu: goto label_17f18c;
        case 0x17f1a4u: goto label_17f1a4;
        default: break;
    }

    ctx->pc = 0x17f160u;

    // 0x17f160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f170: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F170u;
    {
        const bool branch_taken_0x17f170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F170u;
        // 0x17f174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f170) {
            ctx->pc = 0x17F1A8u;
            goto label_17f1a8;
        }
    }
    ctx->pc = 0x17F178u;
    // 0x17f178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f17c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F17Cu;
    {
        const bool branch_taken_0x17f17c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F17Cu;
        // 0x17f180: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f17c) {
            ctx->pc = 0x17F194u;
            goto label_17f194;
        }
    }
    ctx->pc = 0x17F184u;
    // 0x17f184: 0xc05f2a4  jal         func_17CA90
    ctx->pc = 0x17F184u;
    SET_GPR_U32(ctx, 31, 0x17F18Cu);
    ctx->pc = 0x17F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F184u;
    // 0x17f188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA90u, 0x17F184u, 0x17F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F18Cu;
label_17f18c:
    // 0x17f18c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17F18Cu;
    {
        const bool branch_taken_0x17f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F18Cu;
        // 0x17f190: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f18c) {
            ctx->pc = 0x17F1A8u;
            goto label_17f1a8;
        }
    }
    ctx->pc = 0x17F194u;
label_17f194:
    // 0x17f194: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17f198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f19c: 0xc05f566  jal         func_17D598
    ctx->pc = 0x17F19Cu;
    SET_GPR_U32(ctx, 31, 0x17F1A4u);
    ctx->pc = 0x17F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F19Cu;
    // 0x17f1a0: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D598u, 0x17F19Cu, 0x17F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1A4u;
label_17f1a4:
    // 0x17f1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f1a8:
    // 0x17f1a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1B0u;
        // 0x17f1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1B8u;
}
