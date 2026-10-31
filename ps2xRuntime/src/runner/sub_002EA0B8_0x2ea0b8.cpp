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

// Function: sub_002EA0B8
// Address: 0x2ea0b8 - 0x2ea218
void sub_002EA0B8_0x2ea0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA0B8_0x2ea0b8");
#endif

    switch (ctx->pc) {
        case 0x2ea0b8u: goto label_2ea0b8;
        case 0x2ea0bcu: goto label_2ea0bc;
        case 0x2ea0c0u: goto label_2ea0c0;
        case 0x2ea0c4u: goto label_2ea0c4;
        case 0x2ea0c8u: goto label_2ea0c8;
        case 0x2ea0ccu: goto label_2ea0cc;
        case 0x2ea0d0u: goto label_2ea0d0;
        case 0x2ea0d4u: goto label_2ea0d4;
        case 0x2ea0d8u: goto label_2ea0d8;
        case 0x2ea0dcu: goto label_2ea0dc;
        case 0x2ea0e0u: goto label_2ea0e0;
        case 0x2ea0e4u: goto label_2ea0e4;
        case 0x2ea0e8u: goto label_2ea0e8;
        case 0x2ea0ecu: goto label_2ea0ec;
        case 0x2ea0f0u: goto label_2ea0f0;
        case 0x2ea0f4u: goto label_2ea0f4;
        case 0x2ea0f8u: goto label_2ea0f8;
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea100u: goto label_2ea100;
        case 0x2ea104u: goto label_2ea104;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea10cu: goto label_2ea10c;
        case 0x2ea110u: goto label_2ea110;
        case 0x2ea114u: goto label_2ea114;
        case 0x2ea118u: goto label_2ea118;
        case 0x2ea11cu: goto label_2ea11c;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea124u: goto label_2ea124;
        case 0x2ea128u: goto label_2ea128;
        case 0x2ea12cu: goto label_2ea12c;
        case 0x2ea130u: goto label_2ea130;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea138u: goto label_2ea138;
        case 0x2ea13cu: goto label_2ea13c;
        case 0x2ea140u: goto label_2ea140;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea148u: goto label_2ea148;
        case 0x2ea14cu: goto label_2ea14c;
        case 0x2ea150u: goto label_2ea150;
        case 0x2ea154u: goto label_2ea154;
        case 0x2ea158u: goto label_2ea158;
        case 0x2ea15cu: goto label_2ea15c;
        case 0x2ea160u: goto label_2ea160;
        case 0x2ea164u: goto label_2ea164;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea16cu: goto label_2ea16c;
        case 0x2ea170u: goto label_2ea170;
        case 0x2ea174u: goto label_2ea174;
        case 0x2ea178u: goto label_2ea178;
        case 0x2ea17cu: goto label_2ea17c;
        case 0x2ea180u: goto label_2ea180;
        case 0x2ea184u: goto label_2ea184;
        case 0x2ea188u: goto label_2ea188;
        case 0x2ea18cu: goto label_2ea18c;
        case 0x2ea190u: goto label_2ea190;
        case 0x2ea194u: goto label_2ea194;
        case 0x2ea198u: goto label_2ea198;
        case 0x2ea19cu: goto label_2ea19c;
        case 0x2ea1a0u: goto label_2ea1a0;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1a8u: goto label_2ea1a8;
        case 0x2ea1acu: goto label_2ea1ac;
        case 0x2ea1b0u: goto label_2ea1b0;
        case 0x2ea1b4u: goto label_2ea1b4;
        case 0x2ea1b8u: goto label_2ea1b8;
        case 0x2ea1bcu: goto label_2ea1bc;
        case 0x2ea1c0u: goto label_2ea1c0;
        case 0x2ea1c4u: goto label_2ea1c4;
        case 0x2ea1c8u: goto label_2ea1c8;
        case 0x2ea1ccu: goto label_2ea1cc;
        case 0x2ea1d0u: goto label_2ea1d0;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea1d8u: goto label_2ea1d8;
        case 0x2ea1dcu: goto label_2ea1dc;
        case 0x2ea1e0u: goto label_2ea1e0;
        case 0x2ea1e4u: goto label_2ea1e4;
        case 0x2ea1e8u: goto label_2ea1e8;
        case 0x2ea1ecu: goto label_2ea1ec;
        case 0x2ea1f0u: goto label_2ea1f0;
        case 0x2ea1f4u: goto label_2ea1f4;
        case 0x2ea1f8u: goto label_2ea1f8;
        case 0x2ea1fcu: goto label_2ea1fc;
        case 0x2ea200u: goto label_2ea200;
        case 0x2ea204u: goto label_2ea204;
        case 0x2ea208u: goto label_2ea208;
        case 0x2ea20cu: goto label_2ea20c;
        case 0x2ea210u: goto label_2ea210;
        case 0x2ea214u: goto label_2ea214;
        default: break;
    }

    ctx->pc = 0x2ea0b8u;

