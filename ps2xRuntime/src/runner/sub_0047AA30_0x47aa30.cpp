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

// Function: sub_0047AA30
// Address: 0x47aa30 - 0x47b410
void sub_0047AA30_0x47aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AA30_0x47aa30");
#endif

    switch (ctx->pc) {
        case 0x47ab68u: goto label_47ab68;
        case 0x47abb0u: goto label_47abb0;
        case 0x47ac98u: goto label_47ac98;
        case 0x47ace0u: goto label_47ace0;
        case 0x47ade8u: goto label_47ade8;
        case 0x47ae28u: goto label_47ae28;
        case 0x47af28u: goto label_47af28;
        case 0x47af68u: goto label_47af68;
        case 0x47b060u: goto label_47b060;
        case 0x47b0b0u: goto label_47b0b0;
        case 0x47b150u: goto label_47b150;
        case 0x47b1d8u: goto label_47b1d8;
        case 0x47b238u: goto label_47b238;
        case 0x47b2c0u: goto label_47b2c0;
        case 0x47b360u: goto label_47b360;
        case 0x47b398u: goto label_47b398;
        default: break;
    }

    ctx->pc = 0x47aa30u;

    // 0x47aa30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x47aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x47aa34: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x47aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x47aa38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47aa38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aa3c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x47aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x47aa40: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x47aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x47aa44: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x47aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x47aa48: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x47aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x47aa4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x47aa50: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x47aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x47aa54: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x47aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x47aa58: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x47aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x47aa5c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x47aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x47aa60: 0x8c84ad1c  lw          $a0, -0x52E4($a0)
    ctx->pc = 0x47aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70AD1Cu));
    // 0x47aa64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x47aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x47aa68: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x47aa68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x47aa6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x47aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x47aa70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47aa74: 0x244f0018  addiu       $t7, $v0, 0x18
    ctx->pc = 0x47aa74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x47aa78: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x47aa7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47aa80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x47aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x47aa84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47AA84u;
    {
        const bool branch_taken_0x47aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AA84u;
        // 0x47aa88: 0x8dfe000c  lw          $fp, 0xC($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aa84) {
            ctx->pc = 0x47AAB0u;
            goto label_47aab0;
        }
    }
    ctx->pc = 0x47AA8Cu;
    // 0x47aa8c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x47aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x47aa90: 0x2443eeb8  addiu       $v1, $v0, -0x1148
    ctx->pc = 0x47aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x47aa94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47aa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aa98: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x47aa98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x47aa9c: 0x90790007  lbu         $t9, 0x7($v1)
    ctx->pc = 0x47aa9cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x58EEBFu));
    // 0x47aaa0: 0x90760008  lbu         $s6, 0x8($v1)
    ctx->pc = 0x47aaa0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)FAST_READ8(0x58EEC0u));
    // 0x47aaa4: 0x24730009  addiu       $s3, $v1, 0x9
    ctx->pc = 0x47aaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x47aaa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47AAA8u;
    {
        const bool branch_taken_0x47aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AAA8u;
        // 0x47aaac: 0x2472000c  addiu       $s2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aaa8) {
            ctx->pc = 0x47AAD0u;
            goto label_47aad0;
        }
    }
    ctx->pc = 0x47AAB0u;
label_47aab0:
    // 0x47aab0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x47aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x47aab4: 0x2443eeb8  addiu       $v1, $v0, -0x1148
    ctx->pc = 0x47aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x47aab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47aab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aabc: 0x90790002  lbu         $t9, 0x2($v1)
    ctx->pc = 0x47aabcu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x58EEBAu));
    // 0x47aac0: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x47aac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x47aac4: 0x90760003  lbu         $s6, 0x3($v1)
    ctx->pc = 0x47aac4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)FAST_READ8(0x58EEBBu));
    // 0x47aac8: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x47aac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x47aacc: 0x24720005  addiu       $s2, $v1, 0x5
    ctx->pc = 0x47aaccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_47aad0:
    // 0x47aad0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x47aad4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x47aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aad8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x47aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47aadc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x47aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x47aae0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47AAE0u;
    {
        const bool branch_taken_0x47aae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AAE0u;
        // 0x47aae4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aae0) {
            ctx->pc = 0x47AAF0u;
            goto label_47aaf0;
        }
    }
    ctx->pc = 0x47AAE8u;
    // 0x47aae8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x47aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x47aaec: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x47aaecu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47aaf0:
    // 0x47aaf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47aaf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x47aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x47aaf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47AAF8u;
    {
        const bool branch_taken_0x47aaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AAF8u;
        // 0x47aafc: 0x24b8eeb8  addiu       $t8, $a1, -0x1148 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aaf8) {
            ctx->pc = 0x47AB14u;
            goto label_47ab14;
        }
    }
    ctx->pc = 0x47AB00u;
    // 0x47ab00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47ab00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab04: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x47ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x47ab08: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x47ab08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47ab0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab10: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x47ab10u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47ab14:
    // 0x47ab14: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x47ab18: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x47ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x47ab1c: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x47AB1Cu;
    {
        const bool branch_taken_0x47ab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ab1c) {
            ctx->pc = 0x47AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AB1Cu;
            // 0x47ab20: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AD80u;
            goto label_47ad80;
        }
    }
    ctx->pc = 0x47AB24u;
    // 0x47ab24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47ab28: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x47ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x47ab2c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47ab30: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x47AB30u;
    {
        const bool branch_taken_0x47ab30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AB30u;
        // 0x47ab34: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ab30) {
            ctx->pc = 0x47AC44u;
            goto label_47ac44;
        }
    }
    ctx->pc = 0x47AB38u;
    // 0x47ab38: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x47AB38u;
    {
        const bool branch_taken_0x47ab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ab38) {
            ctx->pc = 0x47AB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AB38u;
            // 0x47ab3c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AC48u;
            goto label_47ac48;
        }
    }
    ctx->pc = 0x47AB40u;
    // 0x47ab40: 0x8de200a0  lw          $v0, 0xA0($t7)
    ctx->pc = 0x47ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x47ab44: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47ab44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab48: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47ab4c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47ab4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ab54: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x47ab54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x47ab58: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47ab58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47ab5c: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47ab5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab60: 0x19800038  blez        $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x47AB60u;
    {
        const bool branch_taken_0x47ab60 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AB60u;
        // 0x47ab64: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ab60) {
            ctx->pc = 0x47AC44u;
            goto label_47ac44;
        }
    }
    ctx->pc = 0x47AB68u;
