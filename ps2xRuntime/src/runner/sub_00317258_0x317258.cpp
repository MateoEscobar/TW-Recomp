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

// Function: sub_00317258
// Address: 0x317258 - 0x317350
void sub_00317258_0x317258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317258_0x317258");
#endif

    switch (ctx->pc) {
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        case 0x3172e0u: goto label_3172e0;
        case 0x3172e4u: goto label_3172e4;
        case 0x3172e8u: goto label_3172e8;
        case 0x3172ecu: goto label_3172ec;
        case 0x3172f0u: goto label_3172f0;
        case 0x3172f4u: goto label_3172f4;
        case 0x3172f8u: goto label_3172f8;
        case 0x3172fcu: goto label_3172fc;
        case 0x317300u: goto label_317300;
        case 0x317304u: goto label_317304;
        case 0x317308u: goto label_317308;
        case 0x31730cu: goto label_31730c;
        case 0x317310u: goto label_317310;
        case 0x317314u: goto label_317314;
        case 0x317318u: goto label_317318;
        case 0x31731cu: goto label_31731c;
        case 0x317320u: goto label_317320;
        case 0x317324u: goto label_317324;
        case 0x317328u: goto label_317328;
        case 0x31732cu: goto label_31732c;
        case 0x317330u: goto label_317330;
        case 0x317334u: goto label_317334;
        case 0x317338u: goto label_317338;
        case 0x31733cu: goto label_31733c;
        case 0x317340u: goto label_317340;
        case 0x317344u: goto label_317344;
        case 0x317348u: goto label_317348;
        case 0x31734cu: goto label_31734c;
        default: break;
    }

    ctx->pc = 0x317258u;

label_317258:
    // 0x317258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x317258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31725c:
    // 0x31725c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_317260:
    // 0x317260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x317260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317264:
    // 0x317264: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x317264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_317268:
    // 0x317268: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x317268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31726c:
    // 0x31726c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_317270:
    // 0x317270: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x317270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_317274:
    // 0x317274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_317278:
    // 0x317278: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31727c:
    // 0x31727c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x31727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_317280:
    // 0x317280: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x317280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_317284:
    // 0x317284: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x317284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_317288:
    // 0x317288: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_31728c:
    if (ctx->pc == 0x31728Cu) {
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317290u;
        goto label_317290;
    }
    ctx->pc = 0x317288u;
    {
        const bool branch_taken_0x317288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317288) {
            ctx->pc = 0x317330u;
            goto label_317330;
        }
    }
    ctx->pc = 0x317290u;
label_317290:
    // 0x317290: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x317290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_317294:
    // 0x317294: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x317294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_317298:
    // 0x317298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31729c:
    // 0x31729c: 0x24720048  addiu       $s2, $v1, 0x48
    ctx->pc = 0x31729cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_3172a0:
    // 0x3172a0: 0x24130052  addiu       $s3, $zero, 0x52
    ctx->pc = 0x3172a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3172a4:
    // 0x3172a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3172a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3172a8:
    // 0x3172a8: 0xc137826  jal         func_4DE098
label_3172ac:
    if (ctx->pc == 0x3172ACu) {
        ctx->pc = 0x3172ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172A8u;
        // 0x3172ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172B0u;
        goto label_3172b0;
    }
    ctx->pc = 0x3172A8u;
    SET_GPR_U32(ctx, 31, 0x3172B0u);
    ctx->pc = 0x3172ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172A8u;
    // 0x3172ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3172A8u, 0x3172B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172B0u;
label_3172b0:
    // 0x3172b0: 0xc0e409a  jal         func_390268
label_3172b4:
    if (ctx->pc == 0x3172B4u) {
        ctx->pc = 0x3172B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172B0u;
        // 0x3172b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172B8u;
        goto label_3172b8;
    }
    ctx->pc = 0x3172B0u;
    SET_GPR_U32(ctx, 31, 0x3172B8u);
    ctx->pc = 0x3172B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172B0u;
    // 0x3172b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3172B0u, 0x3172B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172B8u;
label_3172b8:
    // 0x3172b8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_3172bc:
    if (ctx->pc == 0x3172BCu) {
        ctx->pc = 0x3172BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172B8u;
        // 0x3172bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172C0u;
        goto label_3172c0;
    }
    ctx->pc = 0x3172B8u;
    {
        const bool branch_taken_0x3172b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3172b8) {
            ctx->pc = 0x3172BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3172B8u;
            // 0x3172bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317324u;
            goto label_317324;
        }
    }
    ctx->pc = 0x3172C0u;
label_3172c0:
    // 0x3172c0: 0xc087502  jal         func_21D408
label_3172c4:
    if (ctx->pc == 0x3172C4u) {
        ctx->pc = 0x3172C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172C0u;
        // 0x3172c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172C8u;
        goto label_3172c8;
    }
    ctx->pc = 0x3172C0u;
    SET_GPR_U32(ctx, 31, 0x3172C8u);
    ctx->pc = 0x3172C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172C0u;
    // 0x3172c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3172C0u, 0x3172C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172C8u;
