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

// Function: sub_00172C70
// Address: 0x172c70 - 0x172d60
void sub_00172C70_0x172c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172C70_0x172c70");
#endif

    switch (ctx->pc) {
        case 0x172cb8u: goto label_172cb8;
        case 0x172cc8u: goto label_172cc8;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d10u: goto label_172d10;
        default: break;
    }

    ctx->pc = 0x172c70u;

    // 0x172c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172c78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x172c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x172c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x172c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x172c84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x172c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172c8c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x172c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172C90u;
    {
        const bool branch_taken_0x172c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C90u;
        // 0x172c94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c90) {
            ctx->pc = 0x172CA4u;
            goto label_172ca4;
        }
    }
    ctx->pc = 0x172C98u;
    // 0x172c98: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x172c9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172C9Cu;
    {
        const bool branch_taken_0x172c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172c9c) {
            ctx->pc = 0x172CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172C9Cu;
            // 0x172ca0: 0xa2530041  sb          $s3, 0x41($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 65), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172CACu;
            goto label_172cac;
        }
    }
    ctx->pc = 0x172CA4u;
label_172ca4:
    // 0x172ca4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x172CA4u;
    {
        const bool branch_taken_0x172ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CA4u;
        // 0x172ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ca4) {
            ctx->pc = 0x172D44u;
            goto label_172d44;
        }
    }
    ctx->pc = 0x172CACu;
label_172cac:
    // 0x172cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cb0: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x172CB0u;
    SET_GPR_U32(ctx, 31, 0x172CB8u);
    ctx->pc = 0x172CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CB0u;
    // 0x172cb4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x172CB0u, 0x172CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CB8u;
label_172cb8:
    // 0x172cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cbc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x172cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x172cc0: 0xc11a45e  jal         func_469178
    ctx->pc = 0x172CC0u;
    SET_GPR_U32(ctx, 31, 0x172CC8u);
    ctx->pc = 0x172CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CC0u;
    // 0x172cc4: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x172CC0u, 0x172CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CC8u;
label_172cc8:
    // 0x172cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x172ccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cd0: 0x8e24cce4  lw          $a0, -0x331C($s1)
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954212)));
    // 0x172cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ce0: 0xc05f784  jal         func_17DE10
    ctx->pc = 0x172CE0u;
    SET_GPR_U32(ctx, 31, 0x172CE8u);
    ctx->pc = 0x172CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CE0u;
    // 0x172ce4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE10u, 0x172CE0u, 0x172CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CE8u;
label_172ce8:
    // 0x172ce8: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x172cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cf0: 0x24a52940  addiu       $a1, $a1, 0x2940
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10560));
    // 0x172cf4: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x172CF4u;
    SET_GPR_U32(ctx, 31, 0x172CFCu);
    ctx->pc = 0x172CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CF4u;
    // 0x172cf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x172CF4u, 0x172CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CFCu;
label_172cfc:
    // 0x172cfc: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x172CFCu;
    {
        const bool branch_taken_0x172cfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x172D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CFCu;
        // 0x172d00: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cfc) {
            ctx->pc = 0x172D34u;
            goto label_172d34;
        }
    }
    ctx->pc = 0x172D04u;
    // 0x172d04: 0xa2400040  sb          $zero, 0x40($s2)
    ctx->pc = 0x172d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x172d08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172d10:
    // 0x172d10: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x172d14: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x172d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x172d18: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x172d18u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x172d1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x172d20: 0x8ca211fc  lw          $v0, 0x11FC($a1)
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4604)));
    // 0x172d24: 0x2cc4001a  sltiu       $a0, $a2, 0x1A
    ctx->pc = 0x172d24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x172d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x172d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x172d2c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x172D2Cu;
    {
        const bool branch_taken_0x172d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x172D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D2Cu;
        // 0x172d30: 0xaca211fc  sw          $v0, 0x11FC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d2c) {
            ctx->pc = 0x172D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172d10;
        }
    }
    ctx->pc = 0x172D34u;
label_172d34:
    // 0x172d34: 0x8d04b734  lw          $a0, -0x48CC($t0)
    ctx->pc = 0x172d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948660)));
    // 0x172d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d3c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x172d40: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x172d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_172d44:
    // 0x172d44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x172d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x172d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172d50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x172d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172d58: 0x3e00008  jr          $ra
    ctx->pc = 0x172D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D58u;
        // 0x172d5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172D60u;
}
