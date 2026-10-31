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

// Function: sub_0014EE88
// Address: 0x14ee88 - 0x14f938
void sub_0014EE88_0x14ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE88_0x14ee88");
#endif

    switch (ctx->pc) {
        case 0x14ef50u: goto label_14ef50;
        case 0x14eff0u: goto label_14eff0;
        case 0x14f268u: goto label_14f268;
        case 0x14f330u: goto label_14f330;
        case 0x14f348u: goto label_14f348;
        case 0x14f440u: goto label_14f440;
        case 0x14f700u: goto label_14f700;
        case 0x14f758u: goto label_14f758;
        case 0x14f7c8u: goto label_14f7c8;
        case 0x14f858u: goto label_14f858;
        default: break;
    }

    ctx->pc = 0x14ee88u;

    // 0x14ee88: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14ee8c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14ee90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14ee94: 0x8ca4c548  lw          $a0, -0x3AB8($a1)
    ctx->pc = 0x14ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C548u));
    // 0x14ee98: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14ee9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14eea0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14eea4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x14eea8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14eeac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14eeb0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x14eeb4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x14eeb8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x14eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x14eebc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x14eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x14eec0: 0xac40bd30  sw          $zero, -0x42D0($v0)
    ctx->pc = 0x14eec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50BD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD30u, _value); } while (0);
    // 0x14eec4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EEC4u;
    {
        const bool branch_taken_0x14eec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEC4u;
        // 0x14eec8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eec4) {
            ctx->pc = 0x14EED8u;
            goto label_14eed8;
        }
    }
    ctx->pc = 0x14EECCu;
    // 0x14eecc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14eed0: 0xaca0c548  sw          $zero, -0x3AB8($a1)
    ctx->pc = 0x14eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952264), GPR_U32(ctx, 0));
    // 0x14eed4: 0xac40c54c  sw          $zero, -0x3AB4($v0)
    ctx->pc = 0x14eed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C54Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C54Cu, _value); } while (0);
label_14eed8:
    // 0x14eed8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x14eed8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x14eedc: 0x90682dc0  lbu         $t0, 0x2DC0($v1)
    ctx->pc = 0x14eedcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11712)));
    // 0x14eee0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14eee4: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x14eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x14eee8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14eeec: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x14eef0: 0x8ce5c23c  lw          $a1, -0x3DC4($a3)
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951484)));
    // 0x14eef4: 0x488021  addu        $s0, $v0, $t0
    ctx->pc = 0x14eef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14eef8: 0xac80bd6c  sw          $zero, -0x4294($a0)
    ctx->pc = 0x14eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950252), GPR_U32(ctx, 0));
    // 0x14eefc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ef00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ef04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ef08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ef0c: 0x1045027e  beq         $v0, $a1, . + 4 + (0x27E << 2)
    ctx->pc = 0x14EF0Cu;
    {
        const bool branch_taken_0x14ef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF0Cu;
        // 0x14ef10: 0xacc2bd78  sw          $v0, -0x4288($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294950264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef0c) {
            ctx->pc = 0x14F908u;
            goto label_14f908;
        }
    }
    ctx->pc = 0x14EF14u;
    // 0x14ef14: 0xace2c23c  sw          $v0, -0x3DC4($a3)
    ctx->pc = 0x14ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294951484), GPR_U32(ctx, 2));
    // 0x14ef18: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14ef1c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14ef20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14ef24: 0x246dc278  addiu       $t5, $v1, -0x3D88
    ctx->pc = 0x14ef24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951544));
    // 0x14ef28: 0x24453ac8  addiu       $a1, $v0, 0x3AC8
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14ef2c: 0x24843af8  addiu       $a0, $a0, 0x3AF8
    ctx->pc = 0x14ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15096));
    // 0x14ef30: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x14ef30u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef34: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x14ef34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14ef38: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ef3c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x14ef3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ef40: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ef44: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x14ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14ef48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ef4c: 0x0  nop
    ctx->pc = 0x14ef4cu;
    // NOP
label_14ef50:
    // 0x14ef50: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x14ef50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ef54: 0x144c0008  bne         $v0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EF54u;
    {
        const bool branch_taken_0x14ef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x14ef54) {
            ctx->pc = 0x14EF78u;
            goto label_14ef78;
        }
    }
    ctx->pc = 0x14EF5Cu;
    // 0x14ef5c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14ef5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ef60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ef64: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x14ef68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EF68u;
    {
        const bool branch_taken_0x14ef68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF68u;
        // 0x14ef6c: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef68) {
            ctx->pc = 0x14EF74u;
            goto label_14ef74;
        }
    }
    ctx->pc = 0x14EF70u;
    // 0x14ef70: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x14ef70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_14ef74:
    // 0x14ef74: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x14ef74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_14ef78:
    // 0x14ef78: 0x144b0004  bne         $v0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EF78u;
    {
        const bool branch_taken_0x14ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x14ef78) {
            ctx->pc = 0x14EF8Cu;
            goto label_14ef8c;
        }
    }
    ctx->pc = 0x14EF80u;
    // 0x14ef80: 0xa08a0000  sb          $t2, 0x0($a0)
    ctx->pc = 0x14ef80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x14ef84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EF84u;
    {
        const bool branch_taken_0x14ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF84u;
        // 0x14ef88: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef84) {
            ctx->pc = 0x14EF94u;
            goto label_14ef94;
        }
    }
    ctx->pc = 0x14EF8Cu;
label_14ef8c:
    // 0x14ef8c: 0x50490001  beql        $v0, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x14EF8Cu;
    {
        const bool branch_taken_0x14ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x14ef8c) {
            ctx->pc = 0x14EF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EF8Cu;
            // 0x14ef90: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EF94u;
            goto label_14ef94;
        }
    }
    ctx->pc = 0x14EF94u;
