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

// Function: sub_001C80E8
// Address: 0x1c80e8 - 0x1c81e8
void sub_001C80E8_0x1c80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C80E8_0x1c80e8");
#endif

    switch (ctx->pc) {
        case 0x1c80e8u: goto label_1c80e8;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80f0u: goto label_1c80f0;
        case 0x1c80f4u: goto label_1c80f4;
        case 0x1c80f8u: goto label_1c80f8;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c8100u: goto label_1c8100;
        case 0x1c8104u: goto label_1c8104;
        case 0x1c8108u: goto label_1c8108;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8110u: goto label_1c8110;
        case 0x1c8114u: goto label_1c8114;
        case 0x1c8118u: goto label_1c8118;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8120u: goto label_1c8120;
        case 0x1c8124u: goto label_1c8124;
        case 0x1c8128u: goto label_1c8128;
        case 0x1c812cu: goto label_1c812c;
        case 0x1c8130u: goto label_1c8130;
        case 0x1c8134u: goto label_1c8134;
        case 0x1c8138u: goto label_1c8138;
        case 0x1c813cu: goto label_1c813c;
        case 0x1c8140u: goto label_1c8140;
        case 0x1c8144u: goto label_1c8144;
        case 0x1c8148u: goto label_1c8148;
        case 0x1c814cu: goto label_1c814c;
        case 0x1c8150u: goto label_1c8150;
        case 0x1c8154u: goto label_1c8154;
        case 0x1c8158u: goto label_1c8158;
        case 0x1c815cu: goto label_1c815c;
        case 0x1c8160u: goto label_1c8160;
        case 0x1c8164u: goto label_1c8164;
        case 0x1c8168u: goto label_1c8168;
        case 0x1c816cu: goto label_1c816c;
        case 0x1c8170u: goto label_1c8170;
        case 0x1c8174u: goto label_1c8174;
        case 0x1c8178u: goto label_1c8178;
        case 0x1c817cu: goto label_1c817c;
        case 0x1c8180u: goto label_1c8180;
        case 0x1c8184u: goto label_1c8184;
        case 0x1c8188u: goto label_1c8188;
        case 0x1c818cu: goto label_1c818c;
        case 0x1c8190u: goto label_1c8190;
        case 0x1c8194u: goto label_1c8194;
        case 0x1c8198u: goto label_1c8198;
        case 0x1c819cu: goto label_1c819c;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81a4u: goto label_1c81a4;
        case 0x1c81a8u: goto label_1c81a8;
        case 0x1c81acu: goto label_1c81ac;
        case 0x1c81b0u: goto label_1c81b0;
        case 0x1c81b4u: goto label_1c81b4;
        case 0x1c81b8u: goto label_1c81b8;
        case 0x1c81bcu: goto label_1c81bc;
        case 0x1c81c0u: goto label_1c81c0;
        case 0x1c81c4u: goto label_1c81c4;
        case 0x1c81c8u: goto label_1c81c8;
        case 0x1c81ccu: goto label_1c81cc;
        case 0x1c81d0u: goto label_1c81d0;
        case 0x1c81d4u: goto label_1c81d4;
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81dcu: goto label_1c81dc;
        case 0x1c81e0u: goto label_1c81e0;
        case 0x1c81e4u: goto label_1c81e4;
        default: break;
    }

    ctx->pc = 0x1c80e8u;

label_1c80e8:
    // 0x1c80e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c80e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c80ec:
    // 0x1c80ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c80ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c80f0:
    // 0x1c80f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c80f4:
    // 0x1c80f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c80f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c80f8:
    // 0x1c80f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c80f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c80fc:
    // 0x1c80fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8100:
    // 0x1c8100: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8104:
    // 0x1c8104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8108:
    // 0x1c8108: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1c810c:
    if (ctx->pc == 0x1C810Cu) {
        ctx->pc = 0x1C810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8108u;
        // 0x1c810c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8110u;
        goto label_1c8110;
    }
    ctx->pc = 0x1C8108u;
    {
        const bool branch_taken_0x1c8108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8108u;
        // 0x1c810c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8108) {
            ctx->pc = 0x1C812Cu;
            goto label_1c812c;
        }
    }
    ctx->pc = 0x1C8110u;
