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

// Function: sub_00299100
// Address: 0x299100 - 0x299220
void sub_00299100_0x299100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299100_0x299100");
#endif

    switch (ctx->pc) {
        case 0x299100u: goto label_299100;
        case 0x299104u: goto label_299104;
        case 0x299108u: goto label_299108;
        case 0x29910cu: goto label_29910c;
        case 0x299110u: goto label_299110;
        case 0x299114u: goto label_299114;
        case 0x299118u: goto label_299118;
        case 0x29911cu: goto label_29911c;
        case 0x299120u: goto label_299120;
        case 0x299124u: goto label_299124;
        case 0x299128u: goto label_299128;
        case 0x29912cu: goto label_29912c;
        case 0x299130u: goto label_299130;
        case 0x299134u: goto label_299134;
        case 0x299138u: goto label_299138;
        case 0x29913cu: goto label_29913c;
        case 0x299140u: goto label_299140;
        case 0x299144u: goto label_299144;
        case 0x299148u: goto label_299148;
        case 0x29914cu: goto label_29914c;
        case 0x299150u: goto label_299150;
        case 0x299154u: goto label_299154;
        case 0x299158u: goto label_299158;
        case 0x29915cu: goto label_29915c;
        case 0x299160u: goto label_299160;
        case 0x299164u: goto label_299164;
        case 0x299168u: goto label_299168;
        case 0x29916cu: goto label_29916c;
        case 0x299170u: goto label_299170;
        case 0x299174u: goto label_299174;
        case 0x299178u: goto label_299178;
        case 0x29917cu: goto label_29917c;
        case 0x299180u: goto label_299180;
        case 0x299184u: goto label_299184;
        case 0x299188u: goto label_299188;
        case 0x29918cu: goto label_29918c;
        case 0x299190u: goto label_299190;
        case 0x299194u: goto label_299194;
        case 0x299198u: goto label_299198;
        case 0x29919cu: goto label_29919c;
        case 0x2991a0u: goto label_2991a0;
        case 0x2991a4u: goto label_2991a4;
        case 0x2991a8u: goto label_2991a8;
        case 0x2991acu: goto label_2991ac;
        case 0x2991b0u: goto label_2991b0;
        case 0x2991b4u: goto label_2991b4;
        case 0x2991b8u: goto label_2991b8;
        case 0x2991bcu: goto label_2991bc;
        case 0x2991c0u: goto label_2991c0;
        case 0x2991c4u: goto label_2991c4;
        case 0x2991c8u: goto label_2991c8;
        case 0x2991ccu: goto label_2991cc;
        case 0x2991d0u: goto label_2991d0;
        case 0x2991d4u: goto label_2991d4;
        case 0x2991d8u: goto label_2991d8;
        case 0x2991dcu: goto label_2991dc;
        case 0x2991e0u: goto label_2991e0;
        case 0x2991e4u: goto label_2991e4;
        case 0x2991e8u: goto label_2991e8;
        case 0x2991ecu: goto label_2991ec;
        case 0x2991f0u: goto label_2991f0;
        case 0x2991f4u: goto label_2991f4;
        case 0x2991f8u: goto label_2991f8;
        case 0x2991fcu: goto label_2991fc;
        case 0x299200u: goto label_299200;
        case 0x299204u: goto label_299204;
        case 0x299208u: goto label_299208;
        case 0x29920cu: goto label_29920c;
        case 0x299210u: goto label_299210;
        case 0x299214u: goto label_299214;
        case 0x299218u: goto label_299218;
        case 0x29921cu: goto label_29921c;
        default: break;
    }

    ctx->pc = 0x299100u;

label_299100:
    // 0x299100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_299104:
    // 0x299104: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x299104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_299108:
    // 0x299108: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x299108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_29910c:
    // 0x29910c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x29910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_299110:
    // 0x299110: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x299110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_299114:
    // 0x299114: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x299114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_299118:
    // 0x299118: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x299118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_29911c:
    // 0x29911c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x29911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_299120:
    // 0x299120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_299124:
    // 0x299124: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x299124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_299128:
    // 0x299128: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x299128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_29912c:
    // 0x29912c: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_299130:
    if (ctx->pc == 0x299130u) {
        ctx->pc = 0x299130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29912Cu;
        // 0x299130: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299134u;
        goto label_299134;
    }
    ctx->pc = 0x29912Cu;
    {
        const bool branch_taken_0x29912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29912c) {
            ctx->pc = 0x299130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29912Cu;
            // 0x299130: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2991FCu;
            goto label_2991fc;
        }
    }
    ctx->pc = 0x299134u;
