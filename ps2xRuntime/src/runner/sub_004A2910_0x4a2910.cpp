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

// Function: sub_004A2910
// Address: 0x4a2910 - 0x4a30c8
void sub_004A2910_0x4a2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2910_0x4a2910");
#endif

    switch (ctx->pc) {
        case 0x4a29a0u: goto label_4a29a0;
        case 0x4a29c8u: goto label_4a29c8;
        case 0x4a2aa0u: goto label_4a2aa0;
        case 0x4a2d10u: goto label_4a2d10;
        case 0x4a2d88u: goto label_4a2d88;
        case 0x4a2dd8u: goto label_4a2dd8;
        case 0x4a2e2cu: goto label_4a2e2c;
        case 0x4a2e5cu: goto label_4a2e5c;
        case 0x4a2f28u: goto label_4a2f28;
        case 0x4a3034u: goto label_4a3034;
        case 0x4a3058u: goto label_4a3058;
        case 0x4a306cu: goto label_4a306c;
        case 0x4a307cu: goto label_4a307c;
        case 0x4a3098u: goto label_4a3098;
        default: break;
    }

    ctx->pc = 0x4a2910u;

    // 0x4a2910: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4a2910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4a2914: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x4a2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a2918: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4a2918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4a291c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4a291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x4a2920: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4a2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2924: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4a2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x4a2928: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4a2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x4a292c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4a292cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a2930: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4a2930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x4a2934: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4a2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x4a2938: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4a2938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x4a293c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x4a2940: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a2940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4a2944: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4a2944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x4a2948: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4a294c: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x4a294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x4a2950: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x4a2950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x4a2954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2958: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x4A2958u;
    {
        const bool branch_taken_0x4a2958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2958u;
        // 0x4a295c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2958) {
            ctx->pc = 0x4A2B60u;
            goto label_4a2b60;
        }
    }
    ctx->pc = 0x4A2960u;
    // 0x4a2960: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4a2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2964: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4a2964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2968: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x4a296c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4a296cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2970: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x4a2970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a2974: 0xaf8487b4  sw          $a0, -0x784C($gp)
    ctx->pc = 0x4a2974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 4));
    // 0x4a2978: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4a2978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4a297c: 0x90a20021  lbu         $v0, 0x21($a1)
    ctx->pc = 0x4a297cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x4a2980: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4a2980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x4a2984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2984u;
    {
        const bool branch_taken_0x4a2984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2984u;
        // 0x4a2988: 0x24680004  addiu       $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2984) {
            ctx->pc = 0x4A2998u;
            goto label_4a2998;
        }
    }
    ctx->pc = 0x4A298Cu;
    // 0x4a298c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x4a298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x4a2990: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4a2990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4a2994: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4a2994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4a2998:
    // 0x4a2998: 0xc1235fa  jal         func_48D7E8
    ctx->pc = 0x4A2998u;
    SET_GPR_U32(ctx, 31, 0x4A29A0u);
    ctx->pc = 0x4A299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2998u;
    // 0x4a299c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D7E8u, 0x4A2998u, 0x4A29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A29A0u;
label_4a29a0:
    // 0x4a29a0: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x4a29a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4a29a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a29a8: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4a29a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4a29ac: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x4a29acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4a29b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a29b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a29b4: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x4a29b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x4a29b8: 0x8f868990  lw          $a2, -0x7670($gp)
    ctx->pc = 0x4a29b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x4a29bc: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A29BCu;
    {
        const bool branch_taken_0x4a29bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29BCu;
        // 0x4a29c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a29bc) {
            ctx->pc = 0x4A2A20u;
            goto label_4a2a20;
        }
    }
    ctx->pc = 0x4A29C4u;
    // 0x4a29c4: 0x0  nop
    ctx->pc = 0x4a29c4u;
    // NOP