label_47ab68:
    // 0x47ab68: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47ab6c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47ab6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47ab70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47AB70u;
    {
        const bool branch_taken_0x47ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ab70) {
            ctx->pc = 0x47AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AB70u;
            // 0x47ab74: 0x8de90098  lw          $t1, 0x98($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AB94u;
            goto label_47ab94;
        }
    }
    ctx->pc = 0x47AB78u;
    // 0x47ab78: 0x85e200ac  lh          $v0, 0xAC($t7)
    ctx->pc = 0x47ab78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 172)));
    // 0x47ab7c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47ab7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab80: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47ab80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ab88: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x47ab88u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47ab8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47AB8Cu;
    {
        const bool branch_taken_0x47ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AB8Cu;
        // 0x47ab90: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ab8c) {
            ctx->pc = 0x47AB9Cu;
            goto label_47ab9c;
        }
    }
    ctx->pc = 0x47AB94u;
label_47ab94:
    // 0x47ab94: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47ab98: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47ab98u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47ab9c:
    // 0x47ab9c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47ab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aba0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x47ABA0u;
    {
        const bool branch_taken_0x47aba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ABA0u;
        // 0x47aba4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aba0) {
            ctx->pc = 0x47AC2Cu;
            goto label_47ac2c;
        }
    }
    ctx->pc = 0x47ABA8u;
    // 0x47aba8: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x47aba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x47abac: 0x0  nop
    ctx->pc = 0x47abacu;
    // NOP
label_47abb0:
    // 0x47abb0: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x47abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47abb4: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47abb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47abb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47abbc: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47abbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47abc0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x47abc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47abc4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47abc8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47abcc: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47abccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47abd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47abd4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x47abd8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x47abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47abdc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x47abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47abe0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47abe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47abe4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47abe4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47abe8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47abe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47abec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47abf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47abf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47abf4: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x47abf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47abf8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x47abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x47abfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ac00: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ac04: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ac04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ac08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ac0c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ac0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ac10: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ac10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ac14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ac18: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ac1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ac1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ac20: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47ac20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47ac24: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x47AC24u;
    {
        const bool branch_taken_0x47ac24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AC24u;
        // 0x47ac28: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac24) {
            ctx->pc = 0x47ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47abb0;
        }
    }
    ctx->pc = 0x47AC2Cu;
label_47ac2c:
    // 0x47ac2c: 0x85e200a8  lh          $v0, 0xA8($t7)
    ctx->pc = 0x47ac2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 168)));
    // 0x47ac30: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47ac30u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47ac34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ac38: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47ac38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47ac3c: 0x1d80ffca  bgtz        $t4, . + 4 + (-0x36 << 2)
    ctx->pc = 0x47AC3Cu;
    {
        const bool branch_taken_0x47ac3c = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AC3Cu;
        // 0x47ac40: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac3c) {
            ctx->pc = 0x47AB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ab68;
        }
    }
    ctx->pc = 0x47AC44u;