label_299134:
    // 0x299134: 0xc0a5a72  jal         func_2969C8
label_299138:
    if (ctx->pc == 0x299138u) {
        ctx->pc = 0x29913Cu;
        goto label_29913c;
    }
    ctx->pc = 0x299134u;
    SET_GPR_U32(ctx, 31, 0x29913Cu);
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x299134u, 0x29913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29913Cu;
label_29913c:
    // 0x29913c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x29913cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_299140:
    // 0x299140: 0x26740284  addiu       $s4, $s3, 0x284
    ctx->pc = 0x299140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_299144:
    // 0x299144: 0xc0a6794  jal         func_299E50
label_299148:
    if (ctx->pc == 0x299148u) {
        ctx->pc = 0x299148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299144u;
        // 0x299148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29914Cu;
        goto label_29914c;
    }
    ctx->pc = 0x299144u;
    SET_GPR_U32(ctx, 31, 0x29914Cu);
    ctx->pc = 0x299148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299144u;
    // 0x299148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E50u, 0x299144u, 0x29914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29914Cu;
label_29914c:
    // 0x29914c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_299150:
    if (ctx->pc == 0x299150u) {
        ctx->pc = 0x299150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29914Cu;
        // 0x299150: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299154u;
        goto label_299154;
    }
    ctx->pc = 0x29914Cu;
    {
        const bool branch_taken_0x29914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29914c) {
            ctx->pc = 0x299150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29914Cu;
            // 0x299150: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2991FCu;
            goto label_2991fc;
        }
    }
    ctx->pc = 0x299154u;
label_299154:
    // 0x299154: 0xc08a61a  jal         func_229868
label_299158:
    if (ctx->pc == 0x299158u) {
        ctx->pc = 0x299158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299154u;
        // 0x299158: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29915Cu;
        goto label_29915c;
    }
    ctx->pc = 0x299154u;
    SET_GPR_U32(ctx, 31, 0x29915Cu);
    ctx->pc = 0x299158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299154u;
    // 0x299158: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x299154u, 0x29915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29915Cu;
label_29915c:
    // 0x29915c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x29915cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_299160:
    // 0x299160: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_299164:
    if (ctx->pc == 0x299164u) {
        ctx->pc = 0x299164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299160u;
        // 0x299164: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299168u;
        goto label_299168;
    }
    ctx->pc = 0x299160u;
    {
        const bool branch_taken_0x299160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x299164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299160u;
        // 0x299164: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299160) {
            ctx->pc = 0x2991F8u;
            goto label_2991f8;
        }
    }
    ctx->pc = 0x299168u;
label_299168:
    // 0x299168: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_29916c:
    if (ctx->pc == 0x29916Cu) {
        ctx->pc = 0x29916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299168u;
        // 0x29916c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299170u;
        goto label_299170;
    }
    ctx->pc = 0x299168u;
    {
        const bool branch_taken_0x299168 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299168u;
        // 0x29916c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299168) {
            ctx->pc = 0x2991FCu;
            goto label_2991fc;
        }
    }
    ctx->pc = 0x299170u;
label_299170:
    // 0x299170: 0xc087502  jal         func_21D408
label_299174:
    if (ctx->pc == 0x299174u) {
        ctx->pc = 0x299174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299170u;
        // 0x299174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299178u;
        goto label_299178;
    }
    ctx->pc = 0x299170u;
    SET_GPR_U32(ctx, 31, 0x299178u);
    ctx->pc = 0x299174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299170u;
    // 0x299174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x299170u, 0x299178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299178u;
label_299178:
    // 0x299178: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x299178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_29917c:
    // 0x29917c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_299180:
    // 0x299180: 0xc087502  jal         func_21D408
label_299184:
    if (ctx->pc == 0x299184u) {
        ctx->pc = 0x299184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299180u;
        // 0x299184: 0x8c70002c  lw          $s0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299188u;
        goto label_299188;
    }
    ctx->pc = 0x299180u;
    SET_GPR_U32(ctx, 31, 0x299188u);
    ctx->pc = 0x299184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299180u;
    // 0x299184: 0x8c70002c  lw          $s0, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x299180u, 0x299188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299188u;
