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

// Function: sub_002B0ED8
// Address: 0x2b0ed8 - 0x2b0fd0
void sub_002B0ED8_0x2b0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0ED8_0x2b0ed8");
#endif

    switch (ctx->pc) {
        case 0x2b0f14u: goto label_2b0f14;
        case 0x2b0f24u: goto label_2b0f24;
        case 0x2b0f4cu: goto label_2b0f4c;
        case 0x2b0f64u: goto label_2b0f64;
        case 0x2b0f8cu: goto label_2b0f8c;
        case 0x2b0fb0u: goto label_2b0fb0;
        default: break;
    }

    ctx->pc = 0x2b0ed8u;

    // 0x2b0ed8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0edc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b0ee0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b0ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ee8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b0eec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0ef4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b0ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ef8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2b0ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b0efc: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2b0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2b0f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b0f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0f08: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2b0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2b0f0c: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x2B0F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F14u);
    ctx->pc = 0x2B0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F0Cu;
    // 0x2b0f10: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2B0F0Cu, 0x2B0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F14u;
label_2b0f14:
    // 0x2b0f14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B0F14u;
    {
        const bool branch_taken_0x2b0f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0f14) {
            ctx->pc = 0x2B0F54u;
            goto label_2b0f54;
        }
    }
    ctx->pc = 0x2B0F1Cu;
    // 0x2b0f1c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F24u);
    ctx->pc = 0x2B0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F1Cu;
    // 0x2b0f20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B0F1Cu, 0x2B0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F24u;
label_2b0f24:
    // 0x2b0f24: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B0F24u;
    {
        const bool branch_taken_0x2b0f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F24u;
        // 0x2b0f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f24) {
            ctx->pc = 0x2B0FB0u;
            goto label_2b0fb0;
        }
    }
    ctx->pc = 0x2B0F2Cu;
    // 0x2b0f2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0f30: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b0f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2b0f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b0f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b0f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b0f3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b0f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f40: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2b0f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f44: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2B0F44u;
    SET_GPR_U32(ctx, 31, 0x2B0F4Cu);
    ctx->pc = 0x2B0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F44u;
    // 0x2b0f48: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2B0F44u, 0x2B0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F4Cu;
label_2b0f4c:
    // 0x2b0f4c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B0F4Cu;
    {
        const bool branch_taken_0x2b0f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F4Cu;
        // 0x2b0f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f4c) {
            ctx->pc = 0x2B0FB4u;
            goto label_2b0fb4;
        }
    }
    ctx->pc = 0x2B0F54u;
label_2b0f54:
    // 0x2b0f54: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B0F54u;
    {
        const bool branch_taken_0x2b0f54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F54u;
        // 0x2b0f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f54) {
            ctx->pc = 0x2B0FB4u;
            goto label_2b0fb4;
        }
    }
    ctx->pc = 0x2B0F5Cu;
    // 0x2b0f5c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B0F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F64u);
    ctx->pc = 0x2B0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F5Cu;
    // 0x2b0f60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B0F5Cu, 0x2B0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F64u;
label_2b0f64:
    // 0x2b0f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f68: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0F68u;
    {
        const bool branch_taken_0x2b0f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F68u;
        // 0x2b0f6c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f68) {
            ctx->pc = 0x2B0FB0u;
            goto label_2b0fb0;
        }
    }
    ctx->pc = 0x2B0F70u;
    // 0x2b0f70: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2b0f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2b0f74: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b0f78: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2b0f7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b0f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b0f80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b0f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b0f84: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B0F84u;
    SET_GPR_U32(ctx, 31, 0x2B0F8Cu);
    ctx->pc = 0x2B0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F84u;
    // 0x2b0f88: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B0F84u, 0x2B0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F8Cu;
label_2b0f8c:
    // 0x2b0f8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b0f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b0f94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b0f98: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2b0f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f9c: 0x2406029e  addiu       $a2, $zero, 0x29E
    ctx->pc = 0x2b0f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x2b0fa0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b0fa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b0fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b0fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0fa8: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2B0FA8u;
    SET_GPR_U32(ctx, 31, 0x2B0FB0u);
    ctx->pc = 0x2B0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FA8u;
    // 0x2b0fac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2B0FA8u, 0x2B0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FB0u;
label_2b0fb0:
    // 0x2b0fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0fb4:
    // 0x2b0fb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0fb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0fbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0fc4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FC8u;
        // 0x2b0fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0FD0u;
}
