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

// Function: sub_00493E60
// Address: 0x493e60 - 0x4940c8
void sub_00493E60_0x493e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493E60_0x493e60");
#endif

    switch (ctx->pc) {
        case 0x493e88u: goto label_493e88;
        case 0x493e98u: goto label_493e98;
        case 0x493ec0u: goto label_493ec0;
        case 0x493f08u: goto label_493f08;
        case 0x493f18u: goto label_493f18;
        case 0x493f28u: goto label_493f28;
        default: break;
    }

    ctx->pc = 0x493e60u;

    // 0x493e60: 0x27bdef90  addiu       $sp, $sp, -0x1070
    ctx->pc = 0x493e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963088));
    // 0x493e64: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x493e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493e68: 0x7fb01060  sq          $s0, 0x1060($sp)
    ctx->pc = 0x493e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 16));
    // 0x493e6c: 0x7fb11050  sq          $s1, 0x1050($sp)
    ctx->pc = 0x493e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 17));
    // 0x493e70: 0x7fb21040  sq          $s2, 0x1040($sp)
    ctx->pc = 0x493e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 18));
    // 0x493e74: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x493e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x493e78: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x493E78u;
    {
        const bool branch_taken_0x493e78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493E78u;
        // 0x493e7c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493e78) {
            ctx->pc = 0x4940B0u;
            goto label_4940b0;
        }
    }
    ctx->pc = 0x493E80u;
    // 0x493e80: 0x27b11000  addiu       $s1, $sp, 0x1000
    ctx->pc = 0x493e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x493e84: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x493e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_493e88:
    // 0x493e88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x493e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493e8c: 0x25b20004  addiu       $s2, $t5, 0x4
    ctx->pc = 0x493e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x493e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x493e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493e94: 0x0  nop
    ctx->pc = 0x493e94u;
    // NOP
label_493e98:
    // 0x493e98: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x493E98u;
    {
        const bool branch_taken_0x493e98 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x493E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493E98u;
        // 0x493e9c: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493e98) {
            ctx->pc = 0x493EDCu;
            goto label_493edc;
        }
    }
    ctx->pc = 0x493EA0u;
    // 0x493ea0: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x493ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x493ea4: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x493ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x493ea8: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x493ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x493eac: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x493eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x493eb0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x493eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x493eb4: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x493eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x493eb8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x493eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x493ebc: 0x0  nop
    ctx->pc = 0x493ebcu;
    // NOP
label_493ec0:
    // 0x493ec0: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x493ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x493ec4: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x493ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x493ec8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x493ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x493ecc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x493eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x493ed0: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x493ed0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x493ed4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x493ED4u;
    {
        const bool branch_taken_0x493ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x493ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493ED4u;
        // 0x493ed8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ed4) {
            ctx->pc = 0x493EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493ec0;
        }
    }
    ctx->pc = 0x493EDCu;
label_493edc:
    // 0x493edc: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x493edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493ee0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x493ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x493ee4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x493EE4u;
    {
        const bool branch_taken_0x493ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493EE4u;
        // 0x493ee8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ee4) {
            ctx->pc = 0x493E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493e98;
        }
    }
    ctx->pc = 0x493EECu;
    // 0x493eec: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x493eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x493ef0: 0x5840006b  blezl       $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x493EF0u;
    {
        const bool branch_taken_0x493ef0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x493ef0) {
            ctx->pc = 0x493EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493EF0u;
            // 0x493ef4: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4940A0u;
            goto label_4940a0;
        }
    }
    ctx->pc = 0x493EF8u;
    // 0x493ef8: 0x31b00004  andi        $s0, $t5, 0x4
    ctx->pc = 0x493ef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x493efc: 0x25b80002  addiu       $t8, $t5, 0x2
    ctx->pc = 0x493efcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x493f00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x493f00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493f04: 0x0  nop
    ctx->pc = 0x493f04u;
    // NOP
label_493f08:
    // 0x493f08: 0x25190010  addiu       $t9, $t0, 0x10
    ctx->pc = 0x493f08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x493f0c: 0x87040  sll         $t6, $t0, 1
    ctx->pc = 0x493f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x493f10: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x493f10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493f14: 0x0  nop
    ctx->pc = 0x493f14u;
    // NOP
label_493f18:
    // 0x493f18: 0x256f0010  addiu       $t7, $t3, 0x10
    ctx->pc = 0x493f18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x493f1c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x493f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493f20: 0xb5027  nor         $t2, $zero, $t3
    ctx->pc = 0x493f20u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x493f24: 0x0  nop
    ctx->pc = 0x493f24u;
    // NOP
