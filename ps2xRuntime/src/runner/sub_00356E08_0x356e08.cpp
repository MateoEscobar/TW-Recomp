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

// Function: sub_00356E08
// Address: 0x356e08 - 0x356f70
void sub_00356E08_0x356e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356E08_0x356e08");
#endif

    switch (ctx->pc) {
        case 0x356e50u: goto label_356e50;
        case 0x356ebcu: goto label_356ebc;
        case 0x356ed0u: goto label_356ed0;
        case 0x356ee0u: goto label_356ee0;
        case 0x356ef8u: goto label_356ef8;
        case 0x356f00u: goto label_356f00;
        case 0x356f10u: goto label_356f10;
        case 0x356f20u: goto label_356f20;
        case 0x356f48u: goto label_356f48;
        default: break;
    }

    ctx->pc = 0x356e08u;

    // 0x356e08: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x356e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e10: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x356e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x356e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x356e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e18: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x356e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x356e1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x356e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e20: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x356e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x356e24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x356e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e28: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x356e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x356e2c: 0x240b002e  addiu       $t3, $zero, 0x2E
    ctx->pc = 0x356e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x356e30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x356e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x356e34: 0x240a003a  addiu       $t2, $zero, 0x3A
    ctx->pc = 0x356e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x356e38: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x356e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x356e3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x356e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356e40: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x356e40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x356e44: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x356e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x356e48: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x356e4c: 0x0  nop
    ctx->pc = 0x356e4cu;
    // NOP
label_356e50:
    // 0x356e50: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x356e50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356e54: 0x148b0003  bne         $a0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x356E54u;
    {
        const bool branch_taken_0x356e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x356E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E54u;
        // 0x356e58: 0x90460000  lbu         $a2, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e54) {
            ctx->pc = 0x356E64u;
            goto label_356e64;
        }
    }
    ctx->pc = 0x356E5Cu;
    // 0x356e5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x356E5Cu;
    {
        const bool branch_taken_0x356e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E5Cu;
        // 0x356e60: 0x121140  sll         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e5c) {
            ctx->pc = 0x356E8Cu;
            goto label_356e8c;
        }
    }
    ctx->pc = 0x356E64u;
label_356e64:
    // 0x356e64: 0x108a0008  beq         $a0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x356E64u;
    {
        const bool branch_taken_0x356e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x356E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E64u;
        // 0x356e68: 0x121140  sll         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e64) {
            ctx->pc = 0x356E88u;
            goto label_356e88;
        }
    }
    ctx->pc = 0x356E6Cu;
    // 0x356e6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x356e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x356e70: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x356e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x356e74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x356e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x356e78: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x356E78u;
    {
        const bool branch_taken_0x356e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x356E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E78u;
        // 0x356e7c: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e78) {
            ctx->pc = 0x356EA0u;
            goto label_356ea0;
        }
    }
    ctx->pc = 0x356E80u;
    // 0x356e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x356E80u;
    {
        const bool branch_taken_0x356e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E80u;
        // 0x356e84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e80) {
            ctx->pc = 0x356EB0u;
            goto label_356eb0;
        }
    }
    ctx->pc = 0x356E88u;
label_356e88:
    // 0x356e88: 0xae89001c  sw          $t1, 0x1C($s4)
    ctx->pc = 0x356e88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 9));
label_356e8c:
    // 0x356e8c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x356e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x356e90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x356e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x356e94: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x356e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x356e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e9c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x356e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_356ea0:
    // 0x356ea0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x356ea4: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x356ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x356ea8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x356EA8u;
    {
        const bool branch_taken_0x356ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EA8u;
        // 0x356eac: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ea8) {
            ctx->pc = 0x356E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356e50;
        }
    }
    ctx->pc = 0x356EB0u;
label_356eb0:
    // 0x356eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356eb4: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x356EB4u;
    SET_GPR_U32(ctx, 31, 0x356EBCu);
    ctx->pc = 0x356EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EB4u;
    // 0x356eb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x356EB4u, 0x356EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EBCu;