label_4a29c8:
    // 0x4a29c8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a29c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a29cc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a29d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a29d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a29d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a29d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a29d8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a29d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a29dc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a29e0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a29e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a29e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a29e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a29e8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x4a29e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a29ec: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x4a29ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a29f0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x4a29f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x4a29f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a29f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a29f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a29f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a29fc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a29fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a00: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a2a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a2a04: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a2a04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2a08: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a0c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4a2a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4a2a14: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x4a2a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4a2a18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A2A18u;
    {
        const bool branch_taken_0x4a2a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A18u;
        // 0x4a2a1c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a18) {
            ctx->pc = 0x4A29C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a29c8;
        }
    }
    ctx->pc = 0x4A2A20u;
label_4a2a20:
    // 0x4a2a20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4a2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2a24: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x4a2a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x4a2a28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4a2a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x4a2a2c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4A2A2Cu;
    {
        const bool branch_taken_0x4a2a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2a2c) {
            ctx->pc = 0x4A2B08u;
            goto label_4a2b08;
        }
    }
    ctx->pc = 0x4A2A34u;
    // 0x4a2a34: 0x8e48002c  lw          $t0, 0x2C($s2)
    ctx->pc = 0x4a2a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x4a2a38: 0x8e07fff4  lw          $a3, -0xC($s0)
    ctx->pc = 0x4a2a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x4a2a3c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2a40: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a48: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2a4c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2a50: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a54: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a58: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2a5c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2a60: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a64: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a68: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2a6c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2a6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2a70: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a74: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a78: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x4a2a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a2a7c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2a80: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2a84: 0x2508ffb0  addiu       $t0, $t0, -0x50
    ctx->pc = 0x4a2a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967216));
    // 0x4a2a88: 0x2d020040  sltiu       $v0, $t0, 0x40
    ctx->pc = 0x4a2a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x4a2a8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2A8Cu;
    {
        const bool branch_taken_0x4a2a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A8Cu;
        // 0x4a2a90: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a8c) {
            ctx->pc = 0x4A2AF0u;
            goto label_4a2af0;
        }
    }
    ctx->pc = 0x4A2A94u;
    // 0x4a2a94: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4A2A94u;
    {
        const bool branch_taken_0x4a2a94 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2a94) {
            ctx->pc = 0x4A2B08u;
            goto label_4a2b08;
        }
    }
    ctx->pc = 0x4A2A9Cu;
    // 0x4a2a9c: 0x0  nop
    ctx->pc = 0x4a2a9cu;
    // NOP
label_4a2aa0:
    // 0x4a2aa0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2aa4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2aa8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x4a2aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2aac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2ab0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x4a2ab0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2ab4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2ab8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x4a2ab8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2abc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2ac0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2ac4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2ac8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4a2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4a2acc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2ad0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x4a2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x4a2ad4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2ad8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x4a2ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x4a2adc: 0x2508ffc0  addiu       $t0, $t0, -0x40
    ctx->pc = 0x4a2adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
    // 0x4a2ae0: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A2AE0u;
    {
        const bool branch_taken_0x4a2ae0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2AE0u;
        // 0x4a2ae4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ae0) {
            ctx->pc = 0x4A2AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2aa0;
        }
    }
    ctx->pc = 0x4A2AE8u;
    // 0x4a2ae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2AE8u;
    {
        const bool branch_taken_0x4a2ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2ae8) {
            ctx->pc = 0x4A2B08u;
            goto label_4a2b08;
        }
    }
    ctx->pc = 0x4A2AF0u;
label_4a2af0:
    // 0x4a2af0: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x4a2af0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a2af4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a2af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2af8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2af8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2afc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2b00: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4a2b00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4a2b04: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4a2b08:
    // 0x4a2b08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a2b0c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a2b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a2b10: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4a2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2b14: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4a2b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4a2b18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a2b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a2b1c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a2b1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a2b20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2b24: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2b28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a2b2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2b30: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x4a2b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x4a2b34: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a2b38: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a2b38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a2b3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2b40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2b44: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x4a2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4a2b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a2b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2b4c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a2b4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4a2b50: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2b50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2b54: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2b58: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x4A2B58u;
    {
        const bool branch_taken_0x4a2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B58u;
        // 0x4a2b5c: 0xaf868990  sw          $a2, -0x7670($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b58) {
            ctx->pc = 0x4A3064u;
            goto label_4a3064;
        }
    }
    ctx->pc = 0x4A2B60u;
