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

// Function: sub_0042EDD0
// Address: 0x42edd0 - 0x42ef48
void sub_0042EDD0_0x42edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EDD0_0x42edd0");
#endif

    switch (ctx->pc) {
        case 0x42ee20u: goto label_42ee20;
        case 0x42ee60u: goto label_42ee60;
        case 0x42ef00u: goto label_42ef00;
        default: break;
    }

    ctx->pc = 0x42edd0u;

    // 0x42edd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42edd4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x42edd4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42edd8: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x42edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x42eddc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x42eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x42ede0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x42ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x42ede4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x42ede4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ede8: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x42ede8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42edec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x42edecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x42edf0: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x42edf0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x42edf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42edf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42edf8: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x42edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x42edfc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x42edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x42ee00: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x42ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x42ee04: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x42ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x42ee08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x42ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x42ee0c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x42ee0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x42ee10: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x42EE10u;
    {
        const bool branch_taken_0x42ee10 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EE10u;
        // 0x42ee14: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee10) {
            ctx->pc = 0x42EEECu;
            goto label_42eeec;
        }
    }
    ctx->pc = 0x42EE18u;
    // 0x42ee18: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x42ee18u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x42ee1c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x42ee1cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_42ee20:
    // 0x42ee20: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42ee20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ee24: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x42EE24u;
    {
        const bool branch_taken_0x42ee24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x42EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EE24u;
        // 0x42ee28: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee24) {
            ctx->pc = 0x42EECCu;
            goto label_42eecc;
        }
    }
    ctx->pc = 0x42EE2Cu;
    // 0x42ee2c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x42ee2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x42ee30: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x42ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x42ee34: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x42ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x42ee38: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x42ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x42ee3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ee40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x42ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42ee44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42ee48: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42ee4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42ee50: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x42EE50u;
    {
        const bool branch_taken_0x42ee50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x42EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EE50u;
        // 0x42ee54: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee50) {
            ctx->pc = 0x42EECCu;
            goto label_42eecc;
        }
    }
    ctx->pc = 0x42EE58u;
    // 0x42ee58: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x42ee58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x42ee5c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x42ee5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_42ee60:
    // 0x42ee60: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x42ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x42ee64: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x42ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x42ee68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x42ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ee6c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x42ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x42ee70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x42ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42ee74: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x42ee74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42ee78: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x42ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x42ee7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42ee80: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x42ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x42ee84: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x42ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x42ee88: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x42ee88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x42ee8c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x42ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x42ee90: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x42EE90u;
    {
        const bool branch_taken_0x42ee90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x42EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EE90u;
        // 0x42ee94: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee90) {
            ctx->pc = 0x42EED0u;
            goto label_42eed0;
        }
    }
    ctx->pc = 0x42EE98u;
    // 0x42ee98: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x42ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x42ee9c: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x42ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x42eea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x42eea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eea4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x42eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42eea8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x42eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x42eeac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42eeb0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42eeb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42eeb8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x42eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42eebc: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x42EEBCu;
    {
        const bool branch_taken_0x42eebc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x42EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EEBCu;
        // 0x42eec0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eebc) {
            ctx->pc = 0x42EE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ee60;
        }
    }
    ctx->pc = 0x42EEC4u;
    // 0x42eec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42EEC4u;
    {
        const bool branch_taken_0x42eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EEC4u;
        // 0x42eec8: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eec4) {
            ctx->pc = 0x42EED8u;
            goto label_42eed8;
        }
    }
    ctx->pc = 0x42EECCu;
label_42eecc:
    // 0x42eecc: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x42eeccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_42eed0:
    // 0x42eed0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x42eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eed4: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x42eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_42eed8:
    // 0x42eed8: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x42eed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eedc: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x42eedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x42eee0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x42EEE0u;
    {
        const bool branch_taken_0x42eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EEE0u;
        // 0x42eee4: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eee0) {
            ctx->pc = 0x42EE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ee20;
        }
    }
    ctx->pc = 0x42EEE8u;
    // 0x42eee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42eee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42eeec:
    // 0x42eeec: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x42EEECu;
    {
        const bool branch_taken_0x42eeec = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EEECu;
        // 0x42eef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eeec) {
            ctx->pc = 0x42EF2Cu;
            goto label_42ef2c;
        }
    }
    ctx->pc = 0x42EEF4u;
    // 0x42eef4: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x42eef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x42eef8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x42eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x42eefc: 0x0  nop
    ctx->pc = 0x42eefcu;
    // NOP
label_42ef00:
    // 0x42ef00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x42ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x42ef04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ef08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42EF08u;
    {
        const bool branch_taken_0x42ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF08u;
        // 0x42ef0c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ef08) {
            ctx->pc = 0x42EF1Cu;
            goto label_42ef1c;
        }
    }
    ctx->pc = 0x42EF10u;
    // 0x42ef10: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x42ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x42ef14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x42ef14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x42ef18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x42ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_42ef1c:
    // 0x42ef1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x42ef1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x42ef20: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x42ef20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x42ef24: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x42EF24u;
    {
        const bool branch_taken_0x42ef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF24u;
        // 0x42ef28: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ef24) {
            ctx->pc = 0x42EF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ef00;
        }
    }
    ctx->pc = 0x42EF2Cu;
label_42ef2c:
    // 0x42ef2c: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x42ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x42ef30: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x42ef30u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ef34: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x42ef34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42ef38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x42ef38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x42EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF3Cu;
        // 0x42ef40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EF44u;
    // 0x42ef44: 0x0  nop
    ctx->pc = 0x42ef44u;
    // NOP
    ctx->pc = 0x42ef48u;
}