label_299188:
    // 0x299188: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x299188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_29918c:
    // 0x29918c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_299190:
    // 0x299190: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
label_299194:
    if (ctx->pc == 0x299194u) {
        ctx->pc = 0x299194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299190u;
        // 0x299194: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299198u;
        goto label_299198;
    }
    ctx->pc = 0x299190u;
    {
        const bool branch_taken_0x299190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x299194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299190u;
        // 0x299194: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299190) {
            ctx->pc = 0x2991F8u;
            goto label_2991f8;
        }
    }
    ctx->pc = 0x299198u;
label_299198:
    // 0x299198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x299198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29919c:
    // 0x29919c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x29919cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2991a0:
    // 0x2991a0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2991a4:
    // 0x2991a4: 0x60f809  jalr        $v1
label_2991a8:
    if (ctx->pc == 0x2991A8u) {
        ctx->pc = 0x2991A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A4u;
        // 0x2991a8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2991ACu;
        goto label_2991ac;
    }
    ctx->pc = 0x2991A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2991ACu);
        ctx->pc = 0x2991A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A4u;
        // 0x2991a8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2991A4u, 0x2991ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2991ACu;
label_2991ac:
    // 0x2991ac: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2991acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2991b0:
    // 0x2991b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2991b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2991b4:
    // 0x2991b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2991b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2991b8:
    // 0x2991b8: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2991b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
label_2991bc:
    // 0x2991bc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2991c0:
    // 0x2991c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2991c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2991c4:
    // 0x2991c4: 0xc0cd508  jal         func_335420
label_2991c8:
    if (ctx->pc == 0x2991C8u) {
        ctx->pc = 0x2991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991C4u;
        // 0x2991c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2991CCu;
        goto label_2991cc;
    }
    ctx->pc = 0x2991C4u;
    SET_GPR_U32(ctx, 31, 0x2991CCu);
    ctx->pc = 0x2991C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2991C4u;
    // 0x2991c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2991C4u, 0x2991CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2991CCu;
label_2991cc:
    // 0x2991cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2991ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2991d0:
    // 0x2991d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2991d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2991d4:
    // 0x2991d4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2991d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2991d8:
    // 0x2991d8: 0xc0cd4fc  jal         func_3353F0
label_2991dc:
    if (ctx->pc == 0x2991DCu) {
        ctx->pc = 0x2991DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991D8u;
        // 0x2991dc: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2991E0u;
        goto label_2991e0;
    }
    ctx->pc = 0x2991D8u;
    SET_GPR_U32(ctx, 31, 0x2991E0u);
    ctx->pc = 0x2991DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2991D8u;
    // 0x2991dc: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2991D8u, 0x2991E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2991E0u;
label_2991e0:
    // 0x2991e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2991e4:
    // 0x2991e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2991e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2991e8:
    // 0x2991e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2991e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2991ec:
    // 0x2991ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2991ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2991f0:
    // 0x2991f0: 0xc0a67ca  jal         func_299F28
label_2991f4:
    if (ctx->pc == 0x2991F4u) {
        ctx->pc = 0x2991F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991F0u;
        // 0x2991f4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2991F8u;
        goto label_2991f8;
    }
    ctx->pc = 0x2991F0u;
    SET_GPR_U32(ctx, 31, 0x2991F8u);
    ctx->pc = 0x2991F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2991F0u;
    // 0x2991f4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2991F0u, 0x2991F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2991F8u;
label_2991f8:
    // 0x2991f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2991f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2991fc:
    // 0x2991fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2991fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_299200:
    // 0x299200: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x299200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_299204:
    // 0x299204: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x299204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_299208:
    // 0x299208: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x299208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29920c:
    // 0x29920c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_299210:
    // 0x299210: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x299210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_299214:
    // 0x299214: 0x3e00008  jr          $ra
label_299218:
    if (ctx->pc == 0x299218u) {
        ctx->pc = 0x299218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299214u;
        // 0x299218: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29921Cu;
        goto label_29921c;
    }
    ctx->pc = 0x299214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299214u;
        // 0x299218: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29921Cu;
label_29921c:
    // 0x29921c: 0x0  nop
    ctx->pc = 0x29921cu;
    // NOP
    ctx->pc = 0x299220u;
}
