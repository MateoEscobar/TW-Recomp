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

// Function: sub_00316EE8
// Address: 0x316ee8 - 0x316fa0
void sub_00316EE8_0x316ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316EE8_0x316ee8");
#endif

    switch (ctx->pc) {
        case 0x316f30u: goto label_316f30;
        case 0x316f38u: goto label_316f38;
        case 0x316f68u: goto label_316f68;
        case 0x316f74u: goto label_316f74;
        default: break;
    }

    ctx->pc = 0x316ee8u;

    // 0x316ee8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x316eec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x316eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x316ef0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x316ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x316ef4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x316ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ef8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x316ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x316efc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x316efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f00: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x316f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x316f04: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x316f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f08: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x316f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x316f0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x316f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f10: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x316f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x316f14: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x316f14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x316f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x316f1c: 0x4800015  bltz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x316F1Cu;
    {
        const bool branch_taken_0x316f1c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x316F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F1Cu;
        // 0x316f20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f1c) {
            ctx->pc = 0x316F74u;
            goto label_316f74;
        }
    }
    ctx->pc = 0x316F24u;
    // 0x316f24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316f28: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316F28u;
    SET_GPR_U32(ctx, 31, 0x316F30u);
    ctx->pc = 0x316F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F28u;
    // 0x316f2c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316F28u, 0x316F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F30u;
label_316f30:
    // 0x316f30: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316F30u;
    SET_GPR_U32(ctx, 31, 0x316F38u);
    ctx->pc = 0x316F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F30u;
    // 0x316f34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316F30u, 0x316F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F38u;
label_316f38:
    // 0x316f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f3c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x316F3Cu;
    {
        const bool branch_taken_0x316f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F3Cu;
        // 0x316f40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f3c) {
            ctx->pc = 0x316F68u;
            goto label_316f68;
        }
    }
    ctx->pc = 0x316F44u;
    // 0x316f44: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x316f44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x316f48: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x316f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f4c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x316f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f50: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x316f50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f54: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x316f54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f60: 0xc0c527c  jal         func_3149F0
    ctx->pc = 0x316F60u;
    SET_GPR_U32(ctx, 31, 0x316F68u);
    ctx->pc = 0x316F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F60u;
    // 0x316f64: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3149F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3149F0u, 0x316F60u, 0x316F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F68u;
label_316f68:
    // 0x316f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f6c: 0xc059590  jal         func_165640
    ctx->pc = 0x316F6Cu;
    SET_GPR_U32(ctx, 31, 0x316F74u);
    ctx->pc = 0x316F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F6Cu;
    // 0x316f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316F6Cu, 0x316F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F74u;
label_316f74:
    // 0x316f74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x316f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316f78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x316f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316f7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x316f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316f80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316f84: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x316f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316f88: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x316f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316f8c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x316f8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316f94: 0x3e00008  jr          $ra
    ctx->pc = 0x316F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F94u;
        // 0x316f98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316F9Cu;
    // 0x316f9c: 0x0  nop
    ctx->pc = 0x316f9cu;
    // NOP
    ctx->pc = 0x316fa0u;
}
