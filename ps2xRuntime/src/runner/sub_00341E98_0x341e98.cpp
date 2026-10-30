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

// Function: sub_00341E98
// Address: 0x341e98 - 0x341f00
void sub_00341E98_0x341e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341E98_0x341e98");
#endif

    switch (ctx->pc) {
        case 0x341eacu: goto label_341eac;
        case 0x341ec8u: goto label_341ec8;
        default: break;
    }

    ctx->pc = 0x341e98u;

    // 0x341e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x341e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x341ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341ea4: 0xc0d063e  jal         func_3418F8
    ctx->pc = 0x341EA4u;
    SET_GPR_U32(ctx, 31, 0x341EACu);
    ctx->pc = 0x341EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EA4u;
    // 0x341ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418F8u, 0x341EA4u, 0x341EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341EACu;
label_341eac:
    // 0x341eac: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x341eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x341eb0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x341eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x341eb4: 0x246346b0  addiu       $v1, $v1, 0x46B0
    ctx->pc = 0x341eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18096));
    // 0x341eb8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x341eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x341ebc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x341ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x341ec0: 0xc0d0456  jal         func_341158
    ctx->pc = 0x341EC0u;
    SET_GPR_U32(ctx, 31, 0x341EC8u);
    ctx->pc = 0x341EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EC0u;
    // 0x341ec4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x341EC0u, 0x341EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341EC8u;
label_341ec8:
    // 0x341ec8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x341ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x341ecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x341eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341ed0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x341ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x341ed4: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x341ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x341ed8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x341ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x341edc: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x341edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x341ee0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x341ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x341ee4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x341ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x341ee8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x341ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x341eec: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x341eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x341ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x341ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x341EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EF8u;
        // 0x341efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341F00u;
}