label_47ac44:
    // 0x47ac44: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47ac48:
    // 0x47ac48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x47ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x47ac4c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x47AC4Cu;
    {
        const bool branch_taken_0x47ac4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ac4c) {
            ctx->pc = 0x47AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AC4Cu;
            // 0x47ac50: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AD80u;
            goto label_47ad80;
        }
    }
    ctx->pc = 0x47AC54u;
    // 0x47ac54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47ac58: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x47ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x47ac5c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47ac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47ac60: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x47AC60u;
    {
        const bool branch_taken_0x47ac60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AC60u;
        // 0x47ac64: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac60) {
            ctx->pc = 0x47AD7Cu;
            goto label_47ad7c;
        }
    }
    ctx->pc = 0x47AC68u;
    // 0x47ac68: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x47AC68u;
    {
        const bool branch_taken_0x47ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ac68) {
            ctx->pc = 0x47AC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AC68u;
            // 0x47ac6c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AD80u;
            goto label_47ad80;
        }
    }
    ctx->pc = 0x47AC70u;
    // 0x47ac70: 0x8de200b8  lw          $v0, 0xB8($t7)
    ctx->pc = 0x47ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 184)));
    // 0x47ac74: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47ac74u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ac78: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47ac7c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47ac7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ac80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ac84: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x47ac84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x47ac88: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47ac88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47ac8c: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47ac8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ac90: 0x1980003a  blez        $t4, . + 4 + (0x3A << 2)
    ctx->pc = 0x47AC90u;
    {
        const bool branch_taken_0x47ac90 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AC90u;
        // 0x47ac94: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac90) {
            ctx->pc = 0x47AD7Cu;
            goto label_47ad7c;
        }
    }
    ctx->pc = 0x47AC98u;
label_47ac98:
    // 0x47ac98: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47ac9c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47ac9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47aca0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47ACA0u;
    {
        const bool branch_taken_0x47aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47aca0) {
            ctx->pc = 0x47ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47ACA0u;
            // 0x47aca4: 0x8de900b0  lw          $t1, 0xB0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47ACC4u;
            goto label_47acc4;
        }
    }
    ctx->pc = 0x47ACA8u;
    // 0x47aca8: 0x85e200c4  lh          $v0, 0xC4($t7)
    ctx->pc = 0x47aca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 196)));
    // 0x47acac: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47acacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47acb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47acb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47acb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47acb8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x47acb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47acbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47ACBCu;
    {
        const bool branch_taken_0x47acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ACBCu;
        // 0x47acc0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47acbc) {
            ctx->pc = 0x47ACCCu;
            goto label_47accc;
        }
    }
    ctx->pc = 0x47ACC4u;
label_47acc4:
    // 0x47acc4: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47acc8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47acc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47accc:
    // 0x47accc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47acccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47acd0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x47ACD0u;
    {
        const bool branch_taken_0x47acd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ACD0u;
        // 0x47acd4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47acd0) {
            ctx->pc = 0x47AD64u;
            goto label_47ad64;
        }
    }
    ctx->pc = 0x47ACD8u;
    // 0x47acd8: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x47acd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x47acdc: 0x0  nop
    ctx->pc = 0x47acdcu;
    // NOP
label_47ace0:
    // 0x47ace0: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x47ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47ace4: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47ace8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47ace8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47acec: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47acecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47acf0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x47acf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47acf4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47acf8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47acfc: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47ad00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47ad04: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x47ad08: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x47ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47ad0c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x47ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ad10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47ad10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47ad14: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47ad14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47ad18: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47ad18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47ad1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47ad20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47ad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47ad24: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x47ad24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47ad28: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x47ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x47ad2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ad30: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ad34: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ad34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ad38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ad3c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ad3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ad40: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ad40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ad44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ad48: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ad48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ad4c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ad4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ad50: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x47ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x47ad54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ad54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ad58: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47ad58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47ad5c: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x47AD5Cu;
    {
        const bool branch_taken_0x47ad5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AD5Cu;
        // 0x47ad60: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ad5c) {
            ctx->pc = 0x47ACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ace0;
        }
    }
    ctx->pc = 0x47AD64u;
label_47ad64:
    // 0x47ad64: 0x85e200c0  lh          $v0, 0xC0($t7)
    ctx->pc = 0x47ad64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 192)));
    // 0x47ad68: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47ad68u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47ad6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ad70: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47ad70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47ad74: 0x1d80ffc8  bgtz        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x47AD74u;
    {
        const bool branch_taken_0x47ad74 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AD74u;
        // 0x47ad78: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ad74) {
            ctx->pc = 0x47AC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ac98;
        }
    }
    ctx->pc = 0x47AD7Cu;
label_47ad7c:
    // 0x47ad7c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47ad80:
    // 0x47ad80: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x47ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x47ad84: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x47AD84u;
    {
        const bool branch_taken_0x47ad84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ad84) {
            ctx->pc = 0x47AD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AD84u;
            // 0x47ad88: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B010u;
            goto label_47b010;
        }
    }
    ctx->pc = 0x47AD8Cu;
    // 0x47ad8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47ad90: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x47ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x47ad94: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47ad94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47ad98: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x47AD98u;
    {
        const bool branch_taken_0x47ad98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AD98u;
        // 0x47ad9c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ad98) {
            ctx->pc = 0x47AEB0u;
            goto label_47aeb0;
        }
    }
    ctx->pc = 0x47ADA0u;
    // 0x47ada0: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x47ADA0u;
    {
        const bool branch_taken_0x47ada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ada0) {
            ctx->pc = 0x47ADA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47ADA0u;
            // 0x47ada4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AEB4u;
            goto label_47aeb4;
        }
    }
    ctx->pc = 0x47ADA8u;
    // 0x47ada8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47adac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47adb0: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x47adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x47adb4: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x47ADB4u;
    {
        const bool branch_taken_0x47adb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47adb4) {
            ctx->pc = 0x47ADB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47ADB4u;
            // 0x47adb8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AEB4u;
            goto label_47aeb4;
        }
    }
    ctx->pc = 0x47ADBCu;
    // 0x47adbc: 0x8de200d0  lw          $v0, 0xD0($t7)
    ctx->pc = 0x47adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x47adc0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47adc0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47adc4: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47adc8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47adc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47adcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47adccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47add0: 0x8eee0010  lw          $t6, 0x10($s7)
    ctx->pc = 0x47add0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x47add4: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47add4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47add8: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47add8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47addc: 0x19800034  blez        $t4, . + 4 + (0x34 << 2)
    ctx->pc = 0x47ADDCu;
    {
        const bool branch_taken_0x47addc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ADDCu;
        // 0x47ade0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47addc) {
            ctx->pc = 0x47AEB0u;
            goto label_47aeb0;
        }
    }
    ctx->pc = 0x47ADE4u;
    // 0x47ade4: 0x0  nop
    ctx->pc = 0x47ade4u;
    // NOP
