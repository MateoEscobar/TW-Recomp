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

// Function: sub_00416CB0
// Address: 0x416cb0 - 0x416dc0
void sub_00416CB0_0x416cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416CB0_0x416cb0");
#endif

    switch (ctx->pc) {
        case 0x416d28u: goto label_416d28;
        case 0x416d48u: goto label_416d48;
        default: break;
    }

    ctx->pc = 0x416cb0u;

    // 0x416cb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x416cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x416cb4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x416cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x416cb8: 0x244bd978  addiu       $t3, $v0, -0x2688
    ctx->pc = 0x416cb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957432));
    // 0x416cbc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x416cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x416cc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x416cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x416cc4: 0x3c0a0070  lui         $t2, 0x70
    ctx->pc = 0x416cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)112 << 16));
    // 0x416cc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x416cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x416ccc: 0x3c090070  lui         $t1, 0x70
    ctx->pc = 0x416cccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)112 << 16));
    // 0x416cd0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x416cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x416cd4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x416cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x416cd8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x416cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x416cdc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x416cdcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416ce0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x416ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x416ce4: 0x2472e1f8  addiu       $s2, $v1, -0x1E08
    ctx->pc = 0x416ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959608));
    // 0x416ce8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x416ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x416cec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x416cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416cf0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x416cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x416cf4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x416cf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416cf8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x416cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x416cfc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x416cfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416d00: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x416d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x416d04: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x416d04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x416d0c: 0x2453e278  addiu       $s3, $v0, -0x1D88
    ctx->pc = 0x416d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959736));
    // 0x416d10: 0x2531e178  addiu       $s1, $t1, -0x1E88
    ctx->pc = 0x416d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959480));
    // 0x416d14: 0x2550d8f8  addiu       $s0, $t2, -0x2708
    ctx->pc = 0x416d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957304));
    // 0x416d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x416d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416d1c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x416d1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    // 0x416d20: 0x2563003f  addiu       $v1, $t3, 0x3F
    ctx->pc = 0x416d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 63));
    // 0x416d24: 0x0  nop
    ctx->pc = 0x416d24u;
    // NOP
label_416d28:
    // 0x416d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x416d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x416d2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x416D2Cu;
    {
        const bool branch_taken_0x416d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416D2Cu;
        // 0x416d30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416d2c) {
            ctx->pc = 0x416D68u;
            goto label_416d68;
        }
    }
    ctx->pc = 0x416D34u;
    // 0x416d34: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x416d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x416d38: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x416d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416d3c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x416d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416d40: 0xc10c4de  jal         func_431378
    ctx->pc = 0x416D40u;
    SET_GPR_U32(ctx, 31, 0x416D48u);
    ctx->pc = 0x416D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416D40u;
    // 0x416d44: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x416D40u, 0x416D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416D48u;
label_416d48:
    // 0x416d48: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x416d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x416d4c: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x416d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x416d50: 0x8fc2b734  lw          $v0, -0x48CC($fp)
    ctx->pc = 0x416d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
    // 0x416d54: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x416d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x416d58: 0xae760000  sw          $s6, 0x0($s3)
    ctx->pc = 0x416d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
    // 0x416d5c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x416d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x416d60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x416D60u;
    {
        const bool branch_taken_0x416d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416D60u;
        // 0x416d64: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416d60) {
            ctx->pc = 0x416D88u;
            goto label_416d88;
        }
    }
    ctx->pc = 0x416D68u;
label_416d68:
    // 0x416d68: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x416d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x416d6c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x416d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x416d70: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x416d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x416d74: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x416d74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x416d78: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x416d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x416d7c: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x416d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x416d80: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x416D80u;
    {
        const bool branch_taken_0x416d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416D80u;
        // 0x416d84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416d80) {
            ctx->pc = 0x416D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416d28;
        }
    }
    ctx->pc = 0x416D88u;
label_416d88:
    // 0x416d88: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x416d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x416d8c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x416d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x416d90: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x416d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x416d94: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x416d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x416d98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x416d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x416d9c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x416d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x416da0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x416da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416da4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x416da4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416da8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x416da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416db0: 0x3e00008  jr          $ra
    ctx->pc = 0x416DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416DB0u;
        // 0x416db4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416DB8u;
    // 0x416db8: 0x0  nop
    ctx->pc = 0x416db8u;
    // NOP
    // 0x416dbc: 0x0  nop
    ctx->pc = 0x416dbcu;
    // NOP
    ctx->pc = 0x416dc0u;
}
