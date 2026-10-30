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

// Function: sub_0031D878
// Address: 0x31d878 - 0x31d950
void sub_0031D878_0x31d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D878_0x31d878");
#endif

    switch (ctx->pc) {
        case 0x31d8e0u: goto label_31d8e0;
        default: break;
    }

    ctx->pc = 0x31d878u;

    // 0x31d878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31d87c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31d884: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31d888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d88c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31d890: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31d894: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31d898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d89c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31d89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d8a0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x31d8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31d8a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31d8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d8a8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31d8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31d8ac: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x31d8acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x31d8b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31d8b4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x31d8b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x31d8b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31d8bc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x31d8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d8c0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31d8c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31d8c8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31d8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d8cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31d8d0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d8d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31d8d8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31D8D8u;
    SET_GPR_U32(ctx, 31, 0x31D8E0u);
    ctx->pc = 0x31D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8D8u;
    // 0x31d8dc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31D8D8u, 0x31D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8E0u;
label_31d8e0:
    // 0x31d8e0: 0xa2110044  sb          $s1, 0x44($s0)
    ctx->pc = 0x31d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 17));
    // 0x31d8e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31d8e8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31d8ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31d8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d8f0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31d8f4: 0x24633fe0  addiu       $v1, $v1, 0x3FE0
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16352));
    // 0x31d8f8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x31d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x31d8fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31d8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d900: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x31d900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x31d904: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x31d904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x31d908: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x31d908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x31d90c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x31d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x31d910: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x31d910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x31d914: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x31d914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x31d918: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x31d918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x31d91c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x31d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x31d920: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x31d920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x31d924: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31d924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d928: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31d92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d930: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x31d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x31d934: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x31d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31d938: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x31d938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x31d93c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31d93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d940: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31d944: 0x3e00008  jr          $ra
    ctx->pc = 0x31D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D944u;
        // 0x31d948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D94Cu;
    // 0x31d94c: 0x0  nop
    ctx->pc = 0x31d94cu;
    // NOP
    ctx->pc = 0x31d950u;
}
