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

// Function: sub_00266F38
// Address: 0x266f38 - 0x266fd8
void sub_00266F38_0x266f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266F38_0x266f38");
#endif

    switch (ctx->pc) {
        case 0x266f64u: goto label_266f64;
        case 0x266f80u: goto label_266f80;
        default: break;
    }

    ctx->pc = 0x266f38u;

    // 0x266f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x266f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x266f3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x266f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x266f40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x266f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x266f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x266f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x266f4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x266f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f50: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x266f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x266f54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x266f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266f5c: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x266F5Cu;
    SET_GPR_U32(ctx, 31, 0x266F64u);
    ctx->pc = 0x266F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F5Cu;
    // 0x266f60: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x266F5Cu, 0x266F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F64u;
label_266f64:
    // 0x266f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x266f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x266f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x266f70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x266f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f78: 0xc099b40  jal         func_266D00
    ctx->pc = 0x266F78u;
    SET_GPR_U32(ctx, 31, 0x266F80u);
    ctx->pc = 0x266F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F78u;
    // 0x266f7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D00u, 0x266F78u, 0x266F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F80u;
label_266f80:
    // 0x266f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x266f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x266f88: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x266f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x266f8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F8Cu;
    {
        const bool branch_taken_0x266f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F8Cu;
        // 0x266f90: 0xae030668  sw          $v1, 0x668($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f8c) {
            ctx->pc = 0x266FB0u;
            goto label_266fb0;
        }
    }
    ctx->pc = 0x266F94u;
    // 0x266f94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x266f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266f98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266f9c: 0x24a30798  addiu       $v1, $a1, 0x798
    ctx->pc = 0x266f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1944));
    // 0x266fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266fa8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266FA8u;
    {
        const bool branch_taken_0x266fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x266FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FA8u;
        // 0x266fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fa8) {
            ctx->pc = 0x266FBCu;
            goto label_266fbc;
        }
    }
    ctx->pc = 0x266FB0u;
label_266fb0:
    // 0x266fb0: 0x24a30798  addiu       $v1, $a1, 0x798
    ctx->pc = 0x266fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1944));
    // 0x266fb4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x266fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x266fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x266fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_266fbc:
    // 0x266fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266fc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x266fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266fc8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x266fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x266FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FCCu;
        // 0x266fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266FD4u;
    // 0x266fd4: 0x0  nop
    ctx->pc = 0x266fd4u;
    // NOP
    ctx->pc = 0x266fd8u;
}