label_47ade8:
    // 0x47ade8: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47adec: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47adecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47adf0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47ADF0u;
    {
        const bool branch_taken_0x47adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47adf0) {
            ctx->pc = 0x47ADF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47ADF0u;
            // 0x47adf4: 0x8de900c8  lw          $t1, 0xC8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AE14u;
            goto label_47ae14;
        }
    }
    ctx->pc = 0x47ADF8u;
    // 0x47adf8: 0x85e200dc  lh          $v0, 0xDC($t7)
    ctx->pc = 0x47adf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x47adfc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47adfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae00: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47ae00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47ae08: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x47ae08u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47ae0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47AE0Cu;
    {
        const bool branch_taken_0x47ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AE0Cu;
        // 0x47ae10: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ae0c) {
            ctx->pc = 0x47AE1Cu;
            goto label_47ae1c;
        }
    }
    ctx->pc = 0x47AE14u;
label_47ae14:
    // 0x47ae14: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47ae18: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47ae18u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47ae1c:
    // 0x47ae1c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47ae1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae20: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x47AE20u;
    {
        const bool branch_taken_0x47ae20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AE20u;
        // 0x47ae24: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ae20) {
            ctx->pc = 0x47AE98u;
            goto label_47ae98;
        }
    }
    ctx->pc = 0x47AE28u;
label_47ae28:
    // 0x47ae28: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x47ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47ae2c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47ae30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47ae30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ae34: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47ae34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47ae38: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x47ae38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47ae3c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47ae40: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47ae44: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47ae48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47ae4c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47ae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x47ae50: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x47ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47ae54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x47ae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47ae58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47ae5c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47ae5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47ae60: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47ae60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47ae64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47ae68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47ae6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x47ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x47ae70: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x47ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x47ae74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ae78: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ae78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ae7c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ae7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ae80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ae84: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47ae88: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47ae88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47ae8c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47ae8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47ae90: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x47AE90u;
    {
        const bool branch_taken_0x47ae90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AE90u;
        // 0x47ae94: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ae90) {
            ctx->pc = 0x47AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ae28;
        }
    }
    ctx->pc = 0x47AE98u;
label_47ae98:
    // 0x47ae98: 0x85e200d8  lh          $v0, 0xD8($t7)
    ctx->pc = 0x47ae98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 216)));
    // 0x47ae9c: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47ae9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47aea0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47aea4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47aea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47aea8: 0x1d80ffcf  bgtz        $t4, . + 4 + (-0x31 << 2)
    ctx->pc = 0x47AEA8u;
    {
        const bool branch_taken_0x47aea8 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AEA8u;
        // 0x47aeac: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aea8) {
            ctx->pc = 0x47ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ade8;
        }
    }
    ctx->pc = 0x47AEB0u;
