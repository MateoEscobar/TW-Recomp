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

// Function: sub_00479630
// Address: 0x479630 - 0x479ad8
void sub_00479630_0x479630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479630_0x479630");
#endif

    switch (ctx->pc) {
        case 0x479758u: goto label_479758;
        case 0x4797a0u: goto label_4797a0;
        case 0x479898u: goto label_479898;
        case 0x4798e0u: goto label_4798e0;
        case 0x4799b0u: goto label_4799b0;
        case 0x4799f8u: goto label_4799f8;
        default: break;
    }

    ctx->pc = 0x479630u;

    // 0x479630: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x479630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x479634: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x479634u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479638: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x479638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x47963c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x47963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x479640: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x479640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x479644: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x479644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x479648: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x479648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x47964c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x479650: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x479650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x479654: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x479654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x479658: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x479658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x47965c: 0x8dc20030  lw          $v0, 0x30($t6)
    ctx->pc = 0x47965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x479660: 0x8dd60008  lw          $s6, 0x8($t6)
    ctx->pc = 0x479660u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x479664: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x479664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479668: 0x246f0018  addiu       $t7, $v1, 0x18
    ctx->pc = 0x479668u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x47966c: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x47966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x479670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x479670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x479674: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x479674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x479678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x479678u;
    {
        const bool branch_taken_0x479678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479678u;
        // 0x47967c: 0x8df7000c  lw          $s7, 0xC($t7) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479678) {
            ctx->pc = 0x4796A8u;
            goto label_4796a8;
        }
    }
    ctx->pc = 0x479680u;
    // 0x479680: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x479684: 0x2443eb78  addiu       $v1, $v0, -0x1488
    ctx->pc = 0x479684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962040));
    // 0x479688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x479688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47968c: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x47968cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x479690: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x479690u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x58EB7Fu));
    // 0x479694: 0x90740008  lbu         $s4, 0x8($v1)
    ctx->pc = 0x479694u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x58EB80u));
    // 0x479698: 0x24720009  addiu       $s2, $v1, 0x9
    ctx->pc = 0x479698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x47969c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x47969Cu;
    {
        const bool branch_taken_0x47969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4796A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47969Cu;
        // 0x4796a0: 0x2471000c  addiu       $s1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47969c) {
            ctx->pc = 0x4796C8u;
            goto label_4796c8;
        }
    }
    ctx->pc = 0x4796A4u;
    // 0x4796a4: 0x0  nop
    ctx->pc = 0x4796a4u;
    // NOP
label_4796a8:
    // 0x4796a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4796a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4796ac: 0x2443eb78  addiu       $v1, $v0, -0x1488
    ctx->pc = 0x4796acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962040));
    // 0x4796b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4796b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4796b4: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x4796b4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x58EB7Au));
    // 0x4796b8: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x4796b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4796bc: 0x90740003  lbu         $s4, 0x3($v1)
    ctx->pc = 0x4796bcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x58EB7Bu));
    // 0x4796c0: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x4796c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4796c4: 0x24710005  addiu       $s1, $v1, 0x5
    ctx->pc = 0x4796c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_4796c8:
    // 0x4796c8: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x4796c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x4796cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4796ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4796d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4796d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4796d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4796d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4796d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4796D8u;
    {
        const bool branch_taken_0x4796d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4796DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4796D8u;
        // 0x4796dc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4796d8) {
            ctx->pc = 0x4796E8u;
            goto label_4796e8;
        }
    }
    ctx->pc = 0x4796E0u;
    // 0x4796e0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x4796e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x4796e4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x4796e4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4796e8:
    // 0x4796e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4796e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4796ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4796ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4796f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4796F0u;
    {
        const bool branch_taken_0x4796f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4796F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4796F0u;
        // 0x4796f4: 0x24b8eb78  addiu       $t8, $a1, -0x1488 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4796f0) {
            ctx->pc = 0x47970Cu;
            goto label_47970c;
        }
    }
    ctx->pc = 0x4796F8u;
    // 0x4796f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4796f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4796fc: 0x8dc3002c  lw          $v1, 0x2C($t6)
    ctx->pc = 0x4796fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    // 0x479700: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x479700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x479704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479708: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x479708u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47970c:
    // 0x47970c: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x47970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
    // 0x479710: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x479710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x479714: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x479714u;
    {
        const bool branch_taken_0x479714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479714) {
            ctx->pc = 0x479718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479714u;
            // 0x479718: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479854u;
            goto label_479854;
        }
    }
    ctx->pc = 0x47971Cu;
    // 0x47971c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x47971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x479720: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x479720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x479724: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x479724u;
    {
        const bool branch_taken_0x479724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479724) {
            ctx->pc = 0x479728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479724u;
            // 0x479728: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479854u;
            goto label_479854;
        }
    }
    ctx->pc = 0x47972Cu;
    // 0x47972c: 0x8de200a0  lw          $v0, 0xA0($t7)
    ctx->pc = 0x47972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x479730: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x479730u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479734: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x479734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x479738: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x479738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47973c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47973cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x479740: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x479740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x479744: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x479744u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x479748: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x479748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47974c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47974cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x479750: 0x1960003f  blez        $t3, . + 4 + (0x3F << 2)
    ctx->pc = 0x479750u;
    {
        const bool branch_taken_0x479750 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x479754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479750u;
        // 0x479754: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479750) {
            ctx->pc = 0x479850u;
            goto label_479850;
        }
    }
    ctx->pc = 0x479758u;
