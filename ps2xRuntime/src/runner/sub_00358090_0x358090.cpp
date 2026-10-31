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

// Function: sub_00358090
// Address: 0x358090 - 0x358128
void sub_00358090_0x358090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358090_0x358090");
#endif

    switch (ctx->pc) {
        case 0x3580b0u: goto label_3580b0;
        case 0x3580c8u: goto label_3580c8;
        case 0x3580dcu: goto label_3580dc;
        case 0x3580f0u: goto label_3580f0;
        case 0x358100u: goto label_358100;
        case 0x358108u: goto label_358108;
        default: break;
    }

    ctx->pc = 0x358090u;

    // 0x358090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358098: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35809c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35809cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3580a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3580a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3580a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3580a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3580a8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x3580A8u;
    SET_GPR_U32(ctx, 31, 0x3580B0u);
    ctx->pc = 0x3580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580A8u;
    // 0x3580ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x3580A8u, 0x3580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580B0u;
label_3580b0:
    // 0x3580b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3580b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3580b4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3580B4u;
    {
        const bool branch_taken_0x3580b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3580B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580B4u;
        // 0x3580b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580b4) {
            ctx->pc = 0x3580CCu;
            goto label_3580cc;
        }
    }
    ctx->pc = 0x3580BCu;
    // 0x3580bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3580c0: 0xc10241a  jal         func_409068
    ctx->pc = 0x3580C0u;
    SET_GPR_U32(ctx, 31, 0x3580C8u);
    ctx->pc = 0x3580C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580C0u;
    // 0x3580c4: 0x24a591d0  addiu       $a1, $a1, -0x6E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3580C0u, 0x3580C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580C8u;
label_3580c8:
    // 0x3580c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3580c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3580cc:
    // 0x3580cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3580ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3580d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3580d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3580d4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3580D4u;
    SET_GPR_U32(ctx, 31, 0x3580DCu);
    ctx->pc = 0x3580D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580D4u;
    // 0x3580d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3580D4u, 0x3580DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580DCu;
label_3580dc:
    // 0x3580dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3580DCu;
    {
        const bool branch_taken_0x3580dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3580E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580DCu;
        // 0x3580e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580dc) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x3580E4u;
    // 0x3580e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3580e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3580e8: 0xc10241a  jal         func_409068
    ctx->pc = 0x3580E8u;
    SET_GPR_U32(ctx, 31, 0x3580F0u);
    ctx->pc = 0x3580ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580E8u;
    // 0x3580ec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3580E8u, 0x3580F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580F0u;
label_3580f0:
    // 0x3580f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3580f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3580f4:
    // 0x3580f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3580f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3580f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3580F8u;
    SET_GPR_U32(ctx, 31, 0x358100u);
    ctx->pc = 0x3580FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580F8u;
    // 0x3580fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3580F8u, 0x358100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358100u;
label_358100:
    // 0x358100: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358100u;
    SET_GPR_U32(ctx, 31, 0x358108u);
    ctx->pc = 0x358104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358100u;
    // 0x358104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358100u, 0x358108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358108u;
label_358108:
    // 0x358108: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x358108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35810c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35810cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35811c: 0x3e00008  jr          $ra
    ctx->pc = 0x35811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35811Cu;
        // 0x358120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35811Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358124u;
    // 0x358124: 0x0  nop
    ctx->pc = 0x358124u;
    // NOP
    ctx->pc = 0x358128u;
}
