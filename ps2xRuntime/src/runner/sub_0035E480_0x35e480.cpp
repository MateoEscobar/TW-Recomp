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

// Function: sub_0035E480
// Address: 0x35e480 - 0x35e4f8
void sub_0035E480_0x35e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E480_0x35e480");
#endif

    switch (ctx->pc) {
        case 0x35e4a8u: goto label_35e4a8;
        case 0x35e4b0u: goto label_35e4b0;
        case 0x35e4c4u: goto label_35e4c4;
        case 0x35e4ccu: goto label_35e4cc;
        case 0x35e4d8u: goto label_35e4d8;
        default: break;
    }

    ctx->pc = 0x35e480u;

    // 0x35e480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e488: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e49c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x35e49cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35e4a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E4A0u;
    SET_GPR_U32(ctx, 31, 0x35E4A8u);
    ctx->pc = 0x35E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4A0u;
    // 0x35e4a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E4A0u, 0x35E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4A8u;
label_35e4a8:
    // 0x35e4a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E4A8u;
    SET_GPR_U32(ctx, 31, 0x35E4B0u);
    ctx->pc = 0x35E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4A8u;
    // 0x35e4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E4A8u, 0x35E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4B0u;
label_35e4b0:
    // 0x35e4b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e4b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35e4b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35e4b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e4bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E4BCu;
    SET_GPR_U32(ctx, 31, 0x35E4C4u);
    ctx->pc = 0x35E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4BCu;
    // 0x35e4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E4BCu, 0x35E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4C4u;
label_35e4c4:
    // 0x35e4c4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E4C4u;
    SET_GPR_U32(ctx, 31, 0x35E4CCu);
    ctx->pc = 0x35E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4C4u;
    // 0x35e4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E4C4u, 0x35E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4CCu;
label_35e4cc:
    // 0x35e4cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35e4ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35e4d0: 0xc107650  jal         func_41D940
    ctx->pc = 0x35E4D0u;
    SET_GPR_U32(ctx, 31, 0x35E4D8u);
    ctx->pc = 0x35E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E4D0u;
    // 0x35e4d4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D940u, 0x35E4D0u, 0x35E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4D8u;
label_35e4d8:
    // 0x35e4d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e4e8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35e4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35E4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4ECu;
        // 0x35e4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E4F4u;
    // 0x35e4f4: 0x0  nop
    ctx->pc = 0x35e4f4u;
    // NOP
    ctx->pc = 0x35e4f8u;
}
