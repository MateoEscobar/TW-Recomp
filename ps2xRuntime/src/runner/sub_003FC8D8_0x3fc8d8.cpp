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

// Function: sub_003FC8D8
// Address: 0x3fc8d8 - 0x3fca48
void sub_003FC8D8_0x3fc8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC8D8_0x3fc8d8");
#endif

    switch (ctx->pc) {
        case 0x3fc8d8u: goto label_3fc8d8;
        case 0x3fc8dcu: goto label_3fc8dc;
        case 0x3fc8e0u: goto label_3fc8e0;
        case 0x3fc8e4u: goto label_3fc8e4;
        case 0x3fc8e8u: goto label_3fc8e8;
        case 0x3fc8ecu: goto label_3fc8ec;
        case 0x3fc8f0u: goto label_3fc8f0;
        case 0x3fc8f4u: goto label_3fc8f4;
        case 0x3fc8f8u: goto label_3fc8f8;
        case 0x3fc8fcu: goto label_3fc8fc;
        case 0x3fc900u: goto label_3fc900;
        case 0x3fc904u: goto label_3fc904;
        case 0x3fc908u: goto label_3fc908;
        case 0x3fc90cu: goto label_3fc90c;
        case 0x3fc910u: goto label_3fc910;
        case 0x3fc914u: goto label_3fc914;
        case 0x3fc918u: goto label_3fc918;
        case 0x3fc91cu: goto label_3fc91c;
        case 0x3fc920u: goto label_3fc920;
        case 0x3fc924u: goto label_3fc924;
        case 0x3fc928u: goto label_3fc928;
        case 0x3fc92cu: goto label_3fc92c;
        case 0x3fc930u: goto label_3fc930;
        case 0x3fc934u: goto label_3fc934;
        case 0x3fc938u: goto label_3fc938;
        case 0x3fc93cu: goto label_3fc93c;
        case 0x3fc940u: goto label_3fc940;
        case 0x3fc944u: goto label_3fc944;
        case 0x3fc948u: goto label_3fc948;
        case 0x3fc94cu: goto label_3fc94c;
        case 0x3fc950u: goto label_3fc950;
        case 0x3fc954u: goto label_3fc954;
        case 0x3fc958u: goto label_3fc958;
        case 0x3fc95cu: goto label_3fc95c;
        case 0x3fc960u: goto label_3fc960;
        case 0x3fc964u: goto label_3fc964;
        case 0x3fc968u: goto label_3fc968;
        case 0x3fc96cu: goto label_3fc96c;
        case 0x3fc970u: goto label_3fc970;
        case 0x3fc974u: goto label_3fc974;
        case 0x3fc978u: goto label_3fc978;
        case 0x3fc97cu: goto label_3fc97c;
        case 0x3fc980u: goto label_3fc980;
        case 0x3fc984u: goto label_3fc984;
        case 0x3fc988u: goto label_3fc988;
        case 0x3fc98cu: goto label_3fc98c;
        case 0x3fc990u: goto label_3fc990;
        case 0x3fc994u: goto label_3fc994;
        case 0x3fc998u: goto label_3fc998;
        case 0x3fc99cu: goto label_3fc99c;
        case 0x3fc9a0u: goto label_3fc9a0;
        case 0x3fc9a4u: goto label_3fc9a4;
        case 0x3fc9a8u: goto label_3fc9a8;
        case 0x3fc9acu: goto label_3fc9ac;
        case 0x3fc9b0u: goto label_3fc9b0;
        case 0x3fc9b4u: goto label_3fc9b4;
        case 0x3fc9b8u: goto label_3fc9b8;
        case 0x3fc9bcu: goto label_3fc9bc;
        case 0x3fc9c0u: goto label_3fc9c0;
        case 0x3fc9c4u: goto label_3fc9c4;
        case 0x3fc9c8u: goto label_3fc9c8;
        case 0x3fc9ccu: goto label_3fc9cc;
        case 0x3fc9d0u: goto label_3fc9d0;
        case 0x3fc9d4u: goto label_3fc9d4;
        case 0x3fc9d8u: goto label_3fc9d8;
        case 0x3fc9dcu: goto label_3fc9dc;
        case 0x3fc9e0u: goto label_3fc9e0;
        case 0x3fc9e4u: goto label_3fc9e4;
        case 0x3fc9e8u: goto label_3fc9e8;
        case 0x3fc9ecu: goto label_3fc9ec;
        case 0x3fc9f0u: goto label_3fc9f0;
        case 0x3fc9f4u: goto label_3fc9f4;
        case 0x3fc9f8u: goto label_3fc9f8;
        case 0x3fc9fcu: goto label_3fc9fc;
        case 0x3fca00u: goto label_3fca00;
        case 0x3fca04u: goto label_3fca04;
        case 0x3fca08u: goto label_3fca08;
        case 0x3fca0cu: goto label_3fca0c;
        case 0x3fca10u: goto label_3fca10;
        case 0x3fca14u: goto label_3fca14;
        case 0x3fca18u: goto label_3fca18;
        case 0x3fca1cu: goto label_3fca1c;
        case 0x3fca20u: goto label_3fca20;
        case 0x3fca24u: goto label_3fca24;
        case 0x3fca28u: goto label_3fca28;
        case 0x3fca2cu: goto label_3fca2c;
        case 0x3fca30u: goto label_3fca30;
        case 0x3fca34u: goto label_3fca34;
        case 0x3fca38u: goto label_3fca38;
        case 0x3fca3cu: goto label_3fca3c;
        case 0x3fca40u: goto label_3fca40;
        case 0x3fca44u: goto label_3fca44;
        default: break;
    }

    ctx->pc = 0x3fc8d8u;

