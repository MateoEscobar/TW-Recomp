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

// Function: sub_001753D8
// Address: 0x1753d8 - 0x1754e8
void sub_001753D8_0x1753d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001753D8_0x1753d8");
#endif

    switch (ctx->pc) {
        case 0x1753d8u: goto label_1753d8;
        case 0x1753dcu: goto label_1753dc;
        case 0x1753e0u: goto label_1753e0;
        case 0x1753e4u: goto label_1753e4;
        case 0x1753e8u: goto label_1753e8;
        case 0x1753ecu: goto label_1753ec;
        case 0x1753f0u: goto label_1753f0;
        case 0x1753f4u: goto label_1753f4;
        case 0x1753f8u: goto label_1753f8;
        case 0x1753fcu: goto label_1753fc;
        case 0x175400u: goto label_175400;
        case 0x175404u: goto label_175404;
        case 0x175408u: goto label_175408;
        case 0x17540cu: goto label_17540c;
        case 0x175410u: goto label_175410;
        case 0x175414u: goto label_175414;
        case 0x175418u: goto label_175418;
        case 0x17541cu: goto label_17541c;
        case 0x175420u: goto label_175420;
        case 0x175424u: goto label_175424;
        case 0x175428u: goto label_175428;
        case 0x17542cu: goto label_17542c;
        case 0x175430u: goto label_175430;
        case 0x175434u: goto label_175434;
        case 0x175438u: goto label_175438;
        case 0x17543cu: goto label_17543c;
        case 0x175440u: goto label_175440;
        case 0x175444u: goto label_175444;
        case 0x175448u: goto label_175448;
        case 0x17544cu: goto label_17544c;
        case 0x175450u: goto label_175450;
        case 0x175454u: goto label_175454;
        case 0x175458u: goto label_175458;
        case 0x17545cu: goto label_17545c;
        case 0x175460u: goto label_175460;
        case 0x175464u: goto label_175464;
        case 0x175468u: goto label_175468;
        case 0x17546cu: goto label_17546c;
        case 0x175470u: goto label_175470;
        case 0x175474u: goto label_175474;
        case 0x175478u: goto label_175478;
        case 0x17547cu: goto label_17547c;
        case 0x175480u: goto label_175480;
        case 0x175484u: goto label_175484;
        case 0x175488u: goto label_175488;
        case 0x17548cu: goto label_17548c;
        case 0x175490u: goto label_175490;
        case 0x175494u: goto label_175494;
        case 0x175498u: goto label_175498;
        case 0x17549cu: goto label_17549c;
        case 0x1754a0u: goto label_1754a0;
        case 0x1754a4u: goto label_1754a4;
        case 0x1754a8u: goto label_1754a8;
        case 0x1754acu: goto label_1754ac;
        case 0x1754b0u: goto label_1754b0;
        case 0x1754b4u: goto label_1754b4;
        case 0x1754b8u: goto label_1754b8;
        case 0x1754bcu: goto label_1754bc;
        case 0x1754c0u: goto label_1754c0;
        case 0x1754c4u: goto label_1754c4;
        case 0x1754c8u: goto label_1754c8;
        case 0x1754ccu: goto label_1754cc;
        case 0x1754d0u: goto label_1754d0;
        case 0x1754d4u: goto label_1754d4;
        case 0x1754d8u: goto label_1754d8;
        case 0x1754dcu: goto label_1754dc;
        case 0x1754e0u: goto label_1754e0;
        case 0x1754e4u: goto label_1754e4;
        default: break;
    }

    ctx->pc = 0x1753d8u;

label_1753d8:
    // 0x1753d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1753d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1753dc:
    // 0x1753dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1753dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1753e0:
    // 0x1753e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1753e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1753e4:
    // 0x1753e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1753e8:
    // 0x1753e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1753e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1753ec:
    // 0x1753ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1753ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1753f0:
    // 0x1753f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1753f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1753f4:
    // 0x1753f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1753f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1753f8:
    // 0x1753f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1753f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1753fc:
    // 0x1753fc: 0xc05d45e  jal         func_175178