label_14ef94:
    // 0x14ef94: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x14ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x14ef98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14ef9c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x14ef9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x14efa0: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x14efa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x14efa4: 0x2b220030  slti        $v0, $t9, 0x30
    ctx->pc = 0x14efa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14efa8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x14EFA8u;
    {
        const bool branch_taken_0x14efa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA8u;
        // 0x14efac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efa8) {
            ctx->pc = 0x14EF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ef50;
        }
    }
    ctx->pc = 0x14EFB0u;
    // 0x14efb0: 0x1100009f  beqz        $t0, . + 4 + (0x9F << 2)
    ctx->pc = 0x14EFB0u;
    {
        const bool branch_taken_0x14efb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFB0u;
        // 0x14efb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efb0) {
            ctx->pc = 0x14F230u;
            goto label_14f230;
        }
    }
    ctx->pc = 0x14EFB8u;
    // 0x14efb8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14efbc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x14efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14efc0: 0x24442dc0  addiu       $a0, $v0, 0x2DC0
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x14efc4: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
    // 0x14efc8: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x14efc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14efcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14efd0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14efd4: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x14efd4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14efd8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x14efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x14efdc: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14efe0: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14efe4: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x14efe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14efe8: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x14efe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14efec: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x14efecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_14eff0:
    // 0x14eff0: 0x8e58ffe4  lw          $t8, -0x1C($s2)
    ctx->pc = 0x14eff0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967268)));
    // 0x14eff4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14eff8: 0x24a53ac8  addiu       $a1, $a1, 0x3AC8
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15048));
    // 0x14effc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14effcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f000: 0x181103  sra         $v0, $t8, 4
    ctx->pc = 0x14f000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 24), 4));
    // 0x14f004: 0x304f003f  andi        $t7, $v0, 0x3F
    ctx->pc = 0x14f004u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14f008: 0x1e51821  addu        $v1, $t7, $a1
    ctx->pc = 0x14f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x14f00c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x14f00cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f010: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F010u;
    {
        const bool branch_taken_0x14f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x14F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F010u;
        // 0x14f014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f010) {
            ctx->pc = 0x14F020u;
            goto label_14f020;
        }
    }
    ctx->pc = 0x14F018u;
    // 0x14f018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F018u;
    {
        const bool branch_taken_0x14f018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F018u;
        // 0x14f01c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f018) {
            ctx->pc = 0x14F028u;
            goto label_14f028;
        }
    }
    ctx->pc = 0x14F020u;
label_14f020:
    // 0x14f020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f024: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14f024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14f028:
    // 0x14f028: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f02c: 0x181a83  sra         $v1, $t8, 10
    ctx->pc = 0x14f02cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 24), 10));
    // 0x14f030: 0x181083  sra         $v0, $t8, 2
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 24), 2));
    // 0x14f034: 0x24a53bb8  addiu       $a1, $a1, 0x3BB8
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15288));
    // 0x14f038: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14f038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14f03c: 0x3073003f  andi        $s3, $v1, 0x3F
    ctx->pc = 0x14f03cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x14f040: 0x1e52021  addu        $a0, $t7, $a1
    ctx->pc = 0x14f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x14f044: 0x33030003  andi        $v1, $t8, 0x3
    ctx->pc = 0x14f044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)3);
    // 0x14f048: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F048u;
    {
        const bool branch_taken_0x14f048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F048u;
        // 0x14f04c: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f048) {
            ctx->pc = 0x14F060u;
            goto label_14f060;
        }
    }
    ctx->pc = 0x14F050u;
    // 0x14f050: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14f054: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f058: 0xacc3bd6c  sw          $v1, -0x4294($a2)
    ctx->pc = 0x14f058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50BD6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD6Cu, _value); } while (0);
    // 0x14f05c: 0xac4fbd70  sw          $t7, -0x4290($v0)
    ctx->pc = 0x14f05cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x50BD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD70u, _value); } while (0);
label_14f060:
    // 0x14f060: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f064: 0xf2080  sll         $a0, $t7, 2
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x14f068: 0x246d2dc0  addiu       $t5, $v1, 0x2DC0
    ctx->pc = 0x14f068u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x14f06c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x14f06cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f070: 0x2ed2821  addu        $a1, $s7, $t5
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 13)));
    // 0x14f074: 0x2ad1021  addu        $v0, $s5, $t5
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x14f078: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14f078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f07c: 0x2cd1821  addu        $v1, $s6, $t5
    ctx->pc = 0x14f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x14f080: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x14f080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f084: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x14f088: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x14f088u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f08c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14f08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f090: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f094: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x14f094u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f098: 0x24a53be8  addiu       $a1, $a1, 0x3BE8
    ctx->pc = 0x14f098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15336));
    // 0x14f09c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f0a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14f0a4: 0x24633c48  addiu       $v1, $v1, 0x3C48
    ctx->pc = 0x14f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15432));
    // 0x14f0a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f0ac: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14f0b0: 0x24a53948  addiu       $a1, $a1, 0x3948
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14664));
    // 0x14f0b4: 0x185403  sra         $t2, $t8, 16
    ctx->pc = 0x14f0b4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 24), 16));
    // 0x14f0b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f0bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f0c0: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x14f0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x14f0c4: 0x24633b28  addiu       $v1, $v1, 0x3B28
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15144));
    // 0x14f0c8: 0xd43024  and         $a2, $a2, $s4
    ctx->pc = 0x14f0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 20));
    // 0x14f0cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f0d0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x14f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x14f0d4: 0x1e34821  addu        $t1, $t7, $v1
    ctx->pc = 0x14f0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x14f0d8: 0x24a53b88  addiu       $a1, $a1, 0x3B88
    ctx->pc = 0x14f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    // 0x14f0dc: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x14f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x14f0e0: 0x1e51821  addu        $v1, $t7, $a1
    ctx->pc = 0x14f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x14f0e4: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x14f0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x14f0e8: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x14f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f0ec: 0xb2e00  sll         $a1, $t3, 24
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x14f0f0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F0F0u;
    {
        const bool branch_taken_0x14f0f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0F0u;
        // 0x14f0f4: 0xa12b0000  sb          $t3, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0f0) {
            ctx->pc = 0x14F118u;
            goto label_14f118;
        }
    }
    ctx->pc = 0x14F0F8u;
    // 0x14f0f8: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x14f0fc: 0x24c63b58  addiu       $a2, $a2, 0x3B58
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15192));
    // 0x14f100: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x14f104: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x14f104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f108: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f10c: 0x2463c278  addiu       $v1, $v1, -0x3D88
    ctx->pc = 0x14f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951544));
    // 0x14f110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f114: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x14f114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
