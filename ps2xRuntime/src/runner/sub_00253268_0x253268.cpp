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

// Function: sub_00253268
// Address: 0x253268 - 0x253350
void sub_00253268_0x253268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253268_0x253268");
#endif

    switch (ctx->pc) {
        case 0x2532b0u: goto label_2532b0;
        default: break;
    }

    ctx->pc = 0x253268u;

    // 0x253268: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x253268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25326c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x25326cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253270: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x253270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x253274: 0x95180002  lhu         $t8, 0x2($t0)
    ctx->pc = 0x253274u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x253278: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x253278u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25327c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x253280: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x253284: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x253284u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x253288: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x253288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x25328c: 0xc2042  srl         $a0, $t4, 1
    ctx->pc = 0x25328cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
    // 0x253290: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x253290u;
    {
        const bool branch_taken_0x253290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x253294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253290u;
        // 0x253294: 0x944f0000  lhu         $t7, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253290) {
            ctx->pc = 0x253338u;
            goto label_253338;
        }
    }
    ctx->pc = 0x253298u;
    // 0x253298: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x253298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x25329c: 0xf1940  sll         $v1, $t7, 5
    ctx->pc = 0x25329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x2532a0: 0x8c49a21c  lw          $t1, -0x5DE4($v0)
    ctx->pc = 0x2532a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x2532a4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2532a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532a8: 0x696821  addu        $t5, $v1, $t1
    ctx->pc = 0x2532a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2532ac: 0x0  nop
    ctx->pc = 0x2532acu;
    // NOP
label_2532b0:
    // 0x2532b0: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2532b4: 0x3147ffff  andi        $a3, $t2, 0xFFFF
    ctx->pc = 0x2532b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2532b8: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x2532b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2532bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2532BCu;
    {
        const bool branch_taken_0x2532bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532BCu;
        // 0x2532c0: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532bc) {
            ctx->pc = 0x253300u;
            goto label_253300;
        }
    }
    ctx->pc = 0x2532C4u;
    // 0x2532c4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2532c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2532c8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2532cc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2532ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2532d0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2532d4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2532d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2532d8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2532d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2532dc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2532dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2532e0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2532e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2532e4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2532e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2532e8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2532ec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2532ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2532f0: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x2532f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2532f4: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x2532f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x2532f8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2532f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2532fc: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x2532fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_253300:
    // 0x253300: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x253300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x253304: 0x95a40016  lhu         $a0, 0x16($t5)
    ctx->pc = 0x253304u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 22)));
    // 0x253308: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x25330c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x25330cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253310: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x253310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x253314: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x253314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x253318: 0x94430016  lhu         $v1, 0x16($v0)
    ctx->pc = 0x253318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x25331c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x25331cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x253320: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253320u;
    {
        const bool branch_taken_0x253320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x253324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253320u;
        // 0x253324: 0x10a1821  addu        $v1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253320) {
            ctx->pc = 0x253338u;
            goto label_253338;
        }
    }
    ctx->pc = 0x253328u;
    // 0x253328: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x253328u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25332c: 0x1cb102b  sltu        $v0, $t6, $t3
    ctx->pc = 0x25332cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x253330: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x253330u;
    {
        const bool branch_taken_0x253330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253330u;
        // 0x253334: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253330) {
            ctx->pc = 0x2532B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2532b0;
        }
    }
    ctx->pc = 0x253338u;
label_253338:
    // 0x253338: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x253338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x25333c: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x25333cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253340: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x253340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x253344: 0x3e00008  jr          $ra
    ctx->pc = 0x253344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253344u;
        // 0x253348: 0xa46f0000  sh          $t7, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25334Cu;
    // 0x25334c: 0x0  nop
    ctx->pc = 0x25334cu;
    // NOP
    ctx->pc = 0x253350u;
}
