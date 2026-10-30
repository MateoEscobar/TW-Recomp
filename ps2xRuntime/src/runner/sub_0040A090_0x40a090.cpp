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

// Function: sub_0040A090
// Address: 0x40a090 - 0x40a128
void sub_0040A090_0x40a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A090_0x40a090");
#endif

    switch (ctx->pc) {
        case 0x40a0c0u: goto label_40a0c0;
        case 0x40a0ccu: goto label_40a0cc;
        case 0x40a0dcu: goto label_40a0dc;
        case 0x40a0e8u: goto label_40a0e8;
        case 0x40a0f8u: goto label_40a0f8;
        case 0x40a104u: goto label_40a104;
        case 0x40a110u: goto label_40a110;
        default: break;
    }

    ctx->pc = 0x40a090u;

    // 0x40a090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40a094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40a098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40a09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40a0a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40a0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a0ac: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x40A0ACu;
    {
        const bool branch_taken_0x40a0ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A0ACu;
        // 0x40a0b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a0ac) {
            ctx->pc = 0x40A0D4u;
            goto label_40a0d4;
        }
    }
    ctx->pc = 0x40A0B4u;
    // 0x40a0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0b8: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40A0B8u;
    SET_GPR_U32(ctx, 31, 0x40A0C0u);
    ctx->pc = 0x40A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0B8u;
    // 0x40a0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40A0B8u, 0x40A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A0C0u;
label_40a0c0:
    // 0x40a0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0c4: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x40A0C4u;
    SET_GPR_U32(ctx, 31, 0x40A0CCu);
    ctx->pc = 0x40A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0C4u;
    // 0x40a0c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x40A0C4u, 0x40A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A0CCu;
label_40a0cc:
    // 0x40a0cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x40A0CCu;
    {
        const bool branch_taken_0x40a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A0CCu;
        // 0x40a0d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a0cc) {
            ctx->pc = 0x40A114u;
            goto label_40a114;
        }
    }
    ctx->pc = 0x40A0D4u;
label_40a0d4:
    // 0x40a0d4: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x40A0D4u;
    SET_GPR_U32(ctx, 31, 0x40A0DCu);
    ctx->pc = 0x40A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0D4u;
    // 0x40a0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x40A0D4u, 0x40A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A0DCu;
label_40a0dc:
    // 0x40a0dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0e0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40A0E0u;
    SET_GPR_U32(ctx, 31, 0x40A0E8u);
    ctx->pc = 0x40A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0E0u;
    // 0x40a0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40A0E0u, 0x40A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A0E8u;
label_40a0e8:
    // 0x40a0e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0f0: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40A0F0u;
    SET_GPR_U32(ctx, 31, 0x40A0F8u);
    ctx->pc = 0x40A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0F0u;
    // 0x40a0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40A0F0u, 0x40A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A0F8u;
label_40a0f8:
    // 0x40a0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0fc: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40A0FCu;
    SET_GPR_U32(ctx, 31, 0x40A104u);
    ctx->pc = 0x40A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A0FCu;
    // 0x40a100: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A0FCu, 0x40A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A104u;
label_40a104:
    // 0x40a104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a108: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A108u;
    SET_GPR_U32(ctx, 31, 0x40A110u);
    ctx->pc = 0x40A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A108u;
    // 0x40a10c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A108u, 0x40A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A110u;
label_40a110:
    // 0x40a110: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40a110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40a114:
    // 0x40a114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a118: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40a118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a120: 0x3e00008  jr          $ra
    ctx->pc = 0x40A120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A120u;
        // 0x40a124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A128u;
}
