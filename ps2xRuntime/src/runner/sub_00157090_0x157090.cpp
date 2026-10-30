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

// Function: sub_00157090
// Address: 0x157090 - 0x157220
void sub_00157090_0x157090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157090_0x157090");
#endif

    switch (ctx->pc) {
        case 0x157090u: goto label_157090;
        case 0x157094u: goto label_157094;
        case 0x157098u: goto label_157098;
        case 0x15709cu: goto label_15709c;
        case 0x1570a0u: goto label_1570a0;
        case 0x1570a4u: goto label_1570a4;
        case 0x1570a8u: goto label_1570a8;
        case 0x1570acu: goto label_1570ac;
        case 0x1570b0u: goto label_1570b0;
        case 0x1570b4u: goto label_1570b4;
        case 0x1570b8u: goto label_1570b8;
        case 0x1570bcu: goto label_1570bc;
        case 0x1570c0u: goto label_1570c0;
        case 0x1570c4u: goto label_1570c4;
        case 0x1570c8u: goto label_1570c8;
        case 0x1570ccu: goto label_1570cc;
        case 0x1570d0u: goto label_1570d0;
        case 0x1570d4u: goto label_1570d4;
        case 0x1570d8u: goto label_1570d8;
        case 0x1570dcu: goto label_1570dc;
        case 0x1570e0u: goto label_1570e0;
        case 0x1570e4u: goto label_1570e4;
        case 0x1570e8u: goto label_1570e8;
        case 0x1570ecu: goto label_1570ec;
        case 0x1570f0u: goto label_1570f0;
        case 0x1570f4u: goto label_1570f4;
        case 0x1570f8u: goto label_1570f8;
        case 0x1570fcu: goto label_1570fc;
        case 0x157100u: goto label_157100;
        case 0x157104u: goto label_157104;
        case 0x157108u: goto label_157108;
        case 0x15710cu: goto label_15710c;
        case 0x157110u: goto label_157110;
        case 0x157114u: goto label_157114;
        case 0x157118u: goto label_157118;
        case 0x15711cu: goto label_15711c;
        case 0x157120u: goto label_157120;
        case 0x157124u: goto label_157124;
        case 0x157128u: goto label_157128;
        case 0x15712cu: goto label_15712c;
        case 0x157130u: goto label_157130;
        case 0x157134u: goto label_157134;
        case 0x157138u: goto label_157138;
        case 0x15713cu: goto label_15713c;
        case 0x157140u: goto label_157140;
        case 0x157144u: goto label_157144;
        case 0x157148u: goto label_157148;
        case 0x15714cu: goto label_15714c;
        case 0x157150u: goto label_157150;
        case 0x157154u: goto label_157154;
        case 0x157158u: goto label_157158;
        case 0x15715cu: goto label_15715c;
        case 0x157160u: goto label_157160;
        case 0x157164u: goto label_157164;
        case 0x157168u: goto label_157168;
        case 0x15716cu: goto label_15716c;
        case 0x157170u: goto label_157170;
        case 0x157174u: goto label_157174;
        case 0x157178u: goto label_157178;
        case 0x15717cu: goto label_15717c;
        case 0x157180u: goto label_157180;
        case 0x157184u: goto label_157184;
        case 0x157188u: goto label_157188;
        case 0x15718cu: goto label_15718c;
        case 0x157190u: goto label_157190;
        case 0x157194u: goto label_157194;
        case 0x157198u: goto label_157198;
        case 0x15719cu: goto label_15719c;
        case 0x1571a0u: goto label_1571a0;
        case 0x1571a4u: goto label_1571a4;
        case 0x1571a8u: goto label_1571a8;
        case 0x1571acu: goto label_1571ac;
        case 0x1571b0u: goto label_1571b0;
        case 0x1571b4u: goto label_1571b4;
        case 0x1571b8u: goto label_1571b8;
        case 0x1571bcu: goto label_1571bc;
        case 0x1571c0u: goto label_1571c0;
        case 0x1571c4u: goto label_1571c4;
        case 0x1571c8u: goto label_1571c8;
        case 0x1571ccu: goto label_1571cc;
        case 0x1571d0u: goto label_1571d0;
        case 0x1571d4u: goto label_1571d4;
        case 0x1571d8u: goto label_1571d8;
        case 0x1571dcu: goto label_1571dc;
        case 0x1571e0u: goto label_1571e0;
        case 0x1571e4u: goto label_1571e4;
        case 0x1571e8u: goto label_1571e8;
        case 0x1571ecu: goto label_1571ec;
        case 0x1571f0u: goto label_1571f0;
        case 0x1571f4u: goto label_1571f4;
        case 0x1571f8u: goto label_1571f8;
        case 0x1571fcu: goto label_1571fc;
        case 0x157200u: goto label_157200;
        case 0x157204u: goto label_157204;
        case 0x157208u: goto label_157208;
        case 0x15720cu: goto label_15720c;
        case 0x157210u: goto label_157210;
        case 0x157214u: goto label_157214;
        case 0x157218u: goto label_157218;
        case 0x15721cu: goto label_15721c;
        default: break;
    }

    ctx->pc = 0x157090u;

