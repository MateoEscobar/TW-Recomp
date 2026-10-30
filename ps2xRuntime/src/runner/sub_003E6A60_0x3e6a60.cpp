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

// Function: sub_003E6A60
// Address: 0x3e6a60 - 0x3e6b10
void sub_003E6A60_0x3e6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6A60_0x3e6a60");
#endif

    switch (ctx->pc) {
        case 0x3e6a8cu: goto label_3e6a8c;
        case 0x3e6a94u: goto label_3e6a94;
        case 0x3e6aa0u: goto label_3e6aa0;
        case 0x3e6aacu: goto label_3e6aac;
        case 0x3e6ae4u: goto label_3e6ae4;
        case 0x3e6af4u: goto label_3e6af4;
        default: break;
    }

    ctx->pc = 0x3e6a60u;

    // 0x3e6a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e6a64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e6a68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e6a6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e6a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e6a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e6a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e6a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a78: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3e6a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3e6a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e6a84: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6A84u;
    SET_GPR_U32(ctx, 31, 0x3E6A8Cu);
    ctx->pc = 0x3E6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A84u;
    // 0x3e6a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6A84u, 0x3E6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A8Cu;
label_3e6a8c:
    // 0x3e6a8c: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E6A8Cu;
    SET_GPR_U32(ctx, 31, 0x3E6A94u);
    ctx->pc = 0x3E6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A8Cu;
    // 0x3e6a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6A8Cu, 0x3E6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A94u;
label_3e6a94:
    // 0x3e6a94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e6a94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e6a98: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6A98u;
    SET_GPR_U32(ctx, 31, 0x3E6AA0u);
    ctx->pc = 0x3E6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A98u;
    // 0x3e6a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6A98u, 0x3E6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AA0u;
label_3e6aa0:
    // 0x3e6aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e6aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6aa4: 0xc0e6ec6  jal         func_39BB18
    ctx->pc = 0x3E6AA4u;
    SET_GPR_U32(ctx, 31, 0x3E6AACu);
    ctx->pc = 0x3E6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AA4u;
    // 0x3e6aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E6AA4u, 0x3E6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AACu;
label_3e6aac:
    // 0x3e6aac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3e6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e6ab0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3e6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6ab4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E6AB4u;
    {
        const bool branch_taken_0x3e6ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6AB4u;
        // 0x3e6ab8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ab4) {
            ctx->pc = 0x3E6AD4u;
            goto label_3e6ad4;
        }
    }
    ctx->pc = 0x3E6ABCu;
    // 0x3e6abc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6ABCu;
    {
        const bool branch_taken_0x3e6abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6ABCu;
        // 0x3e6ac0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6abc) {
            ctx->pc = 0x3E6AD8u;
            goto label_3e6ad8;
        }
    }
    ctx->pc = 0x3E6AC4u;
    // 0x3e6ac4: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x3e6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6ac8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3e6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3e6acc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3e6accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3e6ad0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3e6ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3e6ad4:
    // 0x3e6ad4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e6ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e6ad8:
    // 0x3e6ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e6ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6adc: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E6ADCu;
    SET_GPR_U32(ctx, 31, 0x3E6AE4u);
    ctx->pc = 0x3E6AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6ADCu;
    // 0x3e6ae0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E6ADCu, 0x3E6AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AE4u;
label_3e6ae4:
    // 0x3e6ae4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e6ae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e6ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6aec: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E6AECu;
    SET_GPR_U32(ctx, 31, 0x3E6AF4u);
    ctx->pc = 0x3E6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AECu;
    // 0x3e6af0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E6AECu, 0x3E6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AF4u;
label_3e6af4:
    // 0x3e6af4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e6af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6af8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e6af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6afc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e6afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e6b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6b04: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3e6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B08u;
        // 0x3e6b0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6B10u;
}
