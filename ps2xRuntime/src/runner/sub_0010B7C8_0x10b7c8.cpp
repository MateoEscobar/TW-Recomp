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

// Function: sub_0010B7C8
// Address: 0x10b7c8 - 0x10b858
void sub_0010B7C8_0x10b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B7C8_0x10b7c8");
#endif

    switch (ctx->pc) {
        case 0x10b814u: goto label_10b814;
        default: break;
    }

    ctx->pc = 0x10b7c8u;

    // 0x10b7c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b7cc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x10b7d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10b7d4: 0x24424418  addiu       $v0, $v0, 0x4418
    ctx->pc = 0x10b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17432));
    // 0x10b7d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10b7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10b7e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10b7ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10b7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b7f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10b7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10b7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10b7fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x10b7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b800: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b800u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10b804: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10b804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10b808: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10b808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10b80c: 0xc0420fa  jal         func_1083E8
    ctx->pc = 0x10B80Cu;
    SET_GPR_U32(ctx, 31, 0x10B814u);
    ctx->pc = 0x10B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B80Cu;
    // 0x10b810: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083E8u, 0x10B80Cu, 0x10B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B814u;
label_10b814:
    // 0x10b814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b818: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10b818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10b81c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x10b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x10b820: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x10b820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x10b824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10b824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b828: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x10b828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x10b82c: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x10b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x10b830: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x10b830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x10b834: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10b834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b838: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10b838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b840: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10b840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b848: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b84c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B84Cu;
        // 0x10b850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B854u;
    // 0x10b854: 0x0  nop
    ctx->pc = 0x10b854u;
    // NOP
    ctx->pc = 0x10b858u;
}