label_14f118:
    // 0x14f118: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f11c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f120: 0x24a53ac8  addiu       $a1, $a1, 0x3AC8
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15048));
    // 0x14f124: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x14f128: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x14f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x14f12c: 0x24c63b58  addiu       $a2, $a2, 0x3B58
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15192));
    // 0x14f130: 0x1e52021  addu        $a0, $t7, $a1
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x14f134: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f138: 0x1e62821  addu        $a1, $t7, $a2
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x14f13c: 0x3cd1021  addu        $v0, $fp, $t5
    ctx->pc = 0x14f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 13)));
    // 0x14f140: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x14f140u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f144: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f148: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f14c: 0x24633e80  addiu       $v1, $v1, 0x3E80
    ctx->pc = 0x14f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
    // 0x14f150: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f154: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x14f154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x14f158: 0x1c31021  addu        $v0, $t6, $v1
    ctx->pc = 0x14f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x14f15c: 0x24843f40  addiu       $a0, $a0, 0x3F40
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16192));
    // 0x14f160: 0x1c41821  addu        $v1, $t6, $a0
    ctx->pc = 0x14f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x14f164: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x14f164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x14f168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f16c: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F16Cu;
    {
        const bool branch_taken_0x14f16c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x14F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F16Cu;
        // 0x14f170: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f16c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F174u;
    // 0x14f174: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14f174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f178: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f17c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x14f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x14f180: 0x1c32021  addu        $a0, $t6, $v1
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x14f184: 0xcd1021  addu        $v0, $a2, $t5
    ctx->pc = 0x14f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x14f188: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f18c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F18Cu;
        // 0x14f190: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F1A4u;
            goto label_14f1a4;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f198: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x14f198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x14f19c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x14f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x14f1a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14f1a4:
    // 0x14f1a4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14f1a8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14f1ac: 0x24a5be08  addiu       $a1, $a1, -0x41F8
    ctx->pc = 0x14f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950408));
    // 0x14f1b0: 0x864d0000  lh          $t5, 0x0($s2)
    ctx->pc = 0x14f1b0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f1b4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x14f1b8: 0x24c6bda8  addiu       $a2, $a2, -0x4258
    ctx->pc = 0x14f1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950312));
    // 0x14f1bc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14f1bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f1c0: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x14f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x14f1c4: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x14f1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x14f1c8: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x14f1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x14f1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1CCu;
    {
        const bool branch_taken_0x14f1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1CCu;
        // 0x14f1d0: 0x964d0002  lhu         $t5, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1cc) {
            ctx->pc = 0x14F1DCu;
            goto label_14f1dc;
        }
    }
    ctx->pc = 0x14F1D4u;
    // 0x14f1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1D4u;
    {
        const bool branch_taken_0x14f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D4u;
        // 0x14f1d8: 0xa46d0000  sh          $t5, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1d4) {
            ctx->pc = 0x14F1E4u;
            goto label_14f1e4;
        }
    }
    ctx->pc = 0x14F1DCu;
label_14f1dc:
    // 0x14f1dc: 0x30827fff  andi        $v0, $a0, 0x7FFF
    ctx->pc = 0x14f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x14f1e0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14f1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_14f1e4:
    // 0x14f1e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f1e8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f1ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14f1f0: 0x24843a08  addiu       $a0, $a0, 0x3A08
    ctx->pc = 0x14f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14856));
    // 0x14f1f4: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x14f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x14f1f8: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x14f1fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x14f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x14f200: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x14f200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x14f204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14f204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14f208: 0x27de0024  addiu       $fp, $fp, 0x24
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x14f20c: 0x26f70024  addiu       $s7, $s7, 0x24
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
    // 0x14f210: 0x26d60024  addiu       $s6, $s6, 0x24
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x14f214: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x14f214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f218: 0x26b50024  addiu       $s5, $s5, 0x24
    ctx->pc = 0x14f218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x14f21c: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x14f220: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f224: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x14f224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x14f228: 0x1720ff71  bnez        $t9, . + 4 + (-0x8F << 2)
    ctx->pc = 0x14F228u;
    {
        const bool branch_taken_0x14f228 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F228u;
        // 0x14f22c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f228) {
            ctx->pc = 0x14EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eff0;
        }
    }
    ctx->pc = 0x14F230u;