label_479758:
    // 0x479758: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x479758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47975c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x47975cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x479760: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x479760u;
    {
        const bool branch_taken_0x479760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479760) {
            ctx->pc = 0x479764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479760u;
            // 0x479764: 0x8de90098  lw          $t1, 0x98($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479784u;
            goto label_479784;
        }
    }
    ctx->pc = 0x479768u;
    // 0x479768: 0x85e200ac  lh          $v0, 0xAC($t7)
    ctx->pc = 0x479768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 172)));
    // 0x47976c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x47976cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479770: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x479770u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x479778: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x479778u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x47977c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47977Cu;
    {
        const bool branch_taken_0x47977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47977Cu;
        // 0x479780: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47977c) {
            ctx->pc = 0x47978Cu;
            goto label_47978c;
        }
    }
    ctx->pc = 0x479784u;
label_479784:
    // 0x479784: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x479784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x479788: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x479788u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_47978c:
    // 0x47978c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479790: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x479790u;
    {
        const bool branch_taken_0x479790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479790u;
        // 0x479794: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479790) {
            ctx->pc = 0x479838u;
            goto label_479838;
        }
    }
    ctx->pc = 0x479798u;
    // 0x479798: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x479798u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x47979c: 0x0  nop
    ctx->pc = 0x47979cu;
    // NOP
label_4797a0:
    // 0x4797a0: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x4797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x4797a4: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x4797a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x4797a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4797a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4797ac: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4797acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4797b0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x4797b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4797b4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4797b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x4797b8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x4797b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x4797bc: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x4797bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x4797c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4797c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4797c4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x4797c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x4797c8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x4797c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x4797cc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x4797ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4797d0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4797d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4797d4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4797d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4797d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4797d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4797dc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4797dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4797e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4797e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4797e4: 0x600013  mtlo        $v1
    ctx->pc = 0x4797e4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x4797e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4797e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4797ec: 0x70591000  madd        $v0, $v0, $t9
    ctx->pc = 0x4797ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4797f0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x4797f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4797f4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x4797f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4797f8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x4797f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4797fc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x4797fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x479800: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x479800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x479804: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x479804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x479808: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x479808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47980c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x479810: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x479810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x479814: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x479814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479818: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x479818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47981c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47981cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x479820: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x479820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479824: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x479824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x479828: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x479828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47982c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47982cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x479830: 0x14a0ffdb  bnez        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x479830u;
    {
        const bool branch_taken_0x479830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x479834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479830u;
        // 0x479834: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479830) {
            ctx->pc = 0x4797A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4797a0;
        }
    }
    ctx->pc = 0x479838u;
label_479838:
    // 0x479838: 0x85e200a8  lh          $v0, 0xA8($t7)
    ctx->pc = 0x479838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 168)));
    // 0x47983c: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x47983cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x479840: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x479844: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x479844u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x479848: 0x1d60ffc3  bgtz        $t3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x479848u;
    {
        const bool branch_taken_0x479848 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x47984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479848u;
        // 0x47984c: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479848) {
            ctx->pc = 0x479758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479758;
        }
    }
    ctx->pc = 0x479850u;
