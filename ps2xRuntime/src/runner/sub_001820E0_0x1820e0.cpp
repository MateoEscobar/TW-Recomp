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

// Function: sub_001820E0
// Address: 0x1820e0 - 0x1821d0
void sub_001820E0_0x1820e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001820E0_0x1820e0");
#endif

    switch (ctx->pc) {
        case 0x1820e0u: goto label_1820e0;
        case 0x1820e4u: goto label_1820e4;
        case 0x1820e8u: goto label_1820e8;
        case 0x1820ecu: goto label_1820ec;
        case 0x1820f0u: goto label_1820f0;
        case 0x1820f4u: goto label_1820f4;
        case 0x1820f8u: goto label_1820f8;
        case 0x1820fcu: goto label_1820fc;
        case 0x182100u: goto label_182100;
        case 0x182104u: goto label_182104;
        case 0x182108u: goto label_182108;
        case 0x18210cu: goto label_18210c;
        case 0x182110u: goto label_182110;
        case 0x182114u: goto label_182114;
        case 0x182118u: goto label_182118;
        case 0x18211cu: goto label_18211c;
        case 0x182120u: goto label_182120;
        case 0x182124u: goto label_182124;
        case 0x182128u: goto label_182128;
        case 0x18212cu: goto label_18212c;
        case 0x182130u: goto label_182130;
        case 0x182134u: goto label_182134;
        case 0x182138u: goto label_182138;
        case 0x18213cu: goto label_18213c;
        case 0x182140u: goto label_182140;
        case 0x182144u: goto label_182144;
        case 0x182148u: goto label_182148;
        case 0x18214cu: goto label_18214c;
        case 0x182150u: goto label_182150;
        case 0x182154u: goto label_182154;
        case 0x182158u: goto label_182158;
        case 0x18215cu: goto label_18215c;
        case 0x182160u: goto label_182160;
        case 0x182164u: goto label_182164;
        case 0x182168u: goto label_182168;
        case 0x18216cu: goto label_18216c;
        case 0x182170u: goto label_182170;
        case 0x182174u: goto label_182174;
        case 0x182178u: goto label_182178;
        case 0x18217cu: goto label_18217c;
        case 0x182180u: goto label_182180;
        case 0x182184u: goto label_182184;
        case 0x182188u: goto label_182188;
        case 0x18218cu: goto label_18218c;
        case 0x182190u: goto label_182190;
        case 0x182194u: goto label_182194;
        case 0x182198u: goto label_182198;
        case 0x18219cu: goto label_18219c;
        case 0x1821a0u: goto label_1821a0;
        case 0x1821a4u: goto label_1821a4;
        case 0x1821a8u: goto label_1821a8;
        case 0x1821acu: goto label_1821ac;
        case 0x1821b0u: goto label_1821b0;
        case 0x1821b4u: goto label_1821b4;
        case 0x1821b8u: goto label_1821b8;
        case 0x1821bcu: goto label_1821bc;
        case 0x1821c0u: goto label_1821c0;
        case 0x1821c4u: goto label_1821c4;
        case 0x1821c8u: goto label_1821c8;
        case 0x1821ccu: goto label_1821cc;
        default: break;
    }

    ctx->pc = 0x1820e0u;

label_1820e0:
    // 0x1820e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1820e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1820e4:
    // 0x1820e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1820e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1820e8:
    // 0x1820e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1820e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1820ec:
    // 0x1820ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1820ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1820f0:
    // 0x1820f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1820f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1820f4:
    // 0x1820f4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1820f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1820f8:
    // 0x1820f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1820f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1820fc:
    // 0x1820fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1820fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_182100:
    // 0x182100: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x182100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_182104:
    // 0x182104: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x182104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_182108:
    // 0x182108: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x182108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18210c:
    // 0x18210c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_182110:
    // 0x182110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182114:
    // 0x182114: 0xc137cca  jal         func_4DF328
label_182118:
    if (ctx->pc == 0x182118u) {
        ctx->pc = 0x182118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182114u;
        // 0x182118: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18211Cu;
        goto label_18211c;
    }
    ctx->pc = 0x182114u;
    SET_GPR_U32(ctx, 31, 0x18211Cu);
    ctx->pc = 0x182118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182114u;
    // 0x182118: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x182114u, 0x18211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18211Cu;
label_18211c:
    // 0x18211c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_182120:
    // 0x182120: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x182120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_182124:
    // 0x182124: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_182128:
    if (ctx->pc == 0x182128u) {
        ctx->pc = 0x182128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182124u;
        // 0x182128: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18212Cu;
        goto label_18212c;
    }
    ctx->pc = 0x182124u;
    {
        const bool branch_taken_0x182124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182124u;
        // 0x182128: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182124) {
            ctx->pc = 0x182154u;
            goto label_182154;
        }
    }
    ctx->pc = 0x18212Cu;
