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

// Function: sub_00320C68
// Address: 0x320c68 - 0x320d30
void sub_00320C68_0x320c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320C68_0x320c68");
#endif

    switch (ctx->pc) {
        case 0x320cb0u: goto label_320cb0;
        case 0x320cd8u: goto label_320cd8;
        case 0x320d20u: goto label_320d20;
        default: break;
    }

    ctx->pc = 0x320c68u;

    // 0x320c68: 0x27bdf6f0  addiu       $sp, $sp, -0x910
    ctx->pc = 0x320c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964976));
    // 0x320c6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320c70: 0xffbf0900  sd          $ra, 0x900($sp)
    ctx->pc = 0x320c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2304), GPR_U64(ctx, 31));
    // 0x320c74: 0x84830028  lh          $v1, 0x28($a0)
    ctx->pc = 0x320c74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x320c78: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x320C78u;
    {
        const bool branch_taken_0x320c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x320C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C78u;
        // 0x320c7c: 0x94870028  lhu         $a3, 0x28($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c78) {
            ctx->pc = 0x320D20u;
            goto label_320d20;
        }
    }
    ctx->pc = 0x320C80u;
    // 0x320c80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x320c84: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x320c84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x320c88: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x320c8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x320c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x320c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c94: 0xac601650  sw          $zero, 0x1650($v1)
    ctx->pc = 0x320c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x511650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x511650u, _value); } while (0);
    // 0x320c98: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
    // 0x320c9c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x320c9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x320ca0: 0xacc2164c  sw          $v0, 0x164C($a2)
    ctx->pc = 0x320ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x51164Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51164Cu, _value); } while (0);
    // 0x320ca4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x320ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ca8: 0xc0e6a90  jal         func_39AA40
    ctx->pc = 0x320CA8u;
    SET_GPR_U32(ctx, 31, 0x320CB0u);
    ctx->pc = 0x320CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CA8u;
    // 0x320cac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA40u, 0x320CA8u, 0x320CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CB0u;
label_320cb0:
    // 0x320cb0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x320cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cb4: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x320CB4u;
    {
        const bool branch_taken_0x320cb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CB4u;
        // 0x320cb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cb4) {
            ctx->pc = 0x320D20u;
            goto label_320d20;
        }
    }
    ctx->pc = 0x320CBCu;
    // 0x320cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cc0: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x320CC0u;
    {
        const bool branch_taken_0x320cc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CC0u;
        // 0x320cc4: 0x27a40800  addiu       $a0, $sp, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cc0) {
            ctx->pc = 0x320D0Cu;
            goto label_320d0c;
        }
    }
    ctx->pc = 0x320CC8u;
    // 0x320cc8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x320cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320ccc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x320cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cd0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x320cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cd4: 0x0  nop
    ctx->pc = 0x320cd4u;
    // NOP
label_320cd8:
    // 0x320cd8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x320cdc: 0x90620109  lbu         $v0, 0x109($v1)
    ctx->pc = 0x320cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 265)));
    // 0x320ce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x320ce4: 0x144a0006  bne         $v0, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x320CE4u;
    {
        const bool branch_taken_0x320ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x320CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CE4u;
        // 0x320ce8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ce4) {
            ctx->pc = 0x320D00u;
            goto label_320d00;
        }
    }
    ctx->pc = 0x320CECu;
    // 0x320cec: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x320cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x320cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x320cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x320cf4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x320cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x320cf8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x320cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x320cfc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x320cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_320d00:
    // 0x320d00: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x320d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x320d04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x320D04u;
    {
        const bool branch_taken_0x320d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D04u;
        // 0x320d08: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d04) {
            ctx->pc = 0x320CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320cd8;
        }
    }
    ctx->pc = 0x320D0Cu;
label_320d0c:
    // 0x320d0c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x320d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x320d10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x320d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x320d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x320d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320d18: 0xc0e1976  jal         func_3865D8
    ctx->pc = 0x320D18u;
    SET_GPR_U32(ctx, 31, 0x320D20u);
    ctx->pc = 0x320D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D18u;
    // 0x320d1c: 0x24c613d8  addiu       $a2, $a2, 0x13D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3865D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3865D8u, 0x320D18u, 0x320D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D20u;
label_320d20:
    // 0x320d20: 0xdfbf0900  ld          $ra, 0x900($sp)
    ctx->pc = 0x320d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x320d24: 0x3e00008  jr          $ra
    ctx->pc = 0x320D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D24u;
        // 0x320d28: 0x27bd0910  addiu       $sp, $sp, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320D2Cu;
    // 0x320d2c: 0x0  nop
    ctx->pc = 0x320d2cu;
    // NOP
    ctx->pc = 0x320d30u;
}
