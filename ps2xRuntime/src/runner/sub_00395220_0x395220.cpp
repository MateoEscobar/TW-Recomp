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

// Function: sub_00395220
// Address: 0x395220 - 0x395268
void sub_00395220_0x395220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395220_0x395220");
#endif

    switch (ctx->pc) {
        case 0x395248u: goto label_395248;
        case 0x395258u: goto label_395258;
        default: break;
    }

    ctx->pc = 0x395220u;

    // 0x395220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x395224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x395228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39522c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395230: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x395230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x395234: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x395234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x395238: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x395238u;
    {
        const bool branch_taken_0x395238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395238) {
            ctx->pc = 0x39523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395238u;
            // 0x39523c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39525Cu;
            goto label_39525c;
        }
    }
    ctx->pc = 0x395240u;
    // 0x395240: 0xc0e85ae  jal         func_3A16B8
    ctx->pc = 0x395240u;
    SET_GPR_U32(ctx, 31, 0x395248u);
    ctx->pc = 0x3A16B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A16B8u, 0x395240u, 0x395248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395248u;
label_395248:
    // 0x395248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39524c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395250: 0xc0e54cc  jal         func_395330
    ctx->pc = 0x395250u;
    SET_GPR_U32(ctx, 31, 0x395258u);
    ctx->pc = 0x395254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395250u;
    // 0x395254: 0xa2020108  sb          $v0, 0x108($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395330u, 0x395250u, 0x395258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395258u;
label_395258:
    // 0x395258: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x395258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39525c:
    // 0x39525c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395260: 0x3e00008  jr          $ra
    ctx->pc = 0x395260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395260u;
        // 0x395264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395268u;
}
