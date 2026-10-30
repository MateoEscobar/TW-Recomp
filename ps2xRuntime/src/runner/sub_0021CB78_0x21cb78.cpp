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

// Function: sub_0021CB78
// Address: 0x21cb78 - 0x21cce8
void sub_0021CB78_0x21cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CB78_0x21cb78");
#endif

    switch (ctx->pc) {
        case 0x21cbe8u: goto label_21cbe8;
        case 0x21cc58u: goto label_21cc58;
        case 0x21cc84u: goto label_21cc84;
        case 0x21ccb0u: goto label_21ccb0;
        default: break;
    }

    ctx->pc = 0x21cb78u;

    // 0x21cb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21cb7c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21cb80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21cb84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21cb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cb8c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x21cb90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21cb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb94: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x21cb94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x21cb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cb9c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x21cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x21cba0: 0x2463f088  addiu       $v1, $v1, -0xF78
    ctx->pc = 0x21cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963336));
    // 0x21cba4: 0x24a54b98  addiu       $a1, $a1, 0x4B98
    ctx->pc = 0x21cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19352));
    // 0x21cba8: 0x2442f020  addiu       $v0, $v0, -0xFE0
    ctx->pc = 0x21cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
    // 0x21cbac: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x21cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x21cbb0: 0xae3000c0  sw          $s0, 0xC0($s1)
    ctx->pc = 0x21cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 16));
    // 0x21cbb4: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x21cbb8: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x21cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
    // 0x21cbbc: 0xae3000c8  sw          $s0, 0xC8($s1)
    ctx->pc = 0x21cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
    // 0x21cbc0: 0xae300168  sw          $s0, 0x168($s1)
    ctx->pc = 0x21cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 16));
    // 0x21cbc4: 0xae300178  sw          $s0, 0x178($s1)
    ctx->pc = 0x21cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 16));
    // 0x21cbc8: 0xae30017c  sw          $s0, 0x17C($s1)
    ctx->pc = 0x21cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 16));
    // 0x21cbcc: 0xae300180  sw          $s0, 0x180($s1)
    ctx->pc = 0x21cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 16));
    // 0x21cbd0: 0xae30018c  sw          $s0, 0x18C($s1)
    ctx->pc = 0x21cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 16));
    // 0x21cbd4: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x21cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x21cbd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21cbdc: 0xae2500e8  sw          $a1, 0xE8($s1)
    ctx->pc = 0x21cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 5));
    // 0x21cbe0: 0xc0a677c  jal         func_299DF0
    ctx->pc = 0x21CBE0u;
    SET_GPR_U32(ctx, 31, 0x21CBE8u);
    ctx->pc = 0x21CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBE0u;
    // 0x21cbe4: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299DF0u, 0x21CBE0u, 0x21CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBE8u;
label_21cbe8:
    // 0x21cbe8: 0xae300338  sw          $s0, 0x338($s1)
    ctx->pc = 0x21cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 16));
    // 0x21cbec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x21cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x21cbf0: 0xae30033c  sw          $s0, 0x33C($s1)
    ctx->pc = 0x21cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 16));
    // 0x21cbf4: 0x26230338  addiu       $v1, $s1, 0x338
    ctx->pc = 0x21cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
    // 0x21cbf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21cbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cbfc: 0x26250348  addiu       $a1, $s1, 0x348
    ctx->pc = 0x21cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x21cc00: 0x8c86bd30  lw          $a2, -0x42D0($a0)
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x21cc04: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x21cc04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cc08: 0x262803c8  addiu       $t0, $s1, 0x3C8
    ctx->pc = 0x21cc08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x21cc0c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x21cc0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21cc10: 0xae260338  sw          $a2, 0x338($s1)
    ctx->pc = 0x21cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 6));
    // 0x21cc14: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x21cc18: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x21cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x21cc1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x21cc20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x21cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x21cc24: 0xae300348  sw          $s0, 0x348($s1)
    ctx->pc = 0x21cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 16));
    // 0x21cc28: 0xae30034c  sw          $s0, 0x34C($s1)
    ctx->pc = 0x21cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 16));
    // 0x21cc2c: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x21cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x21cc30: 0xae220348  sw          $v0, 0x348($s1)
    ctx->pc = 0x21cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
    // 0x21cc34: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x21cc38: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x21cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x21cc3c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x21cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x21cc40: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x21cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x21cc44: 0xae30036c  sw          $s0, 0x36C($s1)
    ctx->pc = 0x21cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 16));
    // 0x21cc48: 0xae300358  sw          $s0, 0x358($s1)
    ctx->pc = 0x21cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 16));
    // 0x21cc4c: 0xae300360  sw          $s0, 0x360($s1)
    ctx->pc = 0x21cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 16));
    // 0x21cc50: 0xae300364  sw          $s0, 0x364($s1)
    ctx->pc = 0x21cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 16));
    // 0x21cc54: 0xa22003bb  sb          $zero, 0x3BB($s1)
    ctx->pc = 0x21cc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 955), (uint8_t)GPR_U32(ctx, 0));
label_21cc58:
    // 0x21cc58: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x21cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x21cc5c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21cc60: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x21cc60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cc64: 0x0  nop
    ctx->pc = 0x21cc64u;
    // NOP
    // 0x21cc68: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21CC68u;
    {
        const bool branch_taken_0x21cc68 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x21CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC68u;
        // 0x21cc6c: 0x25080028  addiu       $t0, $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc68) {
            ctx->pc = 0x21CC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc58;
        }
    }
    ctx->pc = 0x21CC70u;
    // 0x21cc70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21cc74: 0x262405d0  addiu       $a0, $s1, 0x5D0
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x21cc78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21cc7c: 0xc1060ba  jal         func_4182E8
    ctx->pc = 0x21CC7Cu;
    SET_GPR_U32(ctx, 31, 0x21CC84u);
    ctx->pc = 0x21CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC7Cu;
    // 0x21cc80: 0xae2205bc  sw          $v0, 0x5BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4182E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4182E8u, 0x21CC7Cu, 0x21CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC84u;
label_21cc84:
    // 0x21cc84: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x21cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x21cc88: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x21cc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x21cc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21cc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x21cc94: 0xae20066c  sw          $zero, 0x66C($s1)
    ctx->pc = 0x21cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 0));
    // 0x21cc98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cc9c: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x21cc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    // 0x21cca0: 0x2622067c  addiu       $v0, $s1, 0x67C
    ctx->pc = 0x21cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1660));
    // 0x21cca4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x21cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21cca8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21cca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ccac: 0x0  nop
    ctx->pc = 0x21ccacu;
    // NOP
label_21ccb0:
    // 0x21ccb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21ccb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ccb8: 0x0  nop
    ctx->pc = 0x21ccb8u;
    // NOP
    // 0x21ccbc: 0x0  nop
    ctx->pc = 0x21ccbcu;
    // NOP
    // 0x21ccc0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21CCC0u;
    {
        const bool branch_taken_0x21ccc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x21CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCC0u;
        // 0x21ccc4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccc0) {
            ctx->pc = 0x21CCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ccb0;
        }
    }
    ctx->pc = 0x21CCC8u;
    // 0x21ccc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cccc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21ccccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccd0: 0xae2306c4  sw          $v1, 0x6C4($s1)
    ctx->pc = 0x21ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 3));
    // 0x21ccd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21ccd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ccd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ccd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ccdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ccdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE0u;
        // 0x21cce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CCE8u;
}