label_47aeb0:
    // 0x47aeb0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47aeb4:
    // 0x47aeb4: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x47aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x47aeb8: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x47AEB8u;
    {
        const bool branch_taken_0x47aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aeb8) {
            ctx->pc = 0x47AEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AEB8u;
            // 0x47aebc: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B010u;
            goto label_47b010;
        }
    }
    ctx->pc = 0x47AEC0u;
    // 0x47aec0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47aec4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x47aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x47aec8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47aec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47aecc: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x47AECCu;
    {
        const bool branch_taken_0x47aecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AECCu;
        // 0x47aed0: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aecc) {
            ctx->pc = 0x47B00Cu;
            goto label_47b00c;
        }
    }
    ctx->pc = 0x47AED4u;
    // 0x47aed4: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x47AED4u;
    {
        const bool branch_taken_0x47aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47aed4) {
            ctx->pc = 0x47AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AED4u;
            // 0x47aed8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B010u;
            goto label_47b010;
        }
    }
    ctx->pc = 0x47AEDCu;
    // 0x47aedc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47aee0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x47aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47aee4: 0x30820084  andi        $v0, $a0, 0x84
    ctx->pc = 0x47aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)132);
    // 0x47aee8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x47AEE8u;
    {
        const bool branch_taken_0x47aee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AEE8u;
        // 0x47aeec: 0x30840080  andi        $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aee8) {
            ctx->pc = 0x47B00Cu;
            goto label_47b00c;
        }
    }
    ctx->pc = 0x47AEF0u;
    // 0x47aef0: 0x8de200e8  lw          $v0, 0xE8($t7)
    ctx->pc = 0x47aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 232)));
    // 0x47aef4: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47aef8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47aefc: 0x8ef10010  lw          $s1, 0x10($s7)
    ctx->pc = 0x47aefcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x47af00: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47af00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47af04: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x47af04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af08: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x47AF08u;
    {
        const bool branch_taken_0x47af08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AF08u;
        // 0x47af0c: 0x220702d  daddu       $t6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47af08) {
            ctx->pc = 0x47AF14u;
            goto label_47af14;
        }
    }
    ctx->pc = 0x47AF10u;
    // 0x47af10: 0x8eee0014  lw          $t6, 0x14($s7)
    ctx->pc = 0x47af10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_47af14:
    // 0x47af14: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47af14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af18: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47af18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af1c: 0x1980003b  blez        $t4, . + 4 + (0x3B << 2)
    ctx->pc = 0x47AF1Cu;
    {
        const bool branch_taken_0x47af1c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AF1Cu;
        // 0x47af20: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47af1c) {
            ctx->pc = 0x47B00Cu;
            goto label_47b00c;
        }
    }
    ctx->pc = 0x47AF24u;
    // 0x47af24: 0x0  nop
    ctx->pc = 0x47af24u;
    // NOP
label_47af28:
    // 0x47af28: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47af2c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47af2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47af30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47AF30u;
    {
        const bool branch_taken_0x47af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47af30) {
            ctx->pc = 0x47AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47AF30u;
            // 0x47af34: 0x8de900e0  lw          $t1, 0xE0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47AF54u;
            goto label_47af54;
        }
    }
    ctx->pc = 0x47AF38u;
    // 0x47af38: 0x85e200f4  lh          $v0, 0xF4($t7)
    ctx->pc = 0x47af38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 244)));
    // 0x47af3c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47af3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af40: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47af40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47af44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47af48: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x47af48u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47af4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47AF4Cu;
    {
        const bool branch_taken_0x47af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AF4Cu;
        // 0x47af50: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47af4c) {
            ctx->pc = 0x47AF5Cu;
            goto label_47af5c;
        }
    }
    ctx->pc = 0x47AF54u;
label_47af54:
    // 0x47af54: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47af54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47af58: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47af58u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47af5c:
    // 0x47af5c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47af5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af60: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x47AF60u;
    {
        const bool branch_taken_0x47af60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AF60u;
        // 0x47af64: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47af60) {
            ctx->pc = 0x47AFF4u;
            goto label_47aff4;
        }
    }
    ctx->pc = 0x47AF68u;
label_47af68:
    // 0x47af68: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x47af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47af6c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47af70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47af70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47af74: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47af74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47af78: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x47af78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47af7c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47af80: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47af84: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47af84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47af88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47af88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47af8c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x47af90: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x47af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47af94: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x47af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47af98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47af98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47af9c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47af9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47afa0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47afa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47afa4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47afa8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47afac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x47afacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x47afb0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x47afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47afb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x47afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47afb8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47afbc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47afbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47afc0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x47afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47afc4: 0x1c21821  addu        $v1, $t6, $v0
    ctx->pc = 0x47afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x47afc8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47afcc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47afccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47afd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x47afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47afd4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47afd8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47afd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47afdc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x47afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47afe0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47afe4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47afe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47afe8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47afec: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x47AFECu;
    {
        const bool branch_taken_0x47afec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AFECu;
        // 0x47aff0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47afec) {
            ctx->pc = 0x47AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47af68;
        }
    }
    ctx->pc = 0x47AFF4u;
label_47aff4:
    // 0x47aff4: 0x85e200f0  lh          $v0, 0xF0($t7)
    ctx->pc = 0x47aff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 240)));
    // 0x47aff8: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47aff8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47affc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47affcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b000: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47b000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47b004: 0x1d80ffc8  bgtz        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x47B004u;
    {
        const bool branch_taken_0x47b004 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B004u;
        // 0x47b008: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b004) {
            ctx->pc = 0x47AF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47af28;
        }
    }
    ctx->pc = 0x47B00Cu;
label_47b00c:
    // 0x47b00c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47b010:
    // 0x47b010: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x47b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x47b014: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x47B014u;
    {
        const bool branch_taken_0x47b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b014) {
            ctx->pc = 0x47B018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B014u;
            // 0x47b018: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B188u;
            goto label_47b188;
        }
    }
    ctx->pc = 0x47B01Cu;
    // 0x47b01c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47b020: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x47b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x47b024: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47b028: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x47B028u;
    {
        const bool branch_taken_0x47b028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B028u;
        // 0x47b02c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b028) {
            ctx->pc = 0x47B184u;
            goto label_47b184;
        }
    }
    ctx->pc = 0x47B030u;
    // 0x47b030: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x47B030u;
    {
        const bool branch_taken_0x47b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b030) {
            ctx->pc = 0x47B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B030u;
            // 0x47b034: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B188u;
            goto label_47b188;
        }
    }
    ctx->pc = 0x47B038u;
    // 0x47b038: 0x8de20100  lw          $v0, 0x100($t7)
    ctx->pc = 0x47b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x47b03c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47b03cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b040: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47b044: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47b044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b048: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b04c: 0x8ef10030  lw          $s1, 0x30($s7)
    ctx->pc = 0x47b04cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x47b050: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x47b050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b054: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47b054u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b058: 0x1980004a  blez        $t4, . + 4 + (0x4A << 2)
    ctx->pc = 0x47B058u;
    {
        const bool branch_taken_0x47b058 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B058u;
        // 0x47b05c: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b058) {
            ctx->pc = 0x47B184u;
            goto label_47b184;
        }
    }
    ctx->pc = 0x47B060u;