label_3fc8d8:
    // 0x3fc8d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3fc8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3fc8dc:
    // 0x3fc8dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3fc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3fc8e0:
    // 0x3fc8e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3fc8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3fc8e4:
    // 0x3fc8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fc8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fc8e8:
    // 0x3fc8e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc8ec:
    // 0x3fc8ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3fc8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3fc8f0:
    // 0x3fc8f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3fc8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fc8f4:
    // 0x3fc8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fc8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fc8f8:
    // 0x3fc8f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fc8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc8fc:
    // 0x3fc8fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fc8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fc900:
    // 0x3fc900: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fc900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fc904:
    // 0x3fc904: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fc908:
    // 0x3fc908: 0x40f809  jalr        $v0
label_3fc90c:
    if (ctx->pc == 0x3FC90Cu) {
        ctx->pc = 0x3FC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC908u;
        // 0x3fc90c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC910u;
        goto label_3fc910;
    }
    ctx->pc = 0x3FC908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FC910u);
        ctx->pc = 0x3FC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC908u;
        // 0x3fc90c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC908u, 0x3FC910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC910u;
label_3fc910:
    // 0x3fc910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fc910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc914:
    // 0x3fc914: 0x2e620042  sltiu       $v0, $s3, 0x42
    ctx->pc = 0x3fc914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
label_3fc918:
    // 0x3fc918: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3fc91c:
    if (ctx->pc == 0x3FC91Cu) {
        ctx->pc = 0x3FC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC918u;
        // 0x3fc91c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC920u;
        goto label_3fc920;
    }
    ctx->pc = 0x3FC918u;
    {
        const bool branch_taken_0x3fc918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC918u;
        // 0x3fc91c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc918) {
            ctx->pc = 0x3FCA48u;
            return;
        }
    }
    ctx->pc = 0x3FC920u;
label_3fc920:
    // 0x3fc920: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3fc920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3fc924:
    // 0x3fc924: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x3fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
label_3fc928:
    // 0x3fc928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc92c:
    // 0x3fc92c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc930:
    // 0x3fc930: 0x800008  jr          $a0