label_2ea0b8:
    // 0x2ea0b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ea0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ea0bc:
    // 0x2ea0bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ea0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ea0c0:
    // 0x2ea0c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ea0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ea0c4:
    // 0x2ea0c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0c8:
    // 0x2ea0c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ea0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ea0cc:
    // 0x2ea0cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ea0ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0d0:
    // 0x2ea0d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ea0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ea0d4:
    // 0x2ea0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea0d8:
    // 0x2ea0d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ea0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ea0dc:
    // 0x2ea0dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ea0e0:
    // 0x2ea0e0: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x2ea0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2ea0e4:
    // 0x2ea0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ea0e8:
    // 0x2ea0e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ea0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ea0ec:
    // 0x2ea0ec: 0x10450040  beq         $v0, $a1, . + 4 + (0x40 << 2)
label_2ea0f0:
    if (ctx->pc == 0x2EA0F0u) {
        ctx->pc = 0x2EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0ECu;
        // 0x2ea0f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0F4u;
        goto label_2ea0f4;
    }
    ctx->pc = 0x2EA0ECu;
    {
        const bool branch_taken_0x2ea0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0ECu;
        // 0x2ea0f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0ec) {
            ctx->pc = 0x2EA1F0u;
            goto label_2ea1f0;
        }
    }
    ctx->pc = 0x2EA0F4u;
label_2ea0f4:
    // 0x2ea0f4: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x2ea0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2ea0f8:
    // 0x2ea0f8: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_2ea0fc:
    if (ctx->pc == 0x2EA0FCu) {
        ctx->pc = 0x2EA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0F8u;
        // 0x2ea0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA100u;
        goto label_2ea100;
    }
    ctx->pc = 0x2EA0F8u;
    {
        const bool branch_taken_0x2ea0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0F8u;
        // 0x2ea0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0f8) {
            ctx->pc = 0x2EA1F4u;
            goto label_2ea1f4;
        }
    }
    ctx->pc = 0x2EA100u;
label_2ea100:
    // 0x2ea100: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ea104:
    // 0x2ea104: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ea104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ea108:
    // 0x2ea108: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2ea108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ea10c:
    // 0x2ea10c: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
label_2ea110:
    if (ctx->pc == 0x2EA110u) {
        ctx->pc = 0x2EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA10Cu;
        // 0x2ea110: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA114u;
        goto label_2ea114;
    }
    ctx->pc = 0x2EA10Cu;
    {
        const bool branch_taken_0x2ea10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ea10c) {
            ctx->pc = 0x2EA110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA10Cu;
            // 0x2ea110: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA14Cu;
            goto label_2ea14c;
        }
    }
    ctx->pc = 0x2EA114u;
label_2ea114:
    // 0x2ea114: 0xc0a36c2  jal         func_28DB08
