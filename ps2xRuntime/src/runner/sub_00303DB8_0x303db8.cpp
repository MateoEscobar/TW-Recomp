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

// Function: sub_00303DB8
// Address: 0x303db8 - 0x303e68
void sub_00303DB8_0x303db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303DB8_0x303db8");
#endif

    switch (ctx->pc) {
        case 0x303de0u: goto label_303de0;
        case 0x303e38u: goto label_303e38;
        default: break;
    }

    ctx->pc = 0x303db8u;

    // 0x303db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x303db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x303dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x303dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303dc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dd0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x303DD0u;
    {
        const bool branch_taken_0x303dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DD0u;
        // 0x303dd4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dd0) {
            ctx->pc = 0x303E4Cu;
            goto label_303e4c;
        }
    }
    ctx->pc = 0x303DD8u;
    // 0x303dd8: 0xc087502  jal         func_21D408
    ctx->pc = 0x303DD8u;
    SET_GPR_U32(ctx, 31, 0x303DE0u);
    ctx->pc = 0x303DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303DD8u;
    // 0x303ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x303DD8u, 0x303DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303DE0u;
label_303de0:
    // 0x303de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303de4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x303de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303de8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x303DE8u;
    {
        const bool branch_taken_0x303de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303de8) {
            ctx->pc = 0x303DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303DE8u;
            // 0x303dec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E10u;
            goto label_303e10;
        }
    }
    ctx->pc = 0x303DF0u;
    // 0x303df0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x303df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x303df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303df8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303DF8u;
    {
        const bool branch_taken_0x303df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303df8) {
            ctx->pc = 0x303DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303DF8u;
            // 0x303dfc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E10u;
            goto label_303e10;
        }
    }
    ctx->pc = 0x303E00u;
    // 0x303e00: 0x908202e5  lbu         $v0, 0x2E5($a0)
    ctx->pc = 0x303e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 741)));
    // 0x303e04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x303E04u;
    {
        const bool branch_taken_0x303e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303e04) {
            ctx->pc = 0x303E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303E04u;
            // 0x303e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E50u;
            goto label_303e50;
        }
    }
    ctx->pc = 0x303E0Cu;
    // 0x303e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303e10:
    // 0x303e10: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x303e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x303e14: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x303e14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x303e18: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x303e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x303e1c: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x303e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x303e20: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x303e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x303e24: 0xc6340140  lwc1        $f20, 0x140($s1)
    ctx->pc = 0x303e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303e28: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x303e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x303e2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x303e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x303e30: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x303E30u;
    SET_GPR_U32(ctx, 31, 0x303E38u);
    ctx->pc = 0x303E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E30u;
    // 0x303e34: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x303E30u, 0x303E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E38u;
label_303e38:
    // 0x303e38: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x303e38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x303e3c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x303e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303e40: 0x0  nop
    ctx->pc = 0x303e40u;
    // NOP
    // 0x303e44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x303E44u;
    {
        const bool branch_taken_0x303e44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E44u;
        // 0x303e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e44) {
            ctx->pc = 0x303E50u;
            goto label_303e50;
        }
    }
    ctx->pc = 0x303E4Cu;
label_303e4c:
    // 0x303e4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303e50:
    // 0x303e50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x303e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e5c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x303e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303e60: 0x3e00008  jr          $ra
    ctx->pc = 0x303E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E60u;
        // 0x303e64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303E68u;
}
