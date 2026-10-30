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

// Function: sub_00110018
// Address: 0x110018 - 0x110078
void sub_00110018_0x110018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110018_0x110018");
#endif

    switch (ctx->pc) {
        case 0x11003cu: goto label_11003c;
        case 0x11004cu: goto label_11004c;
        default: break;
    }

    ctx->pc = 0x110018u;

    // 0x110018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11001c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110020: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x110020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x110024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x110028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11002c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110030: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x110034: 0xc044096  jal         func_110258
    ctx->pc = 0x110034u;
    SET_GPR_U32(ctx, 31, 0x11003Cu);
    ctx->pc = 0x110038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110034u;
    // 0x110038: 0x8e254268  lw          $a1, 0x4268($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x110034u, 0x11003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11003Cu;
label_11003c:
    // 0x11003c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x11003cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x110040: 0x34844268  ori         $a0, $a0, 0x4268
    ctx->pc = 0x110040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17000);
    // 0x110044: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110044u;
    SET_GPR_U32(ctx, 31, 0x11004Cu);
    ctx->pc = 0x110048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110044u;
    // 0x110048: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110044u, 0x11004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11004Cu;
label_11004c:
    // 0x11004c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11004Cu;
    {
        const bool branch_taken_0x11004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11004Cu;
        // 0x110050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11004c) {
            ctx->pc = 0x11005Cu;
            goto label_11005c;
        }
    }
    ctx->pc = 0x110054u;
    // 0x110054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110054u;
    {
        const bool branch_taken_0x110054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110054u;
        // 0x110058: 0xae22426c  sw          $v0, 0x426C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110054) {
            ctx->pc = 0x110060u;
            goto label_110060;
        }
    }
    ctx->pc = 0x11005Cu;
label_11005c:
    // 0x11005c: 0xae20426c  sw          $zero, 0x426C($s1)
    ctx->pc = 0x11005cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17004), GPR_U32(ctx, 0));
label_110060:
    // 0x110060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x110060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x110064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11006c: 0x3e00008  jr          $ra
    ctx->pc = 0x11006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11006Cu;
        // 0x110070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110074u;
    // 0x110074: 0x0  nop
    ctx->pc = 0x110074u;
    // NOP
    ctx->pc = 0x110078u;
}