label_2ea118:
    if (ctx->pc == 0x2EA118u) {
        ctx->pc = 0x2EA11Cu;
        goto label_2ea11c;
    }
    ctx->pc = 0x2EA114u;
    SET_GPR_U32(ctx, 31, 0x2EA11Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2EA114u, 0x2EA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA11Cu;
label_2ea11c:
    // 0x2ea11c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ea11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ea120:
    // 0x2ea120: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ea120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ea124:
    // 0x2ea124: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ea124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ea128:
    // 0x2ea128: 0xa0f809  jalr        $a1
label_2ea12c:
    if (ctx->pc == 0x2EA12Cu) {
        ctx->pc = 0x2EA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA128u;
        // 0x2ea12c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA130u;
        goto label_2ea130;
    }
    ctx->pc = 0x2EA128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EA130u);
        ctx->pc = 0x2EA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA128u;
        // 0x2ea12c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA128u, 0x2EA130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA130u;
label_2ea130:
    // 0x2ea130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ea134:
    // 0x2ea134: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ea134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ea138:
    // 0x2ea138: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ea13c:
    if (ctx->pc == 0x2EA13Cu) {
        ctx->pc = 0x2EA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA138u;
        // 0x2ea13c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA140u;
        goto label_2ea140;
    }
    ctx->pc = 0x2EA138u;
    {
        const bool branch_taken_0x2ea138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea138) {
            ctx->pc = 0x2EA13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA138u;
            // 0x2ea13c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA14Cu;
            goto label_2ea14c;
        }
    }
    ctx->pc = 0x2EA140u;
label_2ea140:
    // 0x2ea140: 0xc0a36c8  jal         func_28DB20
label_2ea144:
    if (ctx->pc == 0x2EA144u) {
        ctx->pc = 0x2EA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA140u;
        // 0x2ea144: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA148u;
        goto label_2ea148;
    }
    ctx->pc = 0x2EA140u;
    SET_GPR_U32(ctx, 31, 0x2EA148u);
    ctx->pc = 0x2EA144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA140u;
    // 0x2ea144: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EA140u, 0x2EA148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA148u;
label_2ea148:
    // 0x2ea148: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ea148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ea14c:
    // 0x2ea14c: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2ea14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2ea150:
    // 0x2ea150: 0xc0e409a  jal         func_390268
label_2ea154:
    if (ctx->pc == 0x2EA154u) {
        ctx->pc = 0x2EA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA150u;
        // 0x2ea154: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA158u;
        goto label_2ea158;
    }
    ctx->pc = 0x2EA150u;
    SET_GPR_U32(ctx, 31, 0x2EA158u);
    ctx->pc = 0x2EA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA150u;
    // 0x2ea154: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EA150u, 0x2EA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA158u;
label_2ea158:
    // 0x2ea158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea15c:
    // 0x2ea15c: 0xc0a34d6  jal         func_28D358
label_2ea160:
    if (ctx->pc == 0x2EA160u) {
        ctx->pc = 0x2EA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA15Cu;
        // 0x2ea160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA164u;
        goto label_2ea164;
    }
    ctx->pc = 0x2EA15Cu;
    SET_GPR_U32(ctx, 31, 0x2EA164u);
    ctx->pc = 0x2EA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA15Cu;
    // 0x2ea160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EA15Cu, 0x2EA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA164u;
label_2ea164:
    // 0x2ea164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea168:
    // 0x2ea168: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2ea16c:
    if (ctx->pc == 0x2EA16Cu) {
        ctx->pc = 0x2EA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA168u;
        // 0x2ea16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA170u;
        goto label_2ea170;
    }
    ctx->pc = 0x2EA168u;
    {
        const bool branch_taken_0x2ea168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA168u;
        // 0x2ea16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea168) {
            ctx->pc = 0x2EA1C0u;
            goto label_2ea1c0;
        }
    }
    ctx->pc = 0x2EA170u;
label_2ea170:
    // 0x2ea170: 0xc09643e  jal         func_2590F8
label_2ea174:
    if (ctx->pc == 0x2EA174u) {
        ctx->pc = 0x2EA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA170u;
        // 0x2ea174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA178u;
        goto label_2ea178;
    }
    ctx->pc = 0x2EA170u;
    SET_GPR_U32(ctx, 31, 0x2EA178u);
    ctx->pc = 0x2EA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA170u;
    // 0x2ea174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2EA170u, 0x2EA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA178u;