label_175400:
    if (ctx->pc == 0x175400u) {
        ctx->pc = 0x175400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753FCu;
        // 0x175400: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175404u;
        goto label_175404;
    }
    ctx->pc = 0x1753FCu;
    SET_GPR_U32(ctx, 31, 0x175404u);
    ctx->pc = 0x175400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753FCu;
    // 0x175400: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1753FCu, 0x175404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175404u;
label_175404:
    // 0x175404: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x175404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_175408:
    // 0x175408: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_17540c:
    if (ctx->pc == 0x17540Cu) {
        ctx->pc = 0x175410u;
        goto label_175410;
    }
    ctx->pc = 0x175408u;
    {
        const bool branch_taken_0x175408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175408) {
            ctx->pc = 0x17546Cu;
            goto label_17546c;
        }
    }
    ctx->pc = 0x175410u;
label_175410:
    // 0x175410: 0xc05dfae  jal         func_177EB8
label_175414:
    if (ctx->pc == 0x175414u) {
        ctx->pc = 0x175414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175410u;
        // 0x175414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175418u;
        goto label_175418;
    }
    ctx->pc = 0x175410u;
    SET_GPR_U32(ctx, 31, 0x175418u);
    ctx->pc = 0x175414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175410u;
    // 0x175414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177EB8u, 0x175410u, 0x175418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175418u;
label_175418:
    // 0x175418: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x175418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17541c:
    // 0x17541c: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_175420:
    if (ctx->pc == 0x175420u) {
        ctx->pc = 0x175424u;
        goto label_175424;
    }
    ctx->pc = 0x17541Cu;
    {
        const bool branch_taken_0x17541c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17541c) {
            ctx->pc = 0x17546Cu;
            goto label_17546c;
        }
    }
    ctx->pc = 0x175424u;
label_175424:
    // 0x175424: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175428:
    // 0x175428: 0x84500060  lh          $s0, 0x60($v0)
    ctx->pc = 0x175428u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_17542c:
    // 0x17542c: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_175430:
    // 0x175430: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x175430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_175434:
    // 0x175434: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x175434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_175438:
    // 0x175438: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x175438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_17543c:
    // 0x17543c: 0x60f809  jalr        $v1
label_175440:
    if (ctx->pc == 0x175440u) {
        ctx->pc = 0x175440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17543Cu;
        // 0x175440: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175444u;
        goto label_175444;
    }
    ctx->pc = 0x17543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175444u);
        ctx->pc = 0x175440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17543Cu;
        // 0x175440: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17543Cu, 0x175444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175444u;
label_175444:
    // 0x175444: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175448:
    // 0x175448: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175448u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17544c:
    // 0x17544c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x17544cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_175450:
    // 0x175450: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_175454:
    // 0x175454: 0x60f809  jalr        $v1
label_175458:
    if (ctx->pc == 0x175458u) {
        ctx->pc = 0x175458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175454u;
        // 0x175458: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17545Cu;
        goto label_17545c;
    }
    ctx->pc = 0x175454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17545Cu);
        ctx->pc = 0x175458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175454u;
        // 0x175458: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175454u, 0x17545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17545Cu;
label_17545c:
    // 0x17545c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x17545cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_175460:
    // 0x175460: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x175460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_175464:
    // 0x175464: 0x40f809  jalr        $v0
label_175468:
    if (ctx->pc == 0x175468u) {
        ctx->pc = 0x175468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175464u;
        // 0x175468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17546Cu;
        goto label_17546c;
    }
    ctx->pc = 0x175464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17546Cu);
        ctx->pc = 0x175468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175464u;
        // 0x175468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175464u, 0x17546Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17546Cu;
label_17546c:
    // 0x17546c: 0xc05d45e  jal         func_175178
label_175470:
    if (ctx->pc == 0x175470u) {
        ctx->pc = 0x175470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17546Cu;
        // 0x175470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175474u;
        goto label_175474;
    }
    ctx->pc = 0x17546Cu;
    SET_GPR_U32(ctx, 31, 0x175474u);
    ctx->pc = 0x175470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17546Cu;
    // 0x175470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x17546Cu, 0x175474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175474u;