label_4a2b60:
    // 0x4a2b60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4a2b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2b64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4a2b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2b68: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a2b6c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x4a2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x4a2b70: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x4a2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a2b74: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x4a2b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a2b78: 0x8cb70004  lw          $s7, 0x4($a1)
    ctx->pc = 0x4a2b78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a2b7c: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x4a2b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a2b80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2b84: 0xaf8087b4  sw          $zero, -0x784C($gp)
    ctx->pc = 0x4a2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 0));
    // 0x4a2b88: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4a2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4a2b8c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2b90: 0x92450016  lbu         $a1, 0x16($s2)
    ctx->pc = 0x4a2b90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4a2b94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2b98: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4a2b98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4a2b9c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4a2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4a2ba0: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x4a2ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x4a2ba4: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x4a2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x4a2ba8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4a2ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4a2bac: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x4a2bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4a2bb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2BB0u;
    {
        const bool branch_taken_0x4a2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2BB0u;
        // 0x4a2bb4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2bb0) {
            ctx->pc = 0x4A2BD4u;
            goto label_4a2bd4;
        }
    }
    ctx->pc = 0x4A2BB8u;
    // 0x4a2bb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a2bbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a2bc0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x4a2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x4a2bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a2bc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2bcc: 0x800008  jr          $a0
    ctx->pc = 0x4A2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A2BD4u: goto label_4a2bd4;
            case 0x4A2C58u: goto label_4a2c58;
            case 0x4A2CDCu: goto label_4a2cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A2BD4u;
