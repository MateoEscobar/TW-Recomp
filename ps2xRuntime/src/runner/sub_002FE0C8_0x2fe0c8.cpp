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

// Function: sub_002FE0C8
// Address: 0x2fe0c8 - 0x2fe160
void sub_002FE0C8_0x2fe0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE0C8_0x2fe0c8");
#endif

    switch (ctx->pc) {
        case 0x2fe0f4u: goto label_2fe0f4;
        case 0x2fe0fcu: goto label_2fe0fc;
        case 0x2fe110u: goto label_2fe110;
        case 0x2fe120u: goto label_2fe120;
        case 0x2fe12cu: goto label_2fe12c;
        case 0x2fe148u: goto label_2fe148;
        default: break;
    }

    ctx->pc = 0x2fe0c8u;

    // 0x2fe0c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fe0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fe0cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fe0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fe0d0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2fe0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fe0d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2fe0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fe0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fe0dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fe0dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2fe0e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fe0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fe0e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe0ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FE0ECu;
    SET_GPR_U32(ctx, 31, 0x2FE0F4u);
    ctx->pc = 0x2FE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0ECu;
    // 0x2fe0f0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FE0ECu, 0x2FE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0F4u;
label_2fe0f4:
    // 0x2fe0f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FE0F4u;
    SET_GPR_U32(ctx, 31, 0x2FE0FCu);
    ctx->pc = 0x2FE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0F4u;
    // 0x2fe0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FE0F4u, 0x2FE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0FCu;
label_2fe0fc:
    // 0x2fe0fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fe0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe100: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FE100u;
    {
        const bool branch_taken_0x2fe100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe100) {
            ctx->pc = 0x2FE104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE100u;
            // 0x2fe104: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE14Cu;
            goto label_2fe14c;
        }
    }
    ctx->pc = 0x2FE108u;
    // 0x2fe108: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FE108u;
    SET_GPR_U32(ctx, 31, 0x2FE110u);
    ctx->pc = 0x2FE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE108u;
    // 0x2fe10c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FE108u, 0x2FE110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE110u;
label_2fe110:
    // 0x2fe110: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FE110u;
    {
        const bool branch_taken_0x2fe110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe110) {
            ctx->pc = 0x2FE114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE110u;
            // 0x2fe114: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE14Cu;
            goto label_2fe14c;
        }
    }
    ctx->pc = 0x2FE118u;
    // 0x2fe118: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FE118u;
    SET_GPR_U32(ctx, 31, 0x2FE120u);
    ctx->pc = 0x2FE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE118u;
    // 0x2fe11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FE118u, 0x2FE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE120u;
label_2fe120:
    // 0x2fe120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fe120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe124: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FE124u;
    SET_GPR_U32(ctx, 31, 0x2FE12Cu);
    ctx->pc = 0x2FE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE124u;
    // 0x2fe128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FE124u, 0x2FE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE12Cu;
label_2fe12c:
    // 0x2fe12c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE12Cu;
    {
        const bool branch_taken_0x2fe12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE12Cu;
        // 0x2fe130: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe12c) {
            ctx->pc = 0x2FE148u;
            goto label_2fe148;
        }
    }
    ctx->pc = 0x2FE134u;
    // 0x2fe134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fe134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe13c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fe13cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fe140: 0xc0bf858  jal         func_2FE160
    ctx->pc = 0x2FE140u;
    SET_GPR_U32(ctx, 31, 0x2FE148u);
    ctx->pc = 0x2FE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE140u;
    // 0x2fe144: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE160u, 0x2FE140u, 0x2FE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE148u;
label_2fe148:
    // 0x2fe148: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fe148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fe14c:
    // 0x2fe14c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fe14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe154: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2fe154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fe158: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE158u;
        // 0x2fe15c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE160u;
}
