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

// Function: sub_002A7C48
// Address: 0x2a7c48 - 0x2a7d08
void sub_002A7C48_0x2a7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7C48_0x2a7c48");
#endif

    switch (ctx->pc) {
        case 0x2a7c88u: goto label_2a7c88;
        case 0x2a7c98u: goto label_2a7c98;
        case 0x2a7cb0u: goto label_2a7cb0;
        default: break;
    }

    ctx->pc = 0x2a7c48u;

    // 0x2a7c48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a7c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a7c50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a7c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a7c54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a7c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a7c5c: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c60: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a7c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a7c64: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x2a7c68: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2a7c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2a7c6c: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a7c70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a7c74: 0x24569440  addiu       $s6, $v0, -0x6BC0
    ctx->pc = 0x2a7c74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x2a7c78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a7c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a7c7c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a7c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a7c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7c84: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x2a7c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a7c88:
    // 0x2a7c88: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x2a7c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a7c8c: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x2a7c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
    // 0x2a7c90: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2a7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a7c94: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2a7c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2a7c98:
    // 0x2a7c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7c9c: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x2a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x2a7ca0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7CA0u;
    {
        const bool branch_taken_0x2a7ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CA0u;
        // 0x2a7ca4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ca0) {
            ctx->pc = 0x2A7CB4u;
            goto label_2a7cb4;
        }
    }
    ctx->pc = 0x2A7CA8u;
    // 0x2a7ca8: 0xc0a9cea  jal         func_2A73A8
    ctx->pc = 0x2A7CA8u;
    SET_GPR_U32(ctx, 31, 0x2A7CB0u);
    ctx->pc = 0x2A73A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73A8u, 0x2A7CA8u, 0x2A7CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CB0u;
label_2a7cb0:
    // 0x2a7cb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a7cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a7cb4:
    // 0x2a7cb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a7cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a7cb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a7cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7cbc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2a7cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a7cc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A7CC0u;
    {
        const bool branch_taken_0x2a7cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CC0u;
        // 0x2a7cc4: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cc0) {
            ctx->pc = 0x2A7C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7c98;
        }
    }
    ctx->pc = 0x2A7CC8u;
    // 0x2a7cc8: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x2a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x2a7ccc: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2a7cccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7cd0: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x2a7cd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a7cd4: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A7CD4u;
    {
        const bool branch_taken_0x2a7cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7cd4) {
            ctx->pc = 0x2A7CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7CD4u;
            // 0x2a7cd8: 0x951818  mult        $v1, $a0, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7c88;
        }
    }
    ctx->pc = 0x2A7CDCu;
    // 0x2a7cdc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a7cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7ce0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a7ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7ce4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a7ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7ce8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a7ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7cec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a7cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7cf0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a7cf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7cf4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2a7cf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CFCu;
        // 0x2a7d00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D04u;
    // 0x2a7d04: 0x0  nop
    ctx->pc = 0x2a7d04u;
    // NOP
    ctx->pc = 0x2a7d08u;
}
