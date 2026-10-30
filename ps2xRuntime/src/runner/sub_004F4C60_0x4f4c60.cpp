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

// Function: sub_004F4C60
// Address: 0x4f4c60 - 0x4f4d20
void sub_004F4C60_0x4f4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4C60_0x4f4c60");
#endif

    switch (ctx->pc) {
        case 0x4f4c60u: goto label_4f4c60;
        case 0x4f4c64u: goto label_4f4c64;
        case 0x4f4c68u: goto label_4f4c68;
        case 0x4f4c6cu: goto label_4f4c6c;
        case 0x4f4c70u: goto label_4f4c70;
        case 0x4f4c74u: goto label_4f4c74;
        case 0x4f4c78u: goto label_4f4c78;
        case 0x4f4c7cu: goto label_4f4c7c;
        case 0x4f4c80u: goto label_4f4c80;
        case 0x4f4c84u: goto label_4f4c84;
        case 0x4f4c88u: goto label_4f4c88;
        case 0x4f4c8cu: goto label_4f4c8c;
        case 0x4f4c90u: goto label_4f4c90;
        case 0x4f4c94u: goto label_4f4c94;
        case 0x4f4c98u: goto label_4f4c98;
        case 0x4f4c9cu: goto label_4f4c9c;
        case 0x4f4ca0u: goto label_4f4ca0;
        case 0x4f4ca4u: goto label_4f4ca4;
        case 0x4f4ca8u: goto label_4f4ca8;
        case 0x4f4cacu: goto label_4f4cac;
        case 0x4f4cb0u: goto label_4f4cb0;
        case 0x4f4cb4u: goto label_4f4cb4;
        case 0x4f4cb8u: goto label_4f4cb8;
        case 0x4f4cbcu: goto label_4f4cbc;
        case 0x4f4cc0u: goto label_4f4cc0;
        case 0x4f4cc4u: goto label_4f4cc4;
        case 0x4f4cc8u: goto label_4f4cc8;
        case 0x4f4cccu: goto label_4f4ccc;
        case 0x4f4cd0u: goto label_4f4cd0;
        case 0x4f4cd4u: goto label_4f4cd4;
        case 0x4f4cd8u: goto label_4f4cd8;
        case 0x4f4cdcu: goto label_4f4cdc;
        case 0x4f4ce0u: goto label_4f4ce0;
        case 0x4f4ce4u: goto label_4f4ce4;
        case 0x4f4ce8u: goto label_4f4ce8;
        case 0x4f4cecu: goto label_4f4cec;
        case 0x4f4cf0u: goto label_4f4cf0;
        case 0x4f4cf4u: goto label_4f4cf4;
        case 0x4f4cf8u: goto label_4f4cf8;
        case 0x4f4cfcu: goto label_4f4cfc;
        case 0x4f4d00u: goto label_4f4d00;
        case 0x4f4d04u: goto label_4f4d04;
        case 0x4f4d08u: goto label_4f4d08;
        case 0x4f4d0cu: goto label_4f4d0c;
        case 0x4f4d10u: goto label_4f4d10;
        case 0x4f4d14u: goto label_4f4d14;
        case 0x4f4d18u: goto label_4f4d18;
        case 0x4f4d1cu: goto label_4f4d1c;
        default: break;
    }

    ctx->pc = 0x4f4c60u;

label_4f4c60:
    // 0x4f4c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4f4c64:
    // 0x4f4c64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4f4c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4f4c68:
    // 0x4f4c68: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4f4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4f4c6c:
    // 0x4f4c6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f4c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c70:
    // 0x4f4c70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4f4c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c74:
    // 0x4f4c74: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4f4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4f4c78:
    // 0x4f4c78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f4c7c:
    // 0x4f4c7c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4f4c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f4c80:
    // 0x4f4c80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4f4c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4f4c84:
    // 0x4f4c84: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4f4c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4f4c88:
    // 0x4f4c88: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4f4c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4f4c8c:
    // 0x4f4c8c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4f4c90:
    if (ctx->pc == 0x4F4C90u) {
        ctx->pc = 0x4F4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C8Cu;
        // 0x4f4c90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4C94u;
        goto label_4f4c94;
    }
    ctx->pc = 0x4F4C8Cu;
    {
        const bool branch_taken_0x4f4c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C8Cu;
        // 0x4f4c90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4c8c) {
            ctx->pc = 0x4F4CF8u;
            goto label_4f4cf8;
        }
    }
    ctx->pc = 0x4F4C94u;