label_3fc934:
    if (ctx->pc == 0x3FC934u) {
        ctx->pc = 0x3FC938u;
        goto label_3fc938;
    }
    ctx->pc = 0x3FC930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FC938u: goto label_3fc938;
            case 0x3FC95Cu: goto label_3fc95c;
            case 0x3FC98Cu: goto label_3fc98c;
            case 0x3FC998u: goto label_3fc998;
            case 0x3FC9B0u: goto label_3fc9b0;
            case 0x3FC9C8u: goto label_3fc9c8;
            case 0x3FC9E0u: goto label_3fc9e0;
            case 0x3FC9F0u: goto label_3fc9f0;
            case 0x3FC9FCu: goto label_3fc9fc;
            case 0x3FCA08u: goto label_3fca08;
            case 0x3FCA18u: goto label_3fca18;
            case 0x3FCA30u: goto label_3fca30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FC938u;
label_3fc938:
    // 0x3fc938: 0xc0e93de  jal         func_3A4F78
label_3fc93c:
    if (ctx->pc == 0x3FC93Cu) {
        ctx->pc = 0x3FC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC938u;
        // 0x3fc93c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC940u;
        goto label_3fc940;
    }
    ctx->pc = 0x3FC938u;
    SET_GPR_U32(ctx, 31, 0x3FC940u);
    ctx->pc = 0x3FC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC938u;
    // 0x3fc93c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3FC938u, 0x3FC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC940u;
label_3fc940:
    // 0x3fc940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fc940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fc944:
    // 0x3fc944: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fc944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fc948:
    // 0x3fc948: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3fc948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fc94c:
    // 0x3fc94c: 0x40f809  jalr        $v0
label_3fc950:
    if (ctx->pc == 0x3FC950u) {
        ctx->pc = 0x3FC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC94Cu;
        // 0x3fc950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC954u;
        goto label_3fc954;
    }
    ctx->pc = 0x3FC94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FC954u);
        ctx->pc = 0x3FC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC94Cu;
        // 0x3fc950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FC938u: goto label_3fc938;
            case 0x3FC95Cu: goto label_3fc95c;
            case 0x3FC9B0u: goto label_3fc9b0;
            case 0x3FC9C8u: goto label_3fc9c8;
            case 0x3FC9E0u: goto label_3fc9e0;
            case 0x3FC9F0u: goto label_3fc9f0;
            case 0x3FC9FCu: goto label_3fc9fc;
            case 0x3FCA08u: goto label_3fca08;
            case 0x3FCA18u: goto label_3fca18;
            case 0x3FCA30u: goto label_3fca30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC94Cu, 0x3FC954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC954u;