label_4a2bd4:
    // 0x4a2bd4: 0x9e420024  lwu         $v0, 0x24($s2)
    ctx->pc = 0x4a2bd4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x4a2bd8: 0x9e430020  lwu         $v1, 0x20($s2)
    ctx->pc = 0x4a2bd8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x4a2bdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2be0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a2be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a2be4: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x4a2be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x4a2be8: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x4a2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x4a2bec: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x4a2becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x4a2bf0: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x4a2bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x4a2bf4: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x4a2bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x4a2bf8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a2bfc: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x4a2bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x4a2c00: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x4a2c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x4a2c04: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x4a2c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x4a2c08: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x4a2c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x4a2c0c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x4a2c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x4a2c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2c14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4a2c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4a2c18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a2c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a2c1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4a2c1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4a2c20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a2c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a2c24: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4a2c24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4a2c28: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4a2c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4a2c2c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4a2c2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4a2c30: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4a2c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4a2c34: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4a2c34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4a2c38: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4a2c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4a2c3c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x4a2c3cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x4a2c40: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4a2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4a2c44: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4a2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4a2c48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x4a2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x4a2c4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4a2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4a2c50: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x4a2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x4a2c54: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x4a2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_4a2c58:
    // 0x4a2c58: 0x9e42001c  lwu         $v0, 0x1C($s2)
    ctx->pc = 0x4a2c58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a2c5c: 0x9e430018  lwu         $v1, 0x18($s2)
    ctx->pc = 0x4a2c5cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4a2c60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a2c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a2c68: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x4a2c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x4a2c6c: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x4a2c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x4a2c70: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x4a2c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x4a2c74: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x4a2c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x4a2c78: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x4a2c78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x4a2c7c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a2c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a2c80: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x4a2c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x4a2c84: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x4a2c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x4a2c88: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x4a2c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x4a2c8c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x4a2c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x4a2c90: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x4a2c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x4a2c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2c98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4a2c98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4a2c9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a2c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a2ca0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4a2ca0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4a2ca4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a2ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a2ca8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4a2ca8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4a2cac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4a2cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4a2cb0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4a2cb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4a2cb4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4a2cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4a2cb8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4a2cb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4a2cbc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4a2cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4a2cc0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x4a2cc0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x4a2cc4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a2cc8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a2ccc: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x4a2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x4a2cd0: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x4a2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x4a2cd4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x4a2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x4a2cd8: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x4a2cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_4a2cdc:
    // 0x4a2cdc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2ce0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a2ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2ce4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4a2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x4a2ce8: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x4a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x4a2cec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4a2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4a2cf0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2cf4: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4A2CF4u;
    {
        const bool branch_taken_0x4a2cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CF4u;
        // 0x4a2cf8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cf4) {
            ctx->pc = 0x4A2F98u;
            goto label_4a2f98;
        }
    }
    ctx->pc = 0x4A2CFCu;
    // 0x4a2cfc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x4a2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4a2d00: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x4a2d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d04: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4a2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x4a2d08: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4a2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4a2d0c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4a2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4a2d10:
    // 0x4a2d10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4a2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2d14: 0x32e5000f  andi        $a1, $s7, 0xF
    ctx->pc = 0x4a2d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x4a2d18: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x4a2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a2d1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a2d20: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4a2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4a2d24: 0x828807  srav        $s1, $v0, $a0
    ctx->pc = 0x4a2d24u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4a2d28: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x4a2d28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2d2c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x4a2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a2d30: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x4a2d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x4a2d34: 0x43a007  srav        $s4, $v1, $v0
    ctx->pc = 0x4a2d34u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4a2d38: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4a2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a2d3c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2d40: 0x64f007  srav        $fp, $a0, $v1
    ctx->pc = 0x4a2d40u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4a2d44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x4a2d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a2d48: 0x14a00079  bnez        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x4A2D48u;
    {
        const bool branch_taken_0x4a2d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D48u;
        // 0x4a2d4c: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d48) {
            ctx->pc = 0x4A2F30u;
            goto label_4a2f30;
        }
    }
    ctx->pc = 0x4A2D50u;
    // 0x4a2d50: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4a2d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2d54: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x4A2D54u;
    {
        const bool branch_taken_0x4a2d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D54u;
        // 0x4a2d58: 0x8fa8005c  lw          $t0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d54) {
            ctx->pc = 0x4A2E78u;
            goto label_4a2e78;
        }
    }
    ctx->pc = 0x4A2D5Cu;
    // 0x4a2d5c: 0x2643003c  addiu       $v1, $s2, 0x3C
    ctx->pc = 0x4a2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x4a2d60: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x4a2d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4a2d64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2d68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2D68u;
    {
        const bool branch_taken_0x4a2d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D68u;
        // 0x4a2d6c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d68) {
            ctx->pc = 0x4A2D8Cu;
            goto label_4a2d8c;
        }
    }
    ctx->pc = 0x4A2D70u;
    // 0x4a2d70: 0x92480034  lbu         $t0, 0x34($s2)
    ctx->pc = 0x4a2d70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a2d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d78: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x4a2d78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a2d7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a2d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d80: 0xc1287f6  jal         func_4A1FD8
    ctx->pc = 0x4A2D80u;
    SET_GPR_U32(ctx, 31, 0x4A2D88u);
    ctx->pc = 0x4A2D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2D80u;
    // 0x4a2d84: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1FD8u, 0x4A2D80u, 0x4A2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2D88u;