label_1c8110:
    // 0x1c8110: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c8110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c8114:
    // 0x1c8114: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c8118:
    // 0x1c8118: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1c8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c811c:
    // 0x1c811c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1c811cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1c8120:
    // 0x1c8120: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1c8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1c8124:
    // 0x1c8124: 0x60f809  jalr        $v1
label_1c8128:
    if (ctx->pc == 0x1C8128u) {
        ctx->pc = 0x1C8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8124u;
        // 0x1c8128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C812Cu;
        goto label_1c812c;
    }
    ctx->pc = 0x1C8124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C812Cu);
        ctx->pc = 0x1C8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8124u;
        // 0x1c8128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8124u, 0x1C812Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C812Cu;
label_1c812c:
    // 0x1c812c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8130:
    // 0x1c8130: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1c8130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1c8134:
    // 0x1c8134: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1c8134u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c8138:
    // 0x1c8138: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c813c:
    // 0x1c813c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c8140:
    // 0x1c8140: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c8140u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c8144:
    // 0x1c8144: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1c8144u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1c8148:
    // 0x1c8148: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x1c8148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_1c814c:
    // 0x1c814c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8150:
    // 0x1c8150: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x1c8150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_1c8154:
    // 0x1c8154: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x1c8154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_1c8158:
    // 0x1c8158: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c8158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c815c:
    // 0x1c815c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1c815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1c8160:
    // 0x1c8160: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c8160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8164:
    // 0x1c8164: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1c8164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1c8168:
    // 0x1c8168: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8168u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c816c:
    // 0x1c816c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c8170:
    // 0x1c8170: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c8170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c8174:
    // 0x1c8174: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c8178:
    // 0x1c8178: 0x40f809  jalr        $v0
label_1c817c:
    if (ctx->pc == 0x1C817Cu) {
        ctx->pc = 0x1C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8178u;
        // 0x1c817c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8180u;
        goto label_1c8180;
    }
    ctx->pc = 0x1C8178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8180u);
        ctx->pc = 0x1C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8178u;
        // 0x1c817c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8178u, 0x1C8180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8180u;
label_1c8180:
    // 0x1c8180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8184:
    // 0x1c8184: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1c8188:
    // 0x1c8188: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c818c:
    if (ctx->pc == 0x1C818Cu) {
        ctx->pc = 0x1C818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8188u;
        // 0x1c818c: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8190u;
        goto label_1c8190;
    }
    ctx->pc = 0x1C8188u;
    {
        const bool branch_taken_0x1c8188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8188) {
            ctx->pc = 0x1C818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8188u;
            // 0x1c818c: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8190u;
            goto label_1c8190;
        }
    }
    ctx->pc = 0x1C8190u;
label_1c8190:
    // 0x1c8190: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c8190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8194:
    // 0x1c8194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8198:
    // 0x1c8198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c8198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1c819c:
    // 0x1c819c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c81a0:
    // 0x1c81a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c81a4:
    // 0x1c81a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1c81a8:
    // 0x1c81a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c81ac:
    // 0x1c81ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c81b0:
    // 0x1c81b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1c81b4:
    // 0x1c81b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c81b8:
    // 0x1c81b8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1c81b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1c81bc:
    // 0x1c81bc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c81bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c81c0:
    // 0x1c81c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1c81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c81c4:
    // 0x1c81c4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1c81c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1c81c8:
    // 0x1c81c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c81cc:
    // 0x1c81cc: 0x60f809  jalr        $v1
label_1c81d0:
    if (ctx->pc == 0x1C81D0u) {
        ctx->pc = 0x1C81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81CCu;
        // 0x1c81d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81D4u;
        goto label_1c81d4;
    }
    ctx->pc = 0x1C81CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C81D4u);
        ctx->pc = 0x1C81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81CCu;
        // 0x1c81d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81CCu, 0x1C81D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C81D4u;
label_1c81d4:
    // 0x1c81d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c81d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c81d8:
    // 0x1c81d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c81d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c81dc:
    // 0x1c81dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c81dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c81e0:
    // 0x1c81e0: 0x3e00008  jr          $ra
label_1c81e4:
    if (ctx->pc == 0x1C81E4u) {
        ctx->pc = 0x1C81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E0u;
        // 0x1c81e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81E8u;
        goto label_fallthrough_0x1c81e0;
    }
    ctx->pc = 0x1C81E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E0u;
        // 0x1c81e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c81e0:
    ctx->pc = 0x1C81E8u;
}
