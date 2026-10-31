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

// Function: sub_00430AAC
// Address: 0x430aac - 0x430c4c
void sub_00430AAC_0x430aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430AAC_0x430aac");
#endif

    switch (ctx->pc) {
        case 0x430b10u: goto label_430b10;
        case 0x430be4u: goto label_430be4;
        case 0x430c20u: goto label_430c20;
        default: break;
    }

    ctx->pc = 0x430aacu;

    // 0x430aac: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x430aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x430ab0: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x430AB0u;
    {
        const bool branch_taken_0x430ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AB0u;
        // 0x430ab4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ab0) {
            ctx->pc = 0x430C2Cu;
            goto label_430c2c;
        }
    }
    ctx->pc = 0x430AB8u;
    // 0x430ab8: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x430ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x430abc: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x430abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430ac0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430ac4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430ac8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430acc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430accu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430ad0: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x430ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x430ad4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x430ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x430ad8: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x430ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x430adc: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x430adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x430ae0: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x430ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x430ae4: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x430ae4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430ae8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430ae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430aec: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430aecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430af0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430af4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430af8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430af8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430afc: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430afcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430b00: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x430b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x430b04: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x430b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x430b08: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x430B08u;
    {
        const bool branch_taken_0x430b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B08u;
        // 0x430b0c: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b08) {
            ctx->pc = 0x430BA4u;
            goto label_430ba4;
        }
    }
    ctx->pc = 0x430B10u;
label_430b10:
    // 0x430b10: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x430b10u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430b14: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x430b14u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x430b18: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x430b18u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x430b1c: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x430b1cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x430b20: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x430b20u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x430b24: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430b24u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430b28: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x430b28u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x430b2c: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x430b2cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x430b30: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x430b30u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x430b34: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x430b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x430b38: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x430B38u;
    {
        const bool branch_taken_0x430b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x430b38) {
            ctx->pc = 0x430B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430B38u;
            // 0x430b3c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430B40u;
    // 0x430b40: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x430b40u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x430b44: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x430b44u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x430b48: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x430b48u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x430b4c: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x430b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430b50: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430b54: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430b58: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430b58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430b5c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430b60: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x430b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x430b64: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x430b64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x430b68: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x430b68u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x430b6c: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x430b6cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x430b70: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x430b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430b74: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430b78: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430b7c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430b80: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430b84: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x430b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x430b88: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x430b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x430b8c: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x430b8cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x430b90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x430b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x430b94: 0x5060ffde  beql        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x430B94u;
    {
        const bool branch_taken_0x430b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x430b94) {
            ctx->pc = 0x430B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430B94u;
            // 0x430b98: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430b10;
        }
    }
    ctx->pc = 0x430B9Cu;
    // 0x430b9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x430B9Cu;
    {
        const bool branch_taken_0x430b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B9Cu;
        // 0x430ba0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b9c) {
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430BA4u;
label_430ba4:
    // 0x430ba4: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x430ba4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430ba8: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x430ba8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x430bac: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x430bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x430bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430bb4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x430bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x430bb8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x430BB8u;
    {
        const bool branch_taken_0x430bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430bb8) {
            ctx->pc = 0x430BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430BB8u;
            // 0x430bbc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430BC0u;
    // 0x430bc0: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x430bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x430bc4: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x430bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x430bc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x430bc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x430bcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x430bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x430bd0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x430bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x430bd4: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x430BD4u;
    {
        const bool branch_taken_0x430bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x430bd4) {
            ctx->pc = 0x430BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430BD4u;
            // 0x430bd8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430BDCu;
    // 0x430bdc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x430bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430be0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x430be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_430be4:
    // 0x430be4: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x430be4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430be8: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x430be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x430bec: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x430becu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x430bf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430bf4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x430bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x430bf8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x430BF8u;
    {
        const bool branch_taken_0x430bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430BF8u;
        // 0x430bfc: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430bf8) {
            ctx->pc = 0x430C2Cu;
            goto label_430c2c;
        }
    }
    ctx->pc = 0x430C00u;
    // 0x430c00: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x430c00u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x430c04: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x430c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x430c08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430c0c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x430c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x430c10: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x430C10u;
    {
        const bool branch_taken_0x430c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430c10) {
            ctx->pc = 0x430C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430C10u;
            // 0x430c14: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430be4;
        }
    }
    ctx->pc = 0x430C18u;
    // 0x430c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x430C18u;
    {
        const bool branch_taken_0x430c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C18u;
        // 0x430c1c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c18) {
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430C20u;
label_430c20:
    // 0x430c20: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x430C20u;
    {
        const bool branch_taken_0x430c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x430c20) {
            ctx->pc = 0x430C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430C20u;
            // 0x430c24: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430C3Cu;
            goto label_430c3c;
        }
    }
    ctx->pc = 0x430C28u;
    // 0x430c28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x430c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_430c2c:
    // 0x430c2c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x430c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430c30:
    // 0x430c30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430C30u;
    {
        const bool branch_taken_0x430c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430c30) {
            ctx->pc = 0x430C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430c20;
        }
    }
    ctx->pc = 0x430C38u;
    // 0x430c38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x430c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430c3c:
    // 0x430c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x430c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430c40: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x430c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x430c44: 0x3e00008  jr          $ra
    ctx->pc = 0x430C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C44u;
        // 0x430c48: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430C4Cu;
}