label_14f230:
    // 0x14f230: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f234: 0x26080002  addiu       $t0, $s0, 0x2
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14f238: 0x24443ac8  addiu       $a0, $v0, 0x3AC8
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14f23c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x14f240: 0x24890030  addiu       $t1, $a0, 0x30
    ctx->pc = 0x14f240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x14f244: 0x260a0005  addiu       $t2, $s0, 0x5
    ctx->pc = 0x14f244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x14f248: 0x260f0009  addiu       $t7, $s0, 0x9
    ctx->pc = 0x14f248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x14f24c: 0x2611000a  addiu       $s1, $s0, 0xA
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x14f250: 0x2613000b  addiu       $s3, $s0, 0xB
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x14f254: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14f258: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14f258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f25c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f260: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f264: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x14f264u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x5E3AC8u));
label_14f268:
    // 0x14f268: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F268u;
    {
        const bool branch_taken_0x14f268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x14f268) {
            ctx->pc = 0x14F278u;
            goto label_14f278;
        }
    }
    ctx->pc = 0x14F270u;
    // 0x14f270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F270u;
    {
        const bool branch_taken_0x14f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F270u;
        // 0x14f274: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f270) {
            ctx->pc = 0x14F280u;
            goto label_14f280;
        }
    }
    ctx->pc = 0x14F278u;
label_14f278:
    // 0x14f278: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F278u;
    {
        const bool branch_taken_0x14f278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x14f278) {
            ctx->pc = 0x14F27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F278u;
            // 0x14f27c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F280u;
            goto label_14f280;
        }
    }
    ctx->pc = 0x14F280u;
label_14f280:
    // 0x14f280: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f284: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x14f284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x14f288: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14F288u;
    {
        const bool branch_taken_0x14f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f288) {
            ctx->pc = 0x14F28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F288u;
            // 0x14f28c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f268;
        }
    }
    ctx->pc = 0x14F290u;
    // 0x14f290: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f294: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14f298: 0x24872dc0  addiu       $a3, $a0, 0x2DC0
    ctx->pc = 0x14f298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x14f29c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x14f2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f2a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14f2a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14f2ac: 0x90a6c240  lbu         $a2, -0x3DC0($a1)
    ctx->pc = 0x14f2acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294951488)));
    // 0x14f2b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f2b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f2b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f2bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f2c0: 0xac44bd74  sw          $a0, -0x428C($v0)
    ctx->pc = 0x14f2c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50BD74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD74u, _value); } while (0);
    // 0x14f2c4: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F2C4u;
    {
        const bool branch_taken_0x14f2c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2C4u;
        // 0x14f2c8: 0xac65bd5c  sw          $a1, -0x42A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2c4) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2CCu;
    // 0x14f2cc: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x14f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14f2d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14f2d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f2d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14f2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0xac83bd60  sw          $v1, -0x42A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F2F0u;
            goto label_14f2f0;
        }
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14f2ec: 0xa0c0c240  sb          $zero, -0x3DC0($a2)
    ctx->pc = 0x14f2ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C240u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C240u, _value); } while (0);
label_14f2f0:
    // 0x14f2f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f2f4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x14f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14f2f8: 0x24832dc0  addiu       $v1, $a0, 0x2DC0
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x14f2fc: 0x26080006  addiu       $t0, $s0, 0x6
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x14f300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f304: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x14f304u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f308: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f30c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f310: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f314: 0x2463c248  addiu       $v1, $v1, -0x3DB8
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
    // 0x14f318: 0xac44bd58  sw          $a0, -0x42A8($v0)
    ctx->pc = 0x14f318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50BD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD58u, _value); } while (0);
    // 0x14f31c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x14f31cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f320: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f324: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x14f324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f328: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f32c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14f32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f330:
    // 0x14f330: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x14f334: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x14f334u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f338: 0x4e3821  addu        $a3, $v0, $t6
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x14f33c: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x14f340: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14f344: 0x0  nop
    ctx->pc = 0x14f344u;
    // NOP
label_14f348:
    // 0x14f348: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f34c: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x14f34cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x14f350: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14f350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14f354: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F354u;
    {
        const bool branch_taken_0x14f354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f354) {
            ctx->pc = 0x14F358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F354u;
            // 0x14f358: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F37Cu;
            goto label_14f37c;
        }
    }
    ctx->pc = 0x14F35Cu;
    // 0x14f35c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x14f35cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f360: 0x148c0003  bne         $a0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F360u;
    {
        const bool branch_taken_0x14f360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x14f360) {
            ctx->pc = 0x14F370u;
            goto label_14f370;
        }
    }
    ctx->pc = 0x14F368u;
    // 0x14f368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F368u;
    {
        const bool branch_taken_0x14f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F368u;
        // 0x14f36c: 0xa0ab0000  sb          $t3, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f368) {
            ctx->pc = 0x14F37Cu;
            goto label_14f37c;
        }
    }
    ctx->pc = 0x14F370u;
