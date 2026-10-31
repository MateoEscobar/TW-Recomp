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

// Function: sub_003131D0
// Address: 0x3131d0 - 0x313230
void sub_003131D0_0x3131d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003131D0_0x3131d0");
#endif

    switch (ctx->pc) {
        case 0x31320cu: goto label_31320c;
        default: break;
    }

    ctx->pc = 0x3131d0u;

    // 0x3131d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3131d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3131d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3131d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3131d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3131d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3131dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3131dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3131e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3131e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3131e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3131e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3131e8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3131e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x3131ec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3131ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3131f0: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x3131f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3131f4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x3131f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3131f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3131F8u;
    {
        const bool branch_taken_0x3131f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F8u;
        // 0x3131fc: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131f8) {
            ctx->pc = 0x313214u;
            goto label_313214;
        }
    }
    ctx->pc = 0x313200u;
    // 0x313200: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x313200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x313204: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x313204u;
    SET_GPR_U32(ctx, 31, 0x31320Cu);
    ctx->pc = 0x313208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313204u;
    // 0x313208: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x313204u, 0x31320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31320Cu;
label_31320c:
    // 0x31320c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x313210: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x313210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_313214:
    // 0x313214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x313214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31321c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31321cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313224: 0x3e00008  jr          $ra
    ctx->pc = 0x313224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313224u;
        // 0x313228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31322Cu;
    // 0x31322c: 0x0  nop
    ctx->pc = 0x31322cu;
    // NOP
    ctx->pc = 0x313230u;
}
