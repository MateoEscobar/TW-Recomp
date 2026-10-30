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

// Function: sub_00228CC0
// Address: 0x228cc0 - 0x228d70
void sub_00228CC0_0x228cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228CC0_0x228cc0");
#endif

    switch (ctx->pc) {
        case 0x228d00u: goto label_228d00;
        case 0x228d18u: goto label_228d18;
        case 0x228d28u: goto label_228d28;
        default: break;
    }

    ctx->pc = 0x228cc0u;

    // 0x228cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x228cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x228cc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x228cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x228cc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x228cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x228ccc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cd0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x228cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x228cd4: 0x3c130056  lui         $s3, 0x56
    ctx->pc = 0x228cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)86 << 16));
    // 0x228cd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x228cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x228cdc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ce0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x228ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x228ce4: 0x24150a90  addiu       $s5, $zero, 0xA90
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2704));
    // 0x228ce8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x228ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x228cec: 0x24562b70  addiu       $s6, $v0, 0x2B70
    ctx->pc = 0x228cecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11120));
    // 0x228cf0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x228cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x228cf4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x228cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x228cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228cfc: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x228cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_228d00:
    // 0x228d00: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x228d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x228d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d08: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x228d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x228d0c: 0xae200a80  sw          $zero, 0xA80($s1)
    ctx->pc = 0x228d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2688), GPR_U32(ctx, 0));
    // 0x228d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d14: 0x0  nop
    ctx->pc = 0x228d14u;
    // NOP
label_228d18:
    // 0x228d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d1c: 0x2666b700  addiu       $a2, $s3, -0x4900
    ctx->pc = 0x228d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948608));
    // 0x228d20: 0xc08a3b4  jal         func_228ED0
    ctx->pc = 0x228D20u;
    SET_GPR_U32(ctx, 31, 0x228D28u);
    ctx->pc = 0x228D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D20u;
    // 0x228d24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228ED0u, 0x228D20u, 0x228D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D28u;
label_228d28:
    // 0x228d28: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x228d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x228d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228D2Cu;
    {
        const bool branch_taken_0x228d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D2Cu;
        // 0x228d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d2c) {
            ctx->pc = 0x228D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228d18;
        }
    }
    ctx->pc = 0x228D34u;
    // 0x228d34: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x228d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d38: 0x28620033  slti        $v0, $v1, 0x33
    ctx->pc = 0x228d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x228d3c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x228D3Cu;
    {
        const bool branch_taken_0x228d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D3Cu;
        // 0x228d40: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d3c) {
            ctx->pc = 0x228D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228d00;
        }
    }
    ctx->pc = 0x228D44u;
    // 0x228d44: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x228d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x228d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228d4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x228d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228d50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x228d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228d54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228d58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x228d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228d5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x228d5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228d60: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x228d60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228d68: 0x3e00008  jr          $ra
    ctx->pc = 0x228D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D68u;
        // 0x228d6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228D70u;
}
