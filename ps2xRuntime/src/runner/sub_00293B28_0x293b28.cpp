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

// Function: sub_00293B28
// Address: 0x293b28 - 0x293c68
void sub_00293B28_0x293b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B28_0x293b28");
#endif

    switch (ctx->pc) {
        case 0x293ba8u: goto label_293ba8;
        case 0x293bbcu: goto label_293bbc;
        case 0x293be4u: goto label_293be4;
        case 0x293becu: goto label_293bec;
        case 0x293c10u: goto label_293c10;
        case 0x293c34u: goto label_293c34;
        default: break;
    }

    ctx->pc = 0x293b28u;

    // 0x293b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x293b2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x293b30: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x293b34: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x293b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x293b38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x293b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x293b3c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x293b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x293b40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x293b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x293b44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x293b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x293b48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x293b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x293b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293b50: 0x8ca20aec  lw          $v0, 0xAEC($a1)
    ctx->pc = 0x293b50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x510AECu));
    // 0x293b54: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x293b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x293b58: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x293b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x293b5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293B5Cu;
    {
        const bool branch_taken_0x293b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B5Cu;
        // 0x293b60: 0x246203e8  addiu       $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b5c) {
            ctx->pc = 0x293B68u;
            goto label_293b68;
        }
    }
    ctx->pc = 0x293B64u;
    // 0x293b64: 0xaca20aec  sw          $v0, 0xAEC($a1)
    ctx->pc = 0x293b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2796), GPR_U32(ctx, 2));
label_293b68:
    // 0x293b68: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x293b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x293b6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x293b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x293b70: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x293b70u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x293b74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x293B74u;
    {
        const bool branch_taken_0x293b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b74) {
            ctx->pc = 0x293B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B74u;
            // 0x293b78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x293B7Cu;
            goto label_293b7c;
        }
    }
    ctx->pc = 0x293B7Cu;
label_293b7c:
    // 0x293b7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x293b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x293b80: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x293b84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293b88: 0xac600ac0  sw          $zero, 0xAC0($v1)
    ctx->pc = 0x293b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510AC0u, _value); } while (0);
    // 0x293b8c: 0xac800ac4  sw          $zero, 0xAC4($a0)
    ctx->pc = 0x293b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510AC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510AC4u, _value); } while (0);
    // 0x293b90: 0x245053f0  addiu       $s0, $v0, 0x53F0
    ctx->pc = 0x293b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x293b94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x293b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b98: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x293b98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x293b9c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x293b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x293ba0: 0x9810  mfhi        $s3
    ctx->pc = 0x293ba0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x293ba4: 0x0  nop
    ctx->pc = 0x293ba4u;
    // NOP
label_293ba8:
    // 0x293ba8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x293ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293bac: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x293BACu;
    {
        const bool branch_taken_0x293bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293bac) {
            ctx->pc = 0x293BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293BACu;
            // 0x293bb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BF0u;
            goto label_293bf0;
        }
    }
    ctx->pc = 0x293BB4u;
    // 0x293bb4: 0xc08f5e4  jal         func_23D790
    ctx->pc = 0x293BB4u;
    SET_GPR_U32(ctx, 31, 0x293BBCu);
    ctx->pc = 0x293BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293BB4u;
    // 0x293bb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D790u, 0x293BB4u, 0x293BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BBCu;
label_293bbc:
    // 0x293bbc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x293BBCu;
    {
        const bool branch_taken_0x293bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293bbc) {
            ctx->pc = 0x293BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293BBCu;
            // 0x293bc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BF0u;
            goto label_293bf0;
        }
    }
    ctx->pc = 0x293BC4u;
    // 0x293bc4: 0x232001b  divu        $zero, $s1, $s2
    ctx->pc = 0x293bc4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x293bc8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x293BC8u;
    {
        const bool branch_taken_0x293bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x293bc8) {
            ctx->pc = 0x293BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293BC8u;
            // 0x293bcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BD0u;
            goto label_293bd0;
        }
    }
    ctx->pc = 0x293BD0u;
label_293bd0:
    // 0x293bd0: 0x1010  mfhi        $v0
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x293bd4: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x293BD4u;
    {
        const bool branch_taken_0x293bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x293bd4) {
            ctx->pc = 0x293BE4u;
            goto label_293be4;
        }
    }
    ctx->pc = 0x293BDCu;
    // 0x293bdc: 0xc0a3db0  jal         func_28F6C0
    ctx->pc = 0x293BDCu;
    SET_GPR_U32(ctx, 31, 0x293BE4u);
    ctx->pc = 0x293BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293BDCu;
    // 0x293be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6C0u, 0x293BDCu, 0x293BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BE4u;
label_293be4:
    // 0x293be4: 0xc0a3e2e  jal         func_28F8B8
    ctx->pc = 0x293BE4u;
    SET_GPR_U32(ctx, 31, 0x293BECu);
    ctx->pc = 0x293BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293BE4u;
    // 0x293be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B8u, 0x293BE4u, 0x293BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BECu;
label_293bec:
    // 0x293bec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x293becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_293bf0:
    // 0x293bf0: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x293bf4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x293BF4u;
    {
        const bool branch_taken_0x293bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BF4u;
        // 0x293bf8: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bf4) {
            ctx->pc = 0x293BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293ba8;
        }
    }
    ctx->pc = 0x293BFCu;
    // 0x293bfc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293c00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c04: 0x2451de30  addiu       $s1, $v0, -0x21D0
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x293c08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x293c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293c0c: 0x0  nop
    ctx->pc = 0x293c0cu;
    // NOP
label_293c10:
    // 0x293c10: 0x8e83e970  lw          $v1, -0x1690($s4)
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961520)));
    // 0x293c14: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x293c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x293c18: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x293c1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x293c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x293c20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x293c20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x293c24: 0x54720004  bnel        $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x293C24u;
    {
        const bool branch_taken_0x293c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x293c24) {
            ctx->pc = 0x293C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293C24u;
            // 0x293c28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C38u;
            goto label_293c38;
        }
    }
    ctx->pc = 0x293C2Cu;
    // 0x293c2c: 0xc0a65de  jal         func_299778
    ctx->pc = 0x293C2Cu;
    SET_GPR_U32(ctx, 31, 0x293C34u);
    ctx->pc = 0x293C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C2Cu;
    // 0x293c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299778u, 0x293C2Cu, 0x293C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C34u;
label_293c34:
    // 0x293c34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x293c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_293c38:
    // 0x293c38: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x293c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x293c3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x293C3Cu;
    {
        const bool branch_taken_0x293c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C3Cu;
        // 0x293c40: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c3c) {
            ctx->pc = 0x293C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c10;
        }
    }
    ctx->pc = 0x293C44u;
    // 0x293c44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x293c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293c48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x293c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293c4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x293c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293c50: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x293c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293c54: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x293c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x293C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C5Cu;
        // 0x293c60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293C64u;
    // 0x293c64: 0x0  nop
    ctx->pc = 0x293c64u;
    // NOP
    ctx->pc = 0x293c68u;
}