label_356ebc:
    // 0x356ebc: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x356ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x356ec0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356EC0u;
    {
        const bool branch_taken_0x356ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EC0u;
        // 0x356ec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ec0) {
            ctx->pc = 0x356ED8u;
            goto label_356ed8;
        }
    }
    ctx->pc = 0x356EC8u;
    // 0x356ec8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x356EC8u;
    SET_GPR_U32(ctx, 31, 0x356ED0u);
    ctx->pc = 0x356ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EC8u;
    // 0x356ecc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x356EC8u, 0x356ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356ED0u;
label_356ed0:
    // 0x356ed0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356ED0u;
    {
        const bool branch_taken_0x356ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356ED0u;
        // 0x356ed4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ed0) {
            ctx->pc = 0x356EE4u;
            goto label_356ee4;
        }
    }
    ctx->pc = 0x356ED8u;
label_356ed8:
    // 0x356ed8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x356ED8u;
    SET_GPR_U32(ctx, 31, 0x356EE0u);
    ctx->pc = 0x356EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356ED8u;
    // 0x356edc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x356ED8u, 0x356EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EE0u;
label_356ee0:
    // 0x356ee0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x356ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356ee4:
    // 0x356ee4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x356ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x356ee8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x356EE8u;
    {
        const bool branch_taken_0x356ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EE8u;
        // 0x356eec: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ee8) {
            ctx->pc = 0x356F2Cu;
            goto label_356f2c;
        }
    }
    ctx->pc = 0x356EF0u;
    // 0x356ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ef4: 0x0  nop
    ctx->pc = 0x356ef4u;
    // NOP
label_356ef8:
    // 0x356ef8: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x356EF8u;
    SET_GPR_U32(ctx, 31, 0x356F00u);
    ctx->pc = 0x356EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EF8u;
    // 0x356efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x356EF8u, 0x356F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F00u;
label_356f00:
    // 0x356f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x356f04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f08: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x356F08u;
    SET_GPR_U32(ctx, 31, 0x356F10u);
    ctx->pc = 0x356F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F08u;
    // 0x356f0c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x356F08u, 0x356F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F10u;
label_356f10:
    // 0x356f10: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x356f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x356f14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f18: 0xc0c8cdc  jal         func_323370
    ctx->pc = 0x356F18u;
    SET_GPR_U32(ctx, 31, 0x356F20u);
    ctx->pc = 0x356F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F18u;
    // 0x356f1c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323370u, 0x356F18u, 0x356F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F20u;
label_356f20:
    // 0x356f20: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x356f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x356f24: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x356F24u;
    {
        const bool branch_taken_0x356f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356f24) {
            ctx->pc = 0x356F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356F24u;
            // 0x356f28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356ef8;
        }
    }
    ctx->pc = 0x356F2Cu;
label_356f2c:
    // 0x356f2c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x356f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x356f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356f34: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356F34u;
    {
        const bool branch_taken_0x356f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x356F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F34u;
        // 0x356f38: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f34) {
            ctx->pc = 0x356F50u;
            goto label_356f50;
        }
    }
    ctx->pc = 0x356F3Cu;
    // 0x356f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f40: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x356F40u;
    SET_GPR_U32(ctx, 31, 0x356F48u);
    ctx->pc = 0x356F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F40u;
    // 0x356f44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x356F40u, 0x356F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F48u;
label_356f48:
    // 0x356f48: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x356f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x356f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356f50:
    // 0x356f50: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x356f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x356f54: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x356f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x356f58: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x356f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x356f5c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x356f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x356f60: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x356f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x356f64: 0x3e00008  jr          $ra
    ctx->pc = 0x356F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F64u;
        // 0x356f68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356F6Cu;
    // 0x356f6c: 0x0  nop
    ctx->pc = 0x356f6cu;
    // NOP
    ctx->pc = 0x356f70u;
}
