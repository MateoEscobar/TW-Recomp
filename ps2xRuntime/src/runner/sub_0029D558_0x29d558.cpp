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

// Function: sub_0029D558
// Address: 0x29d558 - 0x29d5f0
void sub_0029D558_0x29d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D558_0x29d558");
#endif

    switch (ctx->pc) {
        case 0x29d578u: goto label_29d578;
        case 0x29d5c4u: goto label_29d5c4;
        default: break;
    }

    ctx->pc = 0x29d558u;

    // 0x29d558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d55c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29d560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d568: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d570: 0xc0e53cc  jal         func_394F30
    ctx->pc = 0x29D570u;
    SET_GPR_U32(ctx, 31, 0x29D578u);
    ctx->pc = 0x29D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D570u;
    // 0x29d574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F30u, 0x29D570u, 0x29D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D578u;
label_29d578:
    // 0x29d578: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29D578u;
    {
        const bool branch_taken_0x29d578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D578u;
        // 0x29d57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d578) {
            ctx->pc = 0x29D5DCu;
            goto label_29d5dc;
        }
    }
    ctx->pc = 0x29D580u;
    // 0x29d580: 0x9202010d  lbu         $v0, 0x10D($s0)
    ctx->pc = 0x29d580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
    // 0x29d584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D584u;
    {
        const bool branch_taken_0x29d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D584u;
        // 0x29d588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d584) {
            ctx->pc = 0x29D598u;
            goto label_29d598;
        }
    }
    ctx->pc = 0x29D58Cu;
    // 0x29d58c: 0x9202010e  lbu         $v0, 0x10E($s0)
    ctx->pc = 0x29d58cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
    // 0x29d590: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D590u;
    {
        const bool branch_taken_0x29d590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d590) {
            ctx->pc = 0x29D59Cu;
            goto label_29d59c;
        }
    }
    ctx->pc = 0x29D598u;
label_29d598:
    // 0x29d598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d59c:
    // 0x29d59c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x29D59Cu;
    {
        const bool branch_taken_0x29d59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d59c) {
            ctx->pc = 0x29D5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D59Cu;
            // 0x29d5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D5DCu;
            goto label_29d5dc;
        }
    }
    ctx->pc = 0x29D5A4u;
    // 0x29d5a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d5a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29d5ac: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29d5b0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29d5b4: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x29d5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x29d5b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29d5bc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29D5BCu;
    SET_GPR_U32(ctx, 31, 0x29D5C4u);
    ctx->pc = 0x29D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5BCu;
    // 0x29d5c0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29D5BCu, 0x29D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5C4u;
label_29d5c4:
    // 0x29d5c4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x29d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d5c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d5cc: 0x0  nop
    ctx->pc = 0x29d5ccu;
    // NOP
    // 0x29d5d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29D5D0u;
    {
        const bool branch_taken_0x29d5d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D0u;
        // 0x29d5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5d0) {
            ctx->pc = 0x29D5DCu;
            goto label_29d5dc;
        }
    }
    ctx->pc = 0x29D5D8u;
    // 0x29d5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d5dc:
    // 0x29d5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29d5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E8u;
        // 0x29d5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D5F0u;
}