label_2ea178:
    // 0x2ea178: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea17c:
    // 0x2ea17c: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_2ea180:
    if (ctx->pc == 0x2EA180u) {
        ctx->pc = 0x2EA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA17Cu;
        // 0x2ea180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA184u;
        goto label_2ea184;
    }
    ctx->pc = 0x2EA17Cu;
    {
        const bool branch_taken_0x2ea17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA17Cu;
        // 0x2ea180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea17c) {
            ctx->pc = 0x2EA194u;
            goto label_2ea194;
        }
    }
    ctx->pc = 0x2EA184u;
label_2ea184:
    // 0x2ea184: 0xc0963a2  jal         func_258E88
label_2ea188:
    if (ctx->pc == 0x2EA188u) {
        ctx->pc = 0x2EA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA184u;
        // 0x2ea188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA18Cu;
        goto label_2ea18c;
    }
    ctx->pc = 0x2EA184u;
    SET_GPR_U32(ctx, 31, 0x2EA18Cu);
    ctx->pc = 0x2EA188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA184u;
    // 0x2ea188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2EA184u, 0x2EA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA18Cu;
label_2ea18c:
    // 0x2ea18c: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2ea190:
    if (ctx->pc == 0x2EA190u) {
        ctx->pc = 0x2EA194u;
        goto label_2ea194;
    }
    ctx->pc = 0x2EA18Cu;
    {
        const bool branch_taken_0x2ea18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ea18c) {
            ctx->pc = 0x2EA1C0u;
            goto label_2ea1c0;
        }
    }
    ctx->pc = 0x2EA194u;
label_2ea194:
    // 0x2ea194: 0xc0a36c8  jal         func_28DB20
label_2ea198:
    if (ctx->pc == 0x2EA198u) {
        ctx->pc = 0x2EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA194u;
        // 0x2ea198: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA19Cu;
        goto label_2ea19c;
    }
    ctx->pc = 0x2EA194u;
    SET_GPR_U32(ctx, 31, 0x2EA19Cu);
    ctx->pc = 0x2EA198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA194u;
    // 0x2ea198: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EA194u, 0x2EA19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA19Cu;
label_2ea19c:
    // 0x2ea19c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ea19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ea1a0:
    // 0x2ea1a0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ea1a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ea1a4:
    // 0x2ea1a4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_2ea1a8:
    if (ctx->pc == 0x2EA1A8u) {
        ctx->pc = 0x2EA1ACu;
        goto label_2ea1ac;
    }
    ctx->pc = 0x2EA1A4u;
    {
        const bool branch_taken_0x2ea1a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ea1a4) {
            ctx->pc = 0x2EA1C0u;
            goto label_2ea1c0;
        }
    }
    ctx->pc = 0x2EA1ACu;
label_2ea1ac:
    // 0x2ea1ac: 0xc0874fa  jal         func_21D3E8
label_2ea1b0:
    if (ctx->pc == 0x2EA1B0u) {
        ctx->pc = 0x2EA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1ACu;
        // 0x2ea1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1B4u;
        goto label_2ea1b4;
    }
    ctx->pc = 0x2EA1ACu;
    SET_GPR_U32(ctx, 31, 0x2EA1B4u);
    ctx->pc = 0x2EA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1ACu;
    // 0x2ea1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2EA1ACu, 0x2EA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1B4u;
label_2ea1b4:
    // 0x2ea1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1b8:
    // 0x2ea1b8: 0xc051fbc  jal         func_147EF0
label_2ea1bc:
    if (ctx->pc == 0x2EA1BCu) {
        ctx->pc = 0x2EA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1B8u;
        // 0x2ea1bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1C0u;
        goto label_2ea1c0;
    }
    ctx->pc = 0x2EA1B8u;
    SET_GPR_U32(ctx, 31, 0x2EA1C0u);
    ctx->pc = 0x2EA1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1B8u;
    // 0x2ea1bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2EA1B8u, 0x2EA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1C0u;
