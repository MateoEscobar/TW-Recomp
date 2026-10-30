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

// Function: sub_002FE5D8
// Address: 0x2fe5d8 - 0x2fe658
void sub_002FE5D8_0x2fe5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE5D8_0x2fe5d8");
#endif

    switch (ctx->pc) {
        case 0x2fe60cu: goto label_2fe60c;
        case 0x2fe640u: goto label_2fe640;
        case 0x2fe648u: goto label_2fe648;
        default: break;
    }

    ctx->pc = 0x2fe5d8u;

    // 0x2fe5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe5dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fe5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fe5e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fe5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe5e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fe5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fe5e8: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2fe5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2fe5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe5f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fe5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe5fc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2fe5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fe600: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fe600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe604: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2FE604u;
    SET_GPR_U32(ctx, 31, 0x2FE60Cu);
    ctx->pc = 0x2FE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE604u;
    // 0x2fe608: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2FE604u, 0x2FE60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE60Cu;
label_2fe60c:
    // 0x2fe60c: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x2fe60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fe610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe614: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE614u;
    {
        const bool branch_taken_0x2fe614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe614) {
            ctx->pc = 0x2FE640u;
            goto label_2fe640;
        }
    }
    ctx->pc = 0x2FE61Cu;
    // 0x2fe61c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fe61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe620: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2fe620u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2fe624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fe624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe628: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2fe628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2fe62c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fe62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fe630: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2fe630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2fe634: 0xa2030015  sb          $v1, 0x15($s0)
    ctx->pc = 0x2fe634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fe638: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2FE638u;
    SET_GPR_U32(ctx, 31, 0x2FE640u);
    ctx->pc = 0x2FE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE638u;
    // 0x2fe63c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2FE638u, 0x2FE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE640u;
label_2fe640:
    // 0x2fe640: 0xc0bf8ea  jal         func_2FE3A8
    ctx->pc = 0x2FE640u;
    SET_GPR_U32(ctx, 31, 0x2FE648u);
    ctx->pc = 0x2FE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE640u;
    // 0x2fe644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE3A8u, 0x2FE640u, 0x2FE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE648u;
label_2fe648:
    // 0x2fe648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fe648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe650: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE650u;
        // 0x2fe654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE658u;
}