label_47b060:
    // 0x47b060: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47b064: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47b064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47b068: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47B068u;
    {
        const bool branch_taken_0x47b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b068) {
            ctx->pc = 0x47B06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B068u;
            // 0x47b06c: 0x8de900f8  lw          $t1, 0xF8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B08Cu;
            goto label_47b08c;
        }
    }
    ctx->pc = 0x47B070u;
    // 0x47b070: 0x85e2010c  lh          $v0, 0x10C($t7)
    ctx->pc = 0x47b070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 268)));
    // 0x47b074: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47b074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b078: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47b078u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b07c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b080: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x47b080u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x47b084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47B084u;
    {
        const bool branch_taken_0x47b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B084u;
        // 0x47b088: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b084) {
            ctx->pc = 0x47B094u;
            goto label_47b094;
        }
    }
    ctx->pc = 0x47B08Cu;
label_47b08c:
    // 0x47b08c: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47b090: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47b090u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47b094:
    // 0x47b094: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b098: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47b09c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x47b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x47b0a0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x47B0A0u;
    {
        const bool branch_taken_0x47b0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B0A0u;
        // 0x47b0a4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b0a0) {
            ctx->pc = 0x47B140u;
            goto label_47b140;
        }
    }
    ctx->pc = 0x47B0A8u;
    // 0x47b0a8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x47B0A8u;
    {
        const bool branch_taken_0x47b0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B0A8u;
        // 0x47b0ac: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b0a8) {
            ctx->pc = 0x47B16Cu;
            goto label_47b16c;
        }
    }
    ctx->pc = 0x47B0B0u;
label_47b0b0:
    // 0x47b0b0: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x47b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47b0b4: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47b0b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47b0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b0bc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47b0c0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x47b0c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b0c4: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x47b0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47b0c8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47b0cc: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47b0d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47b0d4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x47b0d8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x47b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x47b0dc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47b0dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47b0e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47b0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b0e4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x47b0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b0e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47b0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47b0ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47b0f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47b0f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47b0f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47b0fc: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x47b0fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x47b100: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47b100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b104: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x47b104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x47b108: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x47b108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x47b10c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x47b10cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x47b110: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x47b110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x47b114: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x47b114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x47b118: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x47b118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x47b11c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x47b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x47b120: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x47b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x47b124: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x47b124u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x47b128: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x47b128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x47b12c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x47b12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x47b130: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x47B130u;
    {
        const bool branch_taken_0x47b130 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B130u;
        // 0x47b134: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b130) {
            ctx->pc = 0x47B0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b0b0;
        }
    }
    ctx->pc = 0x47B138u;
    // 0x47b138: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x47B138u;
    {
        const bool branch_taken_0x47b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B138u;
        // 0x47b13c: 0x85e20108  lh          $v0, 0x108($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b138) {
            ctx->pc = 0x47B170u;
            goto label_47b170;
        }
    }
    ctx->pc = 0x47B140u;
label_47b140:
    // 0x47b140: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47B140u;
    {
        const bool branch_taken_0x47b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B140u;
        // 0x47b144: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b140) {
            ctx->pc = 0x47B16Cu;
            goto label_47b16c;
        }
    }
    ctx->pc = 0x47B148u;
    // 0x47b148: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x47b148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x47b14c: 0x0  nop
    ctx->pc = 0x47b14cu;
    // NOP
label_47b150:
    // 0x47b150: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x47b150u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x47b154: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47b154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b158: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x47b158u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x47b15c: 0x0  nop
    ctx->pc = 0x47b15cu;
    // NOP
    // 0x47b160: 0x0  nop
    ctx->pc = 0x47b160u;
    // NOP
    // 0x47b164: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47B164u;
    {
        const bool branch_taken_0x47b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B164u;
        // 0x47b168: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b164) {
            ctx->pc = 0x47B150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b150;
        }
    }
    ctx->pc = 0x47B16Cu;
label_47b16c:
    // 0x47b16c: 0x85e20108  lh          $v0, 0x108($t7)
    ctx->pc = 0x47b16cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 264)));
label_47b170:
    // 0x47b170: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47b170u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47b174: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b178: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x47b178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x47b17c: 0x1d80ffb8  bgtz        $t4, . + 4 + (-0x48 << 2)
    ctx->pc = 0x47B17Cu;
    {
        const bool branch_taken_0x47b17c = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B17Cu;
        // 0x47b180: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b17c) {
            ctx->pc = 0x47B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b060;
        }
    }
    ctx->pc = 0x47B184u;