label_175474:
    // 0x175474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_175478:
    // 0x175478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17547c:
    // 0x17547c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_175480:
    // 0x175480: 0xc05d45e  jal         func_175178
label_175484:
    if (ctx->pc == 0x175484u) {
        ctx->pc = 0x175484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175480u;
        // 0x175484: 0xac5402bc  sw          $s4, 0x2BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175488u;
        goto label_175488;
    }
    ctx->pc = 0x175480u;
    SET_GPR_U32(ctx, 31, 0x175488u);
    ctx->pc = 0x175484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175480u;
    // 0x175484: 0xac5402bc  sw          $s4, 0x2BC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175480u, 0x175488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175488u;
label_175488:
    // 0x175488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17548c:
    // 0x17548c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175490:
    // 0x175490: 0xc05d460  jal         func_175180
label_175494:
    if (ctx->pc == 0x175494u) {
        ctx->pc = 0x175494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175490u;
        // 0x175494: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175498u;
        goto label_175498;
    }
    ctx->pc = 0x175490u;
    SET_GPR_U32(ctx, 31, 0x175498u);
    ctx->pc = 0x175494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175490u;
    // 0x175494: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x175490u, 0x175498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175498u;
label_175498:
    // 0x175498: 0xc05d496  jal         func_175258
label_17549c:
    if (ctx->pc == 0x17549Cu) {
        ctx->pc = 0x17549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175498u;
        // 0x17549c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754A0u;
        goto label_1754a0;
    }
    ctx->pc = 0x175498u;
    SET_GPR_U32(ctx, 31, 0x1754A0u);
    ctx->pc = 0x17549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175498u;
    // 0x17549c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175258u, 0x175498u, 0x1754A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1754a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1754a4:
    // 0x1754a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1754a8:
    if (ctx->pc == 0x1754A8u) {
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754ACu;
        goto label_1754ac;
    }
    ctx->pc = 0x1754A4u;
    {
        const bool branch_taken_0x1754a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754a4) {
            ctx->pc = 0x1754C0u;
            goto label_1754c0;
        }
    }
    ctx->pc = 0x1754ACu;
label_1754ac:
    // 0x1754ac: 0x8e6202b8  lw          $v0, 0x2B8($s3)
    ctx->pc = 0x1754acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_1754b0:
    // 0x1754b0: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1754b4:
    // 0x1754b4: 0x24a600c0  addiu       $a2, $a1, 0xC0
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_1754b8:
    // 0x1754b8: 0xc05d4b2  jal         func_1752C8
label_1754bc:
    if (ctx->pc == 0x1754BCu) {
        ctx->pc = 0x1754BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754B8u;
        // 0x1754bc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754C0u;
        goto label_1754c0;
    }
    ctx->pc = 0x1754B8u;
    SET_GPR_U32(ctx, 31, 0x1754C0u);
    ctx->pc = 0x1754BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754B8u;
    // 0x1754bc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1752C8u, 0x1754B8u, 0x1754C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754C0u;
label_1754c0:
    // 0x1754c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1754c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1754c4:
    // 0x1754c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1754c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1754c8:
    // 0x1754c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1754c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1754cc:
    // 0x1754cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1754ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1754d0:
    // 0x1754d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1754d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1754d4:
    // 0x1754d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1754d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1754d8:
    // 0x1754d8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1754d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1754dc:
    // 0x1754dc: 0x3e00008  jr          $ra
label_1754e0:
    if (ctx->pc == 0x1754E0u) {
        ctx->pc = 0x1754E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754DCu;
        // 0x1754e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754E4u;
        goto label_1754e4;
    }
    ctx->pc = 0x1754DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754DCu;
        // 0x1754e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1754DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1754E4u;
label_1754e4:
    // 0x1754e4: 0x0  nop
    ctx->pc = 0x1754e4u;
    // NOP
    ctx->pc = 0x1754e8u;
}
