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

// Function: sub_0011B350
// Address: 0x11b350 - 0x11b3c0
void sub_0011B350_0x11b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B350_0x11b350");
#endif

    switch (ctx->pc) {
        case 0x11b368u: goto label_11b368;
        default: break;
    }

    ctx->pc = 0x11b350u;

    // 0x11b350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11b358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b360: 0xc043cb2  jal         func_10F2C8
    ctx->pc = 0x11B360u;
    SET_GPR_U32(ctx, 31, 0x11B368u);
    ctx->pc = 0x11B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B360u;
    // 0x11b364: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C8u, 0x11B360u, 0x11B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B368u;
label_11b368:
    // 0x11b368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b36c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B36Cu;
    {
        const bool branch_taken_0x11b36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x11B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B36Cu;
        // 0x11b370: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b36c) {
            ctx->pc = 0x11B37Cu;
            goto label_11b37c;
        }
    }
    ctx->pc = 0x11B374u;
    // 0x11b374: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B374u;
    {
        const bool branch_taken_0x11b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B374u;
        // 0x11b378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b374) {
            ctx->pc = 0x11B3ACu;
            goto label_11b3ac;
        }
    }
    ctx->pc = 0x11B37Cu;
label_11b37c:
    // 0x11b37c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x11b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11b380: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x11b380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x11b384: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x11b384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x11b388: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x11b38c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x11b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b390: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x11b390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b394: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B394u;
    {
        const bool branch_taken_0x11b394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b394) {
            ctx->pc = 0x11B398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B394u;
            // 0x11b398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B3ACu;
            goto label_11b3ac;
        }
    }
    ctx->pc = 0x11B39Cu;
    // 0x11b39c: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x11b39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11b3a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a4: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x11b3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x11b3a8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x11b3a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_11b3ac:
    // 0x11b3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3B4u;
        // 0x11b3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3BCu;
    // 0x11b3bc: 0x0  nop
    ctx->pc = 0x11b3bcu;
    // NOP
    ctx->pc = 0x11b3c0u;
}