label_4a2d88:
    // 0x4a2d88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a2d8c:
    // 0x4a2d8c: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x4a2d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x4a2d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a2d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a2d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a2d98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A2D98u;
    {
        const bool branch_taken_0x4a2d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D98u;
        // 0x4a2d9c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d98) {
            ctx->pc = 0x4A2DE0u;
            goto label_4a2de0;
        }
    }
    ctx->pc = 0x4A2DA0u;
    // 0x4a2da0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2da4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2da8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2dac: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A2DACu;
    {
        const bool branch_taken_0x4a2dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DACu;
        // 0x4a2db0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2dac) {
            ctx->pc = 0x4A2DE4u;
            goto label_4a2de4;
        }
    }
    ctx->pc = 0x4A2DB4u;
    // 0x4a2db4: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x4a2db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x4a2db8: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x4a2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x4a2dbc: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4a2dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2dc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a2dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2dc4: 0x924a0034  lbu         $t2, 0x34($s2)
    ctx->pc = 0x4a2dc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a2dc8: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x4a2dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x4a2dcc: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x4a2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4a2dd0: 0xc12890e  jal         func_4A2438
    ctx->pc = 0x4A2DD0u;
    SET_GPR_U32(ctx, 31, 0x4A2DD8u);
    ctx->pc = 0x4A2DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2DD0u;
    // 0x4a2dd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2438u, 0x4A2DD0u, 0x4A2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2DD8u;
label_4a2dd8:
    // 0x4a2dd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A2DD8u;
    {
        const bool branch_taken_0x4a2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DD8u;
        // 0x4a2ddc: 0x92420034  lbu         $v0, 0x34($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2dd8) {
            ctx->pc = 0x4A2E60u;
            goto label_4a2e60;
        }
    }
    ctx->pc = 0x4A2DE0u;
label_4a2de0:
    // 0x4a2de0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4a2de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4a2de4:
    // 0x4a2de4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A2DE4u;
    {
        const bool branch_taken_0x4a2de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DE4u;
        // 0x4a2de8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2de4) {
            ctx->pc = 0x4A2E34u;
            goto label_4a2e34;
        }
    }
    ctx->pc = 0x4A2DECu;
    // 0x4a2dec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2df0: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2df4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2df8: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4A2DF8u;
    {
        const bool branch_taken_0x4a2df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DF8u;
        // 0x4a2dfc: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2df8) {
            ctx->pc = 0x4A2E38u;
            goto label_4a2e38;
        }
    }
    ctx->pc = 0x4A2E00u;
    // 0x4a2e00: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x4a2e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4a2e04: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x4a2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x4a2e08: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x4a2e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x4a2e0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a2e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e10: 0x2c81021  addu        $v0, $s6, $t0
    ctx->pc = 0x4a2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x4a2e14: 0x924a0034  lbu         $t2, 0x34($s2)
    ctx->pc = 0x4a2e14u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a2e18: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4a2e18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2e1c: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x4a2e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x4a2e20: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x4a2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4a2e24: 0xc12890e  jal         func_4A2438
    ctx->pc = 0x4A2E24u;
    SET_GPR_U32(ctx, 31, 0x4A2E2Cu);
    ctx->pc = 0x4A2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2E24u;
    // 0x4a2e28: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2438u, 0x4A2E24u, 0x4A2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2E2Cu;
label_4a2e2c:
    // 0x4a2e2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A2E2Cu;
    {
        const bool branch_taken_0x4a2e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E2Cu;
        // 0x4a2e30: 0x92420034  lbu         $v0, 0x34($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e2c) {
            ctx->pc = 0x4A2E60u;
            goto label_4a2e60;
        }
    }
    ctx->pc = 0x4A2E34u;
label_4a2e34:
    // 0x4a2e34: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x4a2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4a2e38:
    // 0x4a2e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a2e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e3c: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x4a2e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x4a2e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a2e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e44: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x4a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x4a2e48: 0x924a0034  lbu         $t2, 0x34($s2)
    ctx->pc = 0x4a2e48u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a2e4c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4a2e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2e50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a2e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e54: 0xc12890e  jal         func_4A2438
    ctx->pc = 0x4A2E54u;
    SET_GPR_U32(ctx, 31, 0x4A2E5Cu);
    ctx->pc = 0x4A2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2E54u;
    // 0x4a2e58: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2438u, 0x4A2E54u, 0x4A2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2E5Cu;