label_493f28:
    // 0x493f28: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x493F28u;
    {
        const bool branch_taken_0x493f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x493F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493F28u;
        // 0x493f2c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493f28) {
            ctx->pc = 0x493F84u;
            goto label_493f84;
        }
    }
    ctx->pc = 0x493F30u;
    // 0x493f30: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x493f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x493f34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493f38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x493f3c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x493f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x493f40: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493f44: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493f44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493f48: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x493f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x493f4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493f50: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493f54: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x493f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x493f58: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x493f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x493f5c: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x493f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x493f60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493f64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x493f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x493f68: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x493f68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493f6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x493f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x493f70: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x493f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x493f74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x493f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x493f78: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x493f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x493f7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x493F7Cu;
    {
        const bool branch_taken_0x493f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493F7Cu;
        // 0x493f80: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493f7c) {
            ctx->pc = 0x493FD0u;
            goto label_493fd0;
        }
    }
    ctx->pc = 0x493F84u;
label_493f84:
    // 0x493f84: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x493f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x493f88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493f88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493f8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x493f90: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x493f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x493f94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493f98: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493f9c: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x493f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x493fa0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493fa4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x493fa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x493fa8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x493fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x493fac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x493facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x493fb0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x493fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x493fb4: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x493fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x493fb8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x493fb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x493fbc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x493fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x493fc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x493fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x493fc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493fc8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x493fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x493fcc: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x493fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_493fd0:
    // 0x493fd0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x493fd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x493fd4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x493fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x493fd8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x493fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x493fdc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x493fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x493fe0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x493fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x493fe4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x493fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x493fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x493fec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x493fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x493ff0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x493ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x493ff4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x493ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x493ff8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x493ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x493ffc: 0x29820010  slti        $v0, $t4, 0x10
    ctx->pc = 0x493ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x494000: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x494000u;
    {
        const bool branch_taken_0x494000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494000u;
        // 0x494004: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494000) {
            ctx->pc = 0x493F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493f28;
        }
    }
    ctx->pc = 0x494008u;
    // 0x494008: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x494008u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49400c: 0x29620040  slti        $v0, $t3, 0x40
    ctx->pc = 0x49400cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x494010: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x494010u;
    {
        const bool branch_taken_0x494010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494010) {
            ctx->pc = 0x494014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494010u;
            // 0x494014: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493f18;
        }
    }
    ctx->pc = 0x494018u;
    // 0x494018: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49401c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x49401cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494020: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x494020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494024: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x494024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494028: 0x7ba41000  lq          $a0, 0x1000($sp)
    ctx->pc = 0x494028u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x49402c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494030: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x494030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x494034: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x494034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x494038: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49403c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494040: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x494040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494044: 0x7ba41010  lq          $a0, 0x1010($sp)
    ctx->pc = 0x494044u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x494048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49404c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x49404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x494050: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x494050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x494054: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x494058: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x494058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49405c: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x49405cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494060: 0x7ba51020  lq          $a1, 0x1020($sp)
    ctx->pc = 0x494060u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x494064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494068: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x494068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x49406c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x49406cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x494070: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x494070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x494074: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x494074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494078: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x494078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49407c: 0x7ba51030  lq          $a1, 0x1030($sp)
    ctx->pc = 0x49407cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x494080: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x494080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x494084: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x494084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x494088: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x494088u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x49408c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x49408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x494090: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x494090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x494094: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x494094u;
    {
        const bool branch_taken_0x494094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494094) {
            ctx->pc = 0x494098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494094u;
            // 0x494098: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493f08;
        }
    }
    ctx->pc = 0x49409Cu;
    // 0x49409c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x49409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_4940a0:
    // 0x4940a0: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x4940a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4940a4: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x4940a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4940a8: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
    ctx->pc = 0x4940A8u;
    {
        const bool branch_taken_0x4940a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4940a8) {
            ctx->pc = 0x4940ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4940A8u;
            // 0x4940ac: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493e88;
        }
    }
    ctx->pc = 0x4940B0u;
label_4940b0:
    // 0x4940b0: 0x7bb01060  lq          $s0, 0x1060($sp)
    ctx->pc = 0x4940b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x4940b4: 0x7bb11050  lq          $s1, 0x1050($sp)
    ctx->pc = 0x4940b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x4940b8: 0x7bb21040  lq          $s2, 0x1040($sp)
    ctx->pc = 0x4940b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x4940bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4940BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4940C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4940BCu;
        // 0x4940c0: 0x27bd1070  addiu       $sp, $sp, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4940BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4940C4u;
    // 0x4940c4: 0x0  nop
    ctx->pc = 0x4940c4u;
    // NOP
    ctx->pc = 0x4940c8u;
}