label_479850:
    // 0x479850: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x479850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_479854:
    // 0x479854: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x479854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x479858: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x479858u;
    {
        const bool branch_taken_0x479858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479858) {
            ctx->pc = 0x47985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479858u;
            // 0x47985c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47996Cu;
            goto label_47996c;
        }
    }
    ctx->pc = 0x479860u;
    // 0x479860: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x479860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x479864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x479864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x479868: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x479868u;
    {
        const bool branch_taken_0x479868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479868) {
            ctx->pc = 0x47986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479868u;
            // 0x47986c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47996Cu;
            goto label_47996c;
        }
    }
    ctx->pc = 0x479870u;
    // 0x479870: 0x8de200d0  lw          $v0, 0xD0($t7)
    ctx->pc = 0x479870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x479874: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x479874u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479878: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x479878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47987c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x47987cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479880: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x479884: 0x8ede000c  lw          $fp, 0xC($s6)
    ctx->pc = 0x479884u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x479888: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x479888u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47988c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x47988cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479890: 0x19600035  blez        $t3, . + 4 + (0x35 << 2)
    ctx->pc = 0x479890u;
    {
        const bool branch_taken_0x479890 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x479894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479890u;
        // 0x479894: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479890) {
            ctx->pc = 0x479968u;
            goto label_479968;
        }
    }
    ctx->pc = 0x479898u;
label_479898:
    // 0x479898: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x479898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47989c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x47989cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4798a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4798A0u;
    {
        const bool branch_taken_0x4798a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4798a0) {
            ctx->pc = 0x4798A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4798A0u;
            // 0x4798a4: 0x8de900c8  lw          $t1, 0xC8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4798C4u;
            goto label_4798c4;
        }
    }
    ctx->pc = 0x4798A8u;
    // 0x4798a8: 0x85e200dc  lh          $v0, 0xDC($t7)
    ctx->pc = 0x4798a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x4798ac: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x4798acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4798b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4798b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4798b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4798b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4798b8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x4798b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4798bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4798BCu;
    {
        const bool branch_taken_0x4798bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4798C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4798BCu;
        // 0x4798c0: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4798bc) {
            ctx->pc = 0x4798CCu;
            goto label_4798cc;
        }
    }
    ctx->pc = 0x4798C4u;
label_4798c4:
    // 0x4798c4: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x4798c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x4798c8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4798c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_4798cc:
    // 0x4798cc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4798ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4798d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4798D0u;
    {
        const bool branch_taken_0x4798d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4798D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4798D0u;
        // 0x4798d4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4798d0) {
            ctx->pc = 0x479950u;
            goto label_479950;
        }
    }
    ctx->pc = 0x4798D8u;
    // 0x4798d8: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x4798d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4798dc: 0x0  nop
    ctx->pc = 0x4798dcu;
    // NOP
label_4798e0:
    // 0x4798e0: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x4798e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x4798e4: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x4798e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x4798e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4798e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4798ec: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x4798ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x4798f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x4798f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4798f4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4798f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4798f8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x4798f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x4798fc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4798fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x479900: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x479900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x479904: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x479904u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x479908: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x479908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47990c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x47990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479910: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x479910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x479914: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x479914u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x479918: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x479918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47991c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x479920: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x479920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x479924: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x479924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x479928: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x479928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x47992c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x47992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479930: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x479930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x479934: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x479934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x479938: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x479938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47993c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47993cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x479940: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x479940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x479944: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x479944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x479948: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x479948u;
    {
        const bool branch_taken_0x479948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479948u;
        // 0x47994c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479948) {
            ctx->pc = 0x4798E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4798e0;
        }
    }
    ctx->pc = 0x479950u;
label_479950:
    // 0x479950: 0x85e200d8  lh          $v0, 0xD8($t7)
    ctx->pc = 0x479950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 216)));
    // 0x479954: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x479954u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x479958: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47995c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x47995cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x479960: 0x1d60ffcd  bgtz        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x479960u;
    {
        const bool branch_taken_0x479960 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x479964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479960u;
        // 0x479964: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479960) {
            ctx->pc = 0x479898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479898;
        }
    }
    ctx->pc = 0x479968u;