label_47b184:
    // 0x47b184: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x47b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47b188:
    // 0x47b188: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x47b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x47b18c: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x47B18Cu;
    {
        const bool branch_taken_0x47b18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b18c) {
            ctx->pc = 0x47B190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B18Cu;
            // 0x47b190: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B3E0u;
            goto label_47b3e0;
        }
    }
    ctx->pc = 0x47B194u;
    // 0x47b194: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47b198: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x47b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x47b19c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x47b19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47b1a0: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x47B1A0u;
    {
        const bool branch_taken_0x47b1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B1A0u;
        // 0x47b1a4: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b1a0) {
            ctx->pc = 0x47B3DCu;
            goto label_47b3dc;
        }
    }
    ctx->pc = 0x47B1A8u;
    // 0x47b1a8: 0x5440008d  bnel        $v0, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x47B1A8u;
    {
        const bool branch_taken_0x47b1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b1a8) {
            ctx->pc = 0x47B1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B1A8u;
            // 0x47b1ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B3E0u;
            goto label_47b3e0;
        }
    }
    ctx->pc = 0x47B1B0u;
    // 0x47b1b0: 0x8de20118  lw          $v0, 0x118($t7)
    ctx->pc = 0x47b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 280)));
    // 0x47b1b4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47b1b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b1b8: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x47b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x47b1bc: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47b1bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b1c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b1c4: 0x8eee000c  lw          $t6, 0xC($s7)
    ctx->pc = 0x47b1c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x47b1c8: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47b1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b1cc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47b1ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b1d0: 0x19800082  blez        $t4, . + 4 + (0x82 << 2)
    ctx->pc = 0x47B1D0u;
    {
        const bool branch_taken_0x47b1d0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x47B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B1D0u;
        // 0x47b1d4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b1d0) {
            ctx->pc = 0x47B3DCu;
            goto label_47b3dc;
        }
    }
    ctx->pc = 0x47B1D8u;
label_47b1d8:
    // 0x47b1d8: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x47b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x47b1dc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47b1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x47b1e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47B1E0u;
    {
        const bool branch_taken_0x47b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b1e0) {
            ctx->pc = 0x47B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B1E0u;
            // 0x47b1e4: 0x8de90110  lw          $t1, 0x110($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B204u;
            goto label_47b204;
        }
    }
    ctx->pc = 0x47B1E8u;
    // 0x47b1e8: 0x85e20124  lh          $v0, 0x124($t7)
    ctx->pc = 0x47b1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 292)));
    // 0x47b1ec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47b1ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b1f0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x47b1f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b1f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b1f8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x47b1f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47b1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47B1FCu;
    {
        const bool branch_taken_0x47b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B1FCu;
        // 0x47b200: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b1fc) {
            ctx->pc = 0x47B20Cu;
            goto label_47b20c;
        }
    }
    ctx->pc = 0x47B204u;
label_47b204:
    // 0x47b204: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x47b204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x47b208: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x47b208u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_47b20c:
    // 0x47b20c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b210: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47b214: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x47b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x47b218: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x47B218u;
    {
        const bool branch_taken_0x47b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B218u;
        // 0x47b21c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b218) {
            ctx->pc = 0x47B348u;
            goto label_47b348;
        }
    }
    ctx->pc = 0x47B220u;
    // 0x47b220: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x47b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x47b224: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x47b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x47b228: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x47B228u;
    {
        const bool branch_taken_0x47b228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B228u;
        // 0x47b22c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b228) {
            ctx->pc = 0x47B2B8u;
            goto label_47b2b8;
        }
    }
    ctx->pc = 0x47B230u;
    // 0x47b230: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x47B230u;
    {
        const bool branch_taken_0x47b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B230u;
        // 0x47b234: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b230) {
            ctx->pc = 0x47B3C4u;
            goto label_47b3c4;
        }
    }
    ctx->pc = 0x47B238u;
label_47b238:
    // 0x47b238: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x47b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47b23c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47b240: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x47b240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b244: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47b244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47b248: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x47b248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b24c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47b250: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x47b250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x47b254: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47b254u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47b258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47b258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47b25c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47b260: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x47b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x47b264: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x47b264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b268: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x47b268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b26c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47b26cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47b270: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47b270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47b274: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x47b278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47b278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47b27c: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x47b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x47b280: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x47b280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b284: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b284u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b288: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b28c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x47b28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x47b290: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b290u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b294: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b298: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x47b298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x47b29c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b29cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b2a4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47b2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47b2a8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x47B2A8u;
    {
        const bool branch_taken_0x47b2a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B2A8u;
        // 0x47b2ac: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b2a8) {
            ctx->pc = 0x47B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b238;
        }
    }
    ctx->pc = 0x47B2B0u;
    // 0x47b2b0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x47B2B0u;
    {
        const bool branch_taken_0x47b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B2B0u;
        // 0x47b2b4: 0x85e20120  lh          $v0, 0x120($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b2b0) {
            ctx->pc = 0x47B3C8u;
            goto label_47b3c8;
        }
    }
    ctx->pc = 0x47B2B8u;