label_157090:
    // 0x157090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x157090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_157094:
    // 0x157094: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157098:
    // 0x157098: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x157098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_15709c:
    // 0x15709c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1570a0:
    // 0x1570a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1570a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1570a4:
    // 0x1570a4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1570a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1570a8:
    // 0x1570a8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1570ac:
    // 0x1570ac: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1570b0:
    // 0x1570b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1570b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1570b4:
    // 0x1570b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1570b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1570b8:
    // 0x1570b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1570b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1570bc:
    // 0x1570bc: 0xc0517d8  jal         func_145F60
label_1570c0:
    if (ctx->pc == 0x1570C0u) {
        ctx->pc = 0x1570C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570BCu;
        // 0x1570c0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570C4u;
        goto label_1570c4;
    }
    ctx->pc = 0x1570BCu;
    SET_GPR_U32(ctx, 31, 0x1570C4u);
    ctx->pc = 0x1570C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570BCu;
    // 0x1570c0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x1570BCu, 0x1570C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570C4u;
label_1570c4:
    // 0x1570c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1570c8:
    // 0x1570c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1570cc:
    // 0x1570cc: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1570d0:
    // 0x1570d0: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x1570d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_1570d4:
    // 0x1570d4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1570d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1570d8:
    // 0x1570d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1570dc:
    // 0x1570dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1570dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1570e0:
    // 0x1570e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1570e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1570e4:
    // 0x1570e4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1570e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_1570e8:
    // 0x1570e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1570e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1570ec:
    // 0x1570ec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1570ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1570f0:
    // 0x1570f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1570f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1570f4:
    // 0x1570f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1570f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1570f8:
    // 0x1570f8: 0x2ce40002  sltiu       $a0, $a3, 0x2
    ctx->pc = 0x1570f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1570fc:
    // 0x1570fc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1570fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_157100:
    // 0x157100: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x157100u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157104:
    // 0x157104: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x157104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_157108:
    // 0x157108: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_15710c:
    if (ctx->pc == 0x15710Cu) {
        ctx->pc = 0x15710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157108u;
        // 0x15710c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157110u;
        goto label_157110;
    }
    ctx->pc = 0x157108u;
    {
        const bool branch_taken_0x157108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157108u;
        // 0x15710c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157108) {
            ctx->pc = 0x1570F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1570f0;
        }
    }
    ctx->pc = 0x157110u;
label_157110:
    // 0x157110: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157114:
    // 0x157114: 0xc043e04  jal         func_10F810
label_157118:
    if (ctx->pc == 0x157118u) {
        ctx->pc = 0x157118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157114u;
        // 0x157118: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15711Cu;
        goto label_15711c;
    }
    ctx->pc = 0x157114u;
    SET_GPR_U32(ctx, 31, 0x15711Cu);
    ctx->pc = 0x157118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157114u;
    // 0x157118: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x157114u, 0x15711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15711Cu;
label_15711c:
    // 0x15711c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157120:
    // 0x157120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157124:
    // 0x157124: 0xc0e8c52  jal         func_3A3148
label_157128:
    if (ctx->pc == 0x157128u) {
        ctx->pc = 0x157128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157124u;
        // 0x157128: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15712Cu;
        goto label_15712c;
    }
    ctx->pc = 0x157124u;
    SET_GPR_U32(ctx, 31, 0x15712Cu);
    ctx->pc = 0x157128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157124u;
    // 0x157128: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x157124u, 0x15712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15712Cu;
label_15712c:
    // 0x15712c: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x15712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_157130:
    // 0x157130: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_157134:
    // 0x157134: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_157138:
    // 0x157138: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15713c:
    // 0x15713c: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15713cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_157140:
    // 0x157140: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x157140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_157144:
    // 0x157144: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x157144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_157148:
    // 0x157148: 0xa0f809  jalr        $a1
label_15714c:
    if (ctx->pc == 0x15714Cu) {
        ctx->pc = 0x15714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157148u;
        // 0x15714c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157150u;
        goto label_157150;
    }
    ctx->pc = 0x157148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x157150u);
        ctx->pc = 0x15714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157148u;
        // 0x15714c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157148u, 0x157150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157150u;
label_157150:
    // 0x157150: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_157154:
    // 0x157154: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x157154u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_157158:
    // 0x157158: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15715c:
    // 0x15715c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15715cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_157160:
    // 0x157160: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_157164:
    // 0x157164: 0x60f809  jalr        $v1
label_157168:
    if (ctx->pc == 0x157168u) {
        ctx->pc = 0x157168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157164u;
        // 0x157168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15716Cu;
        goto label_15716c;
    }
    ctx->pc = 0x157164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15716Cu);
        ctx->pc = 0x157168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157164u;
        // 0x157168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157164u, 0x15716Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15716Cu;
