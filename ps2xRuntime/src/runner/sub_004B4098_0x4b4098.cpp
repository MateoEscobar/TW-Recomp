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

// Function: sub_004B4098
// Address: 0x4b4098 - 0x4b42d0
void sub_004B4098_0x4b4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4098_0x4b4098");
#endif

    switch (ctx->pc) {
        case 0x4b4104u: goto label_4b4104;
        case 0x4b4130u: goto label_4b4130;
        case 0x4b4180u: goto label_4b4180;
        case 0x4b41a0u: goto label_4b41a0;
        case 0x4b4220u: goto label_4b4220;
        case 0x4b4288u: goto label_4b4288;
        default: break;
    }

    ctx->pc = 0x4b4098u;

    // 0x4b4098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b4098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b409c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b40a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b40a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b40a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b40a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b40ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b40acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b40b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b40b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b40b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b40bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b40bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b40c0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x4b40c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b40c4: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x4b40c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b40c8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x4b40c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4b40cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B40CCu;
    {
        const bool branch_taken_0x4b40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B40CCu;
        // 0x4b40d0: 0x80c82d  daddu       $t9, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b40cc) {
            ctx->pc = 0x4B40E8u;
            goto label_4b40e8;
        }
    }
    ctx->pc = 0x4B40D4u;
    // 0x4b40d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b40d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4b40d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b40dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40e0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x4b40e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b40e4: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x4b40e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4b40e8:
    // 0x4b40e8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4b40e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b40ec: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x4b40ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4b40f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b40f4: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x4b40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40f8: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x4b40f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4b40fc: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B40FCu;
    SET_GPR_U32(ctx, 31, 0x4B4104u);
    ctx->pc = 0x4B4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B40FCu;
    // 0x4b4100: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B40FCu, 0x4B4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4104u;
label_4b4104:
    // 0x4b4104: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x4b4104u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4108: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x4b4108u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4b410c: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x4b410cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x4b4110: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x4b4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x4b4114: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x4b4114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4b4118: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B4118u;
    {
        const bool branch_taken_0x4b4118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4118u;
        // 0x4b411c: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4118) {
            ctx->pc = 0x4B4154u;
            goto label_4b4154;
        }
    }
    ctx->pc = 0x4B4120u;
    // 0x4b4120: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x4b4120u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4b4124: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x4b4124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4b4128: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x4b4128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b412c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4b412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4b4130:
    // 0x4b4130: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4b4130u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4b4134: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4b4134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4b4138: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x4b4138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4b413c: 0x0  nop
    ctx->pc = 0x4b413cu;
    // NOP
    // 0x4b4140: 0x0  nop
    ctx->pc = 0x4b4140u;
    // NOP
    // 0x4b4144: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4144u;
    {
        const bool branch_taken_0x4b4144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4144) {
            ctx->pc = 0x4B4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4130;
        }
    }
    ctx->pc = 0x4B414Cu;
    // 0x4b414c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B414Cu;
    {
        const bool branch_taken_0x4b414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B414Cu;
        // 0x4b4150: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b414c) {
            ctx->pc = 0x4B4168u;
            goto label_4b4168;
        }
    }
    ctx->pc = 0x4B4154u;
label_4b4154:
    // 0x4b4154: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x4b4154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4b4158: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x4b4158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4b415c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x4b415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b4160: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4b4160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4b4164: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4b4164u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b4168:
    // 0x4b4168: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x4b4168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x4b416c: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x4b416cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4b4170: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x4b4170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4b4174: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4B4174u;
    {
        const bool branch_taken_0x4b4174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4174u;
        // 0x4b4178: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4174) {
            ctx->pc = 0x4B4284u;
            goto label_4b4284;
        }
    }
    ctx->pc = 0x4B417Cu;
    // 0x4b417c: 0x0  nop
    ctx->pc = 0x4b417cu;
    // NOP