label_14f370:
    // 0x14f370: 0x548a0002  bnel        $a0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F370u;
            // 0x14f374: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F37Cu;
            goto label_14f37c;
        }
    }
    ctx->pc = 0x14F378u;
    // 0x14f378: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x14f378u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_14f37c:
    // 0x14f37c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x14f380: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14f384: 0x29a20010  slti        $v0, $t5, 0x10
    ctx->pc = 0x14f384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x14f388: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14F388u;
    {
        const bool branch_taken_0x14f388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F388u;
        // 0x14f38c: 0x24c6fffe  addiu       $a2, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f388) {
            ctx->pc = 0x14F348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f348;
        }
    }
    ctx->pc = 0x14F390u;
    // 0x14f390: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x14f390u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x14f394: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x14f394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x14f398: 0x2b220003  slti        $v0, $t9, 0x3
    ctx->pc = 0x14f398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f39c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x14F39Cu;
    {
        const bool branch_taken_0x14f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F39Cu;
        // 0x14f3a0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f39c) {
            ctx->pc = 0x14F330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f330;
        }
    }
    ctx->pc = 0x14F3A4u;
    // 0x14f3a4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x14f3a8: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x14f3ac: 0x24c52dc0  addiu       $a1, $a2, 0x2DC0
    ctx->pc = 0x14f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 11712));
    // 0x14f3b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14f3b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14f3b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14f3bc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14f3c0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f3c4: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x14f3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f3c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f3cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f3d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f3d4: 0xac48c198  sw          $t0, -0x3E68($v0)
    ctx->pc = 0x14f3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x50C198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C198u, _value); } while (0);
    // 0x14f3d8: 0x240c02d  daddu       $t8, $s2, $zero
    ctx->pc = 0x14f3d8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f3e0: 0x2706001b  addiu       $a2, $t8, 0x1B
    ctx->pc = 0x14f3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 27));
    // 0x14f3e4: 0xac493d08  sw          $t1, 0x3D08($v0)
    ctx->pc = 0x14f3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x5E3D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E3D08u, _value); } while (0);
    // 0x14f3e8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14f3ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f3f0: 0x27070012  addiu       $a3, $t8, 0x12
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 18));
    // 0x14f3f4: 0xac43c19c  sw          $v1, -0x3E64($v0)
    ctx->pc = 0x14f3f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C19Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C19Cu, _value); } while (0);
    // 0x14f3f8: 0x27040009  addiu       $a0, $t8, 0x9
    ctx->pc = 0x14f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 9));
    // 0x14f3fc: 0x185080  sll         $t2, $t8, 2
    ctx->pc = 0x14f3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x14f400: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14f404: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x14f404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14f408: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x14f408u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x14f40c: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x14f40cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x14f410: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f414: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f418: 0xc57821  addu        $t7, $a2, $a1
    ctx->pc = 0x14f418u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14f41c: 0x24513d60  addiu       $s1, $v0, 0x3D60
    ctx->pc = 0x14f41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
    // 0x14f420: 0x24703d88  addiu       $s0, $v1, 0x3D88
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15752));
    // 0x14f424: 0x25083d38  addiu       $t0, $t0, 0x3D38
    ctx->pc = 0x14f424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15672));
    // 0x14f428: 0x25293d10  addiu       $t1, $t1, 0x3D10
    ctx->pc = 0x14f428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15632));
    // 0x14f42c: 0x1453021  addu        $a2, $t2, $a1
    ctx->pc = 0x14f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x14f430: 0x856021  addu        $t4, $a0, $a1
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f434: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x14f434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x14f438: 0x24190008  addiu       $t9, $zero, 0x8
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14f43c: 0x0  nop
    ctx->pc = 0x14f43cu;
    // NOP
label_14f440:
    // 0x14f440: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f444: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f444u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f448: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x14f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14f44c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14f450: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f454: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x14f458: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x14f458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14f45c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14f45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14f460: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x14f460u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x14f464: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x14f468: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x14f468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x14f46c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x14f46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x14f470: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14f470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14f474: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14f474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14f478: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x14f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x14f47c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14f480: 0x721ffef  bgez        $t9, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14F480u;
    {
        const bool branch_taken_0x14f480 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x14F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F480u;
        // 0x14f484: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f480) {
            ctx->pc = 0x14F440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f440;
        }
    }
    ctx->pc = 0x14F488u;
    // 0x14f488: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f48c: 0x26440025  addiu       $a0, $s2, 0x25
    ctx->pc = 0x14f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 37));
    // 0x14f490: 0x244f2dc0  addiu       $t7, $v0, 0x2DC0
    ctx->pc = 0x14f490u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x14f494: 0x26450026  addiu       $a1, $s2, 0x26
    ctx->pc = 0x14f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
    // 0x14f498: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14f49c: 0x26430027  addiu       $v1, $s2, 0x27
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 39));
    // 0x14f4a0: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x14f4a4: 0x26580024  addiu       $t8, $s2, 0x24
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x14f4a8: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x14f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x14f4ac: 0x26470029  addiu       $a3, $s2, 0x29
    ctx->pc = 0x14f4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 41));
    // 0x14f4b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14f4b4: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x14f4b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f4b8: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x14f4bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f4c0: 0x2648002a  addiu       $t0, $s2, 0x2A
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 42));
    // 0x14f4c4: 0x2649002b  addiu       $t1, $s2, 0x2B
    ctx->pc = 0x14f4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 43));
    // 0x14f4c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14f4cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14f4d0: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x14f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x14f4d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f4d8: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x14f4dc: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14f4e0: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x14f4e4: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x14f4e8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x14f4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x14f4ec: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x14f4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14f4f0: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f4f4: 0x10f4021  addu        $t0, $t0, $t7
    ctx->pc = 0x14f4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x14f4f8: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f4fc: 0x12f4821  addu        $t1, $t1, $t7
    ctx->pc = 0x14f4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x14f500: 0x8ccd0000  lw          $t5, 0x0($a2)
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f504: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f508: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f50c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f510: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14f510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14f514: 0x314e00ff  andi        $t6, $t2, 0xFF
    ctx->pc = 0x14f514u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x14f518: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14f51c: 0xa5203  sra         $t2, $t2, 8
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 8));
    // 0x14f520: 0x9068c241  lbu         $t0, -0x3DBF($v1)
    ctx->pc = 0x14f520u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294951489)));
    // 0x14f524: 0xac4b3e70  sw          $t3, 0x3E70($v0)
    ctx->pc = 0x14f524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15984), GPR_U32(ctx, 11));
    // 0x14f528: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f52c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f530: 0xac6c3e74  sw          $t4, 0x3E74($v1)
    ctx->pc = 0x14f530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x5E3E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E3E74u, _value); } while (0);
    // 0x14f534: 0xac44c204  sw          $a0, -0x3DFC($v0)
    ctx->pc = 0x14f534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50C204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C204u, _value); } while (0);
    // 0x14f538: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f53c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f540: 0xac6ac1f8  sw          $t2, -0x3E08($v1)
    ctx->pc = 0x14f540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x50C1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C1F8u, _value); } while (0);
    // 0x14f544: 0xac4ec1f4  sw          $t6, -0x3E0C($v0)
    ctx->pc = 0x14f544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x50C1F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C1F4u, _value); } while (0);
    // 0x14f548: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f54c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f550: 0xac6dc1f0  sw          $t5, -0x3E10($v1)
    ctx->pc = 0x14f550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x50C1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C1F0u, _value); } while (0);
    // 0x14f554: 0xac45c1ec  sw          $a1, -0x3E14($v0)
    ctx->pc = 0x14f554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50C1ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C1ECu, _value); } while (0);
    // 0x14f558: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f55c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14f560: 0xac663e78  sw          $a2, 0x3E78($v1)
    ctx->pc = 0x14f560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5E3E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E3E78u, _value); } while (0);
    // 0x14f564: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F564u;
    {
        const bool branch_taken_0x14f564 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F564u;
        // 0x14f568: 0xac473e7c  sw          $a3, 0x3E7C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15996), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f564) {
            ctx->pc = 0x14F588u;
            goto label_14f588;
        }
    }
    ctx->pc = 0x14F56Cu;
    // 0x14f56c: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x14f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x14f570: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14f570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14f574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f578: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14f57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F580u;
    {
        const bool branch_taken_0x14f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F580u;
        // 0x14f584: 0xac83bd68  sw          $v1, -0x4298($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f580) {
            ctx->pc = 0x14F590u;
            goto label_14f590;
        }
    }
    ctx->pc = 0x14F588u;
