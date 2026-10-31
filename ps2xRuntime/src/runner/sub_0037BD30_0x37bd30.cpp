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

// Function: sub_0037BD30
// Address: 0x37bd30 - 0x37bde0
void sub_0037BD30_0x37bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BD30_0x37bd30");
#endif

    switch (ctx->pc) {
        case 0x37bd50u: goto label_37bd50;
        case 0x37bd68u: goto label_37bd68;
        case 0x37bd70u: goto label_37bd70;
        case 0x37bd88u: goto label_37bd88;
        case 0x37bd90u: goto label_37bd90;
        case 0x37bda0u: goto label_37bda0;
        case 0x37bdb4u: goto label_37bdb4;
        default: break;
    }

    ctx->pc = 0x37bd30u;

    // 0x37bd30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37bd34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37bd38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37bd3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bd44: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37bd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37bd4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37bd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37bd50:
    // 0x37bd50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bd5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd60: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37BD60u;
    SET_GPR_U32(ctx, 31, 0x37BD68u);
    ctx->pc = 0x37BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD60u;
    // 0x37bd64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37BD60u, 0x37BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD68u;
label_37bd68:
    // 0x37bd68: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BD68u;
    SET_GPR_U32(ctx, 31, 0x37BD70u);
    ctx->pc = 0x37BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD68u;
    // 0x37bd6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BD68u, 0x37BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD70u;
label_37bd70:
    // 0x37bd70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37bd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37bd74: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bd74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bd78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BD78u;
    {
        const bool branch_taken_0x37bd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD78u;
        // 0x37bd7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd78) {
            ctx->pc = 0x37BD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bd50;
        }
    }
    ctx->pc = 0x37BD80u;
    // 0x37bd80: 0xc06d242  jal         func_1B4908
    ctx->pc = 0x37BD80u;
    SET_GPR_U32(ctx, 31, 0x37BD88u);
    ctx->pc = 0x37BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD80u;
    // 0x37bd84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4908u, 0x37BD80u, 0x37BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD88u;
label_37bd88:
    // 0x37bd88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37bd90:
    // 0x37bd90: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37bd94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bd98: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37BD98u;
    SET_GPR_U32(ctx, 31, 0x37BDA0u);
    ctx->pc = 0x37BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD98u;
    // 0x37bd9c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37BD98u, 0x37BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDA0u;
label_37bda0:
    // 0x37bda0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37bda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bdac: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37BDACu;
    SET_GPR_U32(ctx, 31, 0x37BDB4u);
    ctx->pc = 0x37BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDACu;
    // 0x37bdb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37BDACu, 0x37BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDB4u;
label_37bdb4:
    // 0x37bdb4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bdb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BDB8u;
    {
        const bool branch_taken_0x37bdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDB8u;
        // 0x37bdbc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bdb8) {
            ctx->pc = 0x37BD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bd90;
        }
    }
    ctx->pc = 0x37BDC0u;
    // 0x37bdc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bdc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37bdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bdc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37bdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bdcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37bdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37bdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x37BDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDD4u;
        // 0x37bdd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BDDCu;
    // 0x37bddc: 0x0  nop
    ctx->pc = 0x37bddcu;
    // NOP
    ctx->pc = 0x37bde0u;
}
