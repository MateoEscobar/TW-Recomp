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

// Function: sub_002DA408
// Address: 0x2da408 - 0x2da4a0
void sub_002DA408_0x2da408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA408_0x2da408");
#endif

    switch (ctx->pc) {
        case 0x2da408u: goto label_2da408;
        case 0x2da40cu: goto label_2da40c;
        case 0x2da410u: goto label_2da410;
        case 0x2da414u: goto label_2da414;
        case 0x2da418u: goto label_2da418;
        case 0x2da41cu: goto label_2da41c;
        case 0x2da420u: goto label_2da420;
        case 0x2da424u: goto label_2da424;
        case 0x2da428u: goto label_2da428;
        case 0x2da42cu: goto label_2da42c;
        case 0x2da430u: goto label_2da430;
        case 0x2da434u: goto label_2da434;
        case 0x2da438u: goto label_2da438;
        case 0x2da43cu: goto label_2da43c;
        case 0x2da440u: goto label_2da440;
        case 0x2da444u: goto label_2da444;
        case 0x2da448u: goto label_2da448;
        case 0x2da44cu: goto label_2da44c;
        case 0x2da450u: goto label_2da450;
        case 0x2da454u: goto label_2da454;
        case 0x2da458u: goto label_2da458;
        case 0x2da45cu: goto label_2da45c;
        case 0x2da460u: goto label_2da460;
        case 0x2da464u: goto label_2da464;
        case 0x2da468u: goto label_2da468;
        case 0x2da46cu: goto label_2da46c;
        case 0x2da470u: goto label_2da470;
        case 0x2da474u: goto label_2da474;
        case 0x2da478u: goto label_2da478;
        case 0x2da47cu: goto label_2da47c;
        case 0x2da480u: goto label_2da480;
        case 0x2da484u: goto label_2da484;
        case 0x2da488u: goto label_2da488;
        case 0x2da48cu: goto label_2da48c;
        case 0x2da490u: goto label_2da490;
        case 0x2da494u: goto label_2da494;
        case 0x2da498u: goto label_2da498;
        case 0x2da49cu: goto label_2da49c;
        default: break;
    }

    ctx->pc = 0x2da408u;

label_2da408:
    // 0x2da408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2da40c:
    // 0x2da40c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2da40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2da410:
    // 0x2da410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da414:
    // 0x2da414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2da414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2da418:
    // 0x2da418: 0xc0e4060  jal         func_390180
label_2da41c:
    if (ctx->pc == 0x2DA41Cu) {
        ctx->pc = 0x2DA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA418u;
        // 0x2da41c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA420u;
        goto label_2da420;
    }
    ctx->pc = 0x2DA418u;
    SET_GPR_U32(ctx, 31, 0x2DA420u);
    ctx->pc = 0x2DA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA418u;
    // 0x2da41c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DA418u, 0x2DA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA420u;
label_2da420:
    // 0x2da420: 0xc105e98  jal         func_417A60
label_2da424:
    if (ctx->pc == 0x2DA424u) {
        ctx->pc = 0x2DA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA420u;
        // 0x2da424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA428u;
        goto label_2da428;
    }
    ctx->pc = 0x2DA420u;
    SET_GPR_U32(ctx, 31, 0x2DA428u);
    ctx->pc = 0x2DA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA420u;
    // 0x2da424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2DA420u, 0x2DA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA428u;
label_2da428:
    // 0x2da428: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2da42c:
    if (ctx->pc == 0x2DA42Cu) {
        ctx->pc = 0x2DA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA428u;
        // 0x2da42c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA430u;
        goto label_2da430;
    }
    ctx->pc = 0x2DA428u;
    {
        const bool branch_taken_0x2da428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da428) {
            ctx->pc = 0x2DA42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA428u;
            // 0x2da42c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA494u;
            goto label_2da494;
        }
    }
    ctx->pc = 0x2DA430u;
label_2da430:
    // 0x2da430: 0xc10587a  jal         func_4161E8
label_2da434:
    if (ctx->pc == 0x2DA434u) {
        ctx->pc = 0x2DA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA430u;
        // 0x2da434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA438u;
        goto label_2da438;
    }
    ctx->pc = 0x2DA430u;
    SET_GPR_U32(ctx, 31, 0x2DA438u);
    ctx->pc = 0x2DA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA430u;
    // 0x2da434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DA430u, 0x2DA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA438u;
label_2da438:
    // 0x2da438: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2da438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2da43c:
    // 0x2da43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2da440:
    // 0x2da440: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x2da440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2da444:
    // 0x2da444: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2da444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2da448:
    // 0x2da448: 0xc60d0030  lwc1        $f13, 0x30($s0)
    ctx->pc = 0x2da448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2da44c:
    // 0x2da44c: 0xc0cddb0  jal         func_3376C0
label_2da450:
    if (ctx->pc == 0x2DA450u) {
        ctx->pc = 0x2DA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA44Cu;
        // 0x2da450: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA454u;
        goto label_2da454;
    }
    ctx->pc = 0x2DA44Cu;
    SET_GPR_U32(ctx, 31, 0x2DA454u);
    ctx->pc = 0x2DA450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA44Cu;
    // 0x2da450: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376C0u, 0x2DA44Cu, 0x2DA454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA454u;
label_2da454:
    // 0x2da454: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2da454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2da458:
    // 0x2da458: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x2da458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_2da45c:
    // 0x2da45c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2da460:
    if (ctx->pc == 0x2DA460u) {
        ctx->pc = 0x2DA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA45Cu;
        // 0x2da460: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA464u;
        goto label_2da464;
    }
    ctx->pc = 0x2DA45Cu;
    {
        const bool branch_taken_0x2da45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA45Cu;
        // 0x2da460: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da45c) {
            ctx->pc = 0x2DA47Cu;
            goto label_2da47c;
        }
    }
    ctx->pc = 0x2DA464u;
label_2da464:
    // 0x2da464: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2da464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2da468:
    // 0x2da468: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2da468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2da46c:
    // 0x2da46c: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2da46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2da470:
    // 0x2da470: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2da470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2da474:
    // 0x2da474: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2da474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2da478:
    // 0x2da478: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2da478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2da47c:
    // 0x2da47c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2da47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2da480:
    // 0x2da480: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2da480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2da484:
    // 0x2da484: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2da484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2da488:
    // 0x2da488: 0x60f809  jalr        $v1
label_2da48c:
    if (ctx->pc == 0x2DA48Cu) {
        ctx->pc = 0x2DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA488u;
        // 0x2da48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA490u;
        goto label_2da490;
    }
    ctx->pc = 0x2DA488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DA490u);
        ctx->pc = 0x2DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA488u;
        // 0x2da48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA488u, 0x2DA490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA490u;
label_2da490:
    // 0x2da490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2da490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da494:
    // 0x2da494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2da494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2da498:
    // 0x2da498: 0x3e00008  jr          $ra
label_2da49c:
    if (ctx->pc == 0x2DA49Cu) {
        ctx->pc = 0x2DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA498u;
        // 0x2da49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA4A0u;
        goto label_fallthrough_0x2da498;
    }
    ctx->pc = 0x2DA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA498u;
        // 0x2da49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2da498:
    ctx->pc = 0x2DA4A0u;
}
