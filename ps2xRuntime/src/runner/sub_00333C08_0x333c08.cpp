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

// Function: sub_00333C08
// Address: 0x333c08 - 0x333ce0
void sub_00333C08_0x333c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333C08_0x333c08");
#endif

    switch (ctx->pc) {
        case 0x333c30u: goto label_333c30;
        case 0x333c3cu: goto label_333c3c;
        case 0x333c5cu: goto label_333c5c;
        case 0x333cb0u: goto label_333cb0;
        default: break;
    }

    ctx->pc = 0x333c08u;

    // 0x333c08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x333c0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x333c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x333c10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333c1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x333c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x333c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333c24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x333c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c28: 0xc0cc710  jal         func_331C40
    ctx->pc = 0x333C28u;
    SET_GPR_U32(ctx, 31, 0x333C30u);
    ctx->pc = 0x333C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C28u;
    // 0x333c2c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C40u, 0x333C28u, 0x333C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C30u;
label_333c30:
    // 0x333c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c34: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x333C34u;
    SET_GPR_U32(ctx, 31, 0x333C3Cu);
    ctx->pc = 0x333C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C34u;
    // 0x333c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x333C34u, 0x333C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C3Cu;
label_333c3c:
    // 0x333c3c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x333c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x333c40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333c48: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x333c48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x333c4c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x333C4Cu;
    {
        const bool branch_taken_0x333c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C4Cu;
        // 0x333c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c4c) {
            ctx->pc = 0x333CBCu;
            goto label_333cbc;
        }
    }
    ctx->pc = 0x333C54u;
    // 0x333c54: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x333C54u;
    SET_GPR_U32(ctx, 31, 0x333C5Cu);
    ctx->pc = 0x333C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C54u;
    // 0x333c58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x333C54u, 0x333C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C5Cu;
label_333c5c:
    // 0x333c5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333c60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x333c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333c64: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x333c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c6c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x333c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x333c70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x333c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333c78: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x333c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x333c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333c80: 0xac730018  sw          $s3, 0x18($v1)
    ctx->pc = 0x333c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 19));
    // 0x333c84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333c88: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x333c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x333c8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333c90: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x333c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333c94: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x333c94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x333c98: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x333c98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333c9c: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x333c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x333ca0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333ca4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x333ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x333ca8: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x333CA8u;
    SET_GPR_U32(ctx, 31, 0x333CB0u);
    ctx->pc = 0x333CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CA8u;
    // 0x333cac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x333CA8u, 0x333CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CB0u;
label_333cb0:
    // 0x333cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333cb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333CB4u;
    {
        const bool branch_taken_0x333cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CB4u;
        // 0x333cb8: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cb4) {
            ctx->pc = 0x333CC0u;
            goto label_333cc0;
        }
    }
    ctx->pc = 0x333CBCu;
label_333cbc:
    // 0x333cbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x333cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_333cc0:
    // 0x333cc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x333cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333cc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x333cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333ccc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x333cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x333CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CD4u;
        // 0x333cd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333CDCu;
    // 0x333cdc: 0x0  nop
    ctx->pc = 0x333cdcu;
    // NOP
    ctx->pc = 0x333ce0u;
}