label_14f588:
    // 0x14f588: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14f58c: 0xa080c241  sb          $zero, -0x3DBF($a0)
    ctx->pc = 0x14f58cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C241u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C241u, _value); } while (0);
label_14f590:
    // 0x14f590: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14f594: 0x90a2c242  lbu         $v0, -0x3DBE($a1)
    ctx->pc = 0x14f594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x50C242u));
    // 0x14f598: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F598u;
    {
        const bool branch_taken_0x14f598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F598u;
        // 0x14f59c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f598) {
            ctx->pc = 0x14F5C4u;
            goto label_14f5c4;
        }
    }
    ctx->pc = 0x14F5A0u;
    // 0x14f5a0: 0x27020009  addiu       $v0, $t8, 0x9
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 9));
    // 0x14f5a4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14f5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x14f5a8: 0x24c42dc0  addiu       $a0, $a2, 0x2DC0
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11712));
    // 0x14f5ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f5b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f5b4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14f5b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f5bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14F5BCu;
    {
        const bool branch_taken_0x14f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5BCu;
        // 0x14f5c0: 0xaca3bd64  sw          $v1, -0x429C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294950244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5bc) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F5C4u;
label_14f5c4:
    // 0x14f5c4: 0xa040c242  sb          $zero, -0x3DBE($v0)
    ctx->pc = 0x14f5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294951490), (uint8_t)GPR_U32(ctx, 0));
