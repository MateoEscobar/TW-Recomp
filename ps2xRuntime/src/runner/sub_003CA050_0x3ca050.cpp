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

// Function: sub_003CA050
// Address: 0x3ca050 - 0x3ca138
void sub_003CA050_0x3ca050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA050_0x3ca050");
#endif

    switch (ctx->pc) {
        case 0x3ca050u: goto label_3ca050;
        case 0x3ca054u: goto label_3ca054;
        case 0x3ca058u: goto label_3ca058;
        case 0x3ca05cu: goto label_3ca05c;
        case 0x3ca060u: goto label_3ca060;
        case 0x3ca064u: goto label_3ca064;
        case 0x3ca068u: goto label_3ca068;
        case 0x3ca06cu: goto label_3ca06c;
        case 0x3ca070u: goto label_3ca070;
        case 0x3ca074u: goto label_3ca074;
        case 0x3ca078u: goto label_3ca078;
        case 0x3ca07cu: goto label_3ca07c;
        case 0x3ca080u: goto label_3ca080;
        case 0x3ca084u: goto label_3ca084;
        case 0x3ca088u: goto label_3ca088;
        case 0x3ca08cu: goto label_3ca08c;
        case 0x3ca090u: goto label_3ca090;
        case 0x3ca094u: goto label_3ca094;
        case 0x3ca098u: goto label_3ca098;
        case 0x3ca09cu: goto label_3ca09c;
        case 0x3ca0a0u: goto label_3ca0a0;
        case 0x3ca0a4u: goto label_3ca0a4;
        case 0x3ca0a8u: goto label_3ca0a8;
        case 0x3ca0acu: goto label_3ca0ac;
        case 0x3ca0b0u: goto label_3ca0b0;
        case 0x3ca0b4u: goto label_3ca0b4;
        case 0x3ca0b8u: goto label_3ca0b8;
        case 0x3ca0bcu: goto label_3ca0bc;
        case 0x3ca0c0u: goto label_3ca0c0;
        case 0x3ca0c4u: goto label_3ca0c4;
        case 0x3ca0c8u: goto label_3ca0c8;
        case 0x3ca0ccu: goto label_3ca0cc;
        case 0x3ca0d0u: goto label_3ca0d0;
        case 0x3ca0d4u: goto label_3ca0d4;
        case 0x3ca0d8u: goto label_3ca0d8;
        case 0x3ca0dcu: goto label_3ca0dc;
        case 0x3ca0e0u: goto label_3ca0e0;
        case 0x3ca0e4u: goto label_3ca0e4;
        case 0x3ca0e8u: goto label_3ca0e8;
        case 0x3ca0ecu: goto label_3ca0ec;
        case 0x3ca0f0u: goto label_3ca0f0;
        case 0x3ca0f4u: goto label_3ca0f4;
        case 0x3ca0f8u: goto label_3ca0f8;
        case 0x3ca0fcu: goto label_3ca0fc;
        case 0x3ca100u: goto label_3ca100;
        case 0x3ca104u: goto label_3ca104;
        case 0x3ca108u: goto label_3ca108;
        case 0x3ca10cu: goto label_3ca10c;
        case 0x3ca110u: goto label_3ca110;
        case 0x3ca114u: goto label_3ca114;
        case 0x3ca118u: goto label_3ca118;
        case 0x3ca11cu: goto label_3ca11c;
        case 0x3ca120u: goto label_3ca120;
        case 0x3ca124u: goto label_3ca124;
        case 0x3ca128u: goto label_3ca128;
        case 0x3ca12cu: goto label_3ca12c;
        case 0x3ca130u: goto label_3ca130;
        case 0x3ca134u: goto label_3ca134;
        default: break;
    }

    ctx->pc = 0x3ca050u;

label_3ca050:
    // 0x3ca050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ca050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ca054:
    // 0x3ca054: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ca054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ca058:
    // 0x3ca058: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ca058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ca05c:
    // 0x3ca05c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ca05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ca060:
    // 0x3ca060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca064:
    // 0x3ca064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ca068:
    // 0x3ca068: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ca068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ca06c:
    // 0x3ca06c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca070:
    // 0x3ca070: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca074:
    // 0x3ca074: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca078:
    // 0x3ca078: 0x40f809  jalr        $v0
label_3ca07c:
    if (ctx->pc == 0x3CA07Cu) {
        ctx->pc = 0x3CA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA078u;
        // 0x3ca07c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA080u;
        goto label_3ca080;
    }
    ctx->pc = 0x3CA078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA080u);
        ctx->pc = 0x3CA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA078u;
        // 0x3ca07c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA078u, 0x3CA080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA080u;
label_3ca080:
    // 0x3ca080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca084:
    // 0x3ca084: 0xc0ea14c  jal         func_3A8530