label_4a2e5c:
    // 0x4a2e5c: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x4a2e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_4a2e60:
    // 0x4a2e60: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4A2E60u;
    {
        const bool branch_taken_0x4a2e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E60u;
        // 0x4a2e64: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e60) {
            ctx->pc = 0x4A2F50u;
            goto label_4a2f50;
        }
    }
    ctx->pc = 0x4A2E68u;
    // 0x4a2e68: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x4a2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4a2e6c: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x4a2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4a2e70: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x4A2E70u;
    {
        const bool branch_taken_0x4a2e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E70u;
        // 0x4a2e74: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e70) {
            ctx->pc = 0x4A2F4Cu;
            goto label_4a2f4c;
        }
    }
    ctx->pc = 0x4A2E78u;
label_4a2e78:
    // 0x4a2e78: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x4a2e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x4a2e7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a2e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a2e84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A2E84u;
    {
        const bool branch_taken_0x4a2e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E84u;
        // 0x4a2e88: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e84) {
            ctx->pc = 0x4A2EC4u;
            goto label_4a2ec4;
        }
    }
    ctx->pc = 0x4A2E8Cu;
    // 0x4a2e8c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2e90: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2e94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2e98: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A2E98u;
    {
        const bool branch_taken_0x4a2e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E98u;
        // 0x4a2e9c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e98) {
            ctx->pc = 0x4A2EC8u;
            goto label_4a2ec8;
        }
    }
    ctx->pc = 0x4A2EA0u;
    // 0x4a2ea0: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x4a2ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x4a2ea4: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x4a2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x4a2ea8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4a2ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2eac: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x4a2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4a2eb0: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x4a2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x4a2eb4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a2eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2eb8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x4a2eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4a2ebc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2EBCu;
    {
        const bool branch_taken_0x4a2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EBCu;
        // 0x4a2ec0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ebc) {
            ctx->pc = 0x4A2F20u;
            goto label_4a2f20;
        }
    }
    ctx->pc = 0x4A2EC4u;
label_4a2ec4:
    // 0x4a2ec4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4a2ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4a2ec8:
    // 0x4a2ec8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A2EC8u;
    {
        const bool branch_taken_0x4a2ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EC8u;
        // 0x4a2ecc: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ec8) {
            ctx->pc = 0x4A2F04u;
            goto label_4a2f04;
        }
    }
    ctx->pc = 0x4A2ED0u;
    // 0x4a2ed0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2ed4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2ed8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4a2edc: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A2EDCu;
    {
        const bool branch_taken_0x4a2edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x4A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EDCu;
        // 0x4a2ee0: 0x8ea80020  lw          $t0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2edc) {
            ctx->pc = 0x4A2F08u;
            goto label_4a2f08;
        }
    }
    ctx->pc = 0x4A2EE4u;
    // 0x4a2ee4: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x4a2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x4a2ee8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4a2ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2eec: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x4a2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4a2ef0: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x4a2ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x4a2ef4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a2ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2ef8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x4a2ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4a2efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2EFCu;
    {
        const bool branch_taken_0x4a2efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EFCu;
        // 0x4a2f00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2efc) {
            ctx->pc = 0x4A2F20u;
            goto label_4a2f20;
        }
    }
    ctx->pc = 0x4A2F04u;
label_4a2f04:
    // 0x4a2f04: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x4a2f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4a2f08:
    // 0x4a2f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a2f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f0c: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x4a2f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a2f10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4a2f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f14: 0x8faa004c  lw          $t2, 0x4C($sp)
    ctx->pc = 0x4a2f14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4a2f18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f1c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a2f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a2f20:
    // 0x4a2f20: 0xc12899c  jal         func_4A2670
    ctx->pc = 0x4A2F20u;
    SET_GPR_U32(ctx, 31, 0x4A2F28u);
    ctx->pc = 0x4A2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F20u;
    // 0x4a2f24: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2670u, 0x4A2F20u, 0x4A2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F28u;
