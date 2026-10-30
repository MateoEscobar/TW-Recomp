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

// Function: sub_002DF8B8
// Address: 0x2df8b8 - 0x2df908
void sub_002DF8B8_0x2df8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF8B8_0x2df8b8");
#endif

    switch (ctx->pc) {
        case 0x2df8b8u: goto label_2df8b8;
        case 0x2df8bcu: goto label_2df8bc;
        case 0x2df8c0u: goto label_2df8c0;
        case 0x2df8c4u: goto label_2df8c4;
        case 0x2df8c8u: goto label_2df8c8;
        case 0x2df8ccu: goto label_2df8cc;
        case 0x2df8d0u: goto label_2df8d0;
        case 0x2df8d4u: goto label_2df8d4;
        case 0x2df8d8u: goto label_2df8d8;
        case 0x2df8dcu: goto label_2df8dc;
        case 0x2df8e0u: goto label_2df8e0;
        case 0x2df8e4u: goto label_2df8e4;
        case 0x2df8e8u: goto label_2df8e8;
        case 0x2df8ecu: goto label_2df8ec;
        case 0x2df8f0u: goto label_2df8f0;
        case 0x2df8f4u: goto label_2df8f4;
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df8fcu: goto label_2df8fc;
        case 0x2df900u: goto label_2df900;
        case 0x2df904u: goto label_2df904;
        default: break;
    }

    ctx->pc = 0x2df8b8u;

label_2df8b8:
    // 0x2df8b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2df8bc:
    // 0x2df8bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2df8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2df8c0:
    // 0x2df8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df8c4:
    // 0x2df8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2df8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2df8c8:
    // 0x2df8c8: 0xc0e4060  jal         func_390180
label_2df8cc:
    if (ctx->pc == 0x2DF8CCu) {
        ctx->pc = 0x2DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8C8u;
        // 0x2df8cc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF8D0u;
        goto label_2df8d0;
    }
    ctx->pc = 0x2DF8C8u;
    SET_GPR_U32(ctx, 31, 0x2DF8D0u);
    ctx->pc = 0x2DF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8C8u;
    // 0x2df8cc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DF8C8u, 0x2DF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8D0u;
label_2df8d0:
    // 0x2df8d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2df8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df8d4:
    // 0x2df8d4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_2df8d8:
    if (ctx->pc == 0x2DF8D8u) {
        ctx->pc = 0x2DF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8D4u;
        // 0x2df8d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF8DCu;
        goto label_2df8dc;
    }
    ctx->pc = 0x2DF8D4u;
    {
        const bool branch_taken_0x2df8d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8D4u;
        // 0x2df8d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8d4) {
            ctx->pc = 0x2DF8F8u;
            goto label_2df8f8;
        }
    }
    ctx->pc = 0x2DF8DCu;
label_2df8dc:
    // 0x2df8dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2df8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2df8e0:
    // 0x2df8e0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2df8e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2df8e4:
    // 0x2df8e4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2df8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2df8e8:
    // 0x2df8e8: 0x60f809  jalr        $v1
label_2df8ec:
    if (ctx->pc == 0x2DF8ECu) {
        ctx->pc = 0x2DF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8E8u;
        // 0x2df8ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF8F0u;
        goto label_2df8f0;
    }
    ctx->pc = 0x2DF8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DF8F0u);
        ctx->pc = 0x2DF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8E8u;
        // 0x2df8ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF8E8u, 0x2DF8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF8F0u;
label_2df8f0:
    // 0x2df8f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2df8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df8f4:
    // 0x2df8f4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2df8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2df8f8:
    // 0x2df8f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2df8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df8fc:
    // 0x2df8fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2df900:
    // 0x2df900: 0x3e00008  jr          $ra
label_2df904:
    if (ctx->pc == 0x2DF904u) {
        ctx->pc = 0x2DF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF900u;
        // 0x2df904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF908u;
        goto label_fallthrough_0x2df900;
    }
    ctx->pc = 0x2DF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF900u;
        // 0x2df904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2df900:
    ctx->pc = 0x2DF908u;
}
