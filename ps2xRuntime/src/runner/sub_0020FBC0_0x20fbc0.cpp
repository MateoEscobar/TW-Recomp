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

// Function: sub_0020FBC0
// Address: 0x20fbc0 - 0x20fc98
void sub_0020FBC0_0x20fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FBC0_0x20fbc0");
#endif

    switch (ctx->pc) {
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc38u: goto label_20fc38;
        case 0x20fc4cu: goto label_20fc4c;
        case 0x20fc60u: goto label_20fc60;
        default: break;
    }

    ctx->pc = 0x20fbc0u;

    // 0x20fbc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20fbc4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x20fbc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x20fbcc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x20fbd0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x20fbd4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20fbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x20fbd8: 0x2456f240  addiu       $s6, $v0, -0xDC0
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x20fbdc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20fbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x20fbe0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x20fbe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x20fbe4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20fbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20fbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20fbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x20fbf0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x20fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbf4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20fbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x20fbf8: 0x24140d00  addiu       $s4, $zero, 0xD00
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    // 0x20fbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fc00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20fc00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20fc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc08:
    // 0x20fc08: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20fc0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20fc10: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x20fc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20fc14: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fc18: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20fc1c: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x20fc20: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20fc24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fc28: 0x1072000d  beq         $v1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x20FC28u;
    {
        const bool branch_taken_0x20fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x20FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC28u;
        // 0x20fc2c: 0x26730680  addiu       $s3, $s3, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc28) {
            ctx->pc = 0x20FC60u;
            goto label_20fc60;
        }
    }
    ctx->pc = 0x20FC30u;
    // 0x20fc30: 0xc068998  jal         func_1A2660
    ctx->pc = 0x20FC30u;
    SET_GPR_U32(ctx, 31, 0x20FC38u);
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x20FC30u, 0x20FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC38u;
label_20fc38:
    // 0x20fc38: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20fc3c: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x20fc3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20fc40: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fc44: 0xc068998  jal         func_1A2660
    ctx->pc = 0x20FC44u;
    SET_GPR_U32(ctx, 31, 0x20FC4Cu);
    ctx->pc = 0x20FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC44u;
    // 0x20fc48: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x20FC44u, 0x20FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC4Cu;
label_20fc4c:
    // 0x20fc4c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20fc50: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x20fc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20fc54: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fc58: 0xc07091c  jal         func_1C2470
    ctx->pc = 0x20FC58u;
    SET_GPR_U32(ctx, 31, 0x20FC60u);
    ctx->pc = 0x20FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC58u;
    // 0x20fc5c: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x20FC58u, 0x20FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC60u;
label_20fc60:
    // 0x20fc60: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x20fc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20fc64: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20FC64u;
    {
        const bool branch_taken_0x20fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC64u;
        // 0x20fc68: 0x26100680  addiu       $s0, $s0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc64) {
            ctx->pc = 0x20FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc08;
        }
    }
    ctx->pc = 0x20FC6Cu;
    // 0x20fc6c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20fc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20fc70: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20fc70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20fc74: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20fc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20fc78: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20fc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fc7c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20fc7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc80: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20fc80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fc84: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20fc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x20FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC8Cu;
        // 0x20fc90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FC94u;
    // 0x20fc94: 0x0  nop
    ctx->pc = 0x20fc94u;
    // NOP
    ctx->pc = 0x20fc98u;
}