label_15716c:
    // 0x15716c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_157170:
    // 0x157170: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x157170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_157174:
    // 0x157174: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157178:
    // 0x157178: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_15717c:
    // 0x15717c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15717cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_157180:
    // 0x157180: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x157180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_157184:
    // 0x157184: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x157184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_157188:
    // 0x157188: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_15718c:
    // 0x15718c: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15718cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_157190:
    // 0x157190: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x157190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_157194:
    // 0x157194: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x157194u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_157198:
    // 0x157198: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15719c:
    // 0x15719c: 0x40f809  jalr        $v0
label_1571a0:
    if (ctx->pc == 0x1571A0u) {
        ctx->pc = 0x1571A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15719Cu;
        // 0x1571a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571A4u;
        goto label_1571a4;
    }
    ctx->pc = 0x15719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1571A4u);
        ctx->pc = 0x1571A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15719Cu;
        // 0x1571a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15719Cu, 0x1571A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1571A4u;
label_1571a4:
    // 0x1571a4: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x1571a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_1571a8:
    // 0x1571a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1571a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1571ac:
    // 0x1571ac: 0x8c45d260  lw          $a1, -0x2DA0($v0)
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955616)));
label_1571b0:
    // 0x1571b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1571b4:
    // 0x1571b4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1571b8:
    // 0x1571b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1571b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1571bc:
    // 0x1571bc: 0x40f809  jalr        $v0
label_1571c0:
    if (ctx->pc == 0x1571C0u) {
        ctx->pc = 0x1571C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571BCu;
        // 0x1571c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571C4u;
        goto label_1571c4;
    }
    ctx->pc = 0x1571BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1571C4u);
        ctx->pc = 0x1571C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571BCu;
        // 0x1571c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571BCu, 0x1571C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1571C4u;
label_1571c4:
    // 0x1571c4: 0xc055f08  jal         func_157C20
label_1571c8:
    if (ctx->pc == 0x1571C8u) {
        ctx->pc = 0x1571C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571C4u;
        // 0x1571c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571CCu;
        goto label_1571cc;
    }
    ctx->pc = 0x1571C4u;
    SET_GPR_U32(ctx, 31, 0x1571CCu);
    ctx->pc = 0x1571C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571C4u;
    // 0x1571c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C20u, 0x1571C4u, 0x1571CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571CCu;
label_1571cc:
    // 0x1571cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1571ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1571d0:
    // 0x1571d0: 0xc061748  jal         func_185D20
label_1571d4:
    if (ctx->pc == 0x1571D4u) {
        ctx->pc = 0x1571D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571D0u;
        // 0x1571d4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571D8u;
        goto label_1571d8;
    }
    ctx->pc = 0x1571D0u;
    SET_GPR_U32(ctx, 31, 0x1571D8u);
    ctx->pc = 0x1571D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571D0u;
    // 0x1571d4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1571D0u, 0x1571D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571D8u;
label_1571d8:
    // 0x1571d8: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x1571d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_1571dc:
    // 0x1571dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1571e0:
    // 0x1571e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1571e4:
    // 0x1571e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1571e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1571e8:
    // 0x1571e8: 0x60f809  jalr        $v1
label_1571ec:
    if (ctx->pc == 0x1571ECu) {
        ctx->pc = 0x1571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571E8u;
        // 0x1571ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571F0u;
        goto label_1571f0;
    }
    ctx->pc = 0x1571E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1571F0u);
        ctx->pc = 0x1571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571E8u;
        // 0x1571ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571E8u, 0x1571F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1571F0u;
label_1571f0:
    // 0x1571f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1571f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1571f4:
    // 0x1571f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1571f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1571f8:
    // 0x1571f8: 0xc0552b8  jal         func_154AE0
label_1571fc:
    if (ctx->pc == 0x1571FCu) {
        ctx->pc = 0x1571FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571F8u;
        // 0x1571fc: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157200u;
        goto label_157200;
    }
    ctx->pc = 0x1571F8u;
    SET_GPR_U32(ctx, 31, 0x157200u);
    ctx->pc = 0x1571FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571F8u;
    // 0x1571fc: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1571F8u, 0x157200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157200u;
label_157200:
    // 0x157200: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x157200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_157204:
    // 0x157204: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x157204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_157208:
    // 0x157208: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x157208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15720c:
    // 0x15720c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x15720cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_157210:
    // 0x157210: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x157210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_157214:
    // 0x157214: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x157214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_157218:
    // 0x157218: 0x3e00008  jr          $ra
label_15721c:
    if (ctx->pc == 0x15721Cu) {
        ctx->pc = 0x15721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157218u;
        // 0x15721c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157220u;
        goto label_fallthrough_0x157218;
    }
    ctx->pc = 0x157218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157218u;
        // 0x15721c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157218:
    ctx->pc = 0x157220u;
}