label_479968:
    // 0x479968: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x479968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_47996c:
    // 0x47996c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x47996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x479970: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x479970u;
    {
        const bool branch_taken_0x479970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479970) {
            ctx->pc = 0x479974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479970u;
            // 0x479974: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479AACu;
            goto label_479aac;
        }
    }
    ctx->pc = 0x479978u;
    // 0x479978: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x479978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x47997c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x47997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x479980: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x479980u;
    {
        const bool branch_taken_0x479980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479980) {
            ctx->pc = 0x479984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479980u;
            // 0x479984: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479AACu;
            goto label_479aac;
        }
    }
    ctx->pc = 0x479988u;
    // 0x479988: 0x8de20100  lw          $v0, 0x100($t7)
    ctx->pc = 0x479988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x47998c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x47998cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479990: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x479990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x479994: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x479994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479998: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47999c: 0x8ed4000c  lw          $s4, 0xC($s6)
    ctx->pc = 0x47999cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x4799a0: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x4799a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4799a4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4799a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4799a8: 0x1960003f  blez        $t3, . + 4 + (0x3F << 2)
    ctx->pc = 0x4799A8u;
    {
        const bool branch_taken_0x4799a8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4799ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4799A8u;
        // 0x4799ac: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4799a8) {
            ctx->pc = 0x479AA8u;
            goto label_479aa8;
        }
    }
    ctx->pc = 0x4799B0u;
label_4799b0:
    // 0x4799b0: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x4799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x4799b4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x4799b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4799b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4799B8u;
    {
        const bool branch_taken_0x4799b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4799b8) {
            ctx->pc = 0x4799BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4799B8u;
            // 0x4799bc: 0x8de900f8  lw          $t1, 0xF8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4799DCu;
            goto label_4799dc;
        }
    }
    ctx->pc = 0x4799C0u;
    // 0x4799c0: 0x85e2010c  lh          $v0, 0x10C($t7)
    ctx->pc = 0x4799c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 268)));
    // 0x4799c4: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x4799c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4799c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4799c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4799cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4799ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4799d0: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x4799d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4799d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4799D4u;
    {
        const bool branch_taken_0x4799d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4799D4u;
        // 0x4799d8: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4799d4) {
            ctx->pc = 0x4799E4u;
            goto label_4799e4;
        }
    }
    ctx->pc = 0x4799DCu;
label_4799dc:
    // 0x4799dc: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x4799dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x4799e0: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4799e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_4799e4:
    // 0x4799e4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4799e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4799e8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4799E8u;
    {
        const bool branch_taken_0x4799e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4799ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4799E8u;
        // 0x4799ec: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4799e8) {
            ctx->pc = 0x479A90u;
            goto label_479a90;
        }
    }
    ctx->pc = 0x4799F0u;
    // 0x4799f0: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x4799f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4799f4: 0x0  nop
    ctx->pc = 0x4799f4u;
    // NOP
label_4799f8:
    // 0x4799f8: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x4799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x4799fc: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x4799fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x479a00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x479a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479a04: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x479a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x479a08: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x479a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x479a0c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x479a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x479a10: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x479a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x479a14: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x479a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x479a18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x479a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x479a1c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x479a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x479a20: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x479a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x479a24: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x479a24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x479a28: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x479a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x479a2c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x479a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479a30: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x479a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x479a34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x479a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x479a38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x479a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x479a3c: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x479a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x479a40: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x479a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x479a44: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x479a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x479a48: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x479a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x479a4c: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x479a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x479a50: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x479a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x479a54: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x479a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x479a58: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x479a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479a5c: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x479a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x479a60: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x479a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x479a64: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x479a64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x479a68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x479a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x479a6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x479a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x479a70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x479a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x479a74: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x479a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x479a78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x479a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x479a7c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x479a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x479a80: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x479a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x479a84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x479a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x479a88: 0x14e0ffdb  bnez        $a3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x479A88u;
    {
        const bool branch_taken_0x479a88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x479A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479A88u;
        // 0x479a8c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479a88) {
            ctx->pc = 0x4799F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4799f8;
        }
    }
    ctx->pc = 0x479A90u;
label_479a90:
    // 0x479a90: 0x85e20108  lh          $v0, 0x108($t7)
    ctx->pc = 0x479a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 264)));
    // 0x479a94: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x479a94u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x479a98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x479a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x479a9c: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x479a9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x479aa0: 0x1d60ffc3  bgtz        $t3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x479AA0u;
    {
        const bool branch_taken_0x479aa0 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x479AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479AA0u;
        // 0x479aa4: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479aa0) {
            ctx->pc = 0x4799B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4799b0;
        }
    }
    ctx->pc = 0x479AA8u;
label_479aa8:
    // 0x479aa8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x479aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_479aac:
    // 0x479aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479ab0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x479ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x479ab4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x479ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479ab8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x479ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x479abc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x479abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x479ac0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x479ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479ac4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x479ac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479ac8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x479ac8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479acc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x479accu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x479AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479AD0u;
        // 0x479ad4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479AD8u;
}
