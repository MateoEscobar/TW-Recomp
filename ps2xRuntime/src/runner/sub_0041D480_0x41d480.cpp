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

// Function: sub_0041D480
// Address: 0x41d480 - 0x41d4f8
void sub_0041D480_0x41d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D480_0x41d480");
#endif

    switch (ctx->pc) {
        case 0x41d4b8u: goto label_41d4b8;
        case 0x41d4c0u: goto label_41d4c0;
        case 0x41d4d4u: goto label_41d4d4;
        default: break;
    }

    ctx->pc = 0x41d480u;

    // 0x41d480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41d484: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d488: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41d48c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41d48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41d490: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41d490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d494: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x41d494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x41d498: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41d498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d49c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x41d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x41d4a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x41d4a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x41d4a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41d4a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41d4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d4b0: 0xc04435e  jal         func_110D78
    ctx->pc = 0x41D4B0u;
    SET_GPR_U32(ctx, 31, 0x41D4B8u);
    ctx->pc = 0x41D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D4B0u;
    // 0x41d4b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D78u, 0x41D4B0u, 0x41D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D4B8u;
label_41d4b8:
    // 0x41d4b8: 0xc043c20  jal         func_10F080
    ctx->pc = 0x41D4B8u;
    SET_GPR_U32(ctx, 31, 0x41D4C0u);
    ctx->pc = 0x41D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D4B8u;
    // 0x41d4bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x41D4B8u, 0x41D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D4C0u;
label_41d4c0:
    // 0x41d4c0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x41d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x41d4c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41d4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d4c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41d4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d4cc: 0xc1064fa  jal         func_4193E8
    ctx->pc = 0x41D4CCu;
    SET_GPR_U32(ctx, 31, 0x41D4D4u);
    ctx->pc = 0x41D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D4CCu;
    // 0x41d4d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4193E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4193E8u, 0x41D4CCu, 0x41D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D4D4u;
label_41d4d4:
    // 0x41d4d4: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x41d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x41d4d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41d4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41d4dc: 0xe454024c  swc1        $f20, 0x24C($v0)
    ctx->pc = 0x41d4dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x41d4e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41d4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d4e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41d4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d4ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x41d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41d4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x41D4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4F0u;
        // 0x41d4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D4F8u;
}