label_4f4c94:
    // 0x4f4c94: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x4f4c94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4c98:
    // 0x4f4c98: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4f4c98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4f4c9c:
    // 0x4f4c9c: 0x3c140059  lui         $s4, 0x59
    ctx->pc = 0x4f4c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
label_4f4ca0:
    // 0x4f4ca0: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4f4ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
label_4f4ca4:
    // 0x4f4ca4: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4f4ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_4f4ca8:
    // 0x4f4ca8: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_4f4cac:
    if (ctx->pc == 0x4F4CACu) {
        ctx->pc = 0x4F4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4CA8u;
        // 0x4f4cac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4CB0u;
        goto label_4f4cb0;
    }
    ctx->pc = 0x4F4CA8u;
    {
        const bool branch_taken_0x4f4ca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4ca8) {
            ctx->pc = 0x4F4CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F4CA8u;
            // 0x4f4cac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4CB0u;
            goto label_4f4cb0;
        }
    }
    ctx->pc = 0x4F4CB0u;
label_4f4cb0:
    // 0x4f4cb0: 0x26858a48  addiu       $a1, $s4, -0x75B8
    ctx->pc = 0x4f4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937160));
label_4f4cb4:
    // 0x4f4cb4: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x4f4cb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_4f4cb8:
    // 0x4f4cb8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x4f4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4f4cbc:
    // 0x4f4cbc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f4cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f4cc0:
    // 0x4f4cc0: 0x26688a50  addiu       $t0, $s3, -0x75B0
    ctx->pc = 0x4f4cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937168));
label_4f4cc4:
    // 0x4f4cc4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4f4cc8:
    // 0x4f4cc8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f4cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f4ccc:
    // 0x4f4ccc: 0x264a8a78  addiu       $t2, $s2, -0x7588
    ctx->pc = 0x4f4cccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937208));
label_4f4cd0:
    // 0x4f4cd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f4cd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4cd4:
    // 0x4f4cd4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f4cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f4cd8:
    // 0x4f4cd8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f4cdc:
    // 0x4f4cdc: 0x40f809  jalr        $v0
label_4f4ce0:
    if (ctx->pc == 0x4F4CE0u) {
        ctx->pc = 0x4F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4CDCu;
        // 0x4f4ce0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4CE4u;
        goto label_4f4ce4;
    }
    ctx->pc = 0x4F4CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F4CE4u);
        ctx->pc = 0x4F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4CDCu;
        // 0x4f4ce0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4CDCu, 0x4F4CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4CE4u;
label_4f4ce4:
    // 0x4f4ce4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f4ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f4ce8:
    // 0x4f4ce8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4f4ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f4cec:
    // 0x4f4cec: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4f4cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f4cf0:
    // 0x4f4cf0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_4f4cf4:
    if (ctx->pc == 0x4F4CF4u) {
        ctx->pc = 0x4F4CF8u;
        goto label_4f4cf8;
    }
    ctx->pc = 0x4F4CF0u;
    {
        const bool branch_taken_0x4f4cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f4cf0) {
            ctx->pc = 0x4F4CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f4ca8;
        }
    }
    ctx->pc = 0x4F4CF8u;
label_4f4cf8:
    // 0x4f4cf8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4f4cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f4cfc:
    // 0x4f4cfc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4f4cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f4d00:
    // 0x4f4d00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4f4d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f4d04:
    // 0x4f4d04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f4d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4d08:
    // 0x4f4d08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4f4d08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4d0c:
    // 0x4f4d0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4f4d0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4d10:
    // 0x4f4d10: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4f4d10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4d14:
    // 0x4f4d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4d18:
    // 0x4f4d18: 0x3e00008  jr          $ra
label_4f4d1c:
    if (ctx->pc == 0x4F4D1Cu) {
        ctx->pc = 0x4F4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4D18u;
        // 0x4f4d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4D20u;
        goto label_fallthrough_0x4f4d18;
    }
    ctx->pc = 0x4F4D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4D18u;
        // 0x4f4d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f4d18:
    ctx->pc = 0x4F4D20u;
}
