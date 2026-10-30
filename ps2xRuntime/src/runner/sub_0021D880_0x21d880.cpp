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

// Function: sub_0021D880
// Address: 0x21d880 - 0x21d928
void sub_0021D880_0x21d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D880_0x21d880");
#endif

    switch (ctx->pc) {
        case 0x21d8d8u: goto label_21d8d8;
        case 0x21d8e4u: goto label_21d8e4;
        case 0x21d8f0u: goto label_21d8f0;
        case 0x21d8fcu: goto label_21d8fc;
        case 0x21d90cu: goto label_21d90c;
        case 0x21d914u: goto label_21d914;
        default: break;
    }

    ctx->pc = 0x21d880u;

    // 0x21d880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21d884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21d88c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21d890: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x21d890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x21d894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d898: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x21d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x21d89c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21d8a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x21d8a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x21d8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21d8a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21d8ac: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x21d8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21d8b0: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x21d8b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x21d8b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x21d8b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21d8bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d8c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21d8c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d8c4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21d8c8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x21d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d8cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d8d0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x21D8D0u;
    SET_GPR_U32(ctx, 31, 0x21D8D8u);
    ctx->pc = 0x21D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8D0u;
    // 0x21d8d4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21D8D0u, 0x21D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D8u;
label_21d8d8:
    // 0x21d8d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x21d8dc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x21D8DCu;
    SET_GPR_U32(ctx, 31, 0x21D8E4u);
    ctx->pc = 0x21D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8DCu;
    // 0x21d8e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21D8DCu, 0x21D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8E4u;
label_21d8e4:
    // 0x21d8e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x21d8e8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x21D8E8u;
    SET_GPR_U32(ctx, 31, 0x21D8F0u);
    ctx->pc = 0x21D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8E8u;
    // 0x21d8ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21D8E8u, 0x21D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8F0u;
label_21d8f0:
    // 0x21d8f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x21d8f4: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x21D8F4u;
    SET_GPR_U32(ctx, 31, 0x21D8FCu);
    ctx->pc = 0x21D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8F4u;
    // 0x21d8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21D8F4u, 0x21D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8FCu;
label_21d8fc:
    // 0x21d8fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x21d900: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21d900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x21d904: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x21D904u;
    SET_GPR_U32(ctx, 31, 0x21D90Cu);
    ctx->pc = 0x21D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D904u;
    // 0x21d908: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21D904u, 0x21D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D90Cu;
label_21d90c:
    // 0x21d90c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x21D90Cu;
    SET_GPR_U32(ctx, 31, 0x21D914u);
    ctx->pc = 0x21D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D90Cu;
    // 0x21d910: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21D90Cu, 0x21D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D914u;
label_21d914:
    // 0x21d914: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21d914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D91Cu;
        // 0x21d920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D924u;
    // 0x21d924: 0x0  nop
    ctx->pc = 0x21d924u;
    // NOP
    ctx->pc = 0x21d928u;
}