label_4a2f28:
    // 0x4a2f28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A2F28u;
    {
        const bool branch_taken_0x4a2f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F28u;
        // 0x4a2f2c: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f28) {
            ctx->pc = 0x4A2F50u;
            goto label_4a2f50;
        }
    }
    ctx->pc = 0x4A2F30u;
label_4a2f30:
    // 0x4a2f30: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x4a2f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x4a2f34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a2f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a2f38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2F38u;
    {
        const bool branch_taken_0x4a2f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F38u;
        // 0x4a2f3c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f38) {
            ctx->pc = 0x4A2F4Cu;
            goto label_4a2f4c;
        }
    }
    ctx->pc = 0x4A2F40u;
    // 0x4a2f40: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a2f44: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4a2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4a2f48: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a2f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4a2f4c:
    // 0x4a2f4c: 0x3d41018  mult        $v0, $fp, $s4
    ctx->pc = 0x4a2f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a2f50:
    // 0x4a2f50: 0x57b821  addu        $s7, $v0, $s7
    ctx->pc = 0x4a2f50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x4a2f54: 0x32e2000f  andi        $v0, $s7, 0xF
    ctx->pc = 0x4a2f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x4a2f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2F58u;
    {
        const bool branch_taken_0x4a2f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F58u;
        // 0x4a2f5c: 0x26e3000f  addiu       $v1, $s7, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f58) {
            ctx->pc = 0x4A2F6Cu;
            goto label_4a2f6c;
        }
    }
    ctx->pc = 0x4A2F60u;
    // 0x4a2f60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2f64: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4a2f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4a2f68: 0x62b824  and         $s7, $v1, $v0
    ctx->pc = 0x4a2f68u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a2f6c:
    // 0x4a2f6c: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x4a2f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4a2f70: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x4a2f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4a2f74: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4a2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a2f78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x4a2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4a2f7c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4a2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4a2f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a2f84: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4a2f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4a2f88: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x4a2f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x4a2f8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4a2f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a2f90: 0x1040ff5f  beqz        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x4A2F90u;
    {
        const bool branch_taken_0x4a2f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F90u;
        // 0x4a2f94: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f90) {
            ctx->pc = 0x4A2D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2d10;
        }
    }
    ctx->pc = 0x4A2F98u;
label_4a2f98:
    // 0x4a2f98: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x4a2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x4a2f9c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4A2F9Cu;
    {
        const bool branch_taken_0x4a2f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F9Cu;
        // 0x4a2fa0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f9c) {
            ctx->pc = 0x4A3064u;
            goto label_4a3064;
        }
    }
    ctx->pc = 0x4A2FA4u;
    // 0x4a2fa4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a2fa8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4a2fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4a2fac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A2FACu;
    {
        const bool branch_taken_0x4a2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FACu;
        // 0x4a2fb0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2fac) {
            ctx->pc = 0x4A3064u;
            goto label_4a3064;
        }
    }
    ctx->pc = 0x4A2FB4u;
    // 0x4a2fb4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4a2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4a2fb8: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x4a2fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4a2fbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a2fc0: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x4a2fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a2fc4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4a2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4a2fc8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x4a2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a2fcc: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x4a2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x4a2fd0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x4a2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a2fd4: 0x81982  srl         $v1, $t0, 6
    ctx->pc = 0x4a2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x4a2fd8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x4a2fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x4a2fdc: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x4a2fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a2fe0: 0x634c2  srl         $a2, $a2, 19
    ctx->pc = 0x4a2fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 19));
    // 0x4a2fe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a2fe8: 0x30d0000f  andi        $s0, $a2, 0xF
    ctx->pc = 0x4a2fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4a2fec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4a2fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a2ff4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x4a2ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2ff8: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2FF8u;
    {
        const bool branch_taken_0x4a2ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FF8u;
        // 0x4a2ffc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ff8) {
            ctx->pc = 0x4A3010u;
            goto label_4a3010;
        }
    }
    ctx->pc = 0x4A3000u;
    // 0x4a3000: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x4a3000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4a3004: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3004u;
    {
        const bool branch_taken_0x4a3004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3004u;
        // 0x4a3008: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3004) {
            ctx->pc = 0x4A3010u;
            goto label_4a3010;
        }
    }
    ctx->pc = 0x4A300Cu;
    // 0x4a300c: 0x50380a  movz        $a3, $v0, $s0
    ctx->pc = 0x4a300cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_4a3010:
    // 0x4a3010: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4a3010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x4a3014: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3014u;
    {
        const bool branch_taken_0x4a3014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3014) {
            ctx->pc = 0x4A3018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3014u;
            // 0x4a3018: 0x8e490038  lw          $t1, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A303Cu;
            goto label_4a303c;
        }
    }
    ctx->pc = 0x4A301Cu;
    // 0x4a301c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4a301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a3020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3024: 0x92480034  lbu         $t0, 0x34($s2)
    ctx->pc = 0x4a3024u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a3028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a3028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a302c: 0xc1287f6  jal         func_4A1FD8
    ctx->pc = 0x4A302Cu;
    SET_GPR_U32(ctx, 31, 0x4A3034u);
    ctx->pc = 0x4A3030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A302Cu;
    // 0x4a3030: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1FD8u, 0x4A302Cu, 0x4A3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3034u;