label_18212c:
    // 0x18212c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_182130:
    // 0x182130: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x182130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_182134:
    // 0x182134: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x182134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_182138:
    // 0x182138: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18213c:
    // 0x18213c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18213cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_182140:
    // 0x182140: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x182140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_182144:
    // 0x182144: 0x40f809  jalr        $v0
label_182148:
    if (ctx->pc == 0x182148u) {
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18214Cu;
        goto label_18214c;
    }
    ctx->pc = 0x182144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18214Cu);
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182144u, 0x18214Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18214Cu;
label_18214c:
    // 0x18214c: 0x10000017  b           . + 4 + (0x17 << 2)
label_182150:
    if (ctx->pc == 0x182150u) {
        ctx->pc = 0x182150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18214Cu;
        // 0x182150: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182154u;
        goto label_182154;
    }
    ctx->pc = 0x18214Cu;
    {
        const bool branch_taken_0x18214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18214Cu;
        // 0x182150: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18214c) {
            ctx->pc = 0x1821ACu;
            goto label_1821ac;
        }
    }
    ctx->pc = 0x182154u;
label_182154:
    // 0x182154: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x182154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_182158:
    // 0x182158: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_18215c:
    // 0x18215c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x18215cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_182160:
    // 0x182160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182164:
    // 0x182164: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x182164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_182168:
    // 0x182168: 0xc10ca04  jal         func_432810
label_18216c:
    if (ctx->pc == 0x18216Cu) {
        ctx->pc = 0x18216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182168u;
        // 0x18216c: 0x24c62710  addiu       $a2, $a2, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182170u;
        goto label_182170;
    }
    ctx->pc = 0x182168u;
    SET_GPR_U32(ctx, 31, 0x182170u);
    ctx->pc = 0x18216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182168u;
    // 0x18216c: 0x24c62710  addiu       $a2, $a2, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x182168u, 0x182170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182170u;
label_182170:
    // 0x182170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182174:
    // 0x182174: 0xc061668  jal         func_1859A0
label_182178:
    if (ctx->pc == 0x182178u) {
        ctx->pc = 0x182178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182174u;
        // 0x182178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18217Cu;
        goto label_18217c;
    }
    ctx->pc = 0x182174u;
    SET_GPR_U32(ctx, 31, 0x18217Cu);
    ctx->pc = 0x182178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182174u;
    // 0x182178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x182174u, 0x18217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18217Cu;
label_18217c:
    // 0x18217c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_182180:
    if (ctx->pc == 0x182180u) {
        ctx->pc = 0x182180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18217Cu;
        // 0x182180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182184u;
        goto label_182184;
    }
    ctx->pc = 0x18217Cu;
    {
        const bool branch_taken_0x18217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18217Cu;
        // 0x182180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18217c) {
            ctx->pc = 0x1821B0u;
            goto label_1821b0;
        }
    }
    ctx->pc = 0x182184u;
label_182184:
    // 0x182184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182188:
    // 0x182188: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x182188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18218c:
    // 0x18218c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18218cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182190:
    // 0x182190: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x182190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_182194:
    // 0x182194: 0xc061eaa  jal         func_187AA8
label_182198:
    if (ctx->pc == 0x182198u) {
        ctx->pc = 0x182198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182194u;
        // 0x182198: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18219Cu;
        goto label_18219c;
    }
    ctx->pc = 0x182194u;
    SET_GPR_U32(ctx, 31, 0x18219Cu);
    ctx->pc = 0x182198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182194u;
    // 0x182198: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x182194u, 0x18219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18219Cu;
label_18219c:
    // 0x18219c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1821a0:
    // 0x1821a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1821a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1821a4:
    // 0x1821a4: 0xc0552b8  jal         func_154AE0
label_1821a8:
    if (ctx->pc == 0x1821A8u) {
        ctx->pc = 0x1821A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A4u;
        // 0x1821a8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821ACu;
        goto label_1821ac;
    }
    ctx->pc = 0x1821A4u;
    SET_GPR_U32(ctx, 31, 0x1821ACu);
    ctx->pc = 0x1821A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821A4u;
    // 0x1821a8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1821A4u, 0x1821ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821ACu;
label_1821ac:
    // 0x1821ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1821acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1821b0:
    // 0x1821b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1821b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1821b4:
    // 0x1821b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1821b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1821b8:
    // 0x1821b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1821b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1821bc:
    // 0x1821bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1821bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1821c0:
    // 0x1821c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1821c4:
    // 0x1821c4: 0x3e00008  jr          $ra
label_1821c8:
    if (ctx->pc == 0x1821C8u) {
        ctx->pc = 0x1821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821C4u;
        // 0x1821c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821CCu;
        goto label_1821cc;
    }
    ctx->pc = 0x1821C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821C4u;
        // 0x1821c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1821CCu;
label_1821cc:
    // 0x1821cc: 0x0  nop
    ctx->pc = 0x1821ccu;
    // NOP
    ctx->pc = 0x1821d0u;
}
