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

// Function: sub_001C27E8
// Address: 0x1c27e8 - 0x1c2838
void sub_001C27E8_0x1c27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C27E8_0x1c27e8");
#endif

    switch (ctx->pc) {
        case 0x1c2810u: goto label_1c2810;
        case 0x1c2820u: goto label_1c2820;
        default: break;
    }

    ctx->pc = 0x1c27e8u;

    // 0x1c27e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c27e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c27ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c27f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c27f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c27fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c27fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2800: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c2804: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1c2804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1c2808: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C2808u;
    SET_GPR_U32(ctx, 31, 0x1C2810u);
    ctx->pc = 0x1C280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2808u;
    // 0x1c280c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C2808u, 0x1C2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2810u;
label_1c2810:
    // 0x1c2810: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2810u;
    {
        const bool branch_taken_0x1c2810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2810) {
            ctx->pc = 0x1C2814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2810u;
            // 0x1c2814: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2824u;
            goto label_1c2824;
        }
    }
    ctx->pc = 0x1C2818u;
    // 0x1c2818: 0xc06d848  jal         func_1B6120
    ctx->pc = 0x1C2818u;
    SET_GPR_U32(ctx, 31, 0x1C2820u);
    ctx->pc = 0x1C281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2818u;
    // 0x1c281c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6120u, 0x1C2818u, 0x1C2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2820u;
label_1c2820:
    // 0x1c2820: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c2820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_1c2824:
    // 0x1c2824: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c282c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2830: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2830u;
        // 0x1c2834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2838u;
}