label_3fc954:
    // 0x3fc954: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3fc958:
    if (ctx->pc == 0x3FC958u) {
        ctx->pc = 0x3FC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC954u;
        // 0x3fc958: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC95Cu;
        goto label_3fc95c;
    }
    ctx->pc = 0x3FC954u;
    {
        const bool branch_taken_0x3fc954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC954u;
        // 0x3fc958: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc954) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FC95Cu;
label_3fc95c:
    // 0x3fc95c: 0xc0ea13a  jal         func_3A84E8
label_3fc960:
    if (ctx->pc == 0x3FC960u) {
        ctx->pc = 0x3FC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC95Cu;
        // 0x3fc960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC964u;
        goto label_3fc964;
    }
    ctx->pc = 0x3FC95Cu;
    SET_GPR_U32(ctx, 31, 0x3FC964u);
    ctx->pc = 0x3FC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC95Cu;
    // 0x3fc960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3FC95Cu, 0x3FC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC964u;
label_3fc964:
    // 0x3fc964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc968:
    // 0x3fc968: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fc968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fc96c:
    // 0x3fc96c: 0xc0e9636  jal         func_3A58D8
label_3fc970:
    if (ctx->pc == 0x3FC970u) {
        ctx->pc = 0x3FC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC96Cu;
        // 0x3fc970: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC974u;
        goto label_3fc974;
    }
    ctx->pc = 0x3FC96Cu;
    SET_GPR_U32(ctx, 31, 0x3FC974u);
    ctx->pc = 0x3FC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC96Cu;
    // 0x3fc970: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FC96Cu, 0x3FC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC974u;
label_3fc974:
    // 0x3fc974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc978:
    // 0x3fc978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc97c:
    // 0x3fc97c: 0xc0fefa6  jal         func_3FBE98
label_3fc980:
    if (ctx->pc == 0x3FC980u) {
        ctx->pc = 0x3FC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC97Cu;
        // 0x3fc980: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC984u;
        goto label_3fc984;
    }
    ctx->pc = 0x3FC97Cu;
    SET_GPR_U32(ctx, 31, 0x3FC984u);
    ctx->pc = 0x3FC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC97Cu;
    // 0x3fc980: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBE98u, 0x3FC97Cu, 0x3FC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC984u;
label_3fc984:
    // 0x3fc984: 0x10000031  b           . + 4 + (0x31 << 2)
label_3fc988:
    if (ctx->pc == 0x3FC988u) {
        ctx->pc = 0x3FC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC984u;
        // 0x3fc988: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC98Cu;
        goto label_3fc98c;
    }
    ctx->pc = 0x3FC984u;
    {
        const bool branch_taken_0x3fc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC984u;
        // 0x3fc988: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc984) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FC98Cu;
label_3fc98c:
    // 0x3fc98c: 0xc0ea14c  jal         func_3A8530
label_3fc990:
    if (ctx->pc == 0x3FC990u) {
        ctx->pc = 0x3FC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC98Cu;
        // 0x3fc990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC994u;
        goto label_3fc994;
    }
    ctx->pc = 0x3FC98Cu;
    SET_GPR_U32(ctx, 31, 0x3FC994u);
    ctx->pc = 0x3FC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC98Cu;
    // 0x3fc990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FC98Cu, 0x3FC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC994u;
label_3fc994:
    // 0x3fc994: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3fc994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_3fc998:
    // 0x3fc998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc99c:
    // 0x3fc99c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9a0:
    // 0x3fc9a0: 0xc0ff0ac  jal         func_3FC2B0
label_3fc9a4:
    if (ctx->pc == 0x3FC9A4u) {
        ctx->pc = 0x3FC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9A0u;
        // 0x3fc9a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9A8u;
        goto label_3fc9a8;
    }
    ctx->pc = 0x3FC9A0u;
    SET_GPR_U32(ctx, 31, 0x3FC9A8u);
    ctx->pc = 0x3FC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC9A0u;
    // 0x3fc9a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC2B0u, 0x3FC9A0u, 0x3FC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC9A8u;
label_3fc9a8:
    // 0x3fc9a8: 0x10000028  b           . + 4 + (0x28 << 2)
label_3fc9ac:
    if (ctx->pc == 0x3FC9ACu) {
        ctx->pc = 0x3FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9A8u;
        // 0x3fc9ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9B0u;
        goto label_3fc9b0;
    }
    ctx->pc = 0x3FC9A8u;
    {
        const bool branch_taken_0x3fc9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9A8u;
        // 0x3fc9ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc9a8) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FC9B0u;
label_3fc9b0:
    // 0x3fc9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9b4:
    // 0x3fc9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9b8:
    // 0x3fc9b8: 0xc0ff11e  jal         func_3FC478
label_3fc9bc:
    if (ctx->pc == 0x3FC9BCu) {
        ctx->pc = 0x3FC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9B8u;
        // 0x3fc9bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9C0u;
        goto label_3fc9c0;
    }
    ctx->pc = 0x3FC9B8u;
    SET_GPR_U32(ctx, 31, 0x3FC9C0u);
    ctx->pc = 0x3FC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC9B8u;
    // 0x3fc9bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC478u, 0x3FC9B8u, 0x3FC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC9C0u;
label_3fc9c0:
    // 0x3fc9c0: 0x10000022  b           . + 4 + (0x22 << 2)
label_3fc9c4:
    if (ctx->pc == 0x3FC9C4u) {
        ctx->pc = 0x3FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9C0u;
        // 0x3fc9c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9C8u;
        goto label_3fc9c8;
    }
    ctx->pc = 0x3FC9C0u;
    {
        const bool branch_taken_0x3fc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9C0u;
        // 0x3fc9c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc9c0) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FC9C8u;
label_3fc9c8:
    // 0x3fc9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9cc:
    // 0x3fc9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc9d0:
    // 0x3fc9d0: 0xc0ff102  jal         func_3FC408
label_3fc9d4:
    if (ctx->pc == 0x3FC9D4u) {
        ctx->pc = 0x3FC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9D0u;
        // 0x3fc9d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9D8u;
        goto label_3fc9d8;
    }
    ctx->pc = 0x3FC9D0u;
    SET_GPR_U32(ctx, 31, 0x3FC9D8u);
    ctx->pc = 0x3FC9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC9D0u;
    // 0x3fc9d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC408u, 0x3FC9D0u, 0x3FC9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC9D8u;
label_3fc9d8:
    // 0x3fc9d8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3fc9dc:
    if (ctx->pc == 0x3FC9DCu) {
        ctx->pc = 0x3FC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9D8u;
        // 0x3fc9dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9E0u;
        goto label_3fc9e0;
    }
    ctx->pc = 0x3FC9D8u;
    {
        const bool branch_taken_0x3fc9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9D8u;
        // 0x3fc9dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc9d8) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FC9E0u;
label_3fc9e0:
    // 0x3fc9e0: 0xc0ea13a  jal         func_3A84E8
label_3fc9e4:
    if (ctx->pc == 0x3FC9E4u) {
        ctx->pc = 0x3FC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9E0u;
        // 0x3fc9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9E8u;
        goto label_3fc9e8;
    }
    ctx->pc = 0x3FC9E0u;
    SET_GPR_U32(ctx, 31, 0x3FC9E8u);
    ctx->pc = 0x3FC9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC9E0u;
    // 0x3fc9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3FC9E0u, 0x3FC9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC9E8u;
label_3fc9e8:
    // 0x3fc9e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3fc9ec:
    if (ctx->pc == 0x3FC9ECu) {
        ctx->pc = 0x3FC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9E8u;
        // 0x3fc9ec: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9F0u;
        goto label_3fc9f0;
    }
    ctx->pc = 0x3FC9E8u;
    {
        const bool branch_taken_0x3fc9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9E8u;
        // 0x3fc9ec: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc9e8) {
            ctx->pc = 0x3FCA48u;
            return;
        }
    }
    ctx->pc = 0x3FC9F0u;
label_3fc9f0:
    // 0x3fc9f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3fc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fc9f4:
    // 0x3fc9f4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3fc9f8:
    if (ctx->pc == 0x3FC9F8u) {
        ctx->pc = 0x3FC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9F4u;
        // 0x3fc9f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC9FCu;
        goto label_3fc9fc;
    }
    ctx->pc = 0x3FC9F4u;
    {
        const bool branch_taken_0x3fc9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC9F4u;
        // 0x3fc9f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc9f4) {
            ctx->pc = 0x3FCA48u;
            return;
        }
    }
    ctx->pc = 0x3FC9FCu;
label_3fc9fc:
    // 0x3fc9fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fca00:
    // 0x3fca00: 0x10000011  b           . + 4 + (0x11 << 2)
label_3fca04:
    if (ctx->pc == 0x3FCA04u) {
        ctx->pc = 0x3FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA00u;
        // 0x3fca04: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA08u;
        goto label_3fca08;
    }
    ctx->pc = 0x3FCA00u;
    {
        const bool branch_taken_0x3fca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA00u;
        // 0x3fca04: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca00) {
            ctx->pc = 0x3FCA48u;
            return;
        }
    }
    ctx->pc = 0x3FCA08u;
label_3fca08:
    // 0x3fca08: 0xc0ea13a  jal         func_3A84E8
label_3fca0c:
    if (ctx->pc == 0x3FCA0Cu) {
        ctx->pc = 0x3FCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA08u;
        // 0x3fca0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA10u;
        goto label_3fca10;
    }
    ctx->pc = 0x3FCA08u;
    SET_GPR_U32(ctx, 31, 0x3FCA10u);
    ctx->pc = 0x3FCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCA08u;
    // 0x3fca0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3FCA08u, 0x3FCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCA10u;
label_3fca10:
    // 0x3fca10: 0x1000000d  b           . + 4 + (0xD << 2)
label_3fca14:
    if (ctx->pc == 0x3FCA14u) {
        ctx->pc = 0x3FCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA10u;
        // 0x3fca14: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA18u;
        goto label_3fca18;
    }
    ctx->pc = 0x3FCA10u;
    {
        const bool branch_taken_0x3fca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA10u;
        // 0x3fca14: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca10) {
            ctx->pc = 0x3FCA48u;
            return;
        }
    }
    ctx->pc = 0x3FCA18u;
label_3fca18:
    // 0x3fca18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fca1c:
    // 0x3fca1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fca1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fca20:
    // 0x3fca20: 0xc0ff15a  jal         func_3FC568
label_3fca24:
    if (ctx->pc == 0x3FCA24u) {
        ctx->pc = 0x3FCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA20u;
        // 0x3fca24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA28u;
        goto label_3fca28;
    }
    ctx->pc = 0x3FCA20u;
    SET_GPR_U32(ctx, 31, 0x3FCA28u);
    ctx->pc = 0x3FCA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCA20u;
    // 0x3fca24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC568u, 0x3FCA20u, 0x3FCA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCA28u;
label_3fca28:
    // 0x3fca28: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fca2c:
    if (ctx->pc == 0x3FCA2Cu) {
        ctx->pc = 0x3FCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA28u;
        // 0x3fca2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA30u;
        goto label_3fca30;
    }
    ctx->pc = 0x3FCA28u;
    {
        const bool branch_taken_0x3fca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA28u;
        // 0x3fca2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca28) {
            ctx->pc = 0x3FCA4Cu;
            return;
        }
    }
    ctx->pc = 0x3FCA30u;
label_3fca30:
    // 0x3fca30: 0xc0ea146  jal         func_3A8518
label_3fca34:
    if (ctx->pc == 0x3FCA34u) {
        ctx->pc = 0x3FCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA30u;
        // 0x3fca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA38u;
        goto label_3fca38;
    }
    ctx->pc = 0x3FCA30u;
    SET_GPR_U32(ctx, 31, 0x3FCA38u);
    ctx->pc = 0x3FCA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCA30u;
    // 0x3fca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FCA30u, 0x3FCA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCA38u;
label_3fca38:
    // 0x3fca38: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3fca3c:
    // 0x3fca3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fca40:
    // 0x3fca40: 0xc0ff086  jal         func_3FC218
label_3fca44:
    if (ctx->pc == 0x3FCA44u) {
        ctx->pc = 0x3FCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA40u;
        // 0x3fca44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA48u;
        goto label_fallthrough_0x3fca40;
    }
    ctx->pc = 0x3FCA40u;
    SET_GPR_U32(ctx, 31, 0x3FCA48u);
    ctx->pc = 0x3FCA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCA40u;
    // 0x3fca44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC218u, 0x3FCA40u, 0x3FCA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3fca40:
    ctx->pc = 0x3FCA48u;
}