label_3172c8:
    // 0x3172c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3172c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3172cc:
    // 0x3172cc: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x3172ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_3172d0:
    // 0x3172d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3172d4:
    if (ctx->pc == 0x3172D4u) {
        ctx->pc = 0x3172D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172D0u;
        // 0x3172d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172D8u;
        goto label_3172d8;
    }
    ctx->pc = 0x3172D0u;
    {
        const bool branch_taken_0x3172d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3172D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172D0u;
        // 0x3172d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172d0) {
            ctx->pc = 0x3172E4u;
            goto label_3172e4;
        }
    }
    ctx->pc = 0x3172D8u;
label_3172d8:
    // 0x3172d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3172dc:
    // 0x3172dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3172e0:
    if (ctx->pc == 0x3172E0u) {
        ctx->pc = 0x3172E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172DCu;
        // 0x3172e0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172E4u;
        goto label_3172e4;
    }
    ctx->pc = 0x3172DCu;
    {
        const bool branch_taken_0x3172dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172DCu;
        // 0x3172e0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172dc) {
            ctx->pc = 0x3172E8u;
            goto label_3172e8;
        }
    }
    ctx->pc = 0x3172E4u;
label_3172e4:
    // 0x3172e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3172e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3172e8:
    // 0x3172e8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_3172ec:
    if (ctx->pc == 0x3172ECu) {
        ctx->pc = 0x3172ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172E8u;
        // 0x3172ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172F0u;
        goto label_3172f0;
    }
    ctx->pc = 0x3172E8u;
    {
        const bool branch_taken_0x3172e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3172e8) {
            ctx->pc = 0x3172ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3172E8u;
            // 0x3172ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317324u;
            goto label_317324;
        }
    }
    ctx->pc = 0x3172F0u;
label_3172f0:
    // 0x3172f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3172f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3172f4:
    // 0x3172f4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3172f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3172f8:
    // 0x3172f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3172f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3172fc:
    // 0x3172fc: 0x40f809  jalr        $v0
label_317300:
    if (ctx->pc == 0x317300u) {
        ctx->pc = 0x317300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172FCu;
        // 0x317300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317304u;
        goto label_317304;
    }
    ctx->pc = 0x3172FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317304u);
        ctx->pc = 0x317300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172FCu;
        // 0x317300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3172FCu, 0x317304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317304u;
label_317304:
    // 0x317304: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_317308:
    if (ctx->pc == 0x317308u) {
        ctx->pc = 0x317308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317304u;
        // 0x317308: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31730Cu;
        goto label_31730c;
    }
    ctx->pc = 0x317304u;
    {
        const bool branch_taken_0x317304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x317308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317304u;
        // 0x317308: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317304) {
            ctx->pc = 0x317324u;
            goto label_317324;
        }
    }
    ctx->pc = 0x31730Cu;
label_31730c:
    // 0x31730c: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x31730cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_317310:
    // 0x317310: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x317310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_317314:
    // 0x317314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_317318:
    if (ctx->pc == 0x317318u) {
        ctx->pc = 0x317318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317314u;
        // 0x317318: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31731Cu;
        goto label_31731c;
    }
    ctx->pc = 0x317314u;
    {
        const bool branch_taken_0x317314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317314u;
        // 0x317318: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317314) {
            ctx->pc = 0x317328u;
            goto label_317328;
        }
    }
    ctx->pc = 0x31731Cu;
label_31731c:
    // 0x31731c: 0x10000005  b           . + 4 + (0x5 << 2)
label_317320:
    if (ctx->pc == 0x317320u) {
        ctx->pc = 0x317320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31731Cu;
        // 0x317320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317324u;
        goto label_317324;
    }
    ctx->pc = 0x31731Cu;
    {
        const bool branch_taken_0x31731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31731Cu;
        // 0x317320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31731c) {
            ctx->pc = 0x317334u;
            goto label_317334;
        }
    }
    ctx->pc = 0x317324u;
label_317324:
    // 0x317324: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_317328:
    // 0x317328: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_31732c:
    if (ctx->pc == 0x31732Cu) {
        ctx->pc = 0x31732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317328u;
        // 0x31732c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317330u;
        goto label_317330;
    }
    ctx->pc = 0x317328u;
    {
        const bool branch_taken_0x317328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317328u;
        // 0x31732c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317328) {
            ctx->pc = 0x3172A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3172a8;
        }
    }
    ctx->pc = 0x317330u;
label_317330:
    // 0x317330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317334:
    // 0x317334: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x317334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_317338:
    // 0x317338: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x317338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31733c:
    // 0x31733c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31733cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_317340:
    // 0x317340: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x317340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317344:
    // 0x317344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317348:
    // 0x317348: 0x3e00008  jr          $ra
label_31734c:
    if (ctx->pc == 0x31734Cu) {
        ctx->pc = 0x31734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317348u;
        // 0x31734c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317350u;
        goto label_fallthrough_0x317348;
    }
    ctx->pc = 0x317348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317348u;
        // 0x31734c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x317348:
    ctx->pc = 0x317350u;
}