label_14f5c8:
    // 0x14f5c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f5cc: 0x2705000c  addiu       $a1, $t8, 0xC
    ctx->pc = 0x14f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x14f5d0: 0x24712dc0  addiu       $s1, $v1, 0x2DC0
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x14f5d4: 0x2706000b  addiu       $a2, $t8, 0xB
    ctx->pc = 0x14f5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 11));
    // 0x14f5d8: 0x2707000d  addiu       $a3, $t8, 0xD
    ctx->pc = 0x14f5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 13));
    // 0x14f5dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14f5e0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x14f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x14f5e4: 0x2702000a  addiu       $v0, $t8, 0xA
    ctx->pc = 0x14f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 10));
    // 0x14f5e8: 0x2708000e  addiu       $t0, $t8, 0xE
    ctx->pc = 0x14f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 14));
    // 0x14f5ec: 0x270a000f  addiu       $t2, $t8, 0xF
    ctx->pc = 0x14f5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 15));
    // 0x14f5f0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14f5f4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x14f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14f5f8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x14f5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f5fc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x14f600: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x14f604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f608: 0x270b0010  addiu       $t3, $t8, 0x10
    ctx->pc = 0x14f608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x14f60c: 0x270d0011  addiu       $t5, $t8, 0x11
    ctx->pc = 0x14f60cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 17));
    // 0x14f610: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x14f610u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x14f614: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x14f614u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14f618: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f61c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14f620: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14f620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f624: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x14f624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x14f628: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x14f628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x14f62c: 0x270e0012  addiu       $t6, $t8, 0x12
    ctx->pc = 0x14f62cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 18));
    // 0x14f630: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x14f630u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x14f634: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x14f634u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x14f638: 0x27030013  addiu       $v1, $t8, 0x13
    ctx->pc = 0x14f638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 19));
    // 0x14f63c: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x14f63cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f640: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x14f640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f644: 0x1715821  addu        $t3, $t3, $s1
    ctx->pc = 0x14f644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x14f648: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14f648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14f64c: 0x1b16821  addu        $t5, $t5, $s1
    ctx->pc = 0x14f64cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x14f650: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x14f650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14f654: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x14f658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f65c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14f660: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14f664: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14f664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14f668: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x14f668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x14f66c: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x14f66cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f670: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x14f670u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x14f674: 0xc4882  srl         $t1, $t4, 2
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), 2));
    // 0x14f678: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f67c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x14f67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14f680: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x14f680u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
    // 0x14f684: 0xa044c1e8  sb          $a0, -0x3E18($v0)
    ctx->pc = 0x14f684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294951400), (uint8_t)GPR_U32(ctx, 4));
    // 0x14f688: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f68c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f690: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x14f690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x14f694: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x14f694u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x14f698: 0xa06cc1e9  sb          $t4, -0x3E17($v1)
    ctx->pc = 0x14f698u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x50C1E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C1E9u, _value); } while (0);
    // 0x14f69c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x14f69cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6a0: 0xa049c1ea  sb          $t1, -0x3E16($v0)
    ctx->pc = 0x14f6a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x50C1EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C1EAu, _value); } while (0);
    // 0x14f6a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f6a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f6ac: 0xac6fc208  sw          $t7, -0x3DF8($v1)
    ctx->pc = 0x14f6acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x50C208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C208u, _value); } while (0);
    // 0x14f6b0: 0xac50c21c  sw          $s0, -0x3DE4($v0)
    ctx->pc = 0x14f6b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50C21Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C21Cu, _value); } while (0);
    // 0x14f6b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f6b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f6bc: 0xac65c214  sw          $a1, -0x3DEC($v1)
    ctx->pc = 0x14f6bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50C214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C214u, _value); } while (0);
    // 0x14f6c0: 0xac46c218  sw          $a2, -0x3DE8($v0)
    ctx->pc = 0x14f6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x50C218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C218u, _value); } while (0);
    // 0x14f6c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f6c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f6cc: 0xac67c220  sw          $a3, -0x3DE0($v1)
    ctx->pc = 0x14f6ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x50C220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C220u, _value); } while (0);
    // 0x14f6d0: 0xac48c224  sw          $t0, -0x3DDC($v0)
    ctx->pc = 0x14f6d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x50C224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C224u, _value); } while (0);
    // 0x14f6d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f6d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f6dc: 0xac6ac228  sw          $t2, -0x3DD8($v1)
    ctx->pc = 0x14f6dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x50C228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C228u, _value); } while (0);
    // 0x14f6e0: 0x19a0000e  blez        $t5, . + 4 + (0xE << 2)
    ctx->pc = 0x14F6E0u;
    {
        const bool branch_taken_0x14f6e0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x14F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E0u;
        // 0x14f6e4: 0xac4bc22c  sw          $t3, -0x3DD4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951468), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6e0) {
            ctx->pc = 0x14F71Cu;
            goto label_14f71c;
        }
    }
    ctx->pc = 0x14F6E8u;
    // 0x14f6e8: 0x27020014  addiu       $v0, $t8, 0x14
    ctx->pc = 0x14f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x14f6ec: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f6f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f6f4: 0x24633db0  addiu       $v1, $v1, 0x3DB0
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15792));
    // 0x14f6f8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x14f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14f6fc: 0x1a0c82d  daddu       $t9, $t5, $zero
    ctx->pc = 0x14f6fcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_14f700:
    // 0x14f700: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f704: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f708: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14f708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14f70c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14f710: 0x1720fffb  bnez        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14F710u;
    {
        const bool branch_taken_0x14f710 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F710u;
        // 0x14f714: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f710) {
            ctx->pc = 0x14F700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f700;
        }
    }
    ctx->pc = 0x14F718u;
    // 0x14f718: 0x1a0c82d  daddu       $t9, $t5, $zero
    ctx->pc = 0x14f718u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_14f71c:
    // 0x14f71c: 0x319c021  addu        $t8, $t8, $t9
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x14f720: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f724: 0x27020015  addiu       $v0, $t8, 0x15
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 21));
    // 0x14f728: 0x24862dc0  addiu       $a2, $a0, 0x2DC0
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x14f72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f730: 0x27030016  addiu       $v1, $t8, 0x16
    ctx->pc = 0x14f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 22));
    // 0x14f734: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14f738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f73c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f740: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14f740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14f744: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f748: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14f74c: 0xac45c230  sw          $a1, -0x3DD0($v0)
    ctx->pc = 0x14f74cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50C230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C230u, _value); } while (0);
    // 0x14f750: 0x2484c428  addiu       $a0, $a0, -0x3BD8
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951976));
    // 0x14f754: 0x2419002f  addiu       $t9, $zero, 0x2F
    ctx->pc = 0x14f754u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_14f758:
    // 0x14f758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f75c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f75cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f760: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14f764: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14f764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14f768: 0x721fffb  bgez        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14F768u;
    {
        const bool branch_taken_0x14f768 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x14F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F768u;
        // 0x14f76c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f768) {
            ctx->pc = 0x14F758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f758;
        }
    }
    ctx->pc = 0x14F770u;
    // 0x14f770: 0x27180030  addiu       $t8, $t8, 0x30
    ctx->pc = 0x14f770u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
    // 0x14f774: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f778: 0x27020017  addiu       $v0, $t8, 0x17
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 23));
    // 0x14f77c: 0x27030018  addiu       $v1, $t8, 0x18
    ctx->pc = 0x14f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 24));
    // 0x14f780: 0x24a42dc0  addiu       $a0, $a1, 0x2DC0
    ctx->pc = 0x14f780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    // 0x14f784: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14f784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14f788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f78c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f790: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14f798: 0x24c7bd48  addiu       $a3, $a2, -0x42B8
    ctx->pc = 0x14f798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950216));
    // 0x14f79c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f7a0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f7a4: 0x27020019  addiu       $v0, $t8, 0x19
    ctx->pc = 0x14f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 25));
    // 0x14f7a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f7b0: 0xac65bd48  sw          $a1, -0x42B8($v1)
    ctx->pc = 0x14f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950216), GPR_U32(ctx, 5));
    // 0x14f7b4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f7b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f7bc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x14f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x14f7c0: 0x2463bd88  addiu       $v1, $v1, -0x4278
    ctx->pc = 0x14f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950280));
    // 0x14f7c4: 0x24190007  addiu       $t9, $zero, 0x7
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14f7c8:
    // 0x14f7c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f7cc: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f7d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14f7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14f7d8: 0x721fffb  bgez        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14F7D8u;
    {
        const bool branch_taken_0x14f7d8 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x14F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7D8u;
        // 0x14f7dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7d8) {
            ctx->pc = 0x14F7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f7c8;
        }
    }
    ctx->pc = 0x14F7E0u;
    // 0x14f7e0: 0x27030021  addiu       $v1, $t8, 0x21
    ctx->pc = 0x14f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 33));
    // 0x14f7e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14f7e8: 0x27180022  addiu       $t8, $t8, 0x22
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 34));
    // 0x14f7ec: 0x24892dc0  addiu       $t1, $a0, 0x2DC0
    ctx->pc = 0x14f7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x14f7f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f7f4: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x14f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x14f7f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x14f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14f7fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x14f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x14f800: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14f800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f804: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x14f804u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f808: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f80c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f810: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f814: 0xac44bd7c  sw          $a0, -0x4284($v0)
    ctx->pc = 0x14f814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50BD7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD7Cu, _value); } while (0);
    // 0x14f818: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x14F818u;
    {
        const bool branch_taken_0x14f818 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0xac66bd18  sw          $a2, -0x42E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950168), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f818) {
            ctx->pc = 0x14F88Cu;
            goto label_14f88c;
        }
    }
    ctx->pc = 0x14F820u;
    // 0x14f820: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14f824: 0x27040003  addiu       $a0, $t8, 0x3
    ctx->pc = 0x14f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x14f828: 0x27050002  addiu       $a1, $t8, 0x2
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x14f82c: 0x27020001  addiu       $v0, $t8, 0x1
    ctx->pc = 0x14f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x14f830: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f834: 0x246335c0  addiu       $v1, $v1, 0x35C0
    ctx->pc = 0x14f834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13760));
    // 0x14f838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f83c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14f840: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14f844: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x14f844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14f848: 0x894021  addu        $t0, $a0, $t1
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x14f84c: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x14f84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x14f850: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x14f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x14f854: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x14f854u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_14f858:
    // 0x14f858: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f85c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x14f85cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x14f860: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f864: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x14f868: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x14f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14f86c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x14f870: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14f870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14f874: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x14f878: 0xacc4fff8  sw          $a0, -0x8($a2)
    ctx->pc = 0x14f878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 4));
    // 0x14f87c: 0xacc3fffc  sw          $v1, -0x4($a2)
    ctx->pc = 0x14f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 3));
    // 0x14f880: 0x1720fff5  bnez        $t9, . + 4 + (-0xB << 2)
    ctx->pc = 0x14F880u;
    {
        const bool branch_taken_0x14f880 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F880u;
        // 0x14f884: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f880) {
            ctx->pc = 0x14F858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f858;
        }
    }
    ctx->pc = 0x14F888u;
    // 0x14f888: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x14f888u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_14f88c:
    // 0x14f88c: 0x191040  sll         $v0, $t9, 1
    ctx->pc = 0x14f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x14f890: 0x27030001  addiu       $v1, $t8, 0x1
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x14f894: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x14f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x14f898: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14f89c: 0x24a62dc0  addiu       $a2, $a1, 0x2DC0
    ctx->pc = 0x14f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    // 0x14f8a0: 0x62c021  addu        $t8, $v1, $v0
    ctx->pc = 0x14f8a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f8a4: 0x270a0001  addiu       $t2, $t8, 0x1
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x14f8a8: 0x27050003  addiu       $a1, $t8, 0x3
    ctx->pc = 0x14f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x14f8ac: 0x27040002  addiu       $a0, $t8, 0x2
    ctx->pc = 0x14f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x14f8b0: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x14f8b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14f8b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14f8bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14f8c0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x14f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14f8c4: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x14f8c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f8c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14f8cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14f8d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14f8d4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x14f8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f8d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f8dc: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f8e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f8e4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f8e8: 0xa047bd80  sb          $a3, -0x4280($v0)
    ctx->pc = 0x14f8e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x50BD80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50BD80u, _value); } while (0);
    // 0x14f8ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f8f0: 0xac66bd24  sw          $a2, -0x42DC($v1)
    ctx->pc = 0x14f8f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x50BD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD24u, _value); } while (0);
    // 0x14f8f4: 0xac4abd28  sw          $t2, -0x42D8($v0)
    ctx->pc = 0x14f8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x50BD28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD28u, _value); } while (0);
    // 0x14f8f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14f8fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14f900: 0xac68c1fc  sw          $t0, -0x3E04($v1)
    ctx->pc = 0x14f900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x50C1FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C1FCu, _value); } while (0);
    // 0x14f904: 0xac49c200  sw          $t1, -0x3E00($v0)
    ctx->pc = 0x14f904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x50C200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C200u, _value); } while (0);
label_14f908:
    // 0x14f908: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14f908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f90c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14f90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f910: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14f910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f914: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14f914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f918: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14f918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f91c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x14f91cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f920: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14f920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f924: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x14f924u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f928: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x14f928u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F92Cu;
        // 0x14f930: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F934u;
    // 0x14f934: 0x0  nop
    ctx->pc = 0x14f934u;
    // NOP
    ctx->pc = 0x14f938u;
}
