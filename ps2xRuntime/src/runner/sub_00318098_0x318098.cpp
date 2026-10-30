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

// Function: sub_00318098
// Address: 0x318098 - 0x318130
void sub_00318098_0x318098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318098_0x318098");
#endif

    switch (ctx->pc) {
        case 0x3180bcu: goto label_3180bc;
        case 0x3180d4u: goto label_3180d4;
        case 0x318100u: goto label_318100;
        default: break;
    }

    ctx->pc = 0x318098u;

    // 0x318098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31809c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3180a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3180a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3180a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3180a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3180a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3180a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3180ac: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3180ACu;
    {
        const bool branch_taken_0x3180ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3180B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180ACu;
        // 0x3180b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180ac) {
            ctx->pc = 0x31811Cu;
            goto label_31811c;
        }
    }
    ctx->pc = 0x3180B4u;
    // 0x3180b4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3180B4u;
    SET_GPR_U32(ctx, 31, 0x3180BCu);
    ctx->pc = 0x3180B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180B4u;
    // 0x3180b8: 0x84840020  lh          $a0, 0x20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3180B4u, 0x3180BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180BCu;
label_3180bc:
    // 0x3180bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3180bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3180c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3180C4u;
    {
        const bool branch_taken_0x3180c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3180C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180C4u;
        // 0x3180c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180c4) {
            ctx->pc = 0x318120u;
            goto label_318120;
        }
    }
    ctx->pc = 0x3180CCu;
    // 0x3180cc: 0xc05959e  jal         func_165678
    ctx->pc = 0x3180CCu;
    SET_GPR_U32(ctx, 31, 0x3180D4u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3180CCu, 0x3180D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180D4u;
label_3180d4:
    // 0x3180d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3180d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180d8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3180D8u;
    {
        const bool branch_taken_0x3180d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3180DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180D8u;
        // 0x3180dc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180d8) {
            ctx->pc = 0x31811Cu;
            goto label_31811c;
        }
    }
    ctx->pc = 0x3180E0u;
    // 0x3180e0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x3180e4: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x3180e8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x3180e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x3180ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3180ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3180f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3180f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3180f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3180f8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x3180F8u;
    SET_GPR_U32(ctx, 31, 0x318100u);
    ctx->pc = 0x3180FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180F8u;
    // 0x3180fc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3180F8u, 0x318100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318100u;
label_318100:
    // 0x318100: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x318100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x318104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318108: 0x0  nop
    ctx->pc = 0x318108u;
    // NOP
    // 0x31810c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31810cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318110: 0x0  nop
    ctx->pc = 0x318110u;
    // NOP
    // 0x318114: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x318114u;
    {
        const bool branch_taken_0x318114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318114u;
        // 0x318118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318114) {
            ctx->pc = 0x318120u;
            goto label_318120;
        }
    }
    ctx->pc = 0x31811Cu;
label_31811c:
    // 0x31811c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31811cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318120:
    // 0x318120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x318120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318128: 0x3e00008  jr          $ra
    ctx->pc = 0x318128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318128u;
        // 0x31812c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318130u;
}