label_4b4180:
    // 0x4b4180: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4b4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b4184: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x4b4184u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b4188: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B4188u;
    {
        const bool branch_taken_0x4b4188 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4188u;
        // 0x4b418c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4188) {
            ctx->pc = 0x4B41FCu;
            goto label_4b41fc;
        }
    }
    ctx->pc = 0x4B4190u;
    // 0x4b4190: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x4b4190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4b4194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4198: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x4b4198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4b419c: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x4b419cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_4b41a0:
    // 0x4b41a0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b41a4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b41a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4b41a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4b41ac: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4b41acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b41b0: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x4b41b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b41b4: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x4b41b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b41b8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b41b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b41bc: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x4b41bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b41c0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x4b41c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b41c4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x4b41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b41c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b41cc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4b41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4b41d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b41d4: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x4b41d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b41d8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4b41d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b41dc: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x4b41dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4b41e0: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x4b41e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x4b41e4: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x4b41e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x4b41e8: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4B41E8u;
    {
        const bool branch_taken_0x4b41e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41E8u;
        // 0x4b41ec: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b41e8) {
            ctx->pc = 0x4B41A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b41a0;
        }
    }
    ctx->pc = 0x4B41F0u;
    // 0x4b41f0: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x4b41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x4b41f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B41F4u;
    {
        const bool branch_taken_0x4b41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41F4u;
        // 0x4b41f8: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b41f4) {
            ctx->pc = 0x4B4204u;
            goto label_4b4204;
        }
    }
    ctx->pc = 0x4B41FCu;
label_4b41fc:
    // 0x4b41fc: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x4b41fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4b4200: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x4b4200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_4b4204:
    // 0x4b4204: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x4b4204u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b4208: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B4208u;
    {
        const bool branch_taken_0x4b4208 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4208u;
        // 0x4b420c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4208) {
            ctx->pc = 0x4B4274u;
            goto label_4b4274;
        }
    }
    ctx->pc = 0x4B4210u;
    // 0x4b4210: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x4b4210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4214: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4b4214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4218: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4b4218u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b421c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4b421cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b4220:
    // 0x4b4220: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4b4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b4224: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4b4224u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b4228: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x4b4228u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4b422c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4b422cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4b4230: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4b4230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b4234: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x4b4234u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b4238: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x4b4238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b423c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x4b423cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b4240: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x4b4240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4b4244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b4248: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4b4248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4b424c: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x4b424cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4250: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x4b4250u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b4254: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4b4254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4b4258: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b425c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4b425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b4260: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b4260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b4264: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x4b4264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4b4268: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4B4268u;
    {
        const bool branch_taken_0x4b4268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4268u;
        // 0x4b426c: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4268) {
            ctx->pc = 0x4B4220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4220;
        }
    }
    ctx->pc = 0x4B4270u;
    // 0x4b4270: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4b4270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_4b4274:
    // 0x4b4274: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x4b4274u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4278: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x4b4278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4b427c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x4B427Cu;
    {
        const bool branch_taken_0x4b427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B427Cu;
        // 0x4b4280: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b427c) {
            ctx->pc = 0x4B4180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4180;
        }
    }
    ctx->pc = 0x4B4284u;
label_4b4284:
    // 0x4b4284: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x4b4284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_4b4288:
    // 0x4b4288: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4288u;
    {
        const bool branch_taken_0x4b4288 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x4b4288) {
            ctx->pc = 0x4B428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4288u;
            // 0x4b428c: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B42A4u;
            goto label_4b42a4;
        }
    }
    ctx->pc = 0x4B4290u;
    // 0x4b4290: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x4b4290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x4b4294: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4298: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4B4298u;
    {
        const bool branch_taken_0x4b4298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4298) {
            ctx->pc = 0x4B429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4298u;
            // 0x4b429c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4288;
        }
    }
    ctx->pc = 0x4B42A0u;
    // 0x4b42a0: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x4b42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_4b42a4:
    // 0x4b42a4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x4b42a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b42a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b42a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b42ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b42acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b42b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b42b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b42b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b42b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b42b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b42b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b42bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b42bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b42c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b42c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42C4u;
        // 0x4b42c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B42C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B42CCu;
    // 0x4b42cc: 0x0  nop
    ctx->pc = 0x4b42ccu;
    // NOP
    ctx->pc = 0x4b42d0u;
}
