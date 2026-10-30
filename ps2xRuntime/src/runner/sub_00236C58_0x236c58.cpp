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

// Function: sub_00236C58
// Address: 0x236c58 - 0x236d28
void sub_00236C58_0x236c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C58_0x236c58");
#endif

    switch (ctx->pc) {
        case 0x236c9cu: goto label_236c9c;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cecu: goto label_236cec;
        default: break;
    }

    ctx->pc = 0x236c58u;

    // 0x236c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x236c5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x236c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x236c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x236c64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x236c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x236c68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x236c70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x236c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x236c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x236c78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x236c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236C80u;
    {
        const bool branch_taken_0x236c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C80u;
        // 0x236c84: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c80) {
            ctx->pc = 0x236CA4u;
            goto label_236ca4;
        }
    }
    ctx->pc = 0x236C88u;
    // 0x236c88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x236c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x236c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c90: 0x24846830  addiu       $a0, $a0, 0x6830
    ctx->pc = 0x236c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    // 0x236c94: 0xc10c4de  jal         func_431378
    ctx->pc = 0x236C94u;
    SET_GPR_U32(ctx, 31, 0x236C9Cu);
    ctx->pc = 0x236C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C94u;
    // 0x236c98: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x236C94u, 0x236C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C9Cu;
label_236c9c:
    // 0x236c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236C9Cu;
    {
        const bool branch_taken_0x236c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c9c) {
            ctx->pc = 0x236CACu;
            goto label_236cac;
        }
    }
    ctx->pc = 0x236CA4u;
label_236ca4:
    // 0x236ca4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x236ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x236ca8: 0xa0406830  sb          $zero, 0x6830($v0)
    ctx->pc = 0x236ca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B6830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6830u, _value); } while (0);
label_236cac:
    // 0x236cac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236CACu;
    {
        const bool branch_taken_0x236cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CACu;
        // 0x236cb0: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cac) {
            ctx->pc = 0x236CCCu;
            goto label_236ccc;
        }
    }
    ctx->pc = 0x236CB4u;
    // 0x236cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cb8: 0x24846850  addiu       $a0, $a0, 0x6850
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26704));
    // 0x236cbc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x236CBCu;
    SET_GPR_U32(ctx, 31, 0x236CC4u);
    ctx->pc = 0x236CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CBCu;
    // 0x236cc0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x236CBCu, 0x236CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CC4u;
label_236cc4:
    // 0x236cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236CC4u;
    {
        const bool branch_taken_0x236cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236cc4) {
            ctx->pc = 0x236CD4u;
            goto label_236cd4;
        }
    }
    ctx->pc = 0x236CCCu;
label_236ccc:
    // 0x236ccc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x236cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x236cd0: 0xa0406850  sb          $zero, 0x6850($v0)
    ctx->pc = 0x236cd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B6850u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6850u, _value); } while (0);
label_236cd4:
    // 0x236cd4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x236CD4u;
    {
        const bool branch_taken_0x236cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CD4u;
        // 0x236cd8: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cd4) {
            ctx->pc = 0x236CF4u;
            goto label_236cf4;
        }
    }
    ctx->pc = 0x236CDCu;
    // 0x236cdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ce0: 0x24846810  addiu       $a0, $a0, 0x6810
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26640));
    // 0x236ce4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x236CE4u;
    SET_GPR_U32(ctx, 31, 0x236CECu);
    ctx->pc = 0x236CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CE4u;
    // 0x236ce8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x236CE4u, 0x236CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CECu;
label_236cec:
    // 0x236cec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x236CECu;
    {
        const bool branch_taken_0x236cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CECu;
        // 0x236cf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cec) {
            ctx->pc = 0x236D00u;
            goto label_236d00;
        }
    }
    ctx->pc = 0x236CF4u;
label_236cf4:
    // 0x236cf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x236cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x236cf8: 0xa0406810  sb          $zero, 0x6810($v0)
    ctx->pc = 0x236cf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B6810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6810u, _value); } while (0);
    // 0x236cfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_236d00:
    // 0x236d00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x236d04: 0xac520294  sw          $s2, 0x294($v0)
    ctx->pc = 0x236d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 660), GPR_U32(ctx, 18));
    // 0x236d08: 0xac730290  sw          $s3, 0x290($v1)
    ctx->pc = 0x236d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x510290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510290u, _value); } while (0);
    // 0x236d0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x236d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236d10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x236d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x236d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d20: 0x3e00008  jr          $ra
    ctx->pc = 0x236D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D20u;
        // 0x236d24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D28u;
}
