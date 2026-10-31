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

// Function: sub_00422BD8
// Address: 0x422bd8 - 0x422c60
void sub_00422BD8_0x422bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422BD8_0x422bd8");
#endif

    switch (ctx->pc) {
        case 0x422c00u: goto label_422c00;
        case 0x422c08u: goto label_422c08;
        case 0x422c1cu: goto label_422c1c;
        case 0x422c40u: goto label_422c40;
        default: break;
    }

    ctx->pc = 0x422bd8u;

    // 0x422bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x422bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x422bdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x422bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x422be0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x422be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x422be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x422be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422be8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x422be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x422bec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x422becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x422bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422bf4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x422bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x422bf8: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x422BF8u;
    SET_GPR_U32(ctx, 31, 0x422C00u);
    ctx->pc = 0x422BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422BF8u;
    // 0x422bfc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x422BF8u, 0x422C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422C00u;
label_422c00:
    // 0x422c00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c04: 0x0  nop
    ctx->pc = 0x422c04u;
    // NOP
label_422c08:
    // 0x422c08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x422c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c14: 0xc108ac0  jal         func_422B00
    ctx->pc = 0x422C14u;
    SET_GPR_U32(ctx, 31, 0x422C1Cu);
    ctx->pc = 0x422C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422C14u;
    // 0x422c18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422B00u, 0x422C14u, 0x422C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422C1Cu;
label_422c1c:
    // 0x422c1c: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x422c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x422c20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422C20u;
    {
        const bool branch_taken_0x422c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422C20u;
        // 0x422c24: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x422c20) {
            ctx->pc = 0x422C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422c08;
        }
    }
    ctx->pc = 0x422C28u;
    // 0x422c28: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x422c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x422c2c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x422c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x422c30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x422c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x422c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c38: 0xc108a2e  jal         func_4228B8
    ctx->pc = 0x422C38u;
    SET_GPR_U32(ctx, 31, 0x422C40u);
    ctx->pc = 0x422C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422C38u;
    // 0x422c3c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228B8u, 0x422C38u, 0x422C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422C40u;
label_422c40:
    // 0x422c40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x422c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x422c44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x422c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422c48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x422c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422c50: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x422c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x422c54: 0x3e00008  jr          $ra
    ctx->pc = 0x422C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422C54u;
        // 0x422c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422C5Cu;
    // 0x422c5c: 0x0  nop
    ctx->pc = 0x422c5cu;
    // NOP
    ctx->pc = 0x422c60u;
}
