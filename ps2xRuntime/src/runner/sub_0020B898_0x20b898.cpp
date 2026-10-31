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

// Function: sub_0020B898
// Address: 0x20b898 - 0x20b8f0
void sub_0020B898_0x20b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B898_0x20b898");
#endif

    switch (ctx->pc) {
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        default: break;
    }

    ctx->pc = 0x20b898u;

label_20b898:
    // 0x20b898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b89c:
    // 0x20b89c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20b8a0:
    // 0x20b8a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b8a4:
    // 0x20b8a4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20b8a8:
    // 0x20b8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b8ac:
    // 0x20b8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b8b0:
    // 0x20b8b0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20b8b4:
    // 0x20b8b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20b8b8:
    // 0x20b8b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20b8bc:
    // 0x20b8bc: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20b8c0:
    // 0x20b8c0: 0xa0f809  jalr        $a1
label_20b8c4:
    if (ctx->pc == 0x20B8C4u) {
        ctx->pc = 0x20B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8C0u;
        // 0x20b8c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8C8u;
        goto label_20b8c8;
    }
    ctx->pc = 0x20B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20B8C8u);
        ctx->pc = 0x20B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8C0u;
        // 0x20b8c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B8C0u, 0x20B8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B8C8u;
label_20b8c8:
    // 0x20b8c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20b8cc:
    // 0x20b8cc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20b8d0:
    // 0x20b8d0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20b8d4:
    // 0x20b8d4: 0x60f809  jalr        $v1
label_20b8d8:
    if (ctx->pc == 0x20B8D8u) {
        ctx->pc = 0x20B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8D4u;
        // 0x20b8d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8DCu;
        goto label_20b8dc;
    }
    ctx->pc = 0x20B8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B8DCu);
        ctx->pc = 0x20B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8D4u;
        // 0x20b8d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B8D4u, 0x20B8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B8DCu;
label_20b8dc:
    // 0x20b8dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20b8e0:
    // 0x20b8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b8e4:
    // 0x20b8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b8e8:
    // 0x20b8e8: 0x3e00008  jr          $ra
label_20b8ec:
    if (ctx->pc == 0x20B8ECu) {
        ctx->pc = 0x20B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8E8u;
        // 0x20b8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8F0u;
        goto label_fallthrough_0x20b8e8;
    }
    ctx->pc = 0x20B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8E8u;
        // 0x20b8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b8e8:
    ctx->pc = 0x20B8F0u;
}
