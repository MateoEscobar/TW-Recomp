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

// Function: sub_00430FF8
// Address: 0x430ff8 - 0x4311b0
void sub_00430FF8_0x430ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430FF8_0x430ff8");
#endif

    switch (ctx->pc) {
        case 0x431080u: goto label_431080;
        case 0x431100u: goto label_431100;
        case 0x431130u: goto label_431130;
        case 0x431178u: goto label_431178;
        default: break;
    }

    ctx->pc = 0x430ff8u;

    // 0x430ff8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x430ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430ffc: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x430ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x431000: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x431000u;
    {
        const bool branch_taken_0x431000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431000) {
            ctx->pc = 0x431004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431000u;
            // 0x431004: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431124u;
            goto label_431124;
        }
    }
    ctx->pc = 0x431008u;
    // 0x431008: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x431008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x43100c: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x43100Cu;
    {
        const bool branch_taken_0x43100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43100c) {
            ctx->pc = 0x431010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43100Cu;
            // 0x431010: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4310ACu;
            goto label_4310ac;
        }
    }
    ctx->pc = 0x431014u;
    // 0x431014: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x431014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x431018: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x431018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x43101c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x43101cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x431020: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x431020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x431024: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x431024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x431028: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x431028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x43102c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x43102cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x431030: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x431030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x431034: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x431034u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x431038: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x431038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x43103c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x43103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x431040: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x431040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x431044: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x431044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x431048: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x431048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x43104c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x43104cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x431050: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x431050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x431054: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x431054u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x431058: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x431058u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x43105c: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x43105cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x431060: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x431060u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x431064: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x431064u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x431068: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x431068u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x43106c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x431070: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x431070u;
    {
        const bool branch_taken_0x431070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x431074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431070u;
        // 0x431074: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431070) {
            ctx->pc = 0x43111Cu;
            goto label_43111c;
        }
    }
    ctx->pc = 0x431078u;
    // 0x431078: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x431078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43107c: 0x0  nop
    ctx->pc = 0x43107cu;
    // NOP
label_431080:
    // 0x431080: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x431080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x431084: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x431084u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x431088: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x431088u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x43108c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x43108cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x431090: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x431090u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x431094: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x431094u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x431098: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x431098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43109c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x43109Cu;
    {
        const bool branch_taken_0x43109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4310A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43109Cu;
        // 0x4310a0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43109c) {
            ctx->pc = 0x431080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431080;
        }
    }
    ctx->pc = 0x4310A4u;
    // 0x4310a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4310A4u;
    {
        const bool branch_taken_0x4310a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4310A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310A4u;
        // 0x4310a8: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4310a4) {
            ctx->pc = 0x43111Cu;
            goto label_43111c;
        }
    }
    ctx->pc = 0x4310ACu;
label_4310ac:
    // 0x4310ac: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x4310acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4310b0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4310b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4310b4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x4310b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x4310b8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4310b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4310bc: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x4310bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x4310c0: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x4310c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x4310c4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x4310c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x4310c8: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x4310c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4310cc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4310ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4310d0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4310d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4310d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4310d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4310d8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4310d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4310dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4310dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4310e0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4310e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4310e4: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x4310e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x4310e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4310e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4310ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4310ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4310f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4310f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4310f4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4310F4u;
    {
        const bool branch_taken_0x4310f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4310F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310F4u;
        // 0x4310f8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4310f4) {
            ctx->pc = 0x43111Cu;
            goto label_43111c;
        }
    }
    ctx->pc = 0x4310FCu;
    // 0x4310fc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4310fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_431100:
    // 0x431100: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x431100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x431104: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x431104u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x431108: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x431108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x43110c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x43110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x431110: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x431110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x431114: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x431114u;
    {
        const bool branch_taken_0x431114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431114) {
            ctx->pc = 0x431118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431114u;
            // 0x431118: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431100;
        }
    }
    ctx->pc = 0x43111Cu;
label_43111c:
    // 0x43111c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x43111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431120: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x431120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_431124:
    // 0x431124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x431124u;
    {
        const bool branch_taken_0x431124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431124u;
        // 0x431128: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431124) {
            ctx->pc = 0x431148u;
            goto label_431148;
        }
    }
    ctx->pc = 0x43112Cu;
    // 0x43112c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_431130:
    // 0x431130: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x431130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x431134: 0x0  nop
    ctx->pc = 0x431134u;
    // NOP
    // 0x431138: 0x0  nop
    ctx->pc = 0x431138u;
    // NOP
    // 0x43113c: 0x0  nop
    ctx->pc = 0x43113cu;
    // NOP
    // 0x431140: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x431140u;
    {
        const bool branch_taken_0x431140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431140) {
            ctx->pc = 0x431144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431140u;
            // 0x431144: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431130;
        }
    }
    ctx->pc = 0x431148u;
label_431148:
    // 0x431148: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x431148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43114c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x431150: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x431150u;
    {
        const bool branch_taken_0x431150 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x431150) {
            ctx->pc = 0x4311A4u;
            goto label_4311a4;
        }
    }
    ctx->pc = 0x431158u;
    // 0x431158: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x431158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43115c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x43115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x431160: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x431160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x431164: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x431164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x431168: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x431168u;
    {
        const bool branch_taken_0x431168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431168u;
        // 0x43116c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431168) {
            ctx->pc = 0x4311A4u;
            goto label_4311a4;
        }
    }
    ctx->pc = 0x431170u;
    // 0x431170: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x431170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x431174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x431174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_431178:
    // 0x431178: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x431178u;
    {
        const bool branch_taken_0x431178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x431178) {
            ctx->pc = 0x43117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431178u;
            // 0x43117c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431180u;
            goto label_431180;
        }
    }
    ctx->pc = 0x431180u;
label_431180:
    // 0x431180: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x431180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x431184: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x431184u;
    {
        const bool branch_taken_0x431184 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x431184) {
            ctx->pc = 0x4311A4u;
            goto label_4311a4;
        }
    }
    ctx->pc = 0x43118Cu;
    // 0x43118c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x43118cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431190: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x431190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x431194: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x431194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x431198: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x431198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x43119c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x43119Cu;
    {
        const bool branch_taken_0x43119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43119Cu;
        // 0x4311a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43119c) {
            ctx->pc = 0x431178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431178;
        }
    }
    ctx->pc = 0x4311A4u;
label_4311a4:
    // 0x4311a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4311A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4311A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311A4u;
        // 0x4311a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4311A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4311ACu;
    // 0x4311ac: 0x0  nop
    ctx->pc = 0x4311acu;
    // NOP
    ctx->pc = 0x4311b0u;
}