label_47b2b8:
    // 0x47b2b8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x47B2B8u;
    {
        const bool branch_taken_0x47b2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B2B8u;
        // 0x47b2bc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b2b8) {
            ctx->pc = 0x47B3C4u;
            goto label_47b3c4;
        }
    }
    ctx->pc = 0x47B2C0u;
label_47b2c0:
    // 0x47b2c0: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x47b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x47b2c4: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x47b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x47b2c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x47b2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b2cc: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x47b2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x47b2d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x47b2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b2d4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x47b2d8: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x47b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x47b2dc: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x47b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x47b2e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47b2e4: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x47b2e8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x47b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x47b2ec: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x47b2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b2f0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x47b2f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b2f4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47b2f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x47b2f8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47b2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47b2fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x47b300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47b300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47b304: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x47b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x47b308: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x47b308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b30c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b30cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b314: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x47b314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x47b318: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b318u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b31c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b320: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x47b320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x47b324: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x47b324u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47b328: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b32c: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b334: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47b334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47b338: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x47B338u;
    {
        const bool branch_taken_0x47b338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B338u;
        // 0x47b33c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b338) {
            ctx->pc = 0x47B2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b2c0;
        }
    }
    ctx->pc = 0x47B340u;
    // 0x47b340: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x47B340u;
    {
        const bool branch_taken_0x47b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B340u;
        // 0x47b344: 0x85e20120  lh          $v0, 0x120($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b340) {
            ctx->pc = 0x47B3C8u;
            goto label_47b3c8;
        }
    }
    ctx->pc = 0x47B348u;
label_47b348:
    // 0x47b348: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x47b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x47b34c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x47b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x47b350: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x47B350u;
    {
        const bool branch_taken_0x47b350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B350u;
        // 0x47b354: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b350) {
            ctx->pc = 0x47B38Cu;
            goto label_47b38c;
        }
    }
    ctx->pc = 0x47B358u;
    // 0x47b358: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x47B358u;
    {
        const bool branch_taken_0x47b358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B358u;
        // 0x47b35c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b358) {
            ctx->pc = 0x47B3C4u;
            goto label_47b3c4;
        }
    }
    ctx->pc = 0x47B360u;
label_47b360:
    // 0x47b360: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b360u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b364: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47b364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b368: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b36c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47b36cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47b370: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b370u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b374: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b378: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b378u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b37c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x47B37Cu;
    {
        const bool branch_taken_0x47b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B37Cu;
        // 0x47b380: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b37c) {
            ctx->pc = 0x47B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b360;
        }
    }
    ctx->pc = 0x47B384u;
    // 0x47b384: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x47B384u;
    {
        const bool branch_taken_0x47b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B384u;
        // 0x47b388: 0x85e20120  lh          $v0, 0x120($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b384) {
            ctx->pc = 0x47B3C8u;
            goto label_47b3c8;
        }
    }
    ctx->pc = 0x47B38Cu;
label_47b38c:
    // 0x47b38c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x47B38Cu;
    {
        const bool branch_taken_0x47b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B38Cu;
        // 0x47b390: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b38c) {
            ctx->pc = 0x47B3C4u;
            goto label_47b3c4;
        }
    }
    ctx->pc = 0x47B394u;
    // 0x47b394: 0x0  nop
    ctx->pc = 0x47b394u;
    // NOP
label_47b398:
    // 0x47b398: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b398u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b39c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47b39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b3a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b3a4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x47b3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x47b3a8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b3ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b3acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b3b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b3b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47b3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x47b3b8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x47b3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b3bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x47B3BCu;
    {
        const bool branch_taken_0x47b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B3BCu;
        // 0x47b3c0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b3bc) {
            ctx->pc = 0x47B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b398;
        }
    }
    ctx->pc = 0x47B3C4u;
label_47b3c4:
    // 0x47b3c4: 0x85e20120  lh          $v0, 0x120($t7)
    ctx->pc = 0x47b3c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 288)));
label_47b3c8:
    // 0x47b3c8: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x47b3c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x47b3cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47b3d0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47b3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47b3d4: 0x1d80ff80  bgtz        $t4, . + 4 + (-0x80 << 2)
    ctx->pc = 0x47B3D4u;
    {
        const bool branch_taken_0x47b3d4 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x47B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B3D4u;
        // 0x47b3d8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b3d4) {
            ctx->pc = 0x47B1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b1d8;
        }
    }
    ctx->pc = 0x47B3DCu;
label_47b3dc:
    // 0x47b3dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x47b3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47b3e0:
    // 0x47b3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47b3e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x47b3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47b3e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x47b3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47b3ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x47b3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47b3f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x47b3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b3f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x47b3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47b3f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x47b3f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47b3fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x47b3fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b400: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x47b400u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b404: 0x3e00008  jr          $ra
    ctx->pc = 0x47B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B404u;
        // 0x47b408: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B40Cu;
    // 0x47b40c: 0x0  nop
    ctx->pc = 0x47b40cu;
    // NOP
    ctx->pc = 0x47b410u;
}