label_4a3034:
    // 0x4a3034: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x4a3034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x4a3038: 0x8e490038  lw          $t1, 0x38($s2)
    ctx->pc = 0x4a3038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_4a303c:
    // 0x4a303c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a303cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3040: 0x924a0034  lbu         $t2, 0x34($s2)
    ctx->pc = 0x4a3040u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a3044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a3044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3048: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a3048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a304c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a304cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3050: 0xc12890e  jal         func_4A2438
    ctx->pc = 0x4A3050u;
    SET_GPR_U32(ctx, 31, 0x4A3058u);
    ctx->pc = 0x4A3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3050u;
    // 0x4a3054: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2438u, 0x4A3050u, 0x4A3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3058u;
label_4a3058:
    // 0x4a3058: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x4a3058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4a305c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A305Cu;
    {
        const bool branch_taken_0x4a305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a305c) {
            ctx->pc = 0x4A3060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A305Cu;
            // 0x4a3060: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3064u;
            goto label_4a3064;
        }
    }
    ctx->pc = 0x4A3064u;
label_4a3064:
    // 0x4a3064: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4A3064u;
    SET_GPR_U32(ctx, 31, 0x4A306Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4A3064u, 0x4A306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A306Cu;
label_4a306c:
    // 0x4a306c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a3070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a3074: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4A3074u;
    SET_GPR_U32(ctx, 31, 0x4A307Cu);
    ctx->pc = 0x4A3078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3074u;
    // 0x4a3078: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4A3074u, 0x4A307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A307Cu;
label_4a307c:
    // 0x4a307c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4a307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a3080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a3080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a3084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a3088: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3088u;
    {
        const bool branch_taken_0x4a3088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3088u;
        // 0x4a308c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3088) {
            ctx->pc = 0x4A3098u;
            goto label_4a3098;
        }
    }
    ctx->pc = 0x4A3090u;
    // 0x4a3090: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x4A3090u;
    SET_GPR_U32(ctx, 31, 0x4A3098u);
    ctx->pc = 0x4A3094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3090u;
    // 0x4a3094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x4A3090u, 0x4A3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3098u;
label_4a3098:
    // 0x4a3098: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4a3098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4a309c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4a309cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4a30a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4a30a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a30a4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4a30a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a30a8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4a30a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a30ac: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4a30acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a30b0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a30b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a30b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a30b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a30b8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4a30b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a30bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a30bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a30c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A30C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A30C0u;
        // 0x4a30c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A30C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A30C8u;
}
