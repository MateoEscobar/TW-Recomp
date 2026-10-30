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

// Function: sub_0028C488
// Address: 0x28c488 - 0x28c4f8
void sub_0028C488_0x28c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C488_0x28c488");
#endif

    switch (ctx->pc) {
        case 0x28c488u: goto label_28c488;
        case 0x28c48cu: goto label_28c48c;
        case 0x28c490u: goto label_28c490;
        case 0x28c494u: goto label_28c494;
        case 0x28c498u: goto label_28c498;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4a0u: goto label_28c4a0;
        case 0x28c4a4u: goto label_28c4a4;
        case 0x28c4a8u: goto label_28c4a8;
        case 0x28c4acu: goto label_28c4ac;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4b8u: goto label_28c4b8;
        case 0x28c4bcu: goto label_28c4bc;
        case 0x28c4c0u: goto label_28c4c0;
        case 0x28c4c4u: goto label_28c4c4;
        case 0x28c4c8u: goto label_28c4c8;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4d4u: goto label_28c4d4;
        case 0x28c4d8u: goto label_28c4d8;
        case 0x28c4dcu: goto label_28c4dc;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c4e4u: goto label_28c4e4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c4ecu: goto label_28c4ec;
        case 0x28c4f0u: goto label_28c4f0;
        case 0x28c4f4u: goto label_28c4f4;
        default: break;
    }

    ctx->pc = 0x28c488u;

label_28c488:
    // 0x28c488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28c48c:
    // 0x28c48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c490:
    // 0x28c490: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_28c494:
    // 0x28c494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28c498:
    // 0x28c498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c49c:
    // 0x28c49c: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x28c49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_28c4a0:
    // 0x28c4a0: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28c4a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28c4a4:
    // 0x28c4a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28c4a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28c4a8:
    // 0x28c4a8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x28c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_28c4ac:
    // 0x28c4ac: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_28c4b0:
    if (ctx->pc == 0x28C4B0u) {
        ctx->pc = 0x28C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ACu;
        // 0x28c4b0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4B4u;
        goto label_28c4b4;
    }
    ctx->pc = 0x28C4ACu;
    {
        const bool branch_taken_0x28c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ACu;
        // 0x28c4b0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ac) {
            ctx->pc = 0x28C4E8u;
            goto label_28c4e8;
        }
    }
    ctx->pc = 0x28C4B4u;
label_28c4b4:
    // 0x28c4b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c4b8:
    // 0x28c4b8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28c4bc:
    // 0x28c4bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c4c0:
    // 0x28c4c0: 0xc089a76  jal         func_2269D8
label_28c4c4:
    if (ctx->pc == 0x28C4C4u) {
        ctx->pc = 0x28C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4C0u;
        // 0x28c4c4: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4C8u;
        goto label_28c4c8;
    }
    ctx->pc = 0x28C4C0u;
    SET_GPR_U32(ctx, 31, 0x28C4C8u);
    ctx->pc = 0x28C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4C0u;
    // 0x28c4c4: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x28C4C0u, 0x28C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4C8u;
label_28c4c8:
    // 0x28c4c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28c4cc:
    // 0x28c4cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c4d0:
    // 0x28c4d0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28c4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c4d4:
    // 0x28c4d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28c4d8:
    // 0x28c4d8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28c4d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28c4dc:
    // 0x28c4dc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28c4e0:
    // 0x28c4e0: 0x40f809  jalr        $v0
label_28c4e4:
    if (ctx->pc == 0x28C4E4u) {
        ctx->pc = 0x28C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4E0u;
        // 0x28c4e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4E8u;
        goto label_28c4e8;
    }
    ctx->pc = 0x28C4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C4E8u);
        ctx->pc = 0x28C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4E0u;
        // 0x28c4e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C4E0u, 0x28C4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C4E8u;
label_28c4e8:
    // 0x28c4e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28c4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c4ec:
    // 0x28c4ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28c4f0:
    // 0x28c4f0: 0x3e00008  jr          $ra
label_28c4f4:
    if (ctx->pc == 0x28C4F4u) {
        ctx->pc = 0x28C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4F0u;
        // 0x28c4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4F8u;
        goto label_fallthrough_0x28c4f0;
    }
    ctx->pc = 0x28C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4F0u;
        // 0x28c4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c4f0:
    ctx->pc = 0x28C4F8u;
}