label_2ea1c0:
    // 0x2ea1c0: 0xc08a10a  jal         func_228428
label_2ea1c4:
    if (ctx->pc == 0x2EA1C4u) {
        ctx->pc = 0x2EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C0u;
        // 0x2ea1c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1C8u;
        goto label_2ea1c8;
    }
    ctx->pc = 0x2EA1C0u;
    SET_GPR_U32(ctx, 31, 0x2EA1C8u);
    ctx->pc = 0x2EA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1C0u;
    // 0x2ea1c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2EA1C0u, 0x2EA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1C8u;
label_2ea1c8:
    // 0x2ea1c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ea1cc:
    if (ctx->pc == 0x2EA1CCu) {
        ctx->pc = 0x2EA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C8u;
        // 0x2ea1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1D0u;
        goto label_2ea1d0;
    }
    ctx->pc = 0x2EA1C8u;
    {
        const bool branch_taken_0x2ea1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C8u;
        // 0x2ea1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c8) {
            ctx->pc = 0x2EA1F4u;
            goto label_2ea1f4;
        }
    }
    ctx->pc = 0x2EA1D0u;
label_2ea1d0:
    // 0x2ea1d0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ea1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ea1d4:
    // 0x2ea1d4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2ea1d8:
    if (ctx->pc == 0x2EA1D8u) {
        ctx->pc = 0x2EA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1D4u;
        // 0x2ea1d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1DCu;
        goto label_2ea1dc;
    }
    ctx->pc = 0x2EA1D4u;
    {
        const bool branch_taken_0x2ea1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1d4) {
            ctx->pc = 0x2EA1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA1D4u;
            // 0x2ea1d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1F8u;
            goto label_2ea1f8;
        }
    }
    ctx->pc = 0x2EA1DCu;
label_2ea1dc:
    // 0x2ea1dc: 0x10b00006  beq         $a1, $s0, . + 4 + (0x6 << 2)
label_2ea1e0:
    if (ctx->pc == 0x2EA1E0u) {
        ctx->pc = 0x2EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1DCu;
        // 0x2ea1e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1E4u;
        goto label_2ea1e4;
    }
    ctx->pc = 0x2EA1DCu;
    {
        const bool branch_taken_0x2ea1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1DCu;
        // 0x2ea1e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1dc) {
            ctx->pc = 0x2EA1F8u;
            goto label_2ea1f8;
        }
    }
    ctx->pc = 0x2EA1E4u;
label_2ea1e4:
    // 0x2ea1e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ea1e8:
    // 0x2ea1e8: 0xc0a33f8  jal         func_28CFE0
label_2ea1ec:
    if (ctx->pc == 0x2EA1ECu) {
        ctx->pc = 0x2EA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E8u;
        // 0x2ea1ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1F0u;
        goto label_2ea1f0;
    }
    ctx->pc = 0x2EA1E8u;
    SET_GPR_U32(ctx, 31, 0x2EA1F0u);
    ctx->pc = 0x2EA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1E8u;
    // 0x2ea1ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EA1E8u, 0x2EA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1F0u;
label_2ea1f0:
    // 0x2ea1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea1f4:
    // 0x2ea1f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ea1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ea1f8:
    // 0x2ea1f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ea1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ea1fc:
    // 0x2ea1fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ea1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea200:
    // 0x2ea200: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ea200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea204:
    // 0x2ea204: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ea204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea208:
    // 0x2ea208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea20c:
    // 0x2ea20c: 0x3e00008  jr          $ra
label_2ea210:
    if (ctx->pc == 0x2EA210u) {
        ctx->pc = 0x2EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA20Cu;
        // 0x2ea210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA214u;
        goto label_2ea214;
    }
    ctx->pc = 0x2EA20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA20Cu;
        // 0x2ea210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA214u;
label_2ea214:
    // 0x2ea214: 0x0  nop
    ctx->pc = 0x2ea214u;
    // NOP
    ctx->pc = 0x2ea218u;
}