label_3ca088:
    if (ctx->pc == 0x3CA088u) {
        ctx->pc = 0x3CA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA084u;
        // 0x3ca088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA08Cu;
        goto label_3ca08c;
    }
    ctx->pc = 0x3CA084u;
    SET_GPR_U32(ctx, 31, 0x3CA08Cu);
    ctx->pc = 0x3CA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA084u;
    // 0x3ca088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CA084u, 0x3CA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA08Cu;
label_3ca08c:
    // 0x3ca08c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ca08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ca090:
    // 0x3ca090: 0xc0ea12a  jal         func_3A84A8
label_3ca094:
    if (ctx->pc == 0x3CA094u) {
        ctx->pc = 0x3CA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA090u;
        // 0x3ca094: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA098u;
        goto label_3ca098;
    }
    ctx->pc = 0x3CA090u;
    SET_GPR_U32(ctx, 31, 0x3CA098u);
    ctx->pc = 0x3CA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA090u;
    // 0x3ca094: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA090u, 0x3CA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA098u;
label_3ca098:
    // 0x3ca098: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ca098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca09c:
    // 0x3ca09c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ca09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ca0a0:
    // 0x3ca0a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0a4:
    // 0x3ca0a4: 0xc0ea12a  jal         func_3A84A8
label_3ca0a8:
    if (ctx->pc == 0x3CA0A8u) {
        ctx->pc = 0x3CA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0A4u;
        // 0x3ca0a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA0ACu;
        goto label_3ca0ac;
    }
    ctx->pc = 0x3CA0A4u;
    SET_GPR_U32(ctx, 31, 0x3CA0ACu);
    ctx->pc = 0x3CA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA0A4u;
    // 0x3ca0a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA0A4u, 0x3CA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0ACu;
label_3ca0ac:
    // 0x3ca0ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ca0acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca0b0:
    // 0x3ca0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0b4:
    // 0x3ca0b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ca0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ca0b8:
    // 0x3ca0b8: 0xc0e858c  jal         func_3A1630
label_3ca0bc:
    if (ctx->pc == 0x3CA0BCu) {
        ctx->pc = 0x3CA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0B8u;
        // 0x3ca0bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA0C0u;
        goto label_3ca0c0;
    }
    ctx->pc = 0x3CA0B8u;
    SET_GPR_U32(ctx, 31, 0x3CA0C0u);
    ctx->pc = 0x3CA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA0B8u;
    // 0x3ca0bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CA0B8u, 0x3CA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0C0u;
label_3ca0c0:
    // 0x3ca0c0: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3ca0c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca0c4:
    // 0x3ca0c4: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x3ca0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3ca0c8:
    // 0x3ca0c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ca0c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca0cc:
    // 0x3ca0cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3ca0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ca0d0:
    // 0x3ca0d0: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3ca0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3ca0d4:
    // 0x3ca0d4: 0x3c08000c  lui         $t0, 0xC
    ctx->pc = 0x3ca0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12 << 16));
label_3ca0d8:
    // 0x3ca0d8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3ca0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3ca0dc:
    // 0x3ca0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca0e0:
    // 0x3ca0e0: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x3ca0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_3ca0e4:
    // 0x3ca0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0e8:
    // 0x3ca0e8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3ca0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3ca0ec:
    // 0x3ca0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0f0:
    // 0x3ca0f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ca0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ca0f4:
    // 0x3ca0f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ca0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0f8:
    // 0x3ca0f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3ca0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3ca0fc:
    // 0x3ca0fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ca0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3ca100:
    // 0x3ca100: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3ca100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3ca104:
    // 0x3ca104: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3ca104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3ca108:
    // 0x3ca108: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3ca108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3ca10c:
    // 0x3ca10c: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x3ca10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
label_3ca110:
    // 0x3ca110: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x3ca110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_3ca114:
    // 0x3ca114: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3ca114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3ca118:
    // 0x3ca118: 0xc0f22ca  jal         func_3C8B28
label_3ca11c:
    if (ctx->pc == 0x3CA11Cu) {
        ctx->pc = 0x3CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA118u;
        // 0x3ca11c: 0xae07001c  sw          $a3, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA120u;
        goto label_3ca120;
    }
    ctx->pc = 0x3CA118u;
    SET_GPR_U32(ctx, 31, 0x3CA120u);
    ctx->pc = 0x3CA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA118u;
    // 0x3ca11c: 0xae07001c  sw          $a3, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8B28u, 0x3CA118u, 0x3CA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA120u;
label_3ca120:
    // 0x3ca120: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ca120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ca124:
    // 0x3ca124: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ca124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ca128:
    // 0x3ca128: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ca128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ca12c:
    // 0x3ca12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ca12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ca130:
    // 0x3ca130: 0x3e00008  jr          $ra
label_3ca134:
    if (ctx->pc == 0x3CA134u) {
        ctx->pc = 0x3CA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA130u;
        // 0x3ca134: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA138u;
        goto label_fallthrough_0x3ca130;
    }
    ctx->pc = 0x3CA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA130u;
        // 0x3ca134: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ca130:
    ctx->pc = 0x3CA138u;
}
