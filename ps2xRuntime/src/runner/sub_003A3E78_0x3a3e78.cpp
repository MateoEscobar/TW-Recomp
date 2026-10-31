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

// Function: sub_003A3E78
// Address: 0x3a3e78 - 0x3a3ee4
void sub_003A3E78_0x3a3e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3E78_0x3a3e78");
#endif

    switch (ctx->pc) {
        case 0x3a3eacu: goto label_3a3eac;
        default: break;
    }

    ctx->pc = 0x3a3e78u;

    // 0x3a3e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3e7c: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x3a3e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a3e80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A3E80u;
    {
        const bool branch_taken_0x3a3e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E80u;
        // 0x3a3e84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e80) {
            ctx->pc = 0x3A3EF0u;
            return;
        }
    }
    ctx->pc = 0x3A3E88u;
    // 0x3a3e88: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a3e8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a3e90: 0x24421a70  addiu       $v0, $v0, 0x1A70
    ctx->pc = 0x3a3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6768));
    // 0x3a3e94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a3e98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3e9c: 0x800008  jr          $a0
    ctx->pc = 0x3A3E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A3EA4u: goto label_3a3ea4;
            case 0x3A3EB4u: goto label_3a3eb4;
            case 0x3A3EBCu: goto label_3a3ebc;
            case 0x3A3EC8u: goto label_3a3ec8;
            case 0x3A3ED8u: goto label_3a3ed8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3E9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A3EA4u;
label_3a3ea4:
    // 0x3a3ea4: 0xc0e7284  jal         func_39CA10
    ctx->pc = 0x3A3EA4u;
    SET_GPR_U32(ctx, 31, 0x3A3EACu);
    ctx->pc = 0x39CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA10u, 0x3A3EA4u, 0x3A3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3EACu;
label_3a3eac:
    // 0x3a3eac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A3EACu;
    {
        const bool branch_taken_0x3a3eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EACu;
        // 0x3a3eb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3eac) {
            ctx->pc = 0x3A3EF8u;
            return;
        }
    }
    ctx->pc = 0x3A3EB4u;
label_3a3eb4:
    // 0x3a3eb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A3EB4u;
    {
        const bool branch_taken_0x3a3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EB4u;
        // 0x3a3eb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3eb4) {
            ctx->pc = 0x3A3EF4u;
            return;
        }
    }
    ctx->pc = 0x3A3EBCu;
label_3a3ebc:
    // 0x3a3ebc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a3ec0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A3EC0u;
    {
        const bool branch_taken_0x3a3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EC0u;
        // 0x3a3ec4: 0x8c622db0  lw          $v0, 0x2DB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ec0) {
            ctx->pc = 0x3A3EF4u;
            return;
        }
    }
    ctx->pc = 0x3A3EC8u;
label_3a3ec8:
    // 0x3a3ec8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3ecc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3a3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a3ed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3ED0u;
    {
        const bool branch_taken_0x3a3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3ED0u;
        // 0x3a3ed4: 0x84620454  lh          $v0, 0x454($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ed0) {
            ctx->pc = 0x3A3EF4u;
            return;
        }
    }
    ctx->pc = 0x3A3ED8u;
label_3a3ed8:
    // 0x3a3ed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a3edc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3EDCu;
    {
        const bool branch_taken_0x3a3edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EDCu;
        // 0x3a3ee0: 0x8c622de0  lw          $v0, 0x2DE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3edc) {
            ctx->pc = 0x3A3EF4u;
            return;
        }
    }
    ctx->pc = 0x3A3EE4u;
}
