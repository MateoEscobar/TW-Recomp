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

// Function: sub_00122438
// Address: 0x122438 - 0x1224c0
void sub_00122438_0x122438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122438_0x122438");
#endif

    switch (ctx->pc) {
        case 0x122438u: goto label_122438;
        case 0x12243cu: goto label_12243c;
        case 0x122440u: goto label_122440;
        case 0x122444u: goto label_122444;
        case 0x122448u: goto label_122448;
        case 0x12244cu: goto label_12244c;
        case 0x122450u: goto label_122450;
        case 0x122454u: goto label_122454;
        case 0x122458u: goto label_122458;
        case 0x12245cu: goto label_12245c;
        case 0x122460u: goto label_122460;
        case 0x122464u: goto label_122464;
        case 0x122468u: goto label_122468;
        case 0x12246cu: goto label_12246c;
        case 0x122470u: goto label_122470;
        case 0x122474u: goto label_122474;
        case 0x122478u: goto label_122478;
        case 0x12247cu: goto label_12247c;
        case 0x122480u: goto label_122480;
        case 0x122484u: goto label_122484;
        case 0x122488u: goto label_122488;
        case 0x12248cu: goto label_12248c;
        case 0x122490u: goto label_122490;
        case 0x122494u: goto label_122494;
        case 0x122498u: goto label_122498;
        case 0x12249cu: goto label_12249c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224a4u: goto label_1224a4;
        case 0x1224a8u: goto label_1224a8;
        case 0x1224acu: goto label_1224ac;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224b4u: goto label_1224b4;
        case 0x1224b8u: goto label_1224b8;
        case 0x1224bcu: goto label_1224bc;
        default: break;
    }

    ctx->pc = 0x122438u;

label_122438:
    // 0x122438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_12243c:
    // 0x12243c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_122440:
    // 0x122440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x122440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_122444:
    // 0x122444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122448:
    // 0x122448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12244c:
    // 0x12244c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_122450:
    if (ctx->pc == 0x122450u) {
        ctx->pc = 0x122450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12244Cu;
        // 0x122450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122454u;
        goto label_122454;
    }
    ctx->pc = 0x12244Cu;
    {
        const bool branch_taken_0x12244c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12244Cu;
        // 0x122450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12244c) {
            ctx->pc = 0x1224A8u;
            goto label_1224a8;
        }
    }
    ctx->pc = 0x122454u;
label_122454:
    // 0x122454: 0xc048892  jal         func_122248
label_122458:
    if (ctx->pc == 0x122458u) {
        ctx->pc = 0x12245Cu;
        goto label_12245c;
    }
    ctx->pc = 0x122454u;
    SET_GPR_U32(ctx, 31, 0x12245Cu);
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x122454u, 0x12245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12245Cu;
label_12245c:
    // 0x12245c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_122460:
    if (ctx->pc == 0x122460u) {
        ctx->pc = 0x122460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12245Cu;
        // 0x122460: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122464u;
        goto label_122464;
    }
    ctx->pc = 0x12245Cu;
    {
        const bool branch_taken_0x12245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12245c) {
            ctx->pc = 0x122460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12245Cu;
            // 0x122460: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1224ACu;
            goto label_1224ac;
        }
    }
    ctx->pc = 0x122464u;
label_122464:
    // 0x122464: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122468:
    // 0x122468: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x122468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_12246c:
    // 0x12246c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_122470:
    // 0x122470: 0x40f809  jalr        $v0
label_122474:
    if (ctx->pc == 0x122474u) {
        ctx->pc = 0x122474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122470u;
        // 0x122474: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122478u;
        goto label_122478;
    }
    ctx->pc = 0x122470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122478u);
        ctx->pc = 0x122474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122470u;
        // 0x122474: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122470u, 0x122478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122478u;
label_122478:
    // 0x122478: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x122478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_12247c:
    // 0x12247c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_122480:
    // 0x122480: 0x247091a8  addiu       $s0, $v1, -0x6E58
    ctx->pc = 0x122480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939048));
label_122484:
    // 0x122484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122488:
    // 0x122488: 0xc136bdc  jal         func_4DAF70
label_12248c:
    if (ctx->pc == 0x12248Cu) {
        ctx->pc = 0x12248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122488u;
        // 0x12248c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122490u;
        goto label_122490;
    }
    ctx->pc = 0x122488u;
    SET_GPR_U32(ctx, 31, 0x122490u);
    ctx->pc = 0x12248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122488u;
    // 0x12248c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAF70u, 0x122488u, 0x122490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122490u;
label_122490:
    // 0x122490: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_122494:
    if (ctx->pc == 0x122494u) {
        ctx->pc = 0x122494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122490u;
        // 0x122494: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122498u;
        goto label_122498;
    }
    ctx->pc = 0x122490u;
    {
        const bool branch_taken_0x122490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122490) {
            ctx->pc = 0x122494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122490u;
            // 0x122494: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1224ACu;
            goto label_1224ac;
        }
    }
    ctx->pc = 0x122498u;
label_122498:
    // 0x122498: 0xc136b50  jal         func_4DAD40
label_12249c:
    if (ctx->pc == 0x12249Cu) {
        ctx->pc = 0x12249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122498u;
        // 0x12249c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224A0u;
        goto label_1224a0;
    }
    ctx->pc = 0x122498u;
    SET_GPR_U32(ctx, 31, 0x1224A0u);
    ctx->pc = 0x12249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122498u;
    // 0x12249c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x122498u, 0x1224A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224A0u;
label_1224a0:
    // 0x1224a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1224a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1224a4:
    // 0x1224a4: 0xac62b194  sw          $v0, -0x4E6C($v1)
    ctx->pc = 0x1224a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
label_1224a8:
    // 0x1224a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1224a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1224ac:
    // 0x1224ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1224acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1224b0:
    // 0x1224b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1224b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1224b4:
    // 0x1224b4: 0x3e00008  jr          $ra
label_1224b8:
    if (ctx->pc == 0x1224B8u) {
        ctx->pc = 0x1224B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224B4u;
        // 0x1224b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224BCu;
        goto label_1224bc;
    }
    ctx->pc = 0x1224B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1224B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224B4u;
        // 0x1224b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1224B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1224BCu;
label_1224bc:
    // 0x1224bc: 0x0  nop
    ctx->pc = 0x1224bcu;
    // NOP
    ctx->pc = 0x1224c0u;
}
