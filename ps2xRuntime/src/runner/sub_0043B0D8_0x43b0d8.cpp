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

// Function: sub_0043B0D8
// Address: 0x43b0d8 - 0x43b2e0
void sub_0043B0D8_0x43b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B0D8_0x43b0d8");
#endif

    switch (ctx->pc) {
        case 0x43b140u: goto label_43b140;
        case 0x43b168u: goto label_43b168;
        case 0x43b1a8u: goto label_43b1a8;
        case 0x43b1c8u: goto label_43b1c8;
        case 0x43b238u: goto label_43b238;
        case 0x43b298u: goto label_43b298;
        default: break;
    }

    ctx->pc = 0x43b0d8u;

    // 0x43b0d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x43b0dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x43b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x43b0e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x43b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x43b0e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43b0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b0e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x43b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x43b0ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43b0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b0f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x43b0f4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x43b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x43b0f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x43b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x43b0fc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x43b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x43b100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b104: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x43b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43b108: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x43b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43b10c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x43b10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x43b110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43B110u;
    {
        const bool branch_taken_0x43b110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B110u;
        // 0x43b114: 0x200c02d  daddu       $t8, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b110) {
            ctx->pc = 0x43B120u;
            goto label_43b120;
        }
    }
    ctx->pc = 0x43B118u;
    // 0x43b118: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x43b118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b11c: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x43b11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_43b120:
    // 0x43b120: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x43b120u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43b124: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x43b124u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43b128: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x43b128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x43b12c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x43b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x43b130: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x43b130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x43b134: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x43b134u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x43b138: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B138u;
    SET_GPR_U32(ctx, 31, 0x43B140u);
    ctx->pc = 0x43B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B138u;
    // 0x43b13c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B138u, 0x43B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B140u;
label_43b140:
    // 0x43b140: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x43b140u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b144: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x43b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x43b148: 0x270a0014  addiu       $t2, $t8, 0x14
    ctx->pc = 0x43b148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x43b14c: 0x26190014  addiu       $t9, $s0, 0x14
    ctx->pc = 0x43b14cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x43b150: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x43b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x43b154: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x43b154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x43b158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43B158u;
    {
        const bool branch_taken_0x43b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B158u;
        // 0x43b15c: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b158) {
            ctx->pc = 0x43B180u;
            goto label_43b180;
        }
    }
    ctx->pc = 0x43B160u;
    // 0x43b160: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x43b160u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x43b164: 0x0  nop
    ctx->pc = 0x43b164u;
    // NOP
label_43b168:
    // 0x43b168: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x43b168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x43b16c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x43b16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x43b170: 0x0  nop
    ctx->pc = 0x43b170u;
    // NOP
    // 0x43b174: 0x0  nop
    ctx->pc = 0x43b174u;
    // NOP
    // 0x43b178: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B178u;
    {
        const bool branch_taken_0x43b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b178) {
            ctx->pc = 0x43B17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B178u;
            // 0x43b17c: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b168;
        }
    }
    ctx->pc = 0x43B180u;
label_43b180:
    // 0x43b180: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x43b180u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b184: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x43b184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x43b188: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x43b188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x43b18c: 0x1c2a021  addu        $s4, $t6, $v0
    ctx->pc = 0x43b18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x43b190: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x43b190u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x43b194: 0x3238021  addu        $s0, $t9, $v1
    ctx->pc = 0x43b194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x43b198: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x43b198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b19c: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x43b19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x43b1a0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x43B1A0u;
    {
        const bool branch_taken_0x43b1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B1A0u;
        // 0x43b1a4: 0x12a880  sll         $s5, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b1a0) {
            ctx->pc = 0x43B294u;
            goto label_43b294;
        }
    }
    ctx->pc = 0x43B1A8u;
label_43b1a8:
    // 0x43b1a8: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x43b1a8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x43b1ac: 0x25d30004  addiu       $s3, $t6, 0x4
    ctx->pc = 0x43b1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x43b1b0: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x43B1B0u;
    {
        const bool branch_taken_0x43b1b0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B1B0u;
        // 0x43b1b4: 0x25f10004  addiu       $s1, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b1b0) {
            ctx->pc = 0x43B21Cu;
            goto label_43b21c;
        }
    }
    ctx->pc = 0x43B1B8u;
    // 0x43b1b8: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x43b1b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b1bc: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x43b1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b1c0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x43b1c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b1c4: 0x0  nop
    ctx->pc = 0x43b1c4u;
    // NOP
