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

// Function: sub_0026D078
// Address: 0x26d078 - 0x26d110
void sub_0026D078_0x26d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D078_0x26d078");
#endif

    switch (ctx->pc) {
        case 0x26d094u: goto label_26d094;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0f8u: goto label_26d0f8;
        default: break;
    }

    ctx->pc = 0x26d078u;

    // 0x26d078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26d080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26d080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d08c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26D08Cu;
    SET_GPR_U32(ctx, 31, 0x26D094u);
    ctx->pc = 0x26D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D08Cu;
    // 0x26d090: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D08Cu, 0x26D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D094u;
label_26d094:
    // 0x26d094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d098: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D098u;
    {
        const bool branch_taken_0x26d098 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D098u;
        // 0x26d09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d098) {
            ctx->pc = 0x26D0B4u;
            goto label_26d0b4;
        }
    }
    ctx->pc = 0x26D0A0u;
    // 0x26d0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0a4: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x26D0A4u;
    SET_GPR_U32(ctx, 31, 0x26D0ACu);
    ctx->pc = 0x26D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0A4u;
    // 0x26d0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x26D0A4u, 0x26D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0ACu;
label_26d0ac:
    // 0x26d0ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26D0ACu;
    {
        const bool branch_taken_0x26d0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0ACu;
        // 0x26d0b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0ac) {
            ctx->pc = 0x26D0FCu;
            goto label_26d0fc;
        }
    }
    ctx->pc = 0x26D0B4u;
label_26d0b4:
    // 0x26d0b4: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x26D0B4u;
    SET_GPR_U32(ctx, 31, 0x26D0BCu);
    ctx->pc = 0x26D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0B4u;
    // 0x26d0b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x26D0B4u, 0x26D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0BCu;
label_26d0bc:
    // 0x26d0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0c0: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x26D0C0u;
    SET_GPR_U32(ctx, 31, 0x26D0C8u);
    ctx->pc = 0x26D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0C0u;
    // 0x26d0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x26D0C0u, 0x26D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0C8u;
label_26d0c8:
    // 0x26d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0d0: 0xc08b1cc  jal         func_22C730
    ctx->pc = 0x26D0D0u;
    SET_GPR_U32(ctx, 31, 0x26D0D8u);
    ctx->pc = 0x26D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0D0u;
    // 0x26d0d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x26D0D0u, 0x26D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0D8u;
label_26d0d8:
    // 0x26d0d8: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26d0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x26d0dc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26d0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26d0e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0ec: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x26d0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x26d0f0: 0xc09db66  jal         func_276D98
    ctx->pc = 0x26D0F0u;
    SET_GPR_U32(ctx, 31, 0x26D0F8u);
    ctx->pc = 0x26D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0F0u;
    // 0x26d0f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26D0F0u, 0x26D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0F8u;
label_26d0f8:
    // 0x26d0f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d0fc:
    // 0x26d0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d104: 0x3e00008  jr          $ra
    ctx->pc = 0x26D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D104u;
        // 0x26d108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D10Cu;
    // 0x26d10c: 0x0  nop
    ctx->pc = 0x26d10cu;
    // NOP
    ctx->pc = 0x26d110u;
}