label_43b1c8:
    // 0x43b1c8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x43b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x43b1cc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x43b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b1d0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x43b1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x43b1d4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x43b1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x43b1d8: 0x150302b  sltu        $a2, $t2, $s0
    ctx->pc = 0x43b1d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x43b1dc: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x43b1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x43b1e0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x43b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43b1e4: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x43b1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x43b1e8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x43b1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x43b1ec: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x43b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43b1f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x43b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x43b1f4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x43b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x43b1f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x43b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43b1fc: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x43b1fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x43b200: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x43b200u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x43b204: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x43b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x43b208: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x43b208u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x43b20c: 0x56c02  srl         $t5, $a1, 16
    ctx->pc = 0x43b20cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43b210: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x43B210u;
    {
        const bool branch_taken_0x43b210 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B210u;
        // 0x43b214: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b210) {
            ctx->pc = 0x43B1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b1c8;
        }
    }
    ctx->pc = 0x43B218u;
    // 0x43b218: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x43b218u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
label_43b21c:
    // 0x43b21c: 0x95cc0002  lhu         $t4, 0x2($t6)
    ctx->pc = 0x43b21cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x43b220: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x43B220u;
    {
        const bool branch_taken_0x43b220 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B220u;
        // 0x43b224: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b220) {
            ctx->pc = 0x43B284u;
            goto label_43b284;
        }
    }
    ctx->pc = 0x43B228u;
    // 0x43b228: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x43b228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b22c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x43b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b230: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x43b230u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b234: 0x0  nop
    ctx->pc = 0x43b234u;
    // NOP
label_43b238:
    // 0x43b238: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x43b238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x43b23c: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x43b23cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x43b240: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x43b240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x43b244: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x43b244u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x43b248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43b24c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x43b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x43b250: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x43b250u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x43b254: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x43b254u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x43b258: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x43b258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x43b25c: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x43b25cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x43b260: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x43b260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b264: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x43b264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x43b268: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x43b268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x43b26c: 0x150202b  sltu        $a0, $t2, $s0
    ctx->pc = 0x43b26cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x43b270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43b274: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x43b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x43b278: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x43B278u;
    {
        const bool branch_taken_0x43b278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B278u;
        // 0x43b27c: 0x56c02  srl         $t5, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b278) {
            ctx->pc = 0x43B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b238;
        }
    }
    ctx->pc = 0x43B280u;
    // 0x43b280: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x43b280u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_43b284:
    // 0x43b284: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x43b284u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b288: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x43b288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x43b28c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x43B28Cu;
    {
        const bool branch_taken_0x43b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B28Cu;
        // 0x43b290: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b28c) {
            ctx->pc = 0x43B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b1a8;
        }
    }
    ctx->pc = 0x43B294u;
label_43b294:
    // 0x43b294: 0x2d54021  addu        $t0, $s6, $s5
    ctx->pc = 0x43b294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_43b298:
    // 0x43b298: 0x5a400006  blezl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x43B298u;
    {
        const bool branch_taken_0x43b298 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x43b298) {
            ctx->pc = 0x43B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B298u;
            // 0x43b29c: 0xaf120010  sw          $s2, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B2B4u;
            goto label_43b2b4;
        }
    }
    ctx->pc = 0x43B2A0u;
    // 0x43b2a0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x43b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x43b2a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x43b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b2a8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B2A8u;
    {
        const bool branch_taken_0x43b2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b2a8) {
            ctx->pc = 0x43B2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B2A8u;
            // 0x43b2ac: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b298;
        }
    }
    ctx->pc = 0x43B2B0u;
    // 0x43b2b0: 0xaf120010  sw          $s2, 0x10($t8)
    ctx->pc = 0x43b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
label_43b2b4:
    // 0x43b2b4: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x43b2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b2b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x43b2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43b2bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x43b2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43b2c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x43b2c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43b2c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43b2c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43b2c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x43b2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43b2cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x43b2ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43b2d0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x43b2d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B2D8u;
        // 0x43b2dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B2E0u;
}
